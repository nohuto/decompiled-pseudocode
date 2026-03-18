/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410
 * Callers:
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0043D9C (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0044320 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0044F20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C00462E4 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0046554 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C004689C (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z @ 0x1C0047E98 (-FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0047F08 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0048744 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0048A3C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0049524 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0062B34 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007C784 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007F60 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0007FC0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchIsTDRPending @ 0x1C000B6A0 (VidSchIsTDRPending.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000F96C (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiSetPriorityContext @ 0x1C0010018 (VidSchiSetPriorityContext.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001182C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchIsMonitoredFenceSignaled @ 0x1C0011958 (VidSchIsMonitoredFenceSignaled.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C00132E0 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0013D98 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0039E40 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchRegisterCompletionEvent @ 0x1C003C834 (VidSchRegisterCompletionEvent.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0040240 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0040FD0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0052B30 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        __int64 a3,
        void (*a4)(void *),
        void *a5,
        char a6)
{
  VIDMM_GLOBAL *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx
  char v9; // r10
  __int64 v10; // rax
  __int64 v11; // rsi
  _QWORD *v12; // rbx
  _QWORD *v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rcx
  _QWORD *v16; // rax
  char v17; // bl
  VIDMM_GLOBAL *i; // rdx
  VIDMM_GLOBAL *v19; // rax
  VIDMM_GLOBAL *v20; // r8
  VIDMM_GLOBAL **v21; // rcx
  VIDMM_GLOBAL **v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rbx
  int v30; // eax
  __int64 v31; // rcx
  VIDMM_DMA_POOL *v32; // rcx
  unsigned int v33; // esi
  __int64 v34; // rcx
  bool v35; // al
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned int v38; // eax
  bool v39; // zf
  unsigned int v40; // ebx
  _OWORD *v41; // rbx
  void *v42; // rcx
  VIDMM_DMA_POOL *v43; // rcx
  unsigned int v44; // eax
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // ebx
  __int64 *v49; // rax
  __int64 *v50; // rbx
  __int64 *v51; // rax
  unsigned int *v52; // rcx
  unsigned int v53; // eax
  KPRIORITY PriorityThread; // eax
  __int64 v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rdx
  VIDMM_GLOBAL *j; // rdx
  VIDMM_GLOBAL *v59; // rax
  VIDMM_GLOBAL *v60; // r8
  VIDMM_GLOBAL **v61; // rcx
  VIDMM_GLOBAL **v62; // r8
  struct _VIDMM_DMA_BUFFER **v63; // rbx
  unsigned __int8 v64; // r8
  char v65; // [rsp+30h] [rbp-D0h]
  __int64 v66; // [rsp+38h] [rbp-C8h]
  __int64 *PoolWithTag; // [rsp+38h] [rbp-C8h]
  struct VIDMM_MAPPED_VA_RANGE *Size; // [rsp+40h] [rbp-C0h]
  struct VIDMM_VAD *Sizea; // [rsp+40h] [rbp-C0h]
  int Sizeb; // [rsp+40h] [rbp-C0h]
  unsigned int Sizec; // [rsp+40h] [rbp-C0h]
  CVirtualAddressAllocator **v72; // [rsp+48h] [rbp-B8h]
  __int64 v73; // [rsp+48h] [rbp-B8h]
  unsigned int v74; // [rsp+50h] [rbp-B0h]
  int v75; // [rsp+58h] [rbp-A8h]
  __int64 v76; // [rsp+58h] [rbp-A8h]
  _QWORD *v77; // [rsp+60h] [rbp-A0h]
  int v78; // [rsp+68h] [rbp-98h]
  __int64 **v79; // [rsp+68h] [rbp-98h]
  __int64 v80; // [rsp+70h] [rbp-90h]
  __int64 v81; // [rsp+78h] [rbp-88h]
  _DWORD *v82; // [rsp+78h] [rbp-88h]
  struct _VIDMM_DMA_BUFFER *v83[2]; // [rsp+80h] [rbp-80h]
  __int128 v84; // [rsp+90h] [rbp-70h]
  __int128 v85; // [rsp+A0h] [rbp-60h]
  __int128 v86; // [rsp+B0h] [rbp-50h]
  KSPIN_LOCK *v87; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v88; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v89; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v90[3]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v91[22]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = this;
  v7 = a2;
  v8 = 456LL * a2;
  v9 = *((_BYTE *)v6 + 40608);
  v10 = v8 + *((_QWORD *)v6 + 5006);
  v74 = a3;
  v80 = a2;
  v66 = v8;
  v81 = v10;
  if ( v9 < 0 && (_BYTE)a3 )
    *((_BYTE *)v6 + 40609) |= 1u;
  if ( (*(_BYTE *)(v10 + 420) & 1) != 0 && *((_QWORD *)v6 + a2 + 143) && *((_DWORD *)v6 + 2) && v9 >= 0 )
  {
    *((_BYTE *)v6 + 40608) = v9 | 0x80;
    v11 = *((_QWORD *)v6 + a2 + 5011);
    v72 = (CVirtualAddressAllocator **)((char *)v6 + 8 * a2 + 40088);
    while ( 1 )
    {
      v65 = 0;
      while ( 1 )
      {
        v12 = (_QWORD *)(v8 + *((_QWORD *)v6 + 5006) + 440LL);
        if ( (_QWORD *)*v12 == v12 )
          break;
        v13 = (_QWORD *)*v12;
        Size = (struct VIDMM_MAPPED_VA_RANGE *)(v13 - 3);
        if ( !VidSchIsMonitoredFenceSignaled(*((_QWORD *)v6 + v80 + 738), v13[2]) )
          break;
        v15 = *v13;
        v16 = (_QWORD *)v13[1];
        if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v16 != v13 )
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        *v13 = 0LL;
        v13[1] = 0LL;
        if ( (dword_1C002F104 & 0x80u) == 0 )
        {
          v65 = 1;
          CVirtualAddressAllocator::UncommitVirtualAddressRange(*v72, Size, 0LL, 1);
        }
        v17 = 0;
        Sizea = *(struct VIDMM_VAD **)Size;
        if ( *(struct _KTHREAD **)(v11 + 48) != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v11 + 40));
          v17 = 1;
        }
        CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((struct _RTL_BALANCED_NODE **)v11, Sizea, v14);
        v8 = v66;
        if ( v17 )
        {
          *(_QWORD *)(v11 + 48) = 0LL;
          ExReleasePushLockExclusiveEx(v11 + 40, 0LL);
          KeLeaveCriticalRegion();
          v8 = v66;
        }
      }
      if ( !v65 )
        break;
      VIDMM_GLOBAL::FlushPagingBufferInternal(v6, a2, 0, 0LL, 0LL, 0);
      v8 = v66;
    }
    *((_BYTE *)v6 + 40608) &= ~0x80u;
    v7 = v80;
    a3 = v74;
  }
  if ( *((char *)v6 + 40608) >= 0 )
  {
    if ( a6 )
    {
      a3 = (unsigned __int8)a3;
      if ( (*((_BYTE *)v6 + 40609) & 1) != 0 )
        a3 = 0LL;
      LOBYTE(v74) = a3;
    }
    *((_BYTE *)v6 + 40609) &= ~1u;
  }
  if ( *((_DWORD *)v6 + v7 + 478) == *((_DWORD *)v6 + v7 + 414)
    && *((_DWORD *)v6 + v7 + 606) == *((_DWORD *)v6 + v7 + 542)
    && !(_BYTE)a3 )
  {
    for ( i = (VIDMM_GLOBAL *)*((_QWORD *)v6 + 471); i != (VIDMM_GLOBAL *)((char *)v6 + 3768); *((_QWORD *)v6 + 474) = v19 )
    {
      v19 = i;
      i = *(VIDMM_GLOBAL **)i;
      v20 = *(VIDMM_GLOBAL **)v19;
      v21 = (VIDMM_GLOBAL **)*((_QWORD *)v19 + 1);
      if ( *(VIDMM_GLOBAL **)(*(_QWORD *)v19 + 8LL) != v19 || *v21 != v19 )
        __fastfail(3u);
      *v21 = v20;
      *((_QWORD *)v20 + 1) = v21;
      v22 = (VIDMM_GLOBAL **)*((_QWORD *)v6 + 474);
      *(_QWORD *)v19 = (char *)v6 + 3784;
      *((_QWORD *)v19 + 1) = v22;
      if ( *v22 != (VIDMM_GLOBAL *)((char *)v6 + 3784) )
        __fastfail(3u);
      *v22 = v19;
    }
    return;
  }
  if ( !*((_DWORD *)v6 + 2) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, 0LL, a3, a4);
    v23[3] = 270LL;
    v23[4] = 33LL;
    v23[5] = v6;
    v23[6] = 0LL;
    v23[7] = 0LL;
    WdLogEvent5_WdCriticalError(v23);
  }
  v24 = *((_QWORD *)v6 + v7 + 143);
  v25 = (__int64)v6 + 8 * v7 + 1144;
  v75 = *(_DWORD *)(v24 + 172);
  v26 = *(_DWORD *)(v24 + 168);
  *(_DWORD *)(v24 + 172) = v26;
  Sizeb = v26;
  v27 = *(_QWORD *)(*(_QWORD *)v25 + 56LL);
  if ( v27 )
  {
    v28 = *(_QWORD *)(v27 + 128);
    if ( (*(_DWORD *)(v28 + 56) & 0x1000) != 0 )
    {
      v29 = *(_QWORD *)(v27 + 136) + *(_QWORD *)(v28 + 24);
      v78 = 0;
    }
    else
    {
      v30 = *(_DWORD *)(v28 + 16);
      v29 = *(_QWORD *)(v27 + 136) + *(_QWORD *)(v28 + 24);
      v78 = v30 + 1;
    }
  }
  else
  {
    v29 = *(_QWORD *)(*(_QWORD *)v25 + 88LL);
    v78 = 0;
  }
  if ( a4 )
  {
    ((void (__fastcall *)(void *))a4)(a5);
    v25 = (__int64)v6 + 8 * v7 + 1144;
  }
  v31 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 56LL) + 128LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 56LL))(v31);
  if ( *(_DWORD *)(v81 + 8) )
  {
    v33 = 0;
    do
    {
      v34 = *(_QWORD *)(*((_QWORD *)v6 + 464) + 8LL * (v33 + *(_DWORD *)(v66 + *((_QWORD *)v6 + 5006) + 4)));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 144LL))(v34);
      ++v33;
    }
    while ( v33 < *(_DWORD *)(v81 + 8) );
    v7 = v80;
  }
  v35 = *((_DWORD *)v6 + v7 + 414) == *((_DWORD *)v6 + v7 + 478)
     && *((_DWORD *)v6 + v7 + 542) == *((_DWORD *)v6 + v7 + 606);
  if ( *((_DWORD *)v6 + v7 + 1155) || !v35 )
  {
    v36 = *(unsigned __int8 *)(v66 + *((_QWORD *)v6 + 5006) + 420);
    if ( (v36 & 0x40) != 0 )
    {
      v37 = WdLogNewEntry5_WdWarning(v36);
      *(_QWORD *)(v37 + 24) = v7;
      WdLogEvent5_WdWarning(v37);
    }
    v83[1] = *((struct _VIDMM_DMA_BUFFER **)v6 + v7 + 143);
    LODWORD(v83[0]) = 256;
    _InterlockedIncrement((volatile signed __int32 *)v83[1] + 8);
    DWORD2(v84) = v78;
    HIDWORD(v84) = *((_DWORD *)v6 + v7 + 478);
    LODWORD(v85) = *((_DWORD *)v6 + v7 + 414) - HIDWORD(v84);
    DWORD1(v85) = *((_DWORD *)v6 + v7 + 606);
    DWORD2(v85) = *((_DWORD *)v6 + v7 + 542) - DWORD1(v85);
    HIDWORD(v85) = v75;
    LODWORD(v86) = Sizeb;
    *(_QWORD *)&v84 = v29;
    v38 = VidSchiDriverNodeEngineToSchedulerNode(
            *(_QWORD *)(*((_QWORD *)v6 + 2) + 408LL),
            *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)v6 + 3) + 1904LL) + 48 * v7 + 2),
            a2);
    v39 = *((_DWORD *)v6 + v7 + 1155) == 0;
    v40 = v38;
    v90[0] = *((_QWORD *)v6 + v7 + 738);
    DWORD1(v86) = v38;
    if ( v39 )
    {
      *((_DWORD *)v6 + v7 + 1155) = 1;
      ++*((_QWORD *)v6 + v7 + 610);
    }
    v39 = (*((_BYTE *)v6 + 40608) & 1) == 0;
    v88 = *((_QWORD *)v6 + v7 + 610);
    v89 = v88;
    if ( !v39 && *((_QWORD *)v6 + 5082) )
    {
      v41 = operator new(0x40uLL, 0x32356956u, PagedPool);
      if ( v41 )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)v6 + 40672, 0LL);
        *((_QWORD *)v6 + 5085) = KeGetCurrentThread();
        if ( *((_DWORD *)v6 + 10166) == dword_1C002F304 )
          *((_DWORD *)v6 + 10166) = 0;
        v42 = *(void **)(*((_QWORD *)v6 + 5082) + 24LL * *((unsigned int *)v6 + 10166) + 16);
        if ( v42 )
          operator delete(v42);
        *v41 = *(_OWORD *)v83;
        v41[1] = v84;
        v41[2] = v85;
        v41[3] = v86;
        *((_DWORD *)v41 + 14) = a2;
        *(_QWORD *)(*((_QWORD *)v6 + 5082) + 24LL * *((unsigned int *)v6 + 10166)) = MEMORY[0xFFFFF78000000014];
        *(_QWORD *)(*((_QWORD *)v6 + 5082) + 24LL * *((unsigned int *)v6 + 10166) + 16) = v41;
        *(_DWORD *)(*((_QWORD *)v6 + 5082) + 24LL * (unsigned int)(*((_DWORD *)v6 + 10166))++ + 8) = 8;
        *((_QWORD *)v6 + 5085) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v6 + 40672, 0LL);
        KeLeaveCriticalRegion();
      }
      v40 = DWORD1(v86);
    }
    v73 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 408LL);
    if ( VidSchIsTDRPending(v73) )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(v43, v83[1], 1);
