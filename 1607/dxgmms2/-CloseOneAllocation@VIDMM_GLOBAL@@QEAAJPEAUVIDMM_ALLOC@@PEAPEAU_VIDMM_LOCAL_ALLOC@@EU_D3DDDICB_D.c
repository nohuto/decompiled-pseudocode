/*
 * XREFs of ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C004679C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0049150 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0052534 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005655C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0057654 (-CloseAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@EPEAPEAU_VIDMM_LOCAL_ALLOC@@U_D3DDDI.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0058CD8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0058F80 (-DestroyContextAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CONTEXT_ALLOC@@@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0069804 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000FC84 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x1C001D738 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     Template_pppppppppppp @ 0x1C001E204 (Template_pppppppppppp.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0047FC4 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?IsVidMmWorkerThread@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C004C590 (-IsVidMmWorkerThread@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z @ 0x1C00523D4 (-CloseLocalAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_LOCAL_ALLOC@@H@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0054764 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0055A2C (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005BC3C (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C005C6D0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CloseOneAllocation(
        VIDMM_GLOBAL *this,
        struct _KEVENT *a2,
        struct _VIDMM_LOCAL_ALLOC **a3,
        __int64 a4,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a5,
        struct _KEVENT **a6)
{
  struct _LIST_ENTRY *v6; // r14
  struct _LIST_ENTRY *Flink; // r12
  char v8; // si
  __int64 v11; // rbp
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v14; // rcx
  __int64 v15; // rax
  VIDMM_DEVICE *Flink_low; // rcx
  struct _LIST_ENTRY *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _LIST_ENTRY *v28; // rdx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  CVirtualAddressAllocator *v30; // rsi
  __int64 v31; // r9
  struct _LIST_ENTRY *v32; // rdx
  VIDMM_GLOBAL *v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  struct _LIST_ENTRY *v42; // rax
  struct _LIST_ENTRY *v43; // rcx
  struct _LIST_ENTRY *v44; // r15
  CVirtualAddressAllocator *v45; // rax
  struct _LIST_ENTRY *v46; // rsi
  __int64 v47; // r12
  HANDLE CurrentProcessId; // rax
  struct _LIST_ENTRY *v49; // rbx
  bool v50; // zf
  struct _LIST_ENTRY **p_Blink; // rbx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // r9d
  struct _LIST_ENTRY **v56; // rax
  struct _LIST_ENTRY *v57; // rdx
  struct _LIST_ENTRY *v58; // rcx
  __int64 v59; // rbx
  _QWORD *v60; // rax
  __int64 v61; // [rsp+80h] [rbp-198h]
  char v62[8]; // [rsp+88h] [rbp-190h] BYREF
  struct _LIST_ENTRY **v63; // [rsp+90h] [rbp-188h]
  int v64; // [rsp+98h] [rbp-180h]
  _BYTE v65[32]; // [rsp+A0h] [rbp-178h] BYREF
  _QWORD v66[12]; // [rsp+C0h] [rbp-158h] BYREF
  _QWORD v67[12]; // [rsp+120h] [rbp-F8h] BYREF
  _QWORD v68[19]; // [rsp+180h] [rbp-98h] BYREF
  unsigned int v69; // [rsp+228h] [rbp+10h]
  __int64 v70; // [rsp+230h] [rbp+18h]
  unsigned int v71; // [rsp+238h] [rbp+20h]

  v6 = 0LL;
  Flink = a2->Header.WaitListHead.Flink;
  v8 = a4;
  v69 = 0;
  v71 = 0;
  v11 = **(_QWORD **)&a2->Header.Lock;
  v61 = 0LL;
  v70 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( a3 )
    *a3 = *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock;
  if ( bTracingEnabled )
  {
    Blink = a2->Header.WaitListHead.Blink;
    if ( Blink )
    {
      v69 = (unsigned int)Blink[1].Flink;
      v14 = Blink[2].Blink;
      if ( v14 )
      {
        v71 = (unsigned int)v14[1].Flink;
        v61 = (__int64)v14[3].Flink;
      }
    }
    if ( (**(_DWORD **)(v11 + 504) & 8) != 0 )
      v15 = *(_QWORD *)(v11 + 376);
    else
      v15 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 16LL);
    v70 = v15;
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
  if ( v8 && ((__int64)a2[1].Header.WaitListHead.Flink & 1) != 0 && !KeReadStateEvent(a2 + 3) )
  {
    v22 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
    *(_QWORD *)(v22 + 24) = a2;
    *(_QWORD *)(v22 + 32) = -1071775486LL;
    WdLogEvent5_WdEvent(v22);
    result = 3223191810LL;
    *a6 = a2 + 3;
    return result;
  }
  KeWaitForSingleObject(&a2[3], Executive, 0, 0, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)v11);
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v25, v24, v26, v27) + 24) = a2;
  v28 = a2[6].Header.WaitListHead.Blink;
  if ( v28 )
  {
    if ( (**(_DWORD **)(v11 + 504) & 0x10000008) != 0 )
      MmUnmapViewOfSection(**(_QWORD **)(*(_QWORD *)&a2->Header.Lock + 8LL), v28);
    a2[6].Header.WaitListHead.Blink = 0LL;
  }
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_VARangeRaceCondition_61045254_FeatureDescriptorDetails) )
    {
      VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                  *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
                                  *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
                                  *(_DWORD *)(**(_QWORD **)&a2->Header.Lock + 76LL) & 0x3F);
      v30 = VirtualAddressAllocator;
      if ( VirtualAddressAllocator )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v65,
          (struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 40),
          *((_QWORD *)VirtualAddressAllocator + 6) != (_QWORD)KeGetCurrentThread());
        if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead
          || *(struct _KEVENT **)&a2[6].Header.Lock != &a2[6] )
        {
          LOBYTE(v6) = 1;
        }
        DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v65);
        if ( (_BYTE)v6 )
        {
          if ( VIDMM_GLOBAL::IsVidMmWorkerThread(this) )
          {
            CVirtualAddressAllocator::FreeAllocMappedVaRangeList(v30, (struct VIDMM_ALLOC *)a2);
          }
          else
          {
            memset(v66, 0, 0x58uLL);
            v66[0] = -4294967175LL;
            v66[2] = a2;
            VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v66);
          }
        }
      }
      v6 = 0LL;
      goto LABEL_43;
    }
    if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead
      || *(struct _KEVENT **)&a2[6].Header.Lock != &a2[6] )
    {
      if ( !VIDMM_GLOBAL::IsVidMmWorkerThread(this) )
      {
        memset(v67, 0, 0x58uLL);
        v67[0] = -4294967175LL;
        v67[2] = a2;
        VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v67);
        goto LABEL_43;
      }
      goto LABEL_54;
    }
  }
  else if ( a2[5].Header.WaitListHead.Flink != &a2[5].Header.WaitListHead )
  {
    if ( VIDMM_GLOBAL::IsVidMmWorkerThread(this) )
    {
LABEL_54:
      v45 = VIDMM_PROCESS::GetVirtualAddressAllocator(
              *(VIDMM_PROCESS **)(*(_QWORD *)&a2->Header.Lock + 8LL),
              *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
              *(_DWORD *)(v11 + 76) & 0x3F);
      CVirtualAddressAllocator::FreeAllocMappedVaRangeList(v45, (struct VIDMM_ALLOC *)a2);
      goto LABEL_43;
    }
    memset(v68, 0, 0x58uLL);
    v68[0] = -4294967175LL;
    v68[2] = a2;
    VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v68);
  }
LABEL_43:
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v11 + 320));
  v32 = a2[1].Header.WaitListHead.Blink;
  v33 = *(VIDMM_GLOBAL **)&a2[2].Header.Lock;
  if ( (struct _LIST_ENTRY **)v32->Blink != &a2[1].Header.WaitListHead.Blink
    || *(struct _KEVENT **)v33 != (struct _KEVENT *)&a2[1].Header.WaitListHead.Blink )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v33 = v32;
  v32->Blink = (struct _LIST_ENTRY *)v33;
  v34 = *(_QWORD *)(*(_QWORD *)&a2->Header.Lock + 24LL);
  VIDMM_GLOBAL::CloseLocalAllocation(v33, *(struct _VIDMM_LOCAL_ALLOC **)&a2->Header.Lock, a3 == 0LL, v31);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 320), v35, v36, v37);
  if ( bTracingEnabled )
  {
    v42 = a2->Header.WaitListHead.Blink;
    if ( v42 && (v43 = v42[2].Blink) != 0LL )
      v44 = v43[3].Blink;
    else
      v44 = 0LL;
    if ( v42 )
      v6 = v42[2].Blink;
    if ( Flink )
      v46 = Flink[1].Blink;
    else
      v46 = 0LL;
    v47 = *((_QWORD *)this + 3);
    CurrentProcessId = PsGetCurrentProcessId();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_pppppppppppp(
        v71,
        &EventDestroyDeviceAllocation,
        v61,
        CurrentProcessId,
        v46,
        v47,
        a2,
        v11,
        v6,
        v44,
        v69,
        v71,
        v61,
        v70,
        v34);
  }
  *((_QWORD *)this + 956) += *(_QWORD *)(v11 + 16);
  ++*((_DWORD *)this + 1910);
  v49 = a2->Header.WaitListHead.Flink[1].Flink;
  if ( v49 )
  {
    v50 = &v49[20].Blink == 0LL;
    p_Blink = &v49[20].Blink;
    v63 = p_Blink;
    if ( !v50 && p_Blink[1] == (struct _LIST_ENTRY *)KeGetCurrentThread() )
    {
      v52 = WdLogNewEntry5_WdAssertion(v39, v38);
      *(_QWORD *)(v52 + 24) = 1142LL;
      WdLogEvent5_WdAssertion(v52);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(p_Blink, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v55 = *((_DWORD *)p_Blink + 4);
        if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v53, &EventBlockThread, v54, v55);
      }
      ExAcquirePushLockExclusiveEx(p_Blink, 0LL);
    }
    p_Blink[1] = (struct _LIST_ENTRY *)KeGetCurrentThread();
    v56 = &a2[4].Header.WaitListHead.Blink;
    v57 = a2[4].Header.WaitListHead.Blink;
    v58 = *(struct _LIST_ENTRY **)&a2[5].Header.Lock;
    v64 = 2;
    if ( (struct _LIST_ENTRY **)v57->Blink != &a2[4].Header.WaitListHead.Blink
      || (struct _LIST_ENTRY **)v58->Flink != v56 )
    {
      __fastfail(3u);
    }
    v58->Flink = v57;
    v57->Blink = v58;
    *(_QWORD *)&a2[5].Header.Lock = 0LL;
    *v56 = 0LL;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v62);
  }
  if ( LODWORD(a2[7].Header.WaitListHead.Flink) )
  {
    v59 = SLODWORD(a2[7].Header.WaitListHead.Flink);
    v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v38, v40, v41);
    v60[3] = 270LL;
    v60[4] = 56LL;
    v60[5] = a2;
    v60[6] = v59;
    v60[7] = 0LL;
    WdLogEvent5_WdCriticalError(v60);
  }
  operator delete(a2);
  return 0LL;
}
