/*
 * XREFs of RtlpValidateKeyTrust @ 0x18000DFD8
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x18000DB50 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     ZwQueryKey @ 0x180093A60 (ZwQueryKey.c)
 */

void __fastcall RtlpValidateKeyTrust(__int64 a1, __int16 a2)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  if ( (a2 & 0x100) == 0 && ((int)ZwQueryKey(a1, 8LL, &v2) < 0 || (v2 & 1) == 0) )
    __fastfail(9u);
}
