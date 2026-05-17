/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x180052D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x18004EAE0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 *     A_SHAFinal @ 0x18004F360 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18004F4E0 (A_SHAUpdate.c)
 *     RtlUpcaseUnicodeString @ 0x180050AE0 (RtlUpcaseUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateVirtualAccountSid(unsigned __int16 *a1, int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v8; // eax
  bool v9; // cf
  __int64 result; // rax
  int v11; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-59h] BYREF
  _DWORD v13[24]; // [rsp+30h] [rbp-49h] BYREF
  _DWORD v14[6]; // [rsp+90h] [rbp+17h] BYREF

  if ( !a1 || !a4 || (unsigned int)(a2 - 80) > 0x1F )
    return 3221225485LL;
  v8 = RtlLengthRequiredSid(6u);
  v9 = *a4 < v8;
  *a4 = v8;
  if ( v9 )
    return 3221225507LL;
  result = RtlUpcaseUnicodeString((__int64)&UnicodeString, a1, 1);
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
    RtlInitializeSid((__int64)a3, (__int64)&RtlpNtAuthority, 6u);
    v11 = v14[0];
    a3[2] = a2;
    a3[3] = v11;
    a3[4] = v14[1];
    a3[5] = v14[2];
    a3[6] = v14[3];
    a3[7] = v14[4];
    return 0LL;
  }
  return result;
}
