/*
 * XREFs of ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0057A94
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0035D80 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C004EDF8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D130 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0058E38 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

void __fastcall VIDMM_WORKER_THREAD::SuspendAccessToAllocation(VIDMM_GLOBAL **this, DXGFASTMUTEX **a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _VIDMM_GLOBAL_ALLOC *i; // rbx
  VIDMM_DEVICE **j; // rdi

  DXGFASTMUTEX::Acquire(a2[39]);
  for ( i = a2[36]; i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 36); i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    for ( j = (VIDMM_DEVICE **)*((_QWORD *)i - 2); j != (VIDMM_DEVICE **)((char *)i - 16); j = (VIDMM_DEVICE **)*j )
    {
      if ( (*((_DWORD *)j - 3) & 3) == 2 )
      {
        if ( !*((_QWORD *)*(j - 4) + 21) )
        {
          DXGFASTMUTEX::Release((struct _KTHREAD **)a2[39], v4, v5, v6);
          VIDMM_DEVICE::PartiallySuspend(*(j - 4));
          DXGFASTMUTEX::Acquire(a2[39]);
        }
        VIDMM_GLOBAL::FaultOneAllocation(*this, j - 5);
      }
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[39], v4, v5, v6);
}
