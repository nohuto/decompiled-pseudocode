/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003D578 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C003E220 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C004A228 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004DF58 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004FCA8 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0051730 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C00519C0 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C006025C (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0060494 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pppppppppppp @ 0x1C001CE90 (Template_pppppppppppp.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C0049FFC (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1C004C4D0 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAVVIDMM_PAGIN.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C004D668 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006143C (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct _KEVENT *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        char a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct _LIST_ENTRY *v6; // r15
  struct _LIST_ENTRY *Flink; // r12
  __int64 v11; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v14; // rcx
  __int64 v15; // rax
  VIDMM_DEVICE *Flink_low; // rcx
  struct _LIST_ENTRY *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // r9
  struct _LIST_ENTRY *v25; // rdx
  VIDMM_GLOBAL *v26; // rcx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _LIST_ENTRY *v35; // rax
  struct _LIST_ENTRY *v36; // rcx
  struct _LIST_ENTRY *v37; // r14
  struct _LIST_ENTRY *v38; // rbp
  __int64 v39; // r12
  HANDLE CurrentProcessId; // rax
  struct _LIST_ENTRY *v41; // rdi
  bool v42; // zf
  struct _LIST_ENTRY *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r9d
  struct _LIST_ENTRY **p_Blink; // rax
  struct _LIST_ENTRY *v49; // rdx
  struct _LIST_ENTRY *v50; // rcx
  unsigned int Timeout; // [rsp+20h] [rbp-108h]
  __int64 v52; // [rsp+80h] [rbp-A8h]
  char v53[8]; // [rsp+88h] [rbp-A0h] BYREF
  struct _LIST_ENTRY *v54; // [rsp+90h] [rbp-98h]
  int v55; // [rsp+98h] [rbp-90h]
  _QWORD v56[17]; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v57; // [rsp+138h] [rbp+10h]
  __int64 v58; // [rsp+140h] [rbp+18h]
  unsigned int v59; // [rsp+148h] [rbp+20h]

  v6 = 0LL;
  Flink = a2->Header.WaitListHead.Flink;
  v57 = 0;
  v59 = 0;
  v11 = **(_QWORD **)&a2->Header.Lock;
  v52 = 0LL;
  v58 = 0LL;
  if ( a3 )
    *a3 = *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock;
  if ( bTracingEnabled )
  {
    Blink = a2->Header.WaitListHead.Blink;
    if ( Blink )
    {
      v57 = (unsigned int)Blink[1].Flink;
      v14 = Blink[2].Blink;
      if ( v14 )
      {
        v59 = (unsigned int)v14[1].Flink;
        v52 = (__int64)v14[3].Flink;
      }
    }
    if ( (**(_DWORD **)(v11 + 472) & 8) != 0 )
      v15 = *(_QWORD *)(v11 + 360);
    else
      v15 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 16LL);
    v58 = v15;
  }
  Flink_low = (VIDMM_DEVICE *)LODWORD(a2[1].Header.WaitListHead.Flink);
  if ( ((unsigned __int8)Flink_low & 1) == 0 )
  {
    v17 = a2->Header.WaitListHead.Flink;
    if ( v17 && v17[1].Blink || (*(_BYTE *)(v11 + 84) & 4) != 0 )
    {
      if ( (*(_BYTE *)(v11 + 84) & 4) != 0 )
      {
        a2[1].Header.SignalState |= 4u;
        LODWORD(a2[1].Header.WaitListHead.Flink) = (unsigned int)Flink_low | 1;
        KeSetEvent(a2 + 3, 0, 0);
      }
      else
      {
        VIDMM_GLOBAL::TerminateOneAllocation(this, (struct VIDMM_ALLOC *)a2, (unsigned int)a3, a5, 0LL);
      }
    }
    else
    {
      a2[1].Header.SignalState |= 4u;
      if ( (a2[1].Header.SignalState & 3) == 1 )
        VIDMM_DEVICE::UnfaultCommitment(Flink_low, (struct VIDMM_ALLOC *)a2);
      KeSetEvent(a2 + 3, 0, 0);
    }
  }
  if ( a4 && ((__int64)a2[1].Header.WaitListHead.Flink & 1) != 0 && !KeReadStateEvent(a2 + 3) )
  {
    v20 = WdLogNewEntry5_WdEvent(v19, v18);
    *(_QWORD *)(v20 + 24) = a2;
    *(_QWORD *)(v20 + 32) = -1071775486LL;
    WdLogEvent5_WdEvent(v20);
    result = 3223191810LL;
    *a6 = a2 + 3;
  }
  else
  {
    KeWaitForSingleObject(&a2[3], Executive, 0, 0, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)v11);
    v22 = *(_QWORD *)&a2[6].Header.Lock;
    if ( v22 )
    {
      if ( (**(_DWORD **)(v11 + 472) & 0x10000008) != 0 )
        MmUnmapViewOfSection(**(_QWORD **)(*(_QWORD *)&a2->Header.Lock + 8LL), v22);
      *(_QWORD *)&a2[6].Header.Lock = 0LL;
    }
    if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead )
    {
      memset(v56, 0, 0x50uLL);
      v23 = *((_QWORD *)this + 5008);
      v56[0] = -4294967175LL;
      v56[2] = a2;
      VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
        this,
        (struct _VIDMM_SYSTEM_COMMAND *)v56,
        *(PVOID **)(v23 + 72),
        *(struct _VIDSCH_SYNC_OBJECT **)(160LL * *(unsigned int *)(*(_QWORD *)(v23 + 72) + 144LL)
                                       + *(_QWORD *)(v23 + 72)
                                       + 152),
        Timeout);
    }
    DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v11 + 312));
    v25 = a2[1].Header.WaitListHead.Blink;
    v26 = *(VIDMM_GLOBAL **)&a2[2].Header.Lock;
    if ( (struct _LIST_ENTRY **)v25->Blink != &a2[1].Header.WaitListHead.Blink
      || *(struct _KEVENT **)v26 != (struct _KEVENT *)&a2[1].Header.WaitListHead.Blink )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v26 = v25;
    v25->Blink = (struct _LIST_ENTRY *)v26;
    v27 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 24LL);
    VIDMM_GLOBAL::CloseLocalAllocation(v26, *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock, a3 == 0LL, v24);
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v11 + 312), v28, v29, v30);
    if ( bTracingEnabled )
    {
      v35 = a2->Header.WaitListHead.Blink;
      if ( v35 )
      {
        v36 = v35[2].Blink;
        if ( v36 )
          v6 = v36[3].Blink;
        v37 = v35[2].Blink;
      }
      else
      {
        v37 = 0LL;
      }
      if ( Flink )
        v38 = Flink[1].Blink;
      else
        v38 = 0LL;
      v39 = *((_QWORD *)this + 3);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_pppppppppppp(
          v59,
          &EventDestroyDeviceAllocation,
          v52,
          CurrentProcessId,
          v38,
          v39,
          a2,
          v11,
          v37,
          v6,
          v57,
          v59,
          v52,
          v58,
          v27);
    }
    *((_QWORD *)this + 956) += *(_QWORD *)(v11 + 16);
    ++*((_DWORD *)this + 1910);
    v41 = a2->Header.WaitListHead.Flink[1].Flink;
    if ( v41 )
    {
      v42 = &v41[19] == 0LL;
      v43 = v41 + 19;
      v54 = v43;
      if ( !v42 && (struct _KTHREAD *)v43->Blink == KeGetCurrentThread() )
      {
        v44 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
        *(_QWORD *)(v44 + 24) = 1155LL;
        WdLogEvent5_WdAssertion(v44);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v43, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v47 = (int)v43[1].Flink;
          if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v45, &EventBlockThread, v46, v47);
        }
        ExAcquirePushLockExclusiveEx(v43, 0LL);
      }
      v43->Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
      p_Blink = &a2[4].Header.WaitListHead.Blink;
      v49 = a2[4].Header.WaitListHead.Blink;
      v50 = *(struct _LIST_ENTRY **)&a2[5].Header.Lock;
      v55 = 2;
      if ( (struct _LIST_ENTRY **)v49->Blink != &a2[4].Header.WaitListHead.Blink
        || (struct _LIST_ENTRY **)v50->Flink != p_Blink )
      {
        __fastfail(3u);
      }
      v50->Flink = v49;
      v49->Blink = v50;
      *(_QWORD *)&a2[5].Header.Lock = 0LL;
      *p_Blink = 0LL;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v53);
    }
    operator delete(a2);
    return 0LL;
  }
  return result;
}
