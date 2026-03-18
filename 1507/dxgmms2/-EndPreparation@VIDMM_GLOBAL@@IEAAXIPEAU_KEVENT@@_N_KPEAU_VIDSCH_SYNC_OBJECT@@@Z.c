/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003369C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0033130 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00338EC (-CleanupMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0051F14 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053B6C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00337A8 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     VidSchSignalPagingFences @ 0x1C0044B54 (VidSchSignalPagingFences.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0056C14 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     VidSchWaitForPagingFence @ 0x1C007A020 (VidSchWaitForPagingFence.c)
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
    if ( *(_DWORD *)(*((_QWORD *)this + 4999) + v11 + 8) )
    {
      do
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v10 + *(_DWORD *)(*((_QWORD *)this + 4999) + v11 + 4)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 144LL))(v12);
        ++v10;
      }
      while ( v10 < *(_DWORD *)(*((_QWORD *)this + 4999) + v11 + 8) );
    }
    VIDMM_GLOBAL::EndPreparationOnPhysicalAdapter(this, v6);
  }
  if ( a4 )
  {
    VidSchSignalPagingFences(*(_QWORD *)(*((_QWORD *)this + 2) + 384LL), (unsigned int)&a6, (unsigned int)&a5, a4, -1);
    v13 = *((_DWORD *)this + 1604);
    if ( v13 > 1 )
      VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 384LL), a6, a5, (unsigned int)((1 << v13) - 1));
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
