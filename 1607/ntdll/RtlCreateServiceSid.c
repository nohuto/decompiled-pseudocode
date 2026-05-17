/*
 * XREFs of RtlCreateServiceSid @ 0x18000B8E0
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF4F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     A_SHAFinal @ 0x18000A350 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18000A4D0 (A_SHAUpdate.c)
 *     RtlLengthRequiredSid @ 0x18000BB10 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x18000D5F0 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x180011E30 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateServiceSid(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v6; // eax
  __int64 v7; // r8
  bool v8; // cf
  __int64 result; // rax
  __int64 v10; // r8
  int v11; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-49h] BYREF
  _DWORD v13[24]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v14[6]; // [rsp+90h] [rbp+27h] BYREF

  if ( !a1 || !a3 )
    return 3221225485LL;
  v6 = RtlLengthRequiredSid(6LL);
  v8 = *a3 < v6;
  *a3 = v6;
  if ( v8 )
    return 3221225507LL;
  LOBYTE(v7) = 1;
  result = RtlUpcaseUnicodeString(&UnicodeString, a1, v7);
  if ( (int)result >= 0 )
  {
    v13[21] = 0;
    v13[22] = 0;
    v13[16] = 1732584193;
    v13[17] = -271733879;
    v13[18] = -1732584194;
    v13[19] = 271733878;
    v13[20] = -1009589776;
    A_SHAUpdate((__int64)v13, (char *)UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v13, (__int64)v14);
    RtlFreeAnsiString(&UnicodeString);
    LOBYTE(v10) = 6;
    RtlInitializeSid(a2, &RtlpNtAuthority, v10);
    v11 = v14[0];
    a2[2] = 80;
    a2[3] = v11;
    a2[4] = v14[1];
    a2[5] = v14[2];
    a2[6] = v14[3];
    a2[7] = v14[4];
    return 0LL;
  }
  return result;
}
