/*
 * XREFs of ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C0090658
 * Callers:
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005CBD4 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C008B3EC (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C009B9CC (-AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(VIDMM_PROCESS_BUDGET_STATE *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 32) || *((_QWORD *)this + 31) )
    return 1;
  if ( *((_QWORD *)this + 28) || *((_QWORD *)this + 29) || *((_QWORD *)this + 30) )
    return *((_QWORD *)this + 25) < *((_QWORD *)this + 3);
  return result;
}
