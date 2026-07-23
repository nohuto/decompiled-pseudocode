/*
 * XREFs of WdipSemRollBackProviderTable @ 0x1406DF0DC
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x1405AE61C (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x1405525BC (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_14032AB20; ++i )
  {
    result = WdipSemFastFree(2, (_SLIST_ENTRY *)WdipSemProviderTable[i]);
    WdipSemProviderTable[i] = 0LL;
  }
  dword_14032AB20 = a1;
  return result;
}
