/*
 * XREFs of ACPIEcUnmaskInterrupt @ 0x1C0039AF4
 * Callers:
 *     ACPIEcGpioDpcRoutine @ 0x1C0039820 (ACPIEcGpioDpcRoutine.c)
 *     ACPIEcServiceDevice @ 0x1C003A3AC (ACPIEcServiceDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIEcUnmaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return HalPrivateDispatchTable[61](*(unsigned int *)(a1 + 900), 2LL);
  else
    return ACPIVectorEnable(0LL, *(_QWORD *)(a1 + 72));
}
