/*
 * XREFs of ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060E78
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060D88 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0060F0C (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00624B4 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007F850 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z @ 0x1C007F8C4 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C0085344 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0053060 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0055750 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FaultOneAllocation(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2)
{
  __int64 v4; // rbx
  VIDMM_DEVICE *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax

  v4 = *(_QWORD *)*a2;
  VIDMM_DEVICE::RemoveCommitment(a2[1], (__int64 **)a2, 0);
  if ( !*(_DWORD *)(v4 + 152) && (**(_DWORD **)(v4 + 472) & 0x40000000) == 0 && !*(_DWORD *)(v4 + 156) )
  {
    VIDMM_SEGMENT::MarkResourcesForEviction(
      *(VIDMM_LINEAR_POOL ***)(v4 + 128),
      (struct _VIDMM_POOL_BLOCK **)v4,
      0LL,
      0LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p((__int64)v5, &EventMarkAllocation, v6, a2);
    v7 = *(_QWORD *)(v4 + 16);
    ++*((_DWORD *)this + 1802);
    *((_QWORD *)this + 902) += v7;
  }
  VIDMM_DEVICE::FaultCommitment(v5, (struct VIDMM_ALLOC *)a2);
}
