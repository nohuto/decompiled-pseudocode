/*
 * XREFs of ACPIEcMaskInterrupt @ 0x1C004CAB0
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C0003EB4 (ACPIEcServiceDevice.c)
 *     ACPIEcGpioServiceRoutine @ 0x1C004C840 (ACPIEcGpioServiceRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcMaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[60](*(unsigned int *)(a1 + 900), 1LL);
  else
    return ACPIVectorDisable(0LL, *(unsigned int **)(a1 + 72));
}
