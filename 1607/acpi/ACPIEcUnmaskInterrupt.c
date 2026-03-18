/*
 * XREFs of ACPIEcUnmaskInterrupt @ 0x1C004CAE4
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C0003EB4 (ACPIEcServiceDevice.c)
 *     ACPIEcGpioDpcRoutine @ 0x1C004C810 (ACPIEcGpioDpcRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcUnmaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[61](*(unsigned int *)(a1 + 900), 2LL);
  else
    return ACPIVectorEnable(0LL, *(unsigned int **)(a1 + 72));
}
