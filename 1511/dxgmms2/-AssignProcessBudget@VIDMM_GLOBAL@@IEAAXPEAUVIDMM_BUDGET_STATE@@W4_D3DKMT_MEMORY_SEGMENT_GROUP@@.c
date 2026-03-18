/*
 * XREFs of ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C00866D8
 * Callers:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C00861F4 (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GRO.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C008658C (-AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0010420 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C007F3D4 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00860B8 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVID.c)
 */

void __fastcall VIDMM_GLOBAL::AssignProcessBudget(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PROCESS_ADAPTER_INFO *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // r10
  VIDMM_PROCESS_BUDGET_STATE *v8; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v14; // rcx
  struct VIDMM_PROCESS_BUDGET_STATE *v15; // r8
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *v16; // r10

  v5 = *((unsigned int *)a2 + 69);
  v6 = a3;
  v7 = 264 * v5;
  v8 = (VIDMM_PROCESS_BUDGET_STATE *)(*((_QWORD *)a4 + 6) + 240 * v5);
  v9 = *((_QWORD *)v8 + v6 + 5);
  v10 = *((_QWORD *)this + 5111) + v7;
  v11 = a5;
  if ( v9 && a5 >= v9 )
    v11 = *((_QWORD *)v8 + v6 + 5);
  if ( v11 >= *(_QWORD *)(v10 + 8 * v6 + 48) )
    v11 = *(_QWORD *)(v10 + 8 * v6 + 48);
  *((_QWORD *)v8 + v6 + 3) = v11;
  if ( !(_DWORD)v6 && VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v8) )
  {
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(*(_QWORD *)(v12 + 40) + 32LL));
    VIDMM_GLOBAL::AddToPromotionCandidateList(v14, v16, v15, IsHighPriorityProcess);
  }
}
