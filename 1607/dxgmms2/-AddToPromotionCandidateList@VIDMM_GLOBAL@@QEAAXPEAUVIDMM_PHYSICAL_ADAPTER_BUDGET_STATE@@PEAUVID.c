/*
 * XREFs of ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C009B39C
 * Callers:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005CBD4 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C008B3EC (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C009B9CC (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::AddToPromotionCandidateList(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE ***a2,
        struct VIDMM_PROCESS_BUDGET_STATE *a3,
        char a4)
{
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE **v4; // rax
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE **v5; // rax

  if ( !*(_QWORD *)a3 )
  {
    if ( a4 )
    {
      v4 = *a2;
      if ( (*a2)[1] != (struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *)a2 )
        __fastfail(3u);
      *(_QWORD *)a3 = v4;
      *((_QWORD *)a3 + 1) = a2;
      v4[1] = a3;
      *a2 = (struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE **)a3;
    }
    else
    {
      v5 = a2[1];
      if ( *v5 != (struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *)a2 )
        __fastfail(3u);
      *(_QWORD *)a3 = a2;
      *((_QWORD *)a3 + 1) = v5;
      *v5 = a3;
      a2[1] = (struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE **)a3;
    }
  }
}
