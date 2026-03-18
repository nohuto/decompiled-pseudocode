/*
 * XREFs of ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0049C60
 * Callers:
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0042F20 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0047074 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0061184 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0053060 (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0055750 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyAllocationEviction(
        VIDMM_GLOBAL *this,
        VIDMM_DEVICE **a2,
        bool a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax

  v8 = *(_QWORD *)*a2;
  VIDMM_DEVICE::RemoveCommitment(a2[1], (struct VIDMM_ALLOC *)a2, a3);
  if ( !*(_DWORD *)(v8 + 152)
    && (**(_DWORD **)(v8 + 472) & 0x40000000) == 0
    && !*(_DWORD *)(v8 + 156)
    && (*(_DWORD *)(v8 + 76) & 0x20000000) == 0 )
  {
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v8 + 128), (struct _VIDMM_GLOBAL_ALLOC *)v8, a4, a5);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_p(v9, &EventMarkAllocation, v10, a2);
    }
    v11 = *(_QWORD *)(v8 + 16);
    ++*((_DWORD *)this + 1802);
    *((_QWORD *)this + 902) += v11;
  }
}
