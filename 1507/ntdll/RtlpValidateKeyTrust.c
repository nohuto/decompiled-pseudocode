/*
 * XREFs of RtlpValidateKeyTrust @ 0x18000DFD8
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x18000DB50 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     ZwQueryKey @ 0x180093A60 (ZwQueryKey.c)
 */

void __fastcall RtlpValidateKeyTrust(void *a1, __int16 a2)
{
  char KeyInformation; // [rsp+48h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp+18h] BYREF

  if ( (a2 & 0x100) == 0
    && (ZwQueryKey(a1, KeyTrustInformation, &KeyInformation, 4u, &ResultLength) < 0 || (KeyInformation & 1) == 0) )
  {
    __fastfail(9u);
  }
}
