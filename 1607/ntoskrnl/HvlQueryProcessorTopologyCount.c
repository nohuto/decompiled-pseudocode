/*
 * XREFs of HvlQueryProcessorTopologyCount @ 0x1401BAF24
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryProcessorTopologyCount(_DWORD *a1, _DWORD *a2)
{
  if ( (HvlpFlags & 2) == 0 )
    return 3221225506LL;
  if ( a1 )
    *a1 = HvlpPackageCount;
  if ( a2 )
    *a2 = HvlpCoreCount;
  return 0LL;
}
