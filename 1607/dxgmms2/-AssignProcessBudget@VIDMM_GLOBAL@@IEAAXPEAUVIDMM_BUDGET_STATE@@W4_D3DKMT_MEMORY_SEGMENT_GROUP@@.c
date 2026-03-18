/*
 * XREFs of ?AssignProcessBudget@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@_K@Z @ 0x1C009B9CC
 * Callers:
 *     ?AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@W4VIDMM_BUDGET_PRIORITY_BAND@@_K@Z @ 0x1C009B4D8 (-AssignBudgetsWithinBand@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GRO.c)
 *     ?AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@@@Z @ 0x1C009B880 (-AssignMaximumBudgets@VIDMM_GLOBAL@@IEAAXPEAUVIDMM_BUDGET_STATE@@W4_D3DKMT_MEMORY_SEGMENT_GROUP@.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C000F504 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     Template_xxpqhccccc @ 0x1C0020670 (Template_xxpqhccccc.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C0090658 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C009B39C (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVID.c)
 */

void __fastcall VIDMM_GLOBAL::AssignProcessBudget(
        VIDMM_GLOBAL *this,
        struct VIDMM_BUDGET_STATE *a2,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a3,
        struct VIDMM_PROCESS_ADAPTER_INFO *a4,
        unsigned __int64 a5)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rsi
  struct VIDMM_PROCESS_BUDGET_STATE *v11; // rdi
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE ***v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v16; // rcx

  v6 = *((_QWORD *)a4 + 6);
  v7 = a5;
  v8 = 264LL * *((unsigned int *)a2 + 69);
  v9 = a3;
  v11 = (struct VIDMM_PROCESS_BUDGET_STATE *)(v8 + v6);
  v12 = (struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE ***)(v8 + *((_QWORD *)this + 5150));
  v13 = *((_QWORD *)v11 + v9 + 5);
  if ( v13 && a5 >= v13 )
    v7 = *((_QWORD *)v11 + v9 + 5);
  v14 = *((_QWORD *)v11 + v9 + 3);
  if ( v7 >= (unsigned __int64)v12[v9 + 6] )
    v7 = (unsigned __int64)v12[v9 + 6];
  *((_QWORD *)v11 + v9 + 3) = v7;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    Template_xxpqhccccc(*((_QWORD *)a4 + 5), v14, (__int64)a2);
  *((_DWORD *)a4 + 91) = *((_DWORD *)a4 + 90);
  *((_DWORD *)a4 + 89) = *((_DWORD *)a4 + 88);
  if ( !(_DWORD)v9 && VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v11) )
  {
    IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(*((_QWORD *)a4 + 5) + 32LL));
    VIDMM_GLOBAL::AddToPromotionCandidateList(v16, v12, v11, IsHighPriorityProcess);
  }
}
