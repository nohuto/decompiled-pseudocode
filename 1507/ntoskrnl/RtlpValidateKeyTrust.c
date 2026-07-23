/*
 * XREFs of RtlpValidateKeyTrust @ 0x1404AAE90
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x1404AA8D8 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     ZwQueryKey @ 0x14017F2B0 (ZwQueryKey.c)
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
