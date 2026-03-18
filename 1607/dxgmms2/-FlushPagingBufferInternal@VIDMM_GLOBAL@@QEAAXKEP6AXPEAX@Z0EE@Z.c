/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80
 * Callers:
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004CAB0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C004D0E0 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C004D610 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004E63C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C004E7E8 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004E990 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C0050818 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005088C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0050F58 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0051250 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051974 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z @ 0x1C0051FEC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C006A12C (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A120 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008B8AC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0098748 (-DefragmentResourcesOverRange@VIDMM_SEGMENT@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0099684 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0001DC4 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007050 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00070B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0007120 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E3F8 (VidSchiInterlockedRemoveEntryList.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C000FE58 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0010D48 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiSetPriorityContext @ 0x1C0010F74 (VidSchiSetPriorityContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0041540 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0042420 (VidSchRegisterCompletionEvent.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0043780 (VidSchiSubmitCommandPacketToQueue.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0046EB0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0048340 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchGetNodeOrdinal @ 0x1C0066FA8 (VidSchGetNodeOrdinal.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        __int64 a3,
        void (*a4)(void *),
        void *a5,
        char a6,
        char a7)
{
  unsigned __int8 v7; // bl
  VIDMM_GLOBAL *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  char v14; // bl
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r9
  unsigned int v23; // esi
  __int64 v24; // rcx
  bool v25; // al
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  bool v29; // zf
  void *v30; // rcx
  unsigned __int64 v31; // xmm0_8
  __int64 v32; // rbx
  __int64 v33; // rcx
  size_t v34; // r8
  __int64 v35; // r9
  unsigned int v36; // ebx
  __int64 *v37; // rax
  __int64 *PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v40; // rax
  unsigned int v41; // r10d
  __int64 v42; // rax
  _QWORD *v43; // rdx
  _QWORD *v44; // rcx
  _QWORD *v45; // rsi
  unsigned int v46; // edx
  _QWORD *v47; // rcx
  _QWORD *v48; // rcx
  __int64 v49; // rdx
  _QWORD *v50; // rax
  VIDMM_GLOBAL **v51; // rdx
  __int64 v52; // rdx
  struct VIDMM_VAD **v53; // rcx
  CVirtualAddressAllocator *v54; // rcx
  VIDMM_DMA_POOL **v55; // rbx
  __int64 v56; // r9
  unsigned int v57; // r8d
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  __int64 v60; // r8
  _QWORD *v61; // rax
  __int64 v62; // rax
  VIDMM_GLOBAL **v63; // r8
  _QWORD *v64; // rax
  __int64 v65; // rax
  size_t v66; // rcx
  __int64 *v67; // rax
  KPRIORITY PriorityThread; // eax
  char v69; // [rsp+40h] [rbp-C0h]
  int Size; // [rsp+44h] [rbp-BCh]
  unsigned int Sizea; // [rsp+44h] [rbp-BCh]
  size_t Size_4; // [rsp+48h] [rbp-B8h]
  size_t Size_4a; // [rsp+48h] [rbp-B8h]
  struct VIDMM_VAD *v74; // [rsp+50h] [rbp-B0h]
  struct VIDMM_VAD *v75; // [rsp+50h] [rbp-B0h]
  struct VIDMM_VAD *v76; // [rsp+50h] [rbp-B0h]
  struct VIDMM_VAD *v77; // [rsp+50h] [rbp-B0h]
  CVirtualAddressAllocator *v78; // [rsp+58h] [rbp-A8h]
  int v79; // [rsp+58h] [rbp-A8h]
  __int64 **v80; // [rsp+58h] [rbp-A8h]
  int v81; // [rsp+60h] [rbp-A0h]
  KSPIN_LOCK *v82; // [rsp+60h] [rbp-A0h]
  unsigned __int64 *v83; // [rsp+60h] [rbp-A0h]
  __int64 v84; // [rsp+68h] [rbp-98h]
  _QWORD *v85; // [rsp+68h] [rbp-98h]
  _QWORD *v86; // [rsp+68h] [rbp-98h]
  __int64 v87; // [rsp+70h] [rbp-90h]
  _DWORD *v88; // [rsp+70h] [rbp-90h]
  __int64 v89; // [rsp+78h] [rbp-88h]
  unsigned __int64 v90; // [rsp+80h] [rbp-80h]
  _QWORD *v91; // [rsp+80h] [rbp-80h]
  struct _VIDMM_DMA_BUFFER *v92[2]; // [rsp+90h] [rbp-70h]
  __int128 v93; // [rsp+A0h] [rbp-60h]
  __int128 v94; // [rsp+B0h] [rbp-50h]
  __int128 v95; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v96; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v97; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v98[24]; // [rsp+F0h] [rbp-10h] BYREF
  VIDMM_GLOBAL *v99; // [rsp+1C0h] [rbp+C0h]
  _QWORD *v100; // [rsp+1C0h] [rbp+C0h]
  _QWORD *v101; // [rsp+1C0h] [rbp+C0h]
  unsigned __int8 v103; // [rsp+1D0h] [rbp+D0h]

  v103 = a3;
  v99 = this;
  v7 = a3;
  v84 = a2;
  v8 = this;
  v9 = a2;
  v10 = 456LL * a2;
  Size_4 = v10;
  v87 = v10 + *((_QWORD *)this + 5017);
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v10, a3, a4);
    v10 = Size_4;
    v11[3] = v7;
    v11[4] = *((unsigned int *)v8 + v9 + 414);
    this = (VIDMM_GLOBAL *)*((unsigned int *)v8 + v9 + 478);
    v11[5] = this;
  }
  v12 = *((unsigned __int8 *)v8 + 40872);
  v13 = (unsigned __int8)v12;
  LOBYTE(v13) = (unsigned __int8)v12 >> 7;
  if ( (v12 & 0x80u) != 0LL && v7 )
    *((_BYTE *)v8 + 40873) |= 1u;
  if ( (*(_BYTE *)(*((_QWORD *)v8 + 5017) + v10 + 420) & 1) != 0
    && *((_QWORD *)v8 + v9 + 143)
    && *((_DWORD *)v8 + 2)
    && (v12 & 0x80u) == 0LL )
  {
    LOBYTE(v12) = v12 | 0x80;
    *((_BYTE *)v8 + 40872) = v12;
    v78 = (CVirtualAddressAllocator *)*((_QWORD *)v8 + v9 + 5044);
    while ( 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        this = (VIDMM_GLOBAL *)(v10 + *((_QWORD *)v8 + 5017) + 440LL);
        if ( *(VIDMM_GLOBAL **)this == this )
          break;
        v76 = *(struct VIDMM_VAD **)this;
        v83 = (unsigned __int64 *)(*(_QWORD *)this - 24LL);
        if ( !VidSchIsMonitoredFenceSignaled(*((_QWORD *)v8 + v9 + 738), v83[5]) )
          break;
        v52 = *(_QWORD *)v76;
        v53 = (struct VIDMM_VAD **)*((_QWORD *)v76 + 1);
        if ( *(struct VIDMM_VAD **)(*(_QWORD *)v76 + 8LL) != v76 || *v53 != v76 )
          __fastfail(3u);
        *v53 = (struct VIDMM_VAD *)v52;
        *(_QWORD *)(v52 + 8) = v53;
        *(_QWORD *)v76 = 0LL;
        *((_QWORD *)v76 + 1) = 0LL;
        if ( VIDMM_GLOBAL::_Config >= 0 )
        {
          v14 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(
            *((CVirtualAddressAllocator **)v8 + v9 + 5044),
            (struct VIDMM_MAPPED_VA_RANGE *)v83,
            0LL,
            1);
        }
        v54 = v78;
        v69 = 0;
        v77 = (struct VIDMM_VAD *)*v83;
        if ( *((struct _KTHREAD **)v78 + 6) != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)v78 + 40));
          v54 = v78;
          v69 = 1;
        }
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(v54, v77, v13);
        v10 = Size_4;
        if ( v69 )
        {
          *((_QWORD *)v78 + 6) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v78 + 40, 0LL);
          KeLeaveCriticalRegion();
          v10 = Size_4;
        }
      }
      if ( !v14 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(v8, a2, 0, 0LL, 0LL, 0, 0);
      v10 = Size_4;
    }
    *((_BYTE *)v8 + 40872) &= ~0x80u;
    v7 = v103;
  }
  if ( *((char *)v8 + 40872) >= 0 )
  {
    if ( a6 && (*((_BYTE *)v8 + 40873) & 1) != 0 )
    {
      v7 = 0;
      v103 = 0;
    }
    *((_BYTE *)v8 + 40873) &= ~1u;
  }
  if ( *((_DWORD *)v8 + v9 + 478) == *((_DWORD *)v8 + v9 + 414)
    && *((_DWORD *)v8 + v9 + 606) == *((_DWORD *)v8 + v9 + 542)
    && !v7 )
  {
    v45 = (_QWORD *)*((_QWORD *)v8 + 471);
    if ( v45 != (_QWORD *)((char *)v8 + 3768) )
    {
      v46 = a2;
      do
      {
        v47 = v45 - 29;
        v45 = (_QWORD *)*v45;
        v100 = v47;
        if ( (*((_DWORD *)v47 + 19) & 0x3F) == v46 )
        {
          v48 = v47 + 29;
          v85 = v48;
          v49 = *v48;
          v50 = (_QWORD *)v48[1];
          if ( *(_QWORD **)(*v48 + 8LL) != v48 || (_QWORD *)*v50 != v48 )
            __fastfail(3u);
          *v50 = v49;
          *(_QWORD *)(v49 + 8) = v50;
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v48, v49, v13, v12) + 24) = v100;
            v48 = v85;
          }
          v51 = (VIDMM_GLOBAL **)*((_QWORD *)v8 + 474);
          if ( *v51 != (VIDMM_GLOBAL *)((char *)v8 + 3784) )
            __fastfail(3u);
          v48[1] = v51;
          *v48 = (char *)v8 + 3784;
          *v51 = (VIDMM_GLOBAL *)v48;
          v46 = a2;
          *((_QWORD *)v8 + 474) = v48;
        }
      }
      while ( v45 != (_QWORD *)((char *)v8 + 3768) );
    }
    return;
  }
  if ( !*((_DWORD *)v8 + 2) )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, v10, v13, v12);
    v64[3] = 270LL;
    v64[4] = 33LL;
    v64[5] = v8;
    v64[6] = 0LL;
    v64[7] = 0LL;
    WdLogEvent5_WdCriticalError(v64);
  }
  v15 = *((_QWORD *)v8 + v9 + 143);
  v16 = (__int64)v8 + 8 * v9 + 1144;
  v81 = *(_DWORD *)(v15 + 172);
  v17 = *(_DWORD *)(v15 + 168);
  *(_DWORD *)(v15 + 172) = v17;
  v79 = v17;
  v18 = *(_QWORD *)(*(_QWORD *)v16 + 56LL);
  if ( v18 )
  {
    v19 = *(_QWORD *)(v18 + 136);
    if ( (*(_DWORD *)(v19 + 56) & 0x1000) != 0 )
    {
      Size = 0;
    }
    else
    {
      Size = *(_DWORD *)(v19 + 16) + 1;
      v16 = (__int64)v8 + 8 * v9 + 1144;
    }
    v20 = *(_QWORD *)(v18 + 144) + *(_QWORD *)(v19 + 24);
  }
  else
  {
    v20 = *(_QWORD *)(*(_QWORD *)v16 + 88LL);
    Size = 0;
  }
  if ( a4 )
  {
    ((void (__fastcall *)(void *, __int64))a4)(a5, v16);
    v16 = (__int64)v8 + 8 * v9 + 1144;
  }
  v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 56LL) + 136LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 56LL))(v21);
  if ( *(_DWORD *)(v87 + 8) )
  {
    v23 = 0;
    do
    {
      v24 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * (v23 + *(_DWORD *)(*((_QWORD *)v8 + 5017) + Size_4 + 4)));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 144LL))(v24);
      ++v23;
    }
    while ( v23 < *(_DWORD *)(v87 + 8) );
    v9 = v84;
  }
  v25 = *((_DWORD *)v8 + v9 + 414) == *((_DWORD *)v8 + v9 + 478)
     && *((_DWORD *)v8 + v9 + 542) == *((_DWORD *)v8 + v9 + 606);
  if ( *((_DWORD *)v8 + v9 + 1155) || !v25 )
  {
    v26 = *(unsigned __int8 *)(*((_QWORD *)v8 + 5017) + Size_4 + 420);
    if ( (v26 & 0x40) != 0 )
    {
      v65 = WdLogNewEntry5_WdWarning(v26);
      *(_QWORD *)(v65 + 24) = v9;
      WdLogEvent5_WdWarning(v65);
    }
    v92[1] = *((struct _VIDMM_DMA_BUFFER **)v8 + v9 + 143);
    LODWORD(v92[0]) = 256;
    _InterlockedIncrement((volatile signed __int32 *)v92[1] + 8);
    DWORD2(v93) = Size;
    HIDWORD(v93) = *((_DWORD *)v8 + v9 + 478);
    LODWORD(v94) = *((_DWORD *)v8 + v9 + 414) - HIDWORD(v93);
    DWORD1(v94) = *((_DWORD *)v8 + v9 + 606);
    DWORD2(v94) = *((_DWORD *)v8 + v9 + 542) - DWORD1(v94);
    HIDWORD(v94) = v81;
    LODWORD(v95) = v79;
    *(_QWORD *)&v93 = v20;
    v27 = *(_QWORD *)(*((_QWORD *)v8 + 3) + 2040LL);
    if ( a7 )
      v28 = *(unsigned int *)(v27 + 48 * v9 + 20);
    else
      v28 = *(unsigned __int16 *)(v27 + 48 * v9 + 2);
    DWORD1(v95) = VidSchGetNodeOrdinal(*(_QWORD *)(*((_QWORD *)v8 + 2) + 384LL), a2, v28);
    BYTE8(v95) = a7 != 0;
    v29 = *((_DWORD *)v8 + v9 + 1155) == 0;
    v97 = *((_QWORD *)v8 + v9 + 738);
    if ( v29 )
    {
      *((_DWORD *)v8 + v9 + 1155) = 1;
      ++*((_QWORD *)v8 + v9 + 610);
    }
    v29 = (*((_BYTE *)v8 + 40872) & 1) == 0;
    v90 = *((_QWORD *)v8 + v9 + 610);
    v96 = v90;
    if ( !v29 )
    {
      if ( *((_QWORD *)v8 + 5115) )
      {
        v74 = (struct VIDMM_VAD *)operator new(0x48uLL, 0x32356956u, PagedPool);
        if ( v74 )
        {
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx((char *)v8 + 40936, 0LL);
          *((_QWORD *)v8 + 5118) = KeGetCurrentThread();
          if ( *((_DWORD *)v8 + 10232) == dword_1C0035314 )
            *((_DWORD *)v8 + 10232) = 0;
          v30 = *(void **)(*((_QWORD *)v8 + 5115) + 24LL * *((unsigned int *)v8 + 10232) + 16);
          if ( v30 )
            operator delete(v30);
          *(_OWORD *)v74 = *(_OWORD *)v92;
          *((_OWORD *)v74 + 1) = v93;
          *((_OWORD *)v74 + 2) = v94;
          v31 = v96;
          *((_OWORD *)v74 + 3) = v95;
          *((_QWORD *)v74 + 8) = v31;
          *((_DWORD *)v74 + 16) = a2;
          *(_QWORD *)(*((_QWORD *)v8 + 5115) + 24LL * *((unsigned int *)v8 + 10232)) = MEMORY[0xFFFFF78000000014];
          *(_QWORD *)(*((_QWORD *)v8 + 5115) + 24LL * *((unsigned int *)v8 + 10232) + 16) = v74;
          *(_DWORD *)(*((_QWORD *)v8 + 5115) + 24LL * (unsigned int)(*((_DWORD *)v8 + 10232))++ + 8) = 8;
          *((_QWORD *)v8 + 5118) = 0LL;
          ExReleasePushLockExclusiveEx((char *)v8 + 40936, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
    v32 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 384LL);
    v89 = v32;
    if ( VidSchIsTDRPending(v32) )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(*((VIDMM_DMA_POOL **)v92[1] + 17), v92[1], 1);
LABEL_57:
      v40 = *(_QWORD *)(*((_QWORD *)v8 + 2) + 384LL);
      if ( a2 == -1 )
      {
        v41 = *(_DWORD *)(v40 + 56);
        if ( a7 )
          v43 = *(_QWORD **)(v40 + 232);
        else
          v43 = *(_QWORD **)(v40 + 224);
      }
      else
      {
        v41 = 1;
        if ( a7 )
          v42 = *(_QWORD *)(v40 + 232);
        else
          v42 = *(_QWORD *)(v40 + 224);
        v43 = (_QWORD *)(v42 + 8 * v9);
      }
      VidSchSignalSyncObjectsFromGpu(v41, v43, 1u, (char *)&v97, 0, &v96);
      *((_QWORD *)v8 + v9 + 674) = v90;
      goto LABEL_62;
    }
    v33 = (unsigned int)VidSchiSchedulerNodeToDriverEngine(v32, DWORD1(v95));
    v34 = *(_QWORD *)(*(_QWORD *)(v32 + 224) + 8 * v33);
    Size_4a = v34;
    if ( a7 )
    {
      v66 = *(_QWORD *)(*(_QWORD *)(v32 + 232) + 8 * v33);
      if ( v66 )
        v34 = v66;
      Size_4a = v34;
    }
    v35 = *(_QWORD *)(*(_QWORD *)(v34 + 96) + 24LL);
    v75 = (struct VIDMM_VAD *)v35;
    v36 = *(_DWORD *)(v35 + 128) * (48 * *(_DWORD *)(v35 + 56) + ((8 * *(_DWORD *)(v35 + 56) + 167) & 0xFFFFFFF8))
        + 8 * (*(_DWORD *)(v35 + 56) + 88);
    Sizea = v36;
    if ( v36 <= 0x370 )
    {
      v36 = 880;
      Sizea = 880;
    }
    v88 = (_DWORD *)(v34 + 728);
    v80 = (__int64 **)(v34 + 712);
    v82 = (KSPIN_LOCK *)(v35 + 1864);
    v37 = VidSchiInterlockedRemoveHeadListIfExist(
            (KSPIN_LOCK *)(v35 + 1864),
            (__int64 **)(v34 + 712),
            (_DWORD *)(v34 + 728));
    if ( v37 )
    {
      PoolWithTag = v37 - 1;
    }
    else
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, v36, 0x68536956u);
      if ( PoolWithTag )
        goto LABEL_53;
      memset(v98, 0, 0xA0uLL);
      LODWORD(v98[4]) |= 0x10u;
      LODWORD(v98[2]) = 1;
      LODWORD(v98[6]) = *(unsigned __int16 *)(*(_QWORD *)(Size_4a + 96) + 4LL);
      VidSchRegisterCompletionEvent((__int64)v75, (__int64)v98);
      do
      {
        v67 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)v75 + 233, v80, v88);
        if ( v67 )
          PoolWithTag = v67 - 1;
        else
          VidSchWaitForCompletionEvent((__int64)v75, (__int64)v98, 19LL);
      }
      while ( !PoolWithTag );
      VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)v75 + 234, v98, 0LL);
      v8 = v99;
      v9 = v84;
    }
    if ( !PoolWithTag )
    {
LABEL_54:
      *(_DWORD *)PoolWithTag = 1953189969;
      *((_DWORD *)PoolWithTag + 12) = 8;
      PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
      PoolWithTag[11] = Size_4a;
      *((_DWORD *)PoolWithTag + 13) = 2;
      CurrentThread = KeGetCurrentThread();
      *(_OWORD *)(PoolWithTag + 33) = *(_OWORD *)v92;
      PoolWithTag[12] = (__int64)CurrentThread;
      *(_OWORD *)(PoolWithTag + 35) = v93;
      PoolWithTag[9] = (__int64)v92[0];
      *(_OWORD *)(PoolWithTag + 37) = v94;
      *(_OWORD *)(PoolWithTag + 39) = v95;
      if ( (*(_DWORD *)(v89 + 2136) & 2) != 0 )
      {
        PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
        VidSchiSetPriorityContext(Size_4a, PriorityThread);
      }
      VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)PoolWithTag);
      goto LABEL_57;
    }
