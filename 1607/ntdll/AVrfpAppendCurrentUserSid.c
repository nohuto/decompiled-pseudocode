/*
 * XREFs of AVrfpAppendCurrentUserSid @ 0x1800D6590
 * Callers:
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800D6488 (AVrfOpenCurrentUserImageFileOptionsKey.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x1800149D0 (RtlConvertSidToUnicodeString.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtOpenProcessTokenEx @ 0x1800A6A20 (NtOpenProcessTokenEx.c)
 */

NTSTATUS __fastcall AVrfpAppendCurrentUserSid(unsigned __int16 *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  HANDLE TokenHandle; // [rsp+38h] [rbp-39h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-31h] BYREF
  ULONG ReturnLength; // [rsp+50h] [rbp-21h] BYREF
  PSID TokenInformation[12]; // [rsp+58h] [rbp-19h] BYREF

  TokenHandle = 0LL;
  result = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    v3 = NtQueryInformationToken(TokenHandle, 1u, TokenInformation, 0x58u, &ReturnLength);
    NtClose(TokenHandle);
    if ( v3 >= 0 )
    {
      v4 = *a1;
      UnicodeString.MaximumLength = a1[1] - v4;
      v5 = *((_QWORD *)a1 + 1);
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)(v5 + 2 * (v4 >> 1));
      result = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
      if ( result >= 0 )
      {
        v6 = UnicodeString.Length + *a1;
        if ( v6 < *a1 )
        {
          *a1 = -1;
          return -1073741789;
        }
        else
        {
          *a1 = v6;
        }
      }
    }
    else
    {
      return v3;
    }
  }
  return result;
}
