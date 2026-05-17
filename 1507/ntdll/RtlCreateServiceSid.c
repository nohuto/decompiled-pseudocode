/*
 * XREFs of RtlCreateServiceSid @ 0x18004F110
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800BB3F0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     RtlInitializeSid @ 0x18004EAE0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x18004F340 (RtlLengthRequiredSid.c)
 *     A_SHAFinal @ 0x18004F360 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18004F4E0 (A_SHAUpdate.c)
 *     RtlUpcaseUnicodeString @ 0x180050AE0 (RtlUpcaseUnicodeString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateServiceSid(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v6; // eax
  __int64 v7; // r8
  bool v8; // cf
  __int64 result; // rax
  int v10; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v12[64]; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+74h] [rbp+Bh]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  int v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+84h] [rbp+1Bh]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+94h] [rbp+2Bh]
  int v22; // [rsp+98h] [rbp+2Fh]
  int v23; // [rsp+9Ch] [rbp+33h]
  int v24; // [rsp+A0h] [rbp+37h]

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
    v18 = 0;
    v19 = 0;
    v13 = 1732584193;
    v14 = -271733879;
    v15 = -1732584194;
    v16 = 271733878;
    v17 = -1009589776;
    A_SHAUpdate(v12, UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v12);
    RtlFreeAnsiString(&UnicodeString);
    RtlInitializeSid((__int64)a2, (__int64)&RtlpNtAuthority, 6u);
    v10 = v20;
    a2[2] = 80;
    a2[3] = v10;
    a2[4] = v21;
    a2[5] = v22;
    a2[6] = v23;
    a2[7] = v24;
    return 0LL;
  }
  return result;
}
