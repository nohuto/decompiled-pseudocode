/*
 * XREFs of ?CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C005D6B0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005C124 (-CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C005C2C0 (-ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C005C5E8 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C00692F8 (-ReferencePinnedAllocation@VIDMM_DEVICE@@QEAAJPEAUVIDMM_ALLOC@@PEA_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00693CC (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 * Callees:
 *     Template_xxpqhc @ 0x1C001F584 (Template_xxpqhc.c)
 */

void __fastcall VIDMM_PROCESS_ADAPTER_INFO::CommitMemoryUsageChange(
        VIDMM_PROCESS_ADAPTER_INFO *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int i; // ebx
  unsigned int v5; // ebp
  _QWORD *v6; // rsi

  if ( bTracingEnabled )
  {
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 6416LL); ++i )
    {
      v5 = 0;
      v6 = (_QWORD *)(*((_QWORD *)this + 6) + 264LL * i + 136);
      do
      {
        if ( v6[3] != *v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
          Template_xxpqhc(*(_QWORD *)this, &EventVidMmProcessUsageChange, a3);
        ++v5;
        ++v6;
      }
      while ( v5 < 3 );
    }
  }
}
