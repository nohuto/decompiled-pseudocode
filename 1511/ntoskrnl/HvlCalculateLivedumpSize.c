/*
 * XREFs of HvlCalculateLivedumpSize @ 0x1401B4524
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x1403AEDC4 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     HvlCalculateLivedumpBufferSize @ 0x1401B577C (HvlCalculateLivedumpBufferSize.c)
 */

NTSTATUS __fastcall HvlCalculateLivedumpSize(__int64 a1)
{
  NTSTATUS result; // eax
  _QWORD *v2; // r10

  if ( (HvlpRootFlags & 2) == 0 || !qword_1402FCC08 || !HvlpHypervisorStatsPage )
    return -1073741637;
  result = HvlCalculateLivedumpBufferSize(*(_QWORD *)(HvlpHypervisorStatsPage + 24), a1);
  if ( result >= 0 )
  {
    if ( (HvlpFlags & 0x2000) != 0 )
      return HvlLiveDumpQuerySecondaryDataSize(v2);
    else
      *v2 = (unsigned __int64)(unsigned int)dword_1402FCC18 << 12;
  }
  return result;
}