LABEL_92:
      v55 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 408LL);
      if ( a2 == -1 )
      {
        v56 = *(unsigned int *)(v55 + 52);
        v57 = *(_QWORD **)(v55 + 200);
      }
      else
      {
        v56 = 1LL;
        v57 = (_QWORD *)(*(_QWORD *)(v55 + 200) + 8 * v7);
      }
      VidSchSignalSyncObjectsFromGpu(v56, v57, 1LL, (char *)v90, 0, &v89);
      *((_QWORD *)v6 + v7 + 674) = v88;
      goto LABEL_96;
    }
    v44 = VidSchiSchedulerNodeToDriverEngine(v73, v40);
    v46 = *(_QWORD *)(*(_QWORD *)(v45 + 200) + 8LL * v44);
    v76 = v46;
    v82 = (_DWORD *)(v46 + 728);
    v47 = *(_QWORD *)(*(_QWORD *)(v46 + 96) + 24LL);
    v77 = (_QWORD *)v47;
    v48 = *(_DWORD *)(v47 + 52) * ((*(_DWORD *)(v47 + 124) << 6) + 8) + 632;
    if ( v48 <= 0x320 )
      v48 = 800;
    Sizec = v48;
    v79 = (__int64 **)(v46 + 712);
    v87 = (KSPIN_LOCK *)(v47 + 1832);
    v49 = VidSchiInterlockedRemoveHeadListIfExist(
            (KSPIN_LOCK *)(v47 + 1832),
            (__int64 **)(v46 + 712),
            (_DWORD *)(v46 + 728));
    if ( v49 )
    {
      v50 = v49 - 1;
      PoolWithTag = v49 - 1;
    }
    else
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)512, v48, 0x68536956u);
      v50 = PoolWithTag;
      if ( PoolWithTag )
        goto LABEL_87;
      memset(v91, 0, 0xA0uLL);
      LODWORD(v91[4]) |= 0x10u;
      LODWORD(v91[2]) = 1;
      LODWORD(v91[6]) = *(unsigned __int16 *)(*(_QWORD *)(v76 + 96) + 4LL);
      VidSchRegisterCompletionEvent((__int64)v77, (__int64)v91);
      do
      {
        v51 = VidSchiInterlockedRemoveHeadListIfExist(v77 + 229, v79, v82);
        if ( v51 )
          v50 = v51 - 1;
        else
          VidSchWaitForCompletionEvent((__int64)v77, (__int64)v91, 19LL);
      }
      while ( !v50 );
      PoolWithTag = v50;
      VidSchiInterlockedRemoveEntryList(v77 + 230, v91, 0LL);
      v6 = this;
      v7 = v80;
    }
    if ( !v50 )
    {
LABEL_89:
      *(_DWORD *)v50 = 1953189969;
      *((_DWORD *)v50 + 12) = 8;
      v50[7] = MEMORY[0xFFFFF78000000320];
      v50[10] = v76;
      *((_DWORD *)v50 + 13) = 2;
      v50[11] = (__int64)KeGetCurrentThread();
      *((_OWORD *)v50 + 16) = *(_OWORD *)v83;
      *((_DWORD *)v50 + 18) = 256;
      *((_OWORD *)v50 + 17) = v84;
      *((_OWORD *)v50 + 18) = v85;
      v50[38] = v86;
      if ( (*(_DWORD *)(v73 + 2096) & 2) != 0 )
      {
        PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
        VidSchiSetPriorityContext(v76, PriorityThread);
      }
      VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)v50);
      goto LABEL_92;
    }