LABEL_53:
    memset(PoolWithTag, 0, Sizea);
    PoolWithTag[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)PoolWithTag + 13) = 1;
    VidSchiInterlockedInsertTailList(v82, Size_4a + 760, PoolWithTag + 1, (_DWORD *)(Size_4a + 776));
    goto LABEL_54;
  }
LABEL_62:
  *((_DWORD *)v8 + v9 + 478) = *((_DWORD *)v8 + v9 + 414);
  *((_DWORD *)v8 + v9 + 606) = *((_DWORD *)v8 + v9 + 542);
  v44 = (_QWORD *)*((_QWORD *)v8 + 471);
  if ( v44 != (_QWORD *)((char *)v8 + 3768) )
  {
    v57 = a2;
    do
    {
      v58 = v44 - 29;
      v44 = (_QWORD *)*v44;
      v101 = v58;
      v91 = v44;
      if ( (*((_DWORD *)v58 + 19) & 0x3F) == v57 )
      {
        v59 = v58 + 29;
        v86 = v59;
        v60 = *v59;
        v61 = (_QWORD *)v59[1];
        if ( *(_QWORD **)(*v59 + 8LL) != v59 || (_QWORD *)*v61 != v59 )
          __fastfail(3u);
        *v61 = v60;
        *(_QWORD *)(v60 + 8) = v61;
        if ( g_IsInternalReleaseOrDbg )
        {
          v62 = WdLogNewEntry5_WdTrace(v44, v59, v60, v22);
          v59 = v86;
          *(_QWORD *)(v62 + 24) = v101;
          v44 = v91;
        }
        v63 = (VIDMM_GLOBAL **)*((_QWORD *)v8 + 474);
        if ( *v63 != (VIDMM_GLOBAL *)((char *)v8 + 3784) )
          __fastfail(3u);
        v59[1] = v63;
        *v59 = (char *)v8 + 3784;
        *v63 = (VIDMM_GLOBAL *)v59;
        v57 = a2;
        *((_QWORD *)v8 + 474) = v59;
      }
    }
    while ( v44 != (_QWORD *)((char *)v8 + 3768) );
  }
  *((_DWORD *)v8 + v9 + 958) = 1;
  *((_DWORD *)v8 + v9 + 1155) = 0;
  if ( v103 )
  {
    v55 = (VIDMM_DMA_POOL **)((char *)v8 + 8 * v9);
    VIDMM_DMA_POOL::ReleaseBuffer(v55[79], v55[143], 1);
    LOBYTE(v56) = 1;
    VIDMM_DMA_POOL::AcquireBuffer(v55[79], v55 + 143, 0LL, v56);
    *((_DWORD *)v55[143] + 8) = 1;
    *((_DWORD *)v8 + v9 + 414) = 0;
    *((_DWORD *)v8 + v9 + 478) = 0;
    *((_DWORD *)v8 + v9 + 542) = 0;
    *((_DWORD *)v8 + v9 + 606) = 0;
  }
  *(_QWORD *)(*((_QWORD *)v8 + 5017) + 432LL) = 0LL;
}
