/*
 * XREFs of ACPIEcUnmaskInterrupt @ 0x1C003A704
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C00045B4 (ACPIEcServiceDevice.c)
 *     ACPIEcGpioDpcRoutine @ 0x1C003A430 (ACPIEcGpioDpcRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcUnmaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[61](*(unsigned int *)(a1 + 900), 2LL);
  else
    return ACPIVectorEnable(0LL, *(_DWORD **)(a1 + 72));
}
