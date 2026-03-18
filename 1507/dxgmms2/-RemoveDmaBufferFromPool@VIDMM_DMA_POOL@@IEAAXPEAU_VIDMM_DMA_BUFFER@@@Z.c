/*
 * XREFs of ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0059EA8
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0040B2C (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C0059A28 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C005A4C4 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 *     ?TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z @ 0x1C005A640 (-TrimPool@VIDMM_DMA_POOL@@QEAAXE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0006A74 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0006A98 (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     Template_pppxxxp @ 0x1C0010344 (Template_pppxxxp.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C003096C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0040D6C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004DCEC (-FreePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C005A708 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 */

void __fastcall VIDMM_DMA_POOL::RemoveDmaBufferFromPool(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct _VIDMM_DMA_BUFFER *v7; // rcx
  struct _VIDMM_DMA_BUFFER **v8; // rax
  struct VIDMM_ALLOC *v9; // rdx
  VIDMM_GLOBAL *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rbx
  unsigned __int8 v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+70h] [rbp+18h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_pppxxxp(
      (__int64)this,
      (__int64)a2,
      *((unsigned int *)a2 + 13),
      *((_QWORD *)this + 3),
      *(_QWORD *)(*(_QWORD *)this + 24LL),
      a2,
      *((_QWORD *)a2 + 5),
      *((unsigned int *)a2 + 12),
      *((unsigned int *)a2 + 13),
      *((_QWORD *)a2 + 7));
  if ( *((_BYTE *)a2 + 24) && (v13 = 0, VIDMM_DMA_POOL::WaitDmaBufferNotBusy(this, a2, 1u, &v13), v13) )
  {
    v6 = WdLogNewEntry5_WdEvent(v5, v4);
    *(_QWORD *)(v6 + 24) = a2;
    *(_QWORD *)(v6 + 32) = this;
    WdLogEvent5_WdEvent(v6);
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
    operator delete(*((void **)a2 + 22));
    operator delete(*((void **)a2 + 16));
    operator delete(*((void **)a2 + 15));
    operator delete(*((void **)a2 + 14));
    operator delete(*((void **)a2 + 13));
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
      VIDMM_GLOBAL::FreePagingBufferResources(*(VIDMM_GLOBAL **)this, *((struct VIDMM_ALLOC **)a2 + 8));
    v9 = (struct VIDMM_ALLOC *)*((_QWORD *)a2 + 8);
    v10 = *(VIDMM_GLOBAL **)this;
    v14 = 1;
    VIDMM_GLOBAL::CloseOneAllocation(v10, v9, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    VIDMM_GLOBAL::DestroyOneAllocation(
      *(VIDMM_GLOBAL **)this,
      *((struct VIDMM_DEVICE **)this + 2),
      *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 7),
      0);
    if ( *((_DWORD *)this + 23) == 2
      && *((_QWORD *)this + 5) == *((_QWORD *)this + 6)
      && *((_DWORD *)this + 16) == *((_DWORD *)this + 17)
      && *((_DWORD *)this + 19) == *((_DWORD *)this + 20) )
    {
      *((_DWORD *)this + 8) |= 8u;
    }
    *((_DWORD *)this + 32) -= *((_DWORD *)a2 + 10);
    v11 = (_QWORD *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 33) += -24 * *((_DWORD *)a2 + 12);
    *((_DWORD *)this + 34) += -24 * *((_DWORD *)a2 + 13);
    if ( v11 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v11 + 24LL) + 184LL));
      VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v12);
      *(_QWORD *)(v12 + 368) -= *((_QWORD *)a2 + 5);
      --*(_DWORD *)(v12 + 360);
      *(_DWORD *)(v12 + 376) += -24 * *((_DWORD *)a2 + 12);
      *(_DWORD *)(v12 + 380) += -24 * *((_DWORD *)a2 + 13);
      VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v12);
    }
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, -*((_QWORD *)a2 + 5));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, -24LL * *((unsigned int *)a2 + 12));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, -24LL * *((unsigned int *)a2 + 13));
    operator delete(a2);
  }
}
