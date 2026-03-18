/*
 * XREFs of HUBHSM_AcquiringWdfPowerReferenceOnInterruptFailureAndCheckingIfRootHub @ 0x1C0006EC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_AcquireWdfPowerReference @ 0x1C000AFD8 (HUBFDO_AcquireWdfPowerReference.c)
 */

__int64 __fastcall HUBHSM_AcquiringWdfPowerReferenceOnInterruptFailureAndCheckingIfRootHub(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBFDO_AcquireWdfPowerReference(v1);
  return *(_BYTE *)(v1 + 216) != 0 ? 2041 : 2057;
}
