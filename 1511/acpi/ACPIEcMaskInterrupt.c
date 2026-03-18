/*
 * XREFs of ACPIEcMaskInterrupt @ 0x1C003A6D0
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C00045B4 (ACPIEcServiceDevice.c)
 *     ACPIEcGpioServiceRoutine @ 0x1C003A460 (ACPIEcGpioServiceRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcMaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[60](*(unsigned int *)(a1 + 900), 1LL);
  else
    return ACPIVectorDisable(0LL, *(_DWORD **)(a1 + 72));
}
