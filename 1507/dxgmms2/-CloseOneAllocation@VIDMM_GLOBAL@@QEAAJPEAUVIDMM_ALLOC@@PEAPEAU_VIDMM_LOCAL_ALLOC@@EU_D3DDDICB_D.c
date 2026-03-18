/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C003096C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C003103C (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C003397C (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00400F4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C004C4FC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C004C8E0 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0059EA8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005EE00 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EFAC (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pppppppppppp @ 0x1C000F46C (Template_pppppppppppp.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C002F508 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00307E0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C003241C (-NotifyAllocationClosed@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0051A04 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00596FC (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        char a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v11; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  VIDMM_DEVICE *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  VIDMM_GLOBAL *v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rbp
  __int64 v33; // r12
  HANDLE CurrentProcessId; // rax
  __int64 v35; // [rsp+80h] [rbp-98h]
  _QWORD v36[17]; // [rsp+90h] [rbp-88h] BYREF
  unsigned int v37; // [rsp+128h] [rbp+10h]
  __int64 v38; // [rsp+130h] [rbp+18h]
  unsigned int v39; // [rsp+138h] [rbp+20h]

  v6 = 0LL;
  v7 = *((_QWORD *)a2 + 1);
  v37 = 0;
  v39 = 0;
  v11 = **(_QWORD **)a2;
  v35 = 0LL;
  v38 = 0LL;
  if ( a3 )
    *a3 = *(struct _VIDMM_LOCAL_ALLOC **)a2;
  if ( bTracingEnabled )
  {
    v13 = *((_QWORD *)a2 + 2);
    if ( v13 )
    {
      v37 = *(_DWORD *)(v13 + 16);
      v14 = *(_QWORD *)(v13 + 40);
      if ( v14 )
      {
        v39 = *(_DWORD *)(v14 + 16);
        v35 = *(_QWORD *)(v14 + 48);
      }
    }
    if ( (**(_DWORD **)(v11 + 472) & 8) != 0 )
      v15 = *(_QWORD *)(v11 + 360);
    else
      v15 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    v38 = v15;
  }
  v16 = (VIDMM_DEVICE *)*((unsigned int *)a2 + 8);
  if ( ((unsigned __int8)v16 & 1) == 0 )
  {
    v17 = *((_QWORD *)a2 + 1);
    if ( v17 && *(_QWORD *)(v17 + 24) || (*(_BYTE *)(v11 + 84) & 4) != 0 )
    {
      if ( (*(_BYTE *)(v11 + 84) & 4) == 0 )
      {
        VIDMM_GLOBAL::TerminateOneAllocation(this, a2, (unsigned int)a3, a5, 0LL);
        goto LABEL_21;
      }
      *((_DWORD *)a2 + 7) |= 4u;
      *((_DWORD *)a2 + 8) = (unsigned int)v16 | 1;
    }
    else
    {
      *((_DWORD *)a2 + 7) |= 4u;
      if ( (*((_DWORD *)a2 + 7) & 3) == 1 )
        VIDMM_DEVICE::UnfaultCommitment(v16, a2);
    }
    KeSetEvent((PRKEVENT)a2 + 3, 0, 0);
  }
LABEL_21:
  if ( a4 && (*((_DWORD *)a2 + 8) & 1) != 0 && !KeReadStateEvent((PRKEVENT)a2 + 3) )
  {
    v20 = WdLogNewEntry5_WdEvent(v19, v18);
    *(_QWORD *)(v20 + 24) = a2;
    *(_QWORD *)(v20 + 32) = -1071775486LL;
    WdLogEvent5_WdEvent(v20);
    result = 3223191810LL;
    *a6 = (struct _KEVENT *)((char *)a2 + 72);
  }
  else
  {
    KeWaitForSingleObject((char *)a2 + 72, Executive, 0, 0, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)v11);
    v22 = *((_QWORD *)a2 + 18);
    if ( v22 )
    {
      if ( (**(_DWORD **)(v11 + 472) & 0x10000008) != 0 )
        MmUnmapViewOfSection(**(_QWORD **)(*(_QWORD *)a2 + 8LL), v22);
      *((_QWORD *)a2 + 18) = 0LL;
    }
    if ( *((struct VIDMM_ALLOC **)a2 + 16) != (struct VIDMM_ALLOC *)((char *)a2 + 128) )
    {
      memset(v36, 0, 0x50uLL);
      v36[0] = -4294967175LL;
      v36[2] = a2;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v36, 1);
    }
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v11 + 312));
    v23 = *((_QWORD *)a2 + 5);
    v24 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 6);
    if ( *(struct VIDMM_ALLOC **)(v23 + 8) != (struct VIDMM_ALLOC *)((char *)a2 + 40)
      || *(struct VIDMM_ALLOC **)v24 != (struct VIDMM_ALLOC *)((char *)a2 + 40) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    v25 = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
    VIDMM_GLOBAL::CloseLocalAllocation(v24, *(struct _VIDMM_LOCAL_ALLOC **)a2, a3 == 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 312), v26, v27, v28);
    if ( bTracingEnabled )
    {
      v29 = *((_QWORD *)a2 + 2);
      if ( v29 && (v30 = *(_QWORD *)(v29 + 40)) != 0 )
        v31 = *(_QWORD *)(v30 + 56);
      else
        v31 = 0LL;
      v32 = 0LL;
      if ( v29 )
        v32 = *(_QWORD *)(v29 + 40);
      if ( v7 )
        v6 = *(_QWORD *)(v7 + 24);
      v33 = *((_QWORD *)this + 3);
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_pppppppppppp(
          v39,
          &EventDestroyDeviceAllocation,
          v35,
          CurrentProcessId,
          v6,
          v33,
          a2,
          v11,
          v32,
          v31,
          v37,
          v39,
          v35,
          v38,
          v25);
    }
    *((_QWORD *)this + 956) += *(_QWORD *)(v11 + 16);
    ++*((_DWORD *)this + 1910);
    VIDMM_DEVICE::NotifyAllocationClosed(*((VIDMM_DEVICE **)a2 + 1), a2);
    operator delete(a2);
    return 0LL;
  }
  return result;
}
