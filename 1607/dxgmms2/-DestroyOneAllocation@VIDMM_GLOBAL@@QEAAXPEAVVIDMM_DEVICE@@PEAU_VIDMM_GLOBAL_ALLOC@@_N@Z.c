/*
 * XREFs of ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005655C
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C004679C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0049150 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00575B8 (-DestroyAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0058CD8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0058F80 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0069804 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     Template_pppqxqqqqqqqpppqqqqqqqqqqtph @ 0x1C0013778 (Template_pppqxqqqqqqqpppqqqqqqqqqqtph.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pcc @ 0x1C001E188 (Template_pcc.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C004E584 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0054764 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005AADC (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005AF64 (-RemoveAllocationFromOfferList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0065EF8 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4)
{
  int v4; // r13d
  char v5; // r14
  struct _VIDMM_GLOBAL_ALLOC *v6; // rdi
  struct VIDMM_DEVICE *v7; // rsi
  VIDMM_GLOBAL *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  VIDMM_GLOBAL *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  int *v20; // rsi
  int v21; // eax
  __int64 v22; // rsi
  int v23; // r9d
  __int64 v24; // r10
  int v25; // esi
  int v26; // r14d
  int v27; // r15d
  int v28; // r12d
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  _QWORD *v33; // rax
  struct _D3DDDICB_DESTROYALLOCATION2FLAGS v34[2]; // [rsp+20h] [rbp-208h]
  struct _KEVENT **v35; // [rsp+28h] [rbp-200h]
  int v36; // [rsp+48h] [rbp-1E0h]
  int v37; // [rsp+60h] [rbp-1C8h]
  char v38; // [rsp+104h] [rbp-124h]
  char v39; // [rsp+108h] [rbp-120h]
  int v40; // [rsp+10Ch] [rbp-11Ch]
  int v41; // [rsp+110h] [rbp-118h]
  int v42; // [rsp+114h] [rbp-114h]
  VIDMM_GLOBAL *v43; // [rsp+128h] [rbp-100h]
  _QWORD v44[12]; // [rsp+150h] [rbp-D8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1B0h] [rbp-78h] BYREF

  LOBYTE(v4) = 0;
  v43 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = this;
  if ( a2 )
    v9 = *((_QWORD *)a2 + 3);
  else
    v9 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = v6;
    *(_QWORD *)(v10 + 32) = v7;
  }
  if ( (*((_DWORD *)v6 + 21) & 4) != 0 )
  {
    if ( *((_QWORD *)v6 + 17) || *((_QWORD *)v6 + 33) )
    {
      memset(v44, 0, 0x58uLL);
      v21 = *((_DWORD *)v6 + 19) & 0x3F;
      LODWORD(v44[0]) = 112;
      HIDWORD(v44[0]) = v21;
      v44[5] = v6;
      LODWORD(v44[6]) = 0;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v8, (struct _VIDMM_SYSTEM_COMMAND *)v44);
    }
    v22 = *(_QWORD *)(*((_QWORD *)v6 + 13) + 40LL);
    if ( (*((_DWORD *)v6 + 21) & 2) != 0 )
    {
      VIDMM_SEGMENT::UnlockAllocationBackingStore(v8, v6, 0LL);
      VIDMM_GLOBAL::ReturnPinnedBackingStore(v8, *((_QWORD *)v6 + 1));
      *((_DWORD *)v6 + 21) &= ~2u;
    }
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)v6 + 13) + 8LL), &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v8, (struct _KEVENT *)(v22 - 40), 0LL, 0LL, 0, 0LL);
    KeUnstackDetachProcess(&ApcState);
    *((_QWORD *)v6 + 13) = 0LL;
  }
  if ( v5 )
    VIDMM_GLOBAL::WaitForAllPagingEngines(v8, v6);
  if ( (*((_DWORD *)v6 + 19) & 0x100) == 0 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v8 + 39912, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v23 = *((_DWORD *)v8 + 9982);
        if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v11, &EventBlockThread, v12, v23);
      }
      ExAcquirePushLockExclusiveEx((char *)v8 + 39912, 0LL);
    }
    *((_QWORD *)v8 + 4990) = KeGetCurrentThread();
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)v6 + 40));
    if ( *((_QWORD *)v6 + 52) )
      VIDMM_GLOBAL::RemoveAllocationFromOfferList(v14, v6);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v6 + 40), v13, v15, v16);
    *((_QWORD *)v8 + 4990) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v8 + 39912, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (*((_DWORD *)v6 + 23) & 1) != 0 )
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, v6, 1);
  LOBYTE(this) = bTracingEnabled;
  if ( bTracingEnabled )
  {
    a2 = (struct VIDMM_DEVICE *)*((_QWORD *)v6 + 63);
    if ( *((_WORD *)a2 + 2) && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LOBYTE(v35) = *((_BYTE *)v6 + 448);
      *(_BYTE *)&v34[0].0 = *((_BYTE *)a2 + 4);
      Template_pcc((__int64)this, &EventReportOfferAllocation, (__int64)a3, v6, *(_QWORD *)&v34[0].0, v35);
      LOBYTE(this) = bTracingEnabled;
    }
    if ( (_BYTE)this )
    {
      a3 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v6 + 5);
      if ( a3 )
        a2 = (struct VIDMM_DEVICE *)*((_QWORD *)a3 + 3);
      else
        a2 = 0LL;
      if ( v9 )
        v24 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
      else
        LOBYTE(v24) = 0;
      if ( v9 )
        a4 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 56LL);
      else
        a4 = 0LL;
      LOBYTE(v25) = 0;
      LOBYTE(v26) = 0;
      LOBYTE(v27) = 0;
      LOBYTE(v28) = 0;
      this = (VIDMM_GLOBAL *)*((unsigned int *)v6 + 18);
      LOBYTE(v42) = 0;
      LOBYTE(v41) = 0;
      LOBYTE(v40) = 0;
      v39 = 0;
      v38 = 0;
      v8 = v43;
      if ( a2 )
      {
        v25 = *(_DWORD *)a2;
        v26 = *((_DWORD *)a2 + 1);
        v27 = *((_DWORD *)a2 + 2);
        v28 = *((_DWORD *)a2 + 3);
        v4 = *((_DWORD *)a2 + 4);
        v42 = *((_DWORD *)a2 + 5);
        v41 = *((_DWORD *)a2 + 6);
        v40 = *((_DWORD *)a2 + 7);
        v29 = *((_DWORD *)a2 + 8);
        a2 = (struct VIDMM_DEVICE *)*((unsigned int *)a2 + 9);
        v39 = v29;
        v8 = v43;
        v38 = (char)a2;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_pppqxqqqqqqqpppqqqqqqqqqqtph(
          *((_QWORD *)v6 + 2),
          &EventDestroyAdapterAllocation,
          (__int64)a3,
          a4,
          v9,
          v24,
          **((_DWORD **)v6 + 63),
          *((_QWORD *)v6 + 2),
          *((_DWORD *)v6 + 8),
          v36,
          *((_DWORD *)v6 + 17),
          (char)this,
          v37,
          *((_DWORD *)v6 + 16),
          *((_DWORD *)v6 + 98),
          (char)v6,
          (char)a3,
          0,
          v25,
          v26,
          v27,
          v28,
          v4,
          v42,
          v41,
          v40,
          v39,
          v38,
          (*((_DWORD *)v6 + 21) & 2) != 0,
          *((_QWORD *)v6 + 46),
          *((_BYTE *)v6 + 76) & 0x3F);
    }
  }
  *((_QWORD *)v8 + 952) += *((_QWORD *)v6 + 2);
  ++*((_DWORD *)v8 + 1902);
  v17 = *((_QWORD *)v6 + 2);
  if ( (**((_DWORD **)v6 + 63) & 0x20000000) != 0 )
  {
    ++*((_DWORD *)v8 + 1934);
    *((_QWORD *)v8 + 968) += v17;
  }
  else
  {
    ++*((_DWORD *)v8 + 1938);
    *((_QWORD *)v8 + 970) += v17;
  }
  *((_QWORD *)v8 + 5013) -= *((_QWORD *)v6 + 2);
  v18 = *((_QWORD *)v6 + 40);
  if ( v18 )
  {
    if ( *(_QWORD *)(v18 + 8) )
    {
      v30 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v30 + 24) = 306LL;
      WdLogEvent5_WdAssertion(v30);
    }
    if ( *(_DWORD *)(v18 + 24) )
    {
      v31 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v31 + 24) = 307LL;
      WdLogEvent5_WdAssertion(v31);
    }
    operator delete((void *)v18);
  }
  v19 = *((_QWORD *)v6 + 63);
  if ( v19 )
  {
    v20 = *(int **)(v19 + 16);
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20, 0xFFFFFFFF) == 1 )
      {
        if ( v20[2] )
        {
          v32 = v20[2];
          v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
          v33[3] = 270LL;
          v33[4] = 42LL;
          v33[5] = v20;
          v33[6] = v32;
          v33[7] = 0LL;
          WdLogEvent5_WdCriticalError(v33);
        }
        operator delete[](v20);
      }
      *(_QWORD *)(*((_QWORD *)v6 + 63) + 16LL) = 0LL;
    }
  }
  if ( !*((_DWORD *)v6 + 99) )
  {
    operator delete(*((void **)v6 + 63));
    *((_DWORD *)v6 + 19) |= 0x200000u;
    operator delete(v6);
  }
}
