/*
 * XREFs of ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z @ 0x1C0090C14
 * Callers:
 *     ?DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_N@Z @ 0x1C008F660 (-DemoteAllocationsToFitGlobalAlloc@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004C834 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0069218 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::FaultAllDemotableAllocations(
        VIDMM_DEVICE *this,
        struct VIDMM_DEVICE *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int64 *a7,
        bool *a8)
{
  __int64 v9; // rdi
  _QWORD **v10; // rsi
  _QWORD *v11; // rdi
  VIDMM_DEVICE **v12; // rbp
  __int64 v13; // rcx
  unsigned int v14; // eax
  VIDMM_DEVICE *v15; // rax
  unsigned __int64 v16; // rdx

  v9 = (unsigned int)a3;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v10 = (_QWORD **)(*((_QWORD *)this + 5) + 56 * v9 + 32);
  v11 = *v10;
  while ( v11 != v10 )
  {
    v12 = (VIDMM_DEVICE **)(v11 - 7);
    v11 = (_QWORD *)*v11;
    v13 = *(_QWORD *)*v12;
    if ( (*(_DWORD *)(v13 + 76) & 0x40) != 0 )
    {
      v14 = *(_DWORD *)(v13 + 392);
      if ( v14 > a5 )
      {
        if ( *a6 && *a6 < v14 )
          v14 = *a6;
        *a6 = v14;
      }
      else
      {
        if ( (*((_DWORD *)this + 13) & 7) == 0 )
          VIDMM_DEVICE::PartiallySuspend((__int64 **)this);
        VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)this, v12);
        v15 = *v12;
        *a8 = 1;
        v16 = *(_QWORD *)(*(_QWORD *)v15 + 16LL);
        if ( v16 >= *a7 )
        {
          *a7 = 0LL;
          return;
        }
        *a7 -= v16;
      }
    }
  }
}
