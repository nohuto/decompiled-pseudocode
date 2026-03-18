/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0046760
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0042FD0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00610F4 (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062D50 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007AA08 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C004689C (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00472BC (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     VidSchWaitForPagingFence @ 0x1C008C400 (VidSchWaitForPagingFence.c)
 */

void __fastcall VIDMM_GLOBAL::EndPreparation(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _KEVENT *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6)
{
  unsigned int v6; // edi
  unsigned int v10; // r14d
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned int v13; // ecx

  v6 = 0;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  for ( *((_QWORD *)this + 465) = (char *)this + 3720; v6 < *((_DWORD *)this + 1604); ++v6 )
  {
    v10 = 0;
    v11 = 456LL * v6;
    if ( *(_DWORD *)(*((_QWORD *)this + 5006) + v11 + 8) )
    {
      do
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v10 + *(_DWORD *)(*((_QWORD *)this + 5006) + v11 + 4)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 144LL))(v12);
        ++v10;
      }
      while ( v10 < *(_DWORD *)(*((_QWORD *)this + 5006) + v11 + 8) );
    }
    VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v6);
  }
  if ( a4 )
  {
    VidSchSignalSyncObjectsFromGpu(
      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 52LL),
      *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 200LL),
      1LL,
      (char *)&a6,
      0,
      &a5);
    v13 = *((_DWORD *)this + 1604);
    if ( v13 > 1 )
      VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL), a6, a5, (unsigned int)((1 << v13) - 1));
  }
  else if ( a3 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    KeSetEvent(a3, 0, 0);
  }
  *((_QWORD *)this + 805) = 0LL;
  *((_QWORD *)this + 806) = 0LL;
  *((_DWORD *)this + 2) = 0;
}
