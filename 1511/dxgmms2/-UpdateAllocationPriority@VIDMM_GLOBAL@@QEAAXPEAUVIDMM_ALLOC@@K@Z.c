/*
 * XREFs of ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C007C51C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0010420 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C004222C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C005F6BC (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ @ 0x1C007F3D4 (-CanBePromoted@VIDMM_PROCESS_BUDGET_STATE@@QEAA_NXZ.c)
 *     ?AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVIDMM_PROCESS_BUDGET_STATE@@_N@Z @ 0x1C00860B8 (-AddToPromotionCandidateList@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PHYSICAL_ADAPTER_BUDGET_STATE@@PEAUVID.c)
 */

void __fastcall VIDMM_GLOBAL::UpdateAllocationPriority(VIDMM_GLOBAL *this, __int64 **a2, int a3)
{
  __int64 v4; // rbx
  bool v5; // zf
  unsigned int v6; // ecx
  __int64 PriorityClass; // rdi
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // r11
  __int64 v15; // r12
  _QWORD **v16; // r14
  _QWORD *v17; // rdi
  _DWORD *v18; // rcx
  VIDMM_PROCESS_BUDGET_STATE *v19; // rcx
  char IsHighPriorityProcess; // al
  VIDMM_GLOBAL *v21; // rcx
  struct VIDMM_PROCESS_BUDGET_STATE *v22; // r8
  struct VIDMM_PHYSICAL_ADAPTER_BUDGET_STATE *v23; // r10

  v4 = **a2;
  v5 = *(_DWORD *)(v4 + 120) == 2;
  v6 = *(_DWORD *)(v4 + 376);
  *(_DWORD *)(v4 + 376) = a3;
  if ( v5 && (*(_DWORD *)(*(_QWORD *)(v4 + 128) + 56LL) & 0x1001) != 0 && (*(_DWORD *)(v4 + 76) & 0x400) == 0 )
  {
    PriorityClass = (int)VIDMM_SEGMENT::GetPriorityClass(v6);
    v9 = VIDMM_SEGMENT::GetPriorityClass(v8);
    v10 = v9;
    if ( (_DWORD)PriorityClass != v9 )
    {
      DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v4 + 312));
      v14 = *(_QWORD **)(v4 + 288);
      if ( v14 != (_QWORD *)(v4 + 288) )
      {
        v15 = PriorityClass;
        do
        {
          v16 = (_QWORD **)(v14 - 2);
          v14 = (_QWORD *)*v14;
          v17 = *v16;
          while ( v17 != v16 )
          {
            v18 = v17 - 5;
            v17 = (_QWORD *)*v17;
            if ( (v18[7] & 3) == 2 )
            {
              v19 = (VIDMM_PROCESS_BUDGET_STATE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 8LL)
                                                                                     + 16LL)
                                                                         + 8LL
                                                                         * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                           + 184LL))
                                                             + 48LL)
                                                 + 240LL * (*(_DWORD *)(v4 + 76) & 0x3F));
              *((_QWORD *)v19 + v15 + 25) -= *(_QWORD *)(v4 + 16);
              *((_QWORD *)v19 + v10 + 25) += *(_QWORD *)(v4 + 16);
              if ( VIDMM_PROCESS_BUDGET_STATE::CanBePromoted(v19) )
              {
                IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(*(DXGPROCESS **)(v13 + 32));
                VIDMM_GLOBAL::AddToPromotionCandidateList(v21, v23, v22, IsHighPriorityProcess);
              }
            }
          }
        }
        while ( v14 != (_QWORD *)(v4 + 288) );
      }
      DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v4 + 312), v11, v12, v13);
      VIDMM_GLOBAL::RequestNewBudget(this, 1);
    }
  }
}
