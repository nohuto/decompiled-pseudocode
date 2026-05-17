/*
 * XREFs of RtlpHpApplySegmentHeapConfigurations @ 0x180089C38
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x180089B84 (RtlSetLowFragHeapGlobalFlags.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A6700 (NtQueryValueKey.c)
 */

NTSTATUS RtlpHpApplySegmentHeapConfigurations()
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp-9h] BYREF
  _BYTE v2[8]; // [rsp+38h] [rbp-1h] BYREF
  int v3; // [rsp+40h] [rbp+7h] BYREF
  __int64 v4; // [rsp+48h] [rbp+Fh]
  void *v5; // [rsp+50h] [rbp+17h]
  int v6; // [rsp+58h] [rbp+1Fh]
  __int128 v7; // [rsp+60h] [rbp+27h]
  _BYTE v8[8]; // [rsp+70h] [rbp+37h] BYREF
  int v9; // [rsp+78h] [rbp+3Fh]
  int v10; // [rsp+7Ch] [rbp+43h]

  Handle = 0LL;
  v4 = 0LL;
  v5 = &unk_1801088B0;
  v3 = 48;
  v6 = 64;
  v7 = 0LL;
  result = NtOpenKey(&Handle, 1LL, &v3);
  if ( result >= 0 )
  {
    result = NtQueryValueKey(Handle, &unk_1801088A0, 2LL, v8, 20, v2);
    if ( result >= 0 && v9 == 4 )
    {
      if ( v10 )
        RtlpLowFragHeapGlobalFlags |= 0x10u;
      else
        RtlpLowFragHeapGlobalFlags |= 8u;
    }
  }
  if ( Handle )
    return NtClose(Handle);
  return result;
}
