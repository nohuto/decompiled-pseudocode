/*
 * XREFs of ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004E990
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004BB50 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004EF0C (-TryPageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0088DA0 (-EvictForDefragPass@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A740 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007120 (VidSchSignalSyncObjectsFromGpu.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C004FC2C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C009F0B8 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 *     VidSchiResumeFlipQueues @ 0x1C00A02C0 (VidSchiResumeFlipQueues.c)
 *     VidSchWaitForPagingFence @ 0x1C00A1DA4 (VidSchWaitForPagingFence.c)
 */

void __fastcall VIDMM_GLOBAL::EndPreparation(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _KEVENT *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6)
{
  VIDMM_GLOBAL *v8; // rbx
  unsigned int i; // esi
  unsigned int v10; // r15d
  __int64 v11; // rbp
  __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  char v19; // [rsp+A8h] [rbp+20h] BYREF

  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  v8 = this;
  for ( i = 0; i < *((_DWORD *)v8 + 1604); ++i )
  {
    v10 = 0;
    v11 = 456LL * i;
    if ( *(_DWORD *)(*((_QWORD *)v8 + 5017) + v11 + 8) )
    {
      do
      {
        v12 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * (v10 + *(_DWORD *)(*((_QWORD *)v8 + 5017) + v11 + 4)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 144LL))(v12);
        ++v10;
      }
      while ( v10 < *(_DWORD *)(*((_QWORD *)v8 + 5017) + v11 + 8) );
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_p((__int64)this, &EventPagingEndPreparation, (__int64)a3, *((_QWORD *)v8 + i + 143));
    if ( *((_DWORD *)v8 + i + 414) != *((_DWORD *)v8 + i + 478)
      || *((_DWORD *)v8 + i + 542) != *((_DWORD *)v8 + i + 606) )
    {
      VIDMM_GLOBAL::FlushPagingBufferInternal(v8, i, 0, 0LL, 0LL, 0, 0);
    }
    this = (VIDMM_GLOBAL *)*((_QWORD *)v8 + i + 143);
    if ( this )
      *((_DWORD *)this + 43) = *((_DWORD *)this + 42);
  }
  if ( *((_BYTE *)v8 + 41696) )
  {
    v14 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * *((unsigned int *)v8 + 10425));
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v8, *(_DWORD *)(v14 + 372));
    v15 = *(_QWORD *)(v14 + 40);
    v16 = *(_QWORD *)(v14 + 144);
    v18 = 0LL;
    v19 = 0;
    VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
      v16,
      0,
      v15,
      0,
      (__int64)VIDMM_SEGMENT::ResumeDevicesOnAllocationCB,
      v14,
      0LL,
      (__int64)&v18,
      (__int64)&v19);
    if ( *(_BYTE *)(v14 + 465) )
    {
      v17 = *(_QWORD *)(v14 + 8);
      *(_BYTE *)(v14 + 465) = 0;
      VidSchiResumeFlipQueues(*(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(v17 + 16) + 384LL));
    }
    *((_BYTE *)v8 + 41696) = 0;
    *((_DWORD *)v8 + 10425) = -1;
  }
  if ( a4 )
  {
    VidSchSignalSyncObjectsFromGpu(
      *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 384LL) + 56LL),
      *(_QWORD **)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 384LL) + 224LL),
      1u,
      (char *)&a6,
      0,
      &a5);
    v13 = *((_DWORD *)v8 + 1604);
    if ( v13 > 1 )
      VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)v8 + 2) + 384LL), a6, a5, (unsigned int)((1 << v13) - 1));
  }
  else if ( a3 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v8, 0xFFFFFFFF);
    KeSetEvent(a3, 0, 0);
  }
  *((_QWORD *)v8 + 805) = 0LL;
  *((_QWORD *)v8 + 806) = 0LL;
  *((_DWORD *)v8 + 2) = 0;
}
