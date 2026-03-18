/*
 * XREFs of ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D130
 * Callers:
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050D60 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0057A94 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00589A0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z @ 0x1C0058A14 (-FaultAllDemotableAllocations@VIDMM_DEVICE@@QEAAXPEAV1@IKIPEAIPEA_KPEA_N@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0070634 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C007126C (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0059238 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00702E8 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FaultOneAllocation(VIDMM_GLOBAL *this, VIDMM_DEVICE **a2)
{
  __int64 v4; // rbx
  VIDMM_DEVICE *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax

  v4 = *(_QWORD *)*a2;
  VIDMM_DEVICE::RemoveCommitment(a2[1], (struct VIDMM_ALLOC *)a2, 0);
  if ( !*(_DWORD *)(v4 + 152) && (**(_DWORD **)(v4 + 472) & 0x40000000) == 0 && !*(_DWORD *)(v4 + 156) )
  {
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v4 + 128), (struct _VIDMM_GLOBAL_ALLOC *)v4, 0LL, 0LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_p((__int64)v5, &EventMarkAllocation, v6, a2);
    v7 = *(_QWORD *)(v4 + 16);
    ++*((_DWORD *)this + 1802);
    *((_QWORD *)this + 902) += v7;
  }
  VIDMM_DEVICE::FaultCommitment(v5, (struct VIDMM_ALLOC *)a2);
}
