/*
 * XREFs of ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z @ 0x1C0058A14
 * Callers:
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C00570E8 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D130 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0058E38 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::FaultAllDemotableAllocations(
        VIDMM_DEVICE *this,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int64 *a7,
        bool *a8)
{
  _QWORD **v9; // r15
  _QWORD *v10; // rbx
  VIDMM_DEVICE **v11; // rbp
  __int64 v12; // rcx
  unsigned int v13; // eax
  VIDMM_DEVICE *v14; // rax
  unsigned __int64 v15; // rdx

  v9 = (_QWORD **)(*((_QWORD *)this + 5) + 56LL * a3 + 32);
  v10 = *v9;
  while ( v10 != v9 )
  {
    v11 = (VIDMM_DEVICE **)(v10 - 7);
    v10 = (_QWORD *)*v10;
    v12 = *(_QWORD *)*v11;
    if ( (*(_DWORD *)(v12 + 76) & 0x40) != 0 )
    {
      v13 = *(_DWORD *)(v12 + 376);
      if ( v13 > a5 )
      {
        if ( *a6 && *a6 < v13 )
          v13 = *a6;
        *a6 = v13;
      }
      else
      {
        if ( (*((_DWORD *)this + 13) & 3) == 0 )
          VIDMM_DEVICE::PartiallySuspend(this);
        VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)this, v11);
        v14 = *v11;
        *a8 = 1;
        v15 = *(_QWORD *)(*(_QWORD *)v14 + 16LL);
        if ( v15 >= *a7 )
        {
          *a7 = 0LL;
          return;
        }
        *a7 -= v15;
      }
    }
  }
}
