/*
 * XREFs of _SysCtxRegOpenCurrentUserKey @ 0x140699A24
 * Callers:
 *     _PnpCtxRegOpenCurrentUserKey @ 0x140692874 (_PnpCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     RtlUShortAdd @ 0x14009905C (RtlUShortAdd.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x140150A40 (ZwQueryInformationToken.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlConvertSidToUnicodeString @ 0x1403BD6A8 (RtlConvertSidToUnicodeString.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _SysCtxGetCachedContextBaseKey @ 0x14043C260 (_SysCtxGetCachedContextBaseKey.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x1404AA898 (RtlInitializeSid.c)
 *     _SysCtxOpenEffectiveToken @ 0x1406999DC (_SysCtxOpenEffectiveToken.c)
 */

__int64 __fastcall SysCtxRegOpenCurrentUserKey(_QWORD *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  wchar_t *v5; // rdi
  int appended; // ebx
  PSID v10; // rsi
  unsigned __int16 v11; // bx
  wchar_t *PoolWithTag; // rax
  __int64 v13; // rcx
  USHORT pusResult[2]; // [rsp+30h] [rbp-99h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-95h] BYREF
  int TokenInformation; // [rsp+3Ch] [rbp-8Dh] BYREF
  HANDLE TokenHandle; // [rsp+40h] [rbp-89h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-81h] BYREF
  int v20; // [rsp+4Ch] [rbp-7Dh] BYREF
  UNICODE_STRING Destination; // [rsp+50h] [rbp-79h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-69h] BYREF
  __int64 v23; // [rsp+70h] [rbp-59h] BYREF
  _BYTE Sid[16]; // [rsp+78h] [rbp-51h] BYREF
  PSID Sid2[11]; // [rsp+88h] [rbp-41h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  TokenHandle = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  UnicodeString.Length = 0;
  v5 = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v23 = 0LL;
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  appended = SysCtxOpenEffectiveToken((__int64)a1, &TokenHandle);
  if ( appended < 0 )
    goto LABEL_21;
  TokenInformation = 0;
  appended = ZwQueryInformationToken(TokenHandle, TokenType, &TokenInformation, 4u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_21;
  if ( TokenInformation == 2 )
  {
    v20 = 0;
    appended = ZwQueryInformationToken(TokenHandle, TokenImpersonationLevel, &v20, 4u, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_21;
    if ( v20 < 2 )
    {
      appended = -1073741790;
      goto LABEL_21;
    }
  }
  else if ( TokenInformation != 1 )
  {
    goto LABEL_8;
  }
  appended = ZwQueryInformationToken(TokenHandle, TokenUser, Sid2, 0x54u, &ReturnLength);
  if ( appended < 0 )
    goto LABEL_21;
  v10 = Sid2[0];
  appended = RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  if ( appended < 0 )
    goto LABEL_21;
  *RtlSubAuthoritySid(Sid, 0) = 18;
  if ( RtlEqualSid(Sid, v10) )
  {
LABEL_8:
    appended = -1073741637;
    goto LABEL_21;
  }
  appended = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
  if ( appended >= 0 )
  {
    appended = RtlUShortAdd(UnicodeString.Length, 0x1Eu, pusResult);
    if ( appended >= 0 )
    {
      appended = RtlUShortAdd(pusResult[0], 2u, pusResult);
      if ( appended >= 0 )
      {
        v11 = pusResult[0];
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pusResult[0], 0x52504E50u);
        v5 = PoolWithTag;
        if ( PoolWithTag )
        {
          Destination.Length = 0;
          Destination.MaximumLength = v11;
          Destination.Buffer = PoolWithTag;
          appended = RtlAppendUnicodeStringToString(&Destination, &stru_140244D10);
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
            if ( appended >= 0 )
            {
              appended = SysCtxGetCachedContextBaseKey(a1, 3, &v23);
              if ( appended >= 0 )
                appended = SysCtxRegOpenKey(v13, v23, (__int64)(Destination.Buffer + 15), a2, a3, a4);
            }
          }
        }
        else
        {
          appended = -1073741801;
        }
      }
    }
  }
LABEL_21:
  if ( TokenHandle )
    ZwClose(TokenHandle);
  RtlFreeAnsiString(&UnicodeString);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)appended;
}
