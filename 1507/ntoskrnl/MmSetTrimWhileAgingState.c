/*
 * XREFs of MmSetTrimWhileAgingState @ 0x140025D5C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MiSetTrimWhileAgingState @ 0x140025D74 (MiSetTrimWhileAgingState.c)
 */

__int64 __fastcall MmSetTrimWhileAgingState(unsigned int a1)
{
  return MiSetTrimWhileAgingState(&MiSystemPartition, a1);
}
