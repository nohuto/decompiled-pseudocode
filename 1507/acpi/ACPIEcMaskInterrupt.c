/*
 * XREFs of ACPIEcMaskInterrupt @ 0x1C0039AC0
 * Callers:
 *     ACPIEcGpioServiceRoutine @ 0x1C0039850 (ACPIEcGpioServiceRoutine.c)
 *     ACPIEcServiceDevice @ 0x1C003A3AC (ACPIEcServiceDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcMaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[60](*(unsigned int *)(a1 + 900), 1LL);
  else
    return ACPIVectorDisable(0LL, *(_QWORD *)(a1 + 72));
}
