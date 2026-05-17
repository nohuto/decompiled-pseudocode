/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x180008FE0
 * Callers:
 *     <none>
 * Callees:
 *     A_SHAFinal @ 0x18000A350 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18000A4D0 (A_SHAUpdate.c)
 *     RtlLengthRequiredSid @ 0x18000BB10 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x18000D5F0 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x180011E30 (RtlUpcaseUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1800427E0 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateVirtualAccountSid(__int64 a1, int a2, _DWORD *a3, unsigned int *a4)
{
  unsigned int v8; // eax
  __int64 v9; // r8
  bool v10; // cf
  __int64 result; // rax
  __int64 v12; // r8
  int v13; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v15[64]; // [rsp+30h] [rbp-49h] BYREF
  int v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+74h] [rbp-5h]
  int v18; // [rsp+78h] [rbp-1h]
  int v19; // [rsp+7Ch] [rbp+3h]
  int v20; // [rsp+80h] [rbp+7h]
  int v21; // [rsp+84h] [rbp+Bh]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+90h] [rbp+17h]
  int v24; // [rsp+94h] [rbp+1Bh]
  int v25; // [rsp+98h] [rbp+1Fh]
  int v26; // [rsp+9Ch] [rbp+23h]
  int v27; // [rsp+A0h] [rbp+27h]

  if ( !a1 || !a4 || (unsigned int)(a2 - 80) > 0x1F )
    return 3221225485LL;
  v8 = RtlLengthRequiredSid(6LL);
  v10 = *a4 < v8;
  *a4 = v8;
  if ( v10 )
    return 3221225507LL;
  LOBYTE(v9) = 1;
  result = RtlUpcaseUnicodeString(&UnicodeString, a1, v9);
  if ( (int)result >= 0 )
  {
    v21 = 0;
    v22 = 0;
    v16 = 1732584193;
    v17 = -271733879;
    v18 = -1732584194;
    v19 = 271733878;
    v20 = -1009589776;
    A_SHAUpdate(v15, UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v15);
    RtlFreeAnsiString(&UnicodeString);
    LOBYTE(v12) = 6;
    RtlInitializeSid(a3, &RtlpNtAuthority, v12);
    v13 = v23;
    a3[2] = a2;
    a3[3] = v13;
    a3[4] = v24;
    a3[5] = v25;
    a3[6] = v26;
    a3[7] = v27;
    return 0LL;
  }
  return result;
}
