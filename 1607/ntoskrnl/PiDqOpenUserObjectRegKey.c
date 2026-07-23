/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x140631E3C
 * Callers:
 *     PiDqOpenObjectRegKey @ 0x140631DB0 (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1403F75D0 (RtlConvertSidToUnicodeString.c)
 *     SeQueryUserSidToken @ 0x1403FEB00 (SeQueryUserSidToken.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _PnpCtxRegCreateTree @ 0x1404DD744 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     PnpConcatPWSTR @ 0x140512884 (PnpConcatPWSTR.c)
 *     _PnpValidateObjectName @ 0x1405649D8 (_PnpValidateObjectName.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140631854 (PiDqGetRelativeObjectRegPath.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        _QWORD *a6,
        int *a7,
        int a8)
{
  PVOID v8; // r15
  PVOID v9; // r14
  PVOID v10; // rdi
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
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
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
  v25 = 0LL;
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
            RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(*(const WCHAR **)v31, v27, (PVOID *)&v25);
            if ( RelativeObjectRegPath < 0 )
            {
              v10 = (PVOID)v25;
            }
            else
            {
              if ( a4 )
              {
                v10 = (PVOID)v25;
                Tree = PnpCtxRegCreateTree(*(__int64 **)&PiPnpRtlCtx);
              }
              else
              {
                v19 = 0LL;
                v24 = 2;
                if ( *(_QWORD *)&PiPnpRtlCtx )
                  v19 = **(_QWORD **)&PiPnpRtlCtx;
                v10 = (PVOID)v25;
                Tree = SysCtxRegOpenKey(v19, (__int64)Handle, v25, 0, a3, (__int64)a6);
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
