/*
 * XREFs of ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0069804
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0041540 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C0069760 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00914FC (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C0091678 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0010124 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0010168 (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     Template_pppxxxp @ 0x1C001F638 (Template_pppxxxp.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C004042C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0041754 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005655C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C008940C (-FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DMA_POOL::RemoveDmaBufferFromPool(
        struct VIDMM_DEVICE **this,
        struct _VIDMM_DMA_BUFFER *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  struct _VIDMM_DMA_BUFFER *v7; // rcx
  struct _VIDMM_DMA_BUFFER **v8; // rax
  struct _KEVENT *v9; // rdx
  VIDMM_GLOBAL *v10; // rcx
  struct VIDMM_DEVICE *v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int8 v18; // [rsp+68h] [rbp+10h] BYREF
  int v19; // [rsp+70h] [rbp+18h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = a2;
    *(_QWORD *)(v6 + 32) = this;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_pppxxxp(
      *((unsigned int *)a2 + 13),
      *((unsigned int *)a2 + 12),
      (__int64)*this,
      this[3],
      *((_QWORD *)*this + 3),
      a2,
      *((_QWORD *)a2 + 5),
      *((unsigned int *)a2 + 12),
      *((unsigned int *)a2 + 13),
      *((_QWORD *)a2 + 7));
  if ( *((_BYTE *)a2 + 24)
    && (v18 = 0, LOBYTE(a3) = 1, VIDMM_DMA_POOL::WaitDmaBufferNotBusy((VIDMM_DMA_POOL *)this, a2, a3, &v18), v18) )
  {
    v17 = WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = a2;
    *(_QWORD *)(v17 + 32) = this;
    WdLogEvent5_WdEvent(v17);
  }
  else
  {
    --*((_DWORD *)this + 23);
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
    v7 = *(struct _VIDMM_DMA_BUFFER **)a2;
    v8 = (struct _VIDMM_DMA_BUFFER **)*((_QWORD *)a2 + 1);
    if ( *(struct _VIDMM_DMA_BUFFER **)(*(_QWORD *)a2 + 8LL) != a2 || *v8 != a2 )
      __fastfail(3u);
    *v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    ExReleaseResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    operator delete[](*((void **)a2 + 22));
    operator delete[](*((void **)a2 + 16));
    operator delete[](*((void **)a2 + 15));
    operator delete[](*((void **)a2 + 14));
    operator delete[](*((void **)a2 + 13));
    if ( ((_BYTE)this[4] & 1) != 0 )
      VIDMM_GLOBAL::FreePagingBufferResources(*this, *((struct VIDMM_ALLOC **)a2 + 8));
    v9 = (struct _KEVENT *)*((_QWORD *)a2 + 8);
    v10 = *this;
    v19 = 1;
    VIDMM_GLOBAL::CloseOneAllocation(v10, v9, 0LL, 0LL, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    VIDMM_GLOBAL::DestroyOneAllocation(*this, this[2], *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 7), 0LL);
    if ( *((_DWORD *)this + 23) == 2
      && this[5] == this[6]
      && *((_DWORD *)this + 16) == *((_DWORD *)this + 17)
      && *((_DWORD *)this + 19) == *((_DWORD *)this + 20) )
    {
      *((_DWORD *)this + 8) |= 8u;
    }
    *((_DWORD *)this + 32) -= *((_DWORD *)a2 + 10);
    v11 = this[2];
    *((_DWORD *)this + 33) += -24 * *((_DWORD *)a2 + 12);
    *((_DWORD *)this + 34) += -24 * *((_DWORD *)a2 + 13);
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 16LL)
                      + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)v11 + 24LL) + 200LL));
      VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v12);
      *(_QWORD *)(v12 + 416) -= *((_QWORD *)a2 + 5);
      --*(_DWORD *)(v12 + 408);
      *(_DWORD *)(v12 + 424) += -24 * *((_DWORD *)a2 + 12);
      *(_DWORD *)(v12 + 428) += -24 * *((_DWORD *)a2 + 13);
      VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v12);
    }
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, -*((_QWORD *)a2 + 5));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, -24LL * *((unsigned int *)a2 + 12));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, -24LL * *((unsigned int *)a2 + 13));
    operator delete(a2);
  }
}
