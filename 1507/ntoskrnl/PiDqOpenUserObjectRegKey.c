/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x140415D2C
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x140415CA0 (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140416040 (PiDqGetRelativeObjectRegPath.c)
 *     PnpConcatPWSTR @ 0x140416C20 (PnpConcatPWSTR.c)
 *     _PnpValidateObjectName @ 0x140416FF0 (_PnpValidateObjectName.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     SeQueryUserSidToken @ 0x140438B84 (SeQueryUserSidToken.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     _PnpCtxRegCreateTree @ 0x1404DE538 (_PnpCtxRegCreateTree.c)
 *     RtlConvertSidToUnicodeString @ 0x1405006DC (RtlConvertSidToUnicodeString.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6,
        int *a7,
        unsigned int a8)
{
  PVOID v8; // r15
  void *v9; // rdi
  NTSTATUS RelativeObjectRegPath; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  bool v12; // zf
  struct _SECURITY_SUBJECT_CONTEXT *v13; // rax
  PACCESS_TOKEN PrimaryToken; // rsi
  NTSTATUS v15; // eax
  __int64 v16; // rcx
  int Tree; // eax
  __int64 v18; // rcx
  char v20; // [rsp+40h] [rbp-C0h]
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  void *v25; // [rsp+58h] [rbp-A8h]
  unsigned int v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  PVOID TokenInformation; // [rsp+80h] [rbp-80h] BYREF
  int v30[2]; // [rsp+88h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  *a6 = 0LL;
  v8 = 0LL;
  *(_QWORD *)v30 = a1;
  TokenInformation = 0LL;
  UnicodeString.Length = 0;
  v9 = 0LL;
  v27 = 0LL;
  Handle = 0LL;
  v25 = 0LL;
  v20 = 0;
  v26 = a2;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  RelativeObjectRegPath = PnpValidateObjectName(0LL, a1, a2, a8);
  if ( RelativeObjectRegPath >= 0 )
  {
    if ( a5 )
    {
      p_SubjectContext = a5;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      p_SubjectContext = &SubjectContext;
      v20 = 1;
    }
    v12 = p_SubjectContext->ClientToken == 0LL;
    v13 = &SubjectContext;
    if ( v12 )
    {
      if ( a5 )
        v13 = a5;
      PrimaryToken = v13->PrimaryToken;
    }
    else
    {
      if ( a5 )
        v13 = a5;
      PrimaryToken = v13->ClientToken;
    }
    v15 = SeQueryInformationToken(PrimaryToken, TokenImpersonationLevel, &TokenInformation);
    v8 = TokenInformation;
    RelativeObjectRegPath = v15;
    if ( v15 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        goto LABEL_35;
      }
      goto LABEL_16;
    }
    if ( v15 == -1073741821 )
    {
LABEL_16:
      SeQueryUserSidToken(PrimaryToken, Sid, 68LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (char)L"\\REGISTRY\\USER\\");
        if ( RelativeObjectRegPath >= 0 )
        {
          LODWORD(v16) = 0;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v16 = **(_QWORD **)&PiPnpRtlCtx;
          RelativeObjectRegPath = SysCtxRegOpenKey(v16, 0, v27, 0, 4, (__int64)&Handle);
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v30[0]);
            if ( RelativeObjectRegPath < 0 )
            {
              v9 = v25;
            }
            else
            {
              if ( a4 )
              {
                v9 = v25;
                Tree = PnpCtxRegCreateTree(
                         PiPnpRtlCtx,
                         (_DWORD)Handle,
                         (_DWORD)v25,
                         0,
                         a3,
                         0LL,
                         (__int64)a6,
                         (__int64)&v23);
              }
              else
              {
                LODWORD(v18) = 0;
                v23 = 2;
                if ( *(_QWORD *)&PiPnpRtlCtx )
                  v18 = **(_QWORD **)&PiPnpRtlCtx;
                v9 = v25;
                Tree = SysCtxRegOpenKey(v18, (_DWORD)Handle, (_DWORD)v25, 0, a3, (__int64)a6);
              }
              RelativeObjectRegPath = Tree;
              if ( Tree >= 0 && a7 )
                *a7 = v23;
            }
          }
        }
      }
    }
  }
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706E50u);
LABEL_35:
  if ( Handle )
    ZwClose(Handle);
  RtlFreeAnsiString(&UnicodeString);
  if ( v20 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)RelativeObjectRegPath;
}
