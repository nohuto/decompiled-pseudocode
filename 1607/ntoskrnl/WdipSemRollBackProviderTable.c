/*
 * XREFs of WdipSemRollBackProviderTable @ 0x14069B92C
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140565080 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x1404E4414 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_1402FFF20; ++i )
  {
    result = WdipSemFastFree(2, (struct _SLIST_ENTRY *)WdipSemProviderTable[i]);
    WdipSemProviderTable[i] = 0LL;
  }
  dword_1402FFF20 = a1;
  return result;
}
