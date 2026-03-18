/*
 * XREFs of ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060D88
 * Callers:
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0041C70 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C007B410 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060E78 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006179C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

void __fastcall VIDMM_WORKER_THREAD::SuspendAccessToAllocation(VIDMM_GLOBAL **this, union _LARGE_INTEGER **a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _VIDMM_GLOBAL_ALLOC *i; // rbx
  _QWORD *j; // rdi

  DXGFASTMUTEX::Acquire(a2[39]);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)a2[36];
        i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 36);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    for ( j = (_QWORD *)*((_QWORD *)i - 2); j != (_QWORD *)((char *)i - 16); j = (_QWORD *)*j )
    {
      if ( (*((_DWORD *)j - 3) & 3) == 2 )
      {
        if ( !*(_QWORD *)(*(j - 4) + 168LL) )
        {
          DXGFASTMUTEX::Release((DXGFASTMUTEX *)a2[39], v4, v5, v6);
          VIDMM_DEVICE::PartiallySuspend((VIDMM_DEVICE *)*(j - 4));
          DXGFASTMUTEX::Acquire(a2[39]);
        }
        VIDMM_GLOBAL::FaultOneAllocation(*this, (struct VIDMM_ALLOC *)(j - 5));
      }
    }
  }
  DXGFASTMUTEX::Release((DXGFASTMUTEX *)a2[39], v4, v5, v6);
}
