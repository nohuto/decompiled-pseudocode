/*
 * XREFs of RtlpTestHookInitialize @ 0x18002AE10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

__int64 RtlpTestHookInitialize()
{
  unsigned int v1; // eax
  int v2; // r8d
  int v3; // ecx
  HANDLE Handle; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v5[8]; // [rsp+38h] [rbp-1h] BYREF
  int v6; // [rsp+40h] [rbp+7h] BYREF
  __int64 v7; // [rsp+48h] [rbp+Fh]
  void *v8; // [rsp+50h] [rbp+17h]
  int v9; // [rsp+58h] [rbp+1Fh]
  __int128 v10; // [rsp+60h] [rbp+27h]
  __int64 v11; // [rsp+70h] [rbp+37h] BYREF
  __int128 v12; // [rsp+78h] [rbp+3Fh]

  Handle = 0LL;
  v6 = 48;
  v7 = 0LL;
  v11 = 0LL;
  v12 = 0uLL;
  v8 = &unk_180108270;
  v9 = 64;
  v10 = 0LL;
  if ( (int)NtOpenKey(&Handle, 9LL, &v6) >= 0 && (int)NtQueryValueKey(Handle, L" \"", 2LL, &v11, 24, v5) >= 0 )
  {
    v1 = DWORD1(v12);
    RtlpUserPolicies = *(_QWORD *)((char *)&v12 + 4);
    v2 = 1049601;
    if ( BYTE4(v12) > 0x14u || !_bittest(&v2, BYTE4(v12)) )
      LOBYTE(RtlpUserPolicies) = 0;
    if ( BYTE1(RtlpUserPolicies) > 0x14u || (v1 = BYTE1(RtlpUserPolicies), !_bittest(&v2, BYTE1(RtlpUserPolicies))) )
      BYTE1(RtlpUserPolicies) = 0;
    LOBYTE(v1) = BYTE2(RtlpUserPolicies);
    if ( BYTE2(RtlpUserPolicies) > 0x14u || (v3 = 1082401, !_bittest(&v3, v1)) )
      BYTE2(RtlpUserPolicies) = 0;
  }
  if ( Handle )
    NtClose(Handle);
  return 0LL;
}
