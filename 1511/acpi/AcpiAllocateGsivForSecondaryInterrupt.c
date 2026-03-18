/*
 * XREFs of AcpiAllocateGsivForSecondaryInterrupt @ 0x1C007A6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 AcpiAllocateGsivForSecondaryInterrupt()
{
  return ((__int64 (*)(void))HalPrivateDispatchTable[63])();
}
