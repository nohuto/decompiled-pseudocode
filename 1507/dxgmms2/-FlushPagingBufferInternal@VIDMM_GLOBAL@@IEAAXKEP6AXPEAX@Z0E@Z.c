/*
 * XREFs of ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C00337A8 (-EndPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z @ 0x1C003A60C (-FlushPagingBuffer@VIDMM_GLOBAL@@IEAAXEP6AXPEAX@Z0@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C003A67C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B7D4 (-AddGlobalAllocReferenceToDmaBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004D390 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C004D744 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004F850 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005001C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0051450 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00544F8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0005B54 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0010318 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?FlushAllTemporaryAllocation@VIDMM_GLOBAL@@IEAAXXZ @ 0x1C003A1CC (-FlushAllTemporaryAllocation@VIDMM_GLOBAL@@IEAAXXZ.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C003A67C (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0040B2C (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     VidSchSignalPagingFences @ 0x1C0044B54 (VidSchSignalPagingFences.c)
 *     ?GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@IEAAXKPEA_K@Z @ 0x1C004DDA0 (-GetOrGeneratePendingPagingBufferFence@VIDMM_GLOBAL@@IEAAXKPEA_K@Z.c)
 *     ?RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER@@K@Z @ 0x1C00618F4 (-RecordVaPagingHistoryFlushPagingBuffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PAGING_HISTORY_FLUSH_PAGING.c)
 *     VidSchSubmitPagingCommand @ 0x1C00794D0 (VidSchSubmitPagingCommand.c)
 */