LABEL_87:
    memset(v50, 0, Sizec);
    v50[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v50 + 13) = 1;
    VidSchiInterlockedInsertTailList(v87, v76 + 736, PoolWithTag + 1, (_DWORD *)(v76 + 752));
    v52 = *(unsigned int **)(v77[2] + 3152LL);
    v53 = *(_DWORD *)(v76 + 752);
    v50 = PoolWithTag;
    if ( *v52 < v53 )
      *v52 = v53;
    goto LABEL_89;
  }
LABEL_96:
  *((_DWORD *)v6 + v7 + 478) = *((_DWORD *)v6 + v7 + 414);
  *((_DWORD *)v6 + v7 + 606) = *((_DWORD *)v6 + v7 + 542);
  for ( j = (VIDMM_GLOBAL *)*((_QWORD *)v6 + 471); j != (VIDMM_GLOBAL *)((char *)v6 + 3768); *((_QWORD *)v6 + 474) = v59 )
  {
    v59 = j;
    j = *(VIDMM_GLOBAL **)j;
    v60 = *(VIDMM_GLOBAL **)v59;
    v61 = (VIDMM_GLOBAL **)*((_QWORD *)v59 + 1);
    if ( *(VIDMM_GLOBAL **)(*(_QWORD *)v59 + 8LL) != v59 || *v61 != v59 )
      __fastfail(3u);
    *v61 = v60;
    *((_QWORD *)v60 + 1) = v61;
    v32 = (VIDMM_GLOBAL *)((char *)v6 + 3784);
    v62 = (VIDMM_GLOBAL **)*((_QWORD *)v6 + 474);
    *(_QWORD *)v59 = (char *)v6 + 3784;
    *((_QWORD *)v59 + 1) = v62;
    if ( *v62 != (VIDMM_GLOBAL *)((char *)v6 + 3784) )
      __fastfail(3u);
    *v62 = v59;
  }
  *((_DWORD *)v6 + v7 + 958) = 1;
  *((_DWORD *)v6 + v7 + 1155) = 0;
  if ( (_BYTE)v74 )
  {
    v63 = (struct _VIDMM_DMA_BUFFER **)((char *)v6 + 8 * v7);
    VIDMM_DMA_POOL::ReleaseBuffer(v32, v63[143], 1);
    VIDMM_DMA_POOL::AcquireBuffer(v63[79], v63 + 143, 0, v64);
    *((_DWORD *)v63[143] + 8) = 1;
    *((_DWORD *)v6 + v7 + 414) = 0;
    *((_DWORD *)v6 + v7 + 478) = 0;
    *((_DWORD *)v6 + v7 + 542) = 0;
    *((_DWORD *)v6 + v7 + 606) = 0;
  }
  *(_QWORD *)(*((_QWORD *)v6 + 5006) + 432LL) = 0LL;
}
