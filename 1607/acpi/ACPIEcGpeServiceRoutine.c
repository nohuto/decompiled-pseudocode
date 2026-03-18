/*
 * XREFs of ACPIEcGpeServiceRoutine @ 0x1C004C7F0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEcCommonDpcHandler @ 0x1C004CA60 (AcpiEcCommonDpcHandler.c)
 */

char __fastcall ACPIEcGpeServiceRoutine(__int64 a1, __int64 a2)
{
  AcpiEcCommonDpcHandler(a2);
  return 1;
}