void __fastcall VIDMM_GLOBAL::FlushPagingBufferInternal(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        char a3,
        void (__fastcall *a4)(void *),
        void *a5,
        unsigned __int8 a6)
{
  unsigned __int64 v6; // rsi
  int v7; // r12d
  char v9; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct _VIDMM_DMA_BUFFER **v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // r13d
  __int64 v24; // rcx
  bool v25; // al
  __int64 v26; // rax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rax
  VIDMM_GLOBAL *v31; // rcx
  bool v32; // zf
  unsigned __int64 v33; // r12
  int v34; // r9d
  VIDMM_DMA_POOL *v35; // rcx
  int v36; // [rsp+30h] [rbp-59h]
  unsigned __int64 v37; // [rsp+38h] [rbp-51h] BYREF
  __int64 v38; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v39; // [rsp+50h] [rbp-39h] BYREF
  int v40; // [rsp+60h] [rbp-29h] BYREF
  struct _VIDMM_DMA_BUFFER *v41; // [rsp+68h] [rbp-21h]
  __int64 v42; // [rsp+70h] [rbp-19h]
  int v43; // [rsp+78h] [rbp-11h]
  int v44; // [rsp+7Ch] [rbp-Dh]
  int v45; // [rsp+80h] [rbp-9h]
  int v46; // [rsp+84h] [rbp-5h]
  int v47; // [rsp+88h] [rbp-1h]
  int v48; // [rsp+8Ch] [rbp+3h]
  int v49; // [rsp+90h] [rbp+7h]
  int v50; // [rsp+94h] [rbp+Bh]
  int v51; // [rsp+E0h] [rbp+57h]

  v6 = a2;
  v7 = 0;
  v37 = a2;
  v38 = 456LL * a2;
  v9 = a3;
  v39 = *((_QWORD *)this + 4999);
  if ( *((char *)this + 40552) < 0 && a3 )
    *((_BYTE *)this + 40553) |= 1u;
  VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, a2);
  if ( *((char *)this + 40552) >= 0 )
  {
    if ( a6 && (*((_BYTE *)this + 40553) & 1) != 0 )
      v9 = 0;
    *((_BYTE *)this + 40553) &= ~1u;
  }
  if ( *((_DWORD *)this + v6 + 478) == *((_DWORD *)this + v6 + 414)
    && *((_DWORD *)this + v6 + 606) == *((_DWORD *)this + v6 + 542)
    && !v9 )
  {
    VIDMM_GLOBAL::FlushAllTemporaryAllocation(this);
  }
  else
  {
    if ( !*((_DWORD *)this + 2) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
      v13[3] = 270LL;
      v13[4] = 33LL;
      v13[5] = this;
      v13[6] = 0LL;
      v13[7] = 0LL;
      WdLogEvent5_WdCriticalError(v13);
    }
    v14 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v6 + 1144);
    v51 = *((_DWORD *)*v14 + 43);
    v15 = *((_DWORD *)*v14 + 42);
    *((_DWORD *)*v14 + 43) = v15;
    v36 = v15;
    v16 = *((_QWORD *)*v14 + 7);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 128);
      if ( (*(_DWORD *)(v17 + 56) & 0x1000) == 0 )
        v7 = *(_DWORD *)(v17 + 16) + 1;
      v18 = *(_QWORD *)(v16 + 136) + *(_QWORD *)(v17 + 24);
    }
    else
    {
      v18 = *((_QWORD *)*v14 + 11);
    }
    if ( a4 )
      a4(a5);
    v19 = *(_QWORD *)(*((_QWORD *)*v14 + 7) + 128LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
    v22 = v38;
    v23 = 0;
    if ( *(_DWORD *)(v38 + v39 + 8) )
    {
      do
      {
        v24 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v23 + *(_DWORD *)(v38 + *((_QWORD *)this + 4999) + 4)));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 144LL))(v24);
        ++v23;
      }
      while ( v23 < *(_DWORD *)(v38 + v39 + 8) );
      v6 = v37;
      v22 = v38;
      v14 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 8 * v37 + 1144);
    }
    v25 = *((_DWORD *)this + v6 + 414) == *((_DWORD *)this + v6 + 478)
       && *((_DWORD *)this + v6 + 542) == *((_DWORD *)this + v6 + 606);
    if ( *((_DWORD *)this + v6 + 1155) || !v25 )
    {
      LOBYTE(v22) = *(_BYTE *)(v22 + *((_QWORD *)this + 4999) + 420);
      if ( (v22 & 0x40) != 0 )
      {
        v26 = WdLogNewEntry5_WdWarning(v22, v20, v21);
        *(_QWORD *)(v26 + 24) = v6;
        WdLogEvent5_WdWarning(v26);
      }
      v41 = *v14;
      v40 = 512;
      _InterlockedIncrement((volatile signed __int32 *)v41 + 8);
      v27 = *((_DWORD *)this + v6 + 414) - *((_DWORD *)this + v6 + 478);
      v44 = *((_DWORD *)this + v6 + 478);
      v28 = *((_DWORD *)this + v6 + 606);
      v45 = v27;
      v29 = *((_DWORD *)this + v6 + 542) - v28;
      v46 = v28;
      v47 = v29;
      v48 = v51;
      v49 = v36;
      v30 = *((_QWORD *)this + 2);
      v42 = v18;
      v43 = v7;
      v50 = VidSchiDriverNodeEngineToSchedulerNode(
              *(_QWORD *)(v30 + 384),
              *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)this + 3) + 1896LL) + 48 * v6 + 2),
              a2);
      v38 = *((_QWORD *)this + v6 + 738);
      VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(this, a2, &v37);
      v32 = (*((_BYTE *)this + 40552) & 1) == 0;
      v33 = v37;
      v39 = v37;
      if ( !v32 && *((_QWORD *)this + 5075) )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushPagingBuffer(
          v31,
          (struct VIDMM_PAGING_HISTORY_FLUSH_PAGING_BUFFER *)&v40,
          a2);
      VidSchSubmitPagingCommand(*(_QWORD *)(*((_QWORD *)this + 2) + 384LL), &v40);
      VidSchSignalPagingFences(
        *(_QWORD *)(*((_QWORD *)this + 2) + 384LL),
        (unsigned int)&v38,
        (unsigned int)&v39,
        v34,
        a2);
      *((_QWORD *)this + v6 + 674) = v33;
    }
    *((_DWORD *)this + v6 + 478) = *((_DWORD *)this + v6 + 414);
    *((_DWORD *)this + v6 + 606) = *((_DWORD *)this + v6 + 542);
    VIDMM_GLOBAL::FlushAllTemporaryAllocation(this);
    *((_DWORD *)this + v6 + 1155) = 0;
    *((_DWORD *)this + v6 + 958) = 1;
    if ( v9 )
    {
      VIDMM_DMA_POOL::ReleaseBuffer(v35, *v14, 1);
      VIDMM_DMA_POOL::AcquireBuffer(*((VIDMM_DMA_POOL **)this + v6 + 79), v14, 0, 1u);
      *((_DWORD *)*v14 + 8) = 1;
      *((_DWORD *)this + v6 + 414) = 0;
      *((_DWORD *)this + v6 + 478) = 0;
      *((_DWORD *)this + v6 + 542) = 0;
      *((_DWORD *)this + v6 + 606) = 0;
    }
    *(_QWORD *)(*((_QWORD *)this + 4999) + 432LL) = 0LL;
  }
}
