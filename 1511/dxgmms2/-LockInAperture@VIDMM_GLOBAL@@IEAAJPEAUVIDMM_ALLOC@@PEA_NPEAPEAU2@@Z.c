/*
 * XREFs of ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C007B410
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0043990 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 * Callees:
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0047074 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060D88 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInAperture(VIDMM_GLOBAL ***this, __int64 **a2, bool *a3, struct VIDMM_ALLOC **a4)
{
  __int64 v8; // rdi

  v8 = **a2;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_q((__int64)this, &EventPerformanceWarning, (__int64)a3, 22);
  if ( *(_QWORD *)(v8 + 128) )
  {
    VIDMM_WORKER_THREAD::SuspendAccessToAllocation(*this, (union _LARGE_INTEGER **)v8);
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)this, a2, 0LL);
  }
  return VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (struct VIDMM_ALLOC *)a2, 2, 0, a3, a4);
}
