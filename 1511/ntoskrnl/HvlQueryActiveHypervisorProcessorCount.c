/*
 * XREFs of HvlQueryActiveHypervisorProcessorCount @ 0x1401AE974
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryActiveHypervisorProcessorCount(_DWORD *a1)
{
  if ( (HvlpFlags & 4) == 0 )
    return 3221225473LL;
  *a1 = HvlpLogicalProcessorCount;
  return 0LL;
}
