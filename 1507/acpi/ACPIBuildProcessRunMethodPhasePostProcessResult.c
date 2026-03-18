/*
 * XREFs of ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C00354B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BB30 (ACPIBuildCompleteMustSucceed.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     PerformDLMObjectBindings @ 0x1C0045554 (PerformDLMObjectBindings.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhasePostProcessResult(__int64 a1)
{
  bool v1; // zf

  v1 = (*(_DWORD *)(a1 + 84) & 0x100) == 0;
  *(_DWORD *)(a1 + 32) = 9;
  if ( !v1 )
  {
    PerformDLMObjectBindings(a1 + 88, **(_QWORD **)(a1 + 56));
    dword_1C005A218 = 0;
    byte_1C005A21C = 0;
    FreeDataBuffs(a1 + 88, 1u);
  }
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}
