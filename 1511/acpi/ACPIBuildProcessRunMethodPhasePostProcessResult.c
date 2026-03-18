/*
 * XREFs of ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0036130
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     PerformDLMObjectBindings @ 0x1C0044F84 (PerformDLMObjectBindings.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhasePostProcessResult(__int64 a1)
{
  bool v1; // zf

  v1 = (*(_DWORD *)(a1 + 84) & 0x100) == 0;
  *(_DWORD *)(a1 + 32) = 9;
  if ( !v1 )
  {
    PerformDLMObjectBindings(a1 + 88, **(_QWORD **)(a1 + 56));
    dword_1C005A228 = 0;
    byte_1C005A22C = 0;
    FreeDataBuffs(a1 + 88, 1u);
  }
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}
