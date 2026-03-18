/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x1404F8E2C
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x140507EBC (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1403BD6A8 (RtlConvertSidToUnicodeString.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegCreateTree @ 0x140444C98 (_PnpCtxRegCreateTree.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     SeQueryUserSidToken @ 0x140479360 (SeQueryUserSidToken.c)
 *     PnpConcatPWSTR @ 0x1404E55A0 (PnpConcatPWSTR.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1404F9140 (PiDqGetRelativeObjectRegPath.c)
 *     _PnpValidateObjectName @ 0x140506324 (_PnpValidateObjectName.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6,
        int *a7,
        unsigned int a8)
{
  PVOID v8; // r15
  PVOID v9; // r14
  void *v10; // rdi
  int RelativeObjectRegPath; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  bool v13; // zf
  struct _SECURITY_SUBJECT_CONTEXT *v14; // rax
  PACCESS_TOKEN PrimaryToken; // rsi
  NTSTATUS v16; // eax
  __int64 v17; // rcx
  int Tree; // eax
  __int64 v19; // rcx
  char v21; // [rsp+40h] [rbp-C0h]
  int v24; // [rsp+48h] [rbp-B8h]
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  void *v26; // [rsp+58h] [rbp-A8h]
  unsigned int v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  PVOID TokenInformation; // [rsp+80h] [rbp-80h] BYREF
  int v31[2]; // [rsp+88h] [rbp-78h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  _BYTE Sid[80]; // [rsp+B0h] [rbp-50h] BYREF

  *a6 = 0LL;
  v8 = 0LL;
  *(_QWORD *)v31 = a1;
  v9 = 0LL;
  TokenInformation = 0LL;
  UnicodeString.Length = 0;
  v10 = 0LL;
  v28 = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  v21 = 0;
  v27 = a2;
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
      v21 = 1;
    }
    v13 = p_SubjectContext->ClientToken == 0LL;
    v14 = &SubjectContext;
    if ( v13 )
    {
      if ( a5 )
        v14 = a5;
      PrimaryToken = v14->PrimaryToken;
    }
    else
    {
      if ( a5 )
        v14 = a5;
      PrimaryToken = v14->ClientToken;
    }
    v16 = SeQueryInformationToken(PrimaryToken, TokenImpersonationLevel, &TokenInformation);
    v8 = TokenInformation;
    RelativeObjectRegPath = v16;
    if ( v16 >= 0 )
    {
      if ( *(int *)TokenInformation < 2 )
      {
        RelativeObjectRegPath = -1073741790;
        goto LABEL_36;
      }
      goto LABEL_16;
    }
    if ( v16 == -1073741821 )
    {
LABEL_16:
      SeQueryUserSidToken((__int64)PrimaryToken, Sid, 0x44u, 0LL);
      RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PnpConcatPWSTR(0x7FFFFFFFuLL, 0x58706E50u, (PVOID *)&v28, 2uLL);
        if ( RelativeObjectRegPath < 0 )
        {
          v9 = (PVOID)v28;
        }
        else
        {
          v17 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v17 = **(_QWORD **)&PiPnpRtlCtx;
          v9 = (PVOID)v28;
          RelativeObjectRegPath = SysCtxRegOpenKey(v17, 0LL, v28, 0, 4u, (__int64)&Handle);
          if ( RelativeObjectRegPath >= 0 )
          {
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(v31[0]);
            if ( RelativeObjectRegPath < 0 )
            {
              v10 = v26;
            }
            else
            {
              if ( a4 )
              {
                v10 = v26;
                Tree = PnpCtxRegCreateTree(*(__int64 **)&PiPnpRtlCtx, (__int64)Handle, (__int64)v26, 0LL, a3, 0LL);
              }
              else
              {
                v19 = 0LL;
                v24 = 2;
                if ( *(_QWORD *)&PiPnpRtlCtx )
                  v19 = **(_QWORD **)&PiPnpRtlCtx;
                v10 = v26;
                Tree = SysCtxRegOpenKey(v19, (__int64)Handle, (__int64)v26, 0, a3, (__int64)a6);
              }
              RelativeObjectRegPath = Tree;
              if ( Tree >= 0 && a7 )
                *a7 = v24;
            }
          }
        }
      }
    }
  }
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
LABEL_36:
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706E50u);
  RtlFreeAnsiString(&UnicodeString);
  if ( v21 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)RelativeObjectRegPath;
}
