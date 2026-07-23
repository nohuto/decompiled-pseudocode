/*
 * XREFs of MmSetTrimWhileAgingState @ 0x1400B3134
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1403EBF18 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MiSetTrimWhileAgingState @ 0x1400B314C (MiSetTrimWhileAgingState.c)
 */

__int64 __fastcall MmSetTrimWhileAgingState(unsigned int a1)
{
  return MiSetTrimWhileAgingState(MiSystemPartition, a1);
}
