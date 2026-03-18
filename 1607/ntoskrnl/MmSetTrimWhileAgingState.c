/*
 * XREFs of MmSetTrimWhileAgingState @ 0x1400B52FC
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1403EA8E8 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MiSetTrimWhileAgingState @ 0x1400B5314 (MiSetTrimWhileAgingState.c)
 */

__int64 __fastcall MmSetTrimWhileAgingState(unsigned int a1)
{
  return MiSetTrimWhileAgingState(MiSystemPartition, a1);
}
