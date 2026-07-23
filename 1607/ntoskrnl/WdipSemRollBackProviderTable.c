/*
 * XREFs of WdipSemRollBackProviderTable @ 0x14069BA10
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405655C0 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x1404C70CC (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_1402FFF00; ++i )
  {
    result = WdipSemFastFree(2, (_SLIST_ENTRY *)WdipSemProviderTable[i]);
    WdipSemProviderTable[i] = 0LL;
  }
  dword_1402FFF00 = a1;
  return result;
}
