/*
 * XREFs of MmSetTrimWhileAgingState @ 0x1400F3DF8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1404D4FE8 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MiSetTrimWhileAgingState @ 0x1400F3E10 (MiSetTrimWhileAgingState.c)
 */

__int64 __fastcall MmSetTrimWhileAgingState(unsigned int a1)
{
  return MiSetTrimWhileAgingState(MiSystemPartition, a1);
}
