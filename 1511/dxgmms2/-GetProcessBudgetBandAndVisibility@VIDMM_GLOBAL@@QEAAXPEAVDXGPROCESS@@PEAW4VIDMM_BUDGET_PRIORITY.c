/*
 * XREFs of ?GetProcessBudgetBandAndVisibility@VIDMM_GLOBAL@@QEAAXPEAVDXGPROCESS@@PEAW4VIDMM_BUDGET_PRIORITY_BAND@@PEAW4VIDMM_BUDGET_VISIBILITY_STATE@@@Z @ 0x1C0086754
 * Callers:
 *     ?QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEA_K222@Z @ 0x1C007F538 (-QueryVideoMemoryInfo@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@KKW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PE.c)
 *     ?SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z @ 0x1C0086830 (-SetupBudgetState@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::GetProcessBudgetBandAndVisibility(
        VIDMM_GLOBAL *this,
        struct DXGPROCESS *a2,
        enum VIDMM_BUDGET_PRIORITY_BAND *a3,
        enum VIDMM_BUDGET_VISIBILITY_STATE *a4)
{
  int v4; // eax

  if ( *((_BYTE *)a2 + 314) )
  {
    *(_DWORD *)a3 = 0;
LABEL_5:
    *(_DWORD *)a4 = 0;
    return;
  }
  v4 = *((_DWORD *)a2 + 79);
  if ( (v4 & 1) != 0 )
  {
    *(_DWORD *)a3 = 1;
    goto LABEL_5;
  }
  *(_DWORD *)a3 = 2;
  *(_DWORD *)a4 = ((v4 & 2) != 0) + 1;
}
