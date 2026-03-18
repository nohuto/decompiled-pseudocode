/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C0079BEC (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0079CA0 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0008030 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchSuspendResumeDevice @ 0x1C0011190 (VidSchSuspendResumeDevice.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00115A8 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B78 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0013E38 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     VidSchCancelDeviceCommand @ 0x1C0022490 (VidSchCancelDeviceCommand.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004395C (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C0043990 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0043F78 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00461E4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0046760 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0047074 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0048244 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C0049C60 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C004C664 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0053194 (-CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00532B0 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055678 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F5FC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060D88 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0060E50 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0060E78 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0061184 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006143C (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0061614 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x1C0061630 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C006164C (-ResumePagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C0079A68 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z @ 0x1C007AB74 (-EvictFromFaultedList@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@@Z.c)
 *     ?PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C007BAEC (-PageInFromFaultedList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C007C1E4 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C007C51C (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007C784 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007F850 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007FAE4 (-SuspendPagingQueues@VIDMM_DEVICE@@QEAAXXZ.c)
 *     VidSchWaitForPagingFence @ 0x1C008C400 (VidSchWaitForPagingFence.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_DEFERRED_COMMAND *a2,
        bool *a3,
        char a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        unsigned __int8 a7,
        struct VIDMM_ALLOC **a8)
{
  bool *v9; // r9
  __int64 v10; // r8
  __int64 v11; // rsi
  struct _VIDMM_GLOBAL_ALLOC ***v12; // r12
  VIDMM_DEVICE *v13; // r15
  unsigned int v14; // r14d
  int v15; // eax
  __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rcx
  struct _VIDMM_DEFERRED_COMMAND *v19; // r14
  __int64 v20; // rdx
  int inited; // r15d
  __int64 v22; // rdi
  VIDMM_GLOBAL *v23; // rcx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  char v29; // di
  __int64 v30; // r9
  VIDMM_DEVICE *v31; // r8
  struct _VIDMM_GLOBAL_ALLOC *v32; // rcx
  __int64 v33; // rdx
  struct _VIDMM_GLOBAL_ALLOC ***v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  __int64 v40; // r13
  struct _VIDMM_GLOBAL_ALLOC *v41; // r15
  struct _VIDMM_GLOBAL_ALLOC *v42; // rcx
  bool v43; // zf
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdi
  _QWORD *v50; // rax
  _QWORD *v51; // r13
  VIDMM_DEVICE *v52; // rcx
  _QWORD *v53; // rax
  _QWORD *v54; // r15
  _QWORD *v55; // r14
  _QWORD *v56; // r15
  __int64 v57; // rdi
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // r8
  struct VIDMM_DEVICE *v61; // rdx
  __int64 v62; // rax
  struct _VIDMM_LOCAL_ALLOC *v63; // r8
  int v64; // eax
  __int64 v65; // rdi
  _QWORD *v66; // rax
  __int64 v67; // r9
  __int64 v68; // rcx
  struct _VIDMM_LOCAL_ALLOC *v69; // rdi
  _QWORD *v70; // rax
  __int64 v71; // rdx
  _QWORD *v72; // rcx
  __int64 v73; // rcx
  _QWORD *v74; // rsi
  __int64 v75; // rcx
  _QWORD *v76; // rax
  bool *v77; // rdi
  int *v78; // rax
  __int64 v79; // r15
  unsigned __int64 v80; // r13
  unsigned int v81; // edi
  __int64 v82; // r14
  __int64 v83; // rcx
  __int64 v84; // rax
  unsigned int v85; // ecx
  int v86; // eax
  int v87; // edx
  int v88; // ecx
  VIDMM_GLOBAL *v89; // r14
  VIDMM_GLOBAL *v90; // rdi
  __int64 *v91; // rax
  VIDMM_DEVICE **v92; // rsi
  int v93; // eax
  struct _VIDMM_GLOBAL_ALLOC *v94; // rdi
  __int64 v95; // rcx
  __int64 v96; // rax
  int updated; // eax
  struct _KEVENT *v98; // rcx
  int v99; // eax
  _QWORD **v100; // r15
  _QWORD *i; // r14
  _QWORD *j; // rdi
  _QWORD *v103; // rax
  __int64 v104; // rdx
  _QWORD *v105; // rcx
  __int64 v106; // rcx
  _QWORD *v107; // rax
  __int64 result; // rax
  int v109; // [rsp+20h] [rbp-E0h]
  int v110; // [rsp+40h] [rbp-C0h]
  char v111; // [rsp+44h] [rbp-BCh]
  char v112; // [rsp+45h] [rbp-BBh]
  unsigned __int8 v116[4]; // [rsp+58h] [rbp-A8h] BYREF
  BOOL v117; // [rsp+5Ch] [rbp-A4h]
  VIDMM_DEVICE *v118; // [rsp+60h] [rbp-A0h]
  int v119; // [rsp+68h] [rbp-98h] BYREF
  struct VIDMM_ALLOC *v120; // [rsp+70h] [rbp-90h] BYREF
  struct _VIDMM_LOCAL_ALLOC *v121; // [rsp+78h] [rbp-88h]
  struct _VIDSCH_SYNC_OBJECT *v122; // [rsp+80h] [rbp-80h]
  unsigned __int64 v123; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v124; // [rsp+90h] [rbp-70h] BYREF
  int v125; // [rsp+98h] [rbp-68h]
  int v126; // [rsp+9Ch] [rbp-64h]
  _QWORD v127[7]; // [rsp+A0h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE v129; // [rsp+108h] [rbp+8h] BYREF

  v9 = a3;
  v10 = 0LL;
  *a8 = 0LL;
  v11 = 0LL;
  v12 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a2 + 2);
  v122 = a6;
  v118 = 0LL;
  v121 = 0LL;
  LOBYTE(v117) = 0;
  if ( v12 )
  {
    v118 = (VIDMM_DEVICE *)*v12;
    v11 = *(_QWORD *)v118;
    v121 = *(struct _VIDMM_LOCAL_ALLOC **)(*(_QWORD *)v118 + 96LL);
    v117 = (*(_DWORD *)(v11 + 76) & 0x20000000) != 0;
  }
  v13 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
  v111 = 0;
  v112 = 0;
  v110 = 0;
  if ( !v13 )
    v13 = (VIDMM_DEVICE *)v12[1];
  *v9 = 0;
  v14 = 0;
  v15 = *(_DWORD *)a2;
  ++*((_QWORD *)this + 575);
  *((_DWORD *)this + 2) = v15;
  *((_DWORD *)this + 12) = -1;
  *((_QWORD *)this + 805) = v13;
  *((_QWORD *)this + 806) = v12;
  if ( *((_DWORD *)this + 1604) )
  {
    do
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        Template_p((__int64)this, &EventPagingStartPreparation, 0LL, *((_QWORD *)this + v14 + 143));
        v10 = 0LL;
      }
      v16 = v14;
      if ( *((_DWORD *)this + v14 + 414) != *((_DWORD *)this + v14 + 478)
        || *((_DWORD *)this + v14 + 542) != *((_DWORD *)this + v14 + 606) )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, 0LL, v9);
        v17[3] = 270LL;
        v17[4] = 33LL;
        v17[5] = this;
        v17[6] = 0LL;
        v17[7] = 0LL;
        WdLogEvent5_WdCriticalError(v17);
        v10 = 0LL;
      }
      ++v14;
      *((_DWORD *)this + v16 + 1022) = *((_DWORD *)this + v16 + 414);
      *((_DWORD *)this + v16 + 1086) = *((_DWORD *)this + v16 + 542);
      *((_DWORD *)this + v16 + 958) = 0;
    }
    while ( v14 < *((_DWORD *)this + 1604) );
    v9 = a3;
  }
  v18 = *((_QWORD *)v13 + 4);
  if ( *(_BYTE *)(v18 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 168), 0, 0) )
  {
    v19 = a2;
    *((_DWORD *)a2 + 19) = -1071775232;
    *((_BYTE *)a2 + 72) = 1;
  }
  else
  {
    v19 = a2;
  }
  if ( *((_BYTE *)v19 + 72) )
  {
    v18 = *(unsigned int *)v19;
    if ( (unsigned int)(v18 - 203) <= 7 )
    {
      v20 = 233LL;
      if ( _bittest((const int *)&v20, v18 - 203) )
      {
        inited = *((_DWORD *)v19 + 19);
        v110 = inited;
        goto LABEL_105;
      }
    }
    if ( (_DWORD)v18 == 113 )
      *((_BYTE *)v19 + 64) = 0;
  }
  v22 = *(int *)v19;
  v20 = 0x1C0000000uLL;
  switch ( (int)v22 )
  {
    case 113:
      updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                  (VIDMM_GLOBAL *)v18,
                  (struct _VIDMM_DEFERRED_COMMAND *)((char *)v19 + 32),
                  a8,
                  (__int64)v9);
      goto LABEL_163;
    case 119:
      updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                  this,
                  *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)v19 + 4),
                  a8);
LABEL_163:
      v110 = updated;
      inited = updated;
      if ( updated != -1073741267 )
        goto LABEL_105;
      v77 = a3;
      *a3 = 1;
      goto LABEL_165;
    case 200:
      v24 = *((_DWORD *)v12 + 7) & 3;
      if ( v24 == 2 )
      {
        VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v12, 0, 0LL, 0LL);
      }
      else if ( v24 == 1 )
      {
        VIDMM_DEVICE::UnfaultCommitment((VIDMM_DEVICE *)v18, (struct VIDMM_ALLOC *)v12);
      }
      if ( (*((_BYTE *)v12 + 25) & 1) != 0 )
        VIDMM_GLOBAL::UnpinOneAllocation(this, v12, 3LL, 0LL);
      VIDMM_DEVICE::CleanupAllocationCommitment(v13, (struct VIDMM_ALLOC *)v12);
      DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v11 + 312));
      if ( *((int *)v12[12] + 2) > 0 )
      {
        v28 = *((_QWORD *)v13 + 4);
        v127[4] = v12;
        v127[6] = 3LL;
        memset(v127, 0, 32);
        v127[5] = 0LL;
        VidSchCancelDeviceCommand(v28, (__int64)v127, 1, 0);
      }
      DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v11 + 312), v25, v26, v27);
      if ( (**(_DWORD **)(v11 + 472) & 0x20000000) == 0 )
        goto LABEL_86;
      v29 = 1;
      DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v11 + 312));
      v31 = (VIDMM_DEVICE *)*v12;
      v32 = (*v12)[5];
      v33 = (__int64)(*v12 + 5);
      if ( v32 == (struct _VIDMM_GLOBAL_ALLOC *)v33 )
        goto LABEL_43;
      break;
    case 203:
      if ( *(_BYTE *)(v11 + 93) )
      {
        inited = -1071775482;
        v110 = -1071775482;
      }
      else
      {
        if ( !*(_DWORD *)(v11 + 156) )
        {
          if ( *(_QWORD *)(v11 + 128) )
          {
            v86 = **(_DWORD **)(v11 + 472);
            if ( (v86 & 0x40000000) == 0 && ((v86 & 0x20000000) == 0 || v86 >= 0) && (v86 & 0x80000) == 0 )
            {
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(
                *(VIDMM_WORKER_THREAD **)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v11);
              VIDMM_GLOBAL::EvictAllocation(this, (struct VIDMM_ALLOC *)v12);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation(this);
            }
          }
        }
        v87 = 4;
        v88 = **(_DWORD **)(v11 + 472);
        if ( (v88 & 0x20000) != 0 )
        {
          v87 = *((_DWORD *)v19 + 8);
        }
        else if ( (v88 & 0x40000000) != 0 || v88 < 0 )
        {
          v87 = 3;
        }
        v110 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (struct VIDMM_ALLOC *)v12, v87, a7, a3, a8);
        inited = v110;
        if ( v110 >= 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 156));
        v89 = (VIDMM_GLOBAL *)((char *)this + 3720);
        v90 = (VIDMM_GLOBAL *)*((_QWORD *)this + 465);
        if ( v90 != (VIDMM_GLOBAL *)((char *)this + 3720) )
        {
          do
          {
            v91 = (__int64 *)*((_QWORD *)v90 - 7);
            v92 = (VIDMM_DEVICE **)((char *)v90 - 56);
            v90 = *(VIDMM_GLOBAL **)v90;
            v18 = *v91;
            v93 = *(_DWORD *)(*v91 + 120);
            if ( v93 )
            {
              if ( v93 == 1 )
                VIDMM_SEGMENT::ReclaimResource(*(VIDMM_SEGMENT **)(v18 + 128), (struct _VIDMM_GLOBAL_ALLOC *)v18);
              VIDMM_DEVICE::AddCommitment(v92[1], (struct VIDMM_ALLOC *)v92);
            }
          }
          while ( v90 != v89 );
        }
        *((_QWORD *)this + 466) = (char *)this + 3720;
        *(_QWORD *)v89 = v89;
        v19 = a2;
      }
      goto LABEL_105;
    case 205:
      VIDMM_GLOBAL::EvictOneAllocation(this, (__int64 **)v12, *((_BYTE *)v19 + 32) & 1);
      goto LABEL_104;
    case 206:
      v94 = **v12;
      if ( *((_DWORD *)v94 + 84)
        && VIDMM_GLOBAL::NeedsApertureForLock(this, **v12)
        && (*((_DWORD *)v94 + 19) & 0x40) == 0 )
      {
        v96 = WdLogNewEntry5_WdWarning(v95);
        *(_QWORD *)(v96 + 24) = v94;
        WdLogEvent5_WdWarning(v96);
        inited = -1073741823;
        v110 = -1073741823;
        goto LABEL_105;
      }
      v18 = *((_BYTE *)v12 + 25) & 1;
      if ( !((unsigned int)v18 | *((_DWORD *)v12 + 38)) || *(int *)(*((_QWORD *)v94 + 59) + 4LL) >= 2 )
        goto LABEL_104;
      inited = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (struct VIDMM_ALLOC *)v12, 0, a7, v9, a8);
      v110 = inited;
      goto LABEL_105;
    case 207:
      if ( !*((_DWORD *)v12 + 38) && (*((_BYTE *)v12 + 25) & 1) == 0 )
        VIDMM_GLOBAL::EvictOneAllocation(this, (__int64 **)v12, *((_BYTE *)v19 + 32) & 1);
      _InterlockedDecrement((volatile signed __int32 *)v12 + 41);
      goto LABEL_104;
    case 208:
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v11 + 464, 0LL);
      if ( *(_QWORD *)(v11 + 256) )
      {
        v103 = (_QWORD *)(v11 + 224);
        v104 = *(_QWORD *)(v11 + 224);
        v105 = *(_QWORD **)(v11 + 232);
        if ( *(_QWORD *)(v104 + 8) != v11 + 224 || (_QWORD *)*v105 != v103 )
          __fastfail(3u);
        *v105 = v104;
        *(_QWORD *)(v104 + 8) = v105;
        v106 = *(_QWORD *)(v11 + 256);
        *v103 = 0LL;
        *(_QWORD *)(v11 + 232) = 0LL;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v106 + 88LL))(v106, v11);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v11 + 76) & 0x3F, 0LL, 0LL, 0LL, 0);
      }
      VIDMM_GLOBAL::CalculateLockData(this, &v119, v12);
      if ( v119 == 4
        || (KeStackAttachProcess(**((PRKPROCESS **)v118 + 1), &v129),
            v110 = VIDMM_GLOBAL::LockInternal(
                     this,
                     (struct VIDMM_LOCK2_DATA *)&v119,
                     (struct VIDMM_ALLOC *)v12,
                     *((void ***)v19 + 4),
                     *((_DWORD *)v19 + 10),
                     a3,
                     a8),
            inited = v110,
            KeUnstackDetachProcess(&v129),
            v119 == 4) )
      {
        inited = VIDMM_GLOBAL::LockInternal(
                   this,
                   (struct VIDMM_LOCK2_DATA *)&v119,
                   (struct VIDMM_ALLOC *)v12,
                   *((void ***)v19 + 4),
                   *((_DWORD *)v19 + 10),
                   a3,
                   a8);
        v110 = inited;
      }
      ExReleasePushLockExclusiveEx(v11 + 464, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_105;
    case 209:
      inited = VIDMM_GLOBAL::InitContextAllocation((ADAPTER_RENDER **)this, (__int64 **)v12, 1, v9, a8);
      v110 = inited;
      goto LABEL_105;
    case 210:
      v18 = *((_BYTE *)v12 + 25) & 1;
      if ( !((unsigned int)v18 | *((_DWORD *)v12 + 38)) || *(int *)(*(_QWORD *)(v11 + 472) + 4LL) >= 2 )
        goto LABEL_104;
      v99 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, (struct VIDMM_ALLOC *)v12, 0, a7, v9, a8);
      *(_DWORD *)(v11 + 80) &= ~0x40u;
      inited = v99;
      v110 = v99;
      goto LABEL_105;
    case 211:
      v100 = (_QWORD **)(*((_QWORD *)v19 + 4) + 288LL);
      for ( i = *v100; i != v100; i = (_QWORD *)*i )
      {
        for ( j = (_QWORD *)*(i - 2); j != i - 2; j = (_QWORD *)*j )
        {
          v20 = (__int64)(j - 5);
          if ( (*((_DWORD *)j - 3) & 3) == 2 )
            VIDMM_GLOBAL::EvictOneAllocation(this, (__int64 **)v20, 0LL);
        }
      }
      goto LABEL_103;
    case 212:
      VIDMM_GLOBAL::UpdateAllocationPriority(this, (struct VIDMM_ALLOC *)v12, *((_DWORD *)v19 + 8));
      goto LABEL_104;
    case 213:
      VIDMM_DEVICE::SuspendSchedulerDevice(v13);
      VIDMM_DEVICE::SuspendPagingQueues(v13);
      if ( v12 )
        VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)v13, (struct VIDMM_ALLOC *)v12);
      else
        VIDMM_DEVICE::FaultAllAllocations(v13);
      VIDMM_GLOBAL::EvictFromFaultedList(v23, v13);
      v110 = VIDMM_GLOBAL::PageInFromFaultedList(this, v13);
      VIDMM_DEVICE::ResumeSchedulerDevice(v13);
      VIDMM_DEVICE::ResumePagingQueues(v13);
      goto LABEL_104;
    default:
      v107 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, 0x1C0000000uLL, 0LL, v9);
      v107[3] = 270LL;
      v107[4] = 5LL;
      v107[5] = v22;
      v107[6] = -1073741811LL;
      v107[7] = 0LL;
      WdLogEvent5_WdCriticalError(v107);
      goto LABEL_104;
  }
  while ( 1 )
  {
    v34 = (struct _VIDMM_GLOBAL_ALLOC ***)((char *)v32 - 40);
    v32 = *(struct _VIDMM_GLOBAL_ALLOC **)v32;
    if ( v34 != v12 && (*((_DWORD *)v34 + 7) & 4) == 0 )
      break;
    if ( v32 == (struct _VIDMM_GLOBAL_ALLOC *)v33 )
      goto LABEL_43;
  }
  v29 = 0;
LABEL_43:
  if ( v31 == *(VIDMM_DEVICE **)(v11 + 96) )
  {
    if ( v29 )
    {
      v35 = WdLogNewEntry5_WdEvent(v32, v33);
      *(_QWORD *)(v35 + 24) = v11;
      *(_QWORD *)(v35 + 32) = v12;
      WdLogEvent5_WdEvent(v35);
      if ( *(_QWORD *)(v11 + 256) )
      {
        v37 = (_QWORD *)(v11 + 224);
        v38 = *(_QWORD *)(v11 + 224);
        v39 = *(_QWORD **)(v11 + 232);
        if ( *(_QWORD *)(v38 + 8) != v11 + 224 || (_QWORD *)*v39 != v37 )
          __fastfail(3u);
        *v39 = v38;
        *(_QWORD *)(v38 + 8) = v39;
        *v37 = 0LL;
        *(_QWORD *)(v11 + 232) = 0LL;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11 + 256) + 88LL))(*(_QWORD *)(v11 + 256), v11);
      }
      *(_BYTE *)(*(_QWORD *)(v11 + 96) + 32LL) |= 2u;
      if ( (*(_DWORD *)(v11 + 84) & 2) != 0 )
      {
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v11, 0LL);
        VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v11 + 8));
        *(_DWORD *)(v11 + 84) &= ~2u;
      }
      v40 = *(_QWORD *)(v11 + 96);
      v41 = (struct _VIDMM_GLOBAL_ALLOC *)(v11 + 288);
      v42 = *(struct _VIDMM_GLOBAL_ALLOC **)(v11 + 288);
      v118 = (VIDMM_DEVICE *)v40;
      if ( v42 == (struct _VIDMM_GLOBAL_ALLOC *)(v11 + 288) )
      {
LABEL_54:
        v111 = 1;
        v112 = 1;
        v42 = v12[2][5];
        if ( v42 )
        {
          v45 = *((_QWORD *)v42 + 7);
          if ( v45 )
          {
            if ( *(_DWORD *)(v45 + 56) )
            {
              v61 = (struct VIDMM_DEVICE *)*((_QWORD *)this + 5008);
              v120 = 0LL;
              if ( (int)VIDMM_GLOBAL::OpenOneAllocation(
                          this,
                          v61,
                          (struct _VIDMM_GLOBAL_ALLOC *)v11,
                          0LL,
                          0,
                          0LL,
                          &v120,
                          v116) >= 0 )
              {
                v112 = 0;
                v111 = 0;
                v63 = *(struct _VIDMM_LOCAL_ALLOC **)v120;
                *(_DWORD *)(v11 + 84) |= 4u;
                *(_QWORD *)(v11 + 96) = v63;
                if ( *(int *)(v11 + 340) <= 0
                  || (v64 = VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(this, (struct _VIDMM_LOCAL_ALLOC *)v40, v63),
                      v65 = v64,
                      v64 >= 0) )
                {
                  if ( *(_QWORD *)(v40 + 8) )
                  {
                    v67 = *(_QWORD *)(v11 + 128);
                    if ( v67 )
                    {
                      VidMmRecordAlloc(this, v11, v40, v67, *(_QWORD *)(v11 + 16), 1);
                      VidMmRecordAlloc(
                        this,
                        v11,
                        *(_QWORD *)(v11 + 96),
                        *(_QWORD *)(v11 + 128),
                        *(_QWORD *)(v11 + 16),
                        0);
                    }
                  }
                }
                else
                {
                  _InterlockedIncrement(&dword_1C002F4D4);
                  v66 = (_QWORD *)WdLogNewEntry5_WdLowResource(v42);
                  v66[3] = v11;
                  v66[4] = *(_QWORD *)(v11 + 8);
                  v66[5] = v65;
                  WdLogEvent5_WdLowResource(v66);
                  v125 = 0;
                  VIDMM_GLOBAL::CloseOneAllocation(this, v120, 0LL, 0, 0, 0LL);
                  *(_DWORD *)(v11 + 84) &= ~4u;
                  v111 = 1;
                  v112 = 1;
                  *(_QWORD *)(v11 + 96) = 0LL;
                }
              }
              else
              {
                _InterlockedIncrement(&dword_1C002F4D4);
                v62 = WdLogNewEntry5_WdLowResource(v42);
                *(_QWORD *)(v62 + 24) = v11;
                *(_QWORD *)(v62 + 32) = *(_QWORD *)(v11 + 8);
                WdLogEvent5_WdLowResource(v62);
              }
            }
            else
            {
              *(_DWORD *)(v11 + 84) |= 1u;
            }
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v43 = (*((_BYTE *)v42 - 24) & 2) == 0;
          v44 = (__int64)v42 - 56;
          v42 = *(struct _VIDMM_GLOBAL_ALLOC **)v42;
          if ( v43 )
            break;
          if ( v42 == v41 )
            goto LABEL_54;
        }
        v47 = *(_QWORD *)(v11 + 128);
        if ( v47 )
        {
          VidMmRecordAlloc(this, v11, *(_QWORD *)(v11 + 96), v47, *(_QWORD *)(v11 + 16), 1);
          VidMmRecordAlloc(this, v11, v44, *(_QWORD *)(v11 + 128), *(_QWORD *)(v11 + 16), 0);
        }
        v48 = *(_QWORD *)(v11 + 128);
        *(_QWORD *)(v11 + 96) = v44;
        if ( v48 )
        {
          if ( (*(_DWORD *)(v48 + 56) & 0x1001) != 0 && *(int *)(v11 + 340) > 0 )
          {
            KeStackAttachProcess(**(PRKPROCESS **)(v44 + 8), &ApcState);
            v49 = (int)VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(
                         this,
                         (struct _VIDMM_LOCAL_ALLOC *)v40,
                         *(struct _VIDMM_LOCAL_ALLOC **)(v11 + 96));
            KeUnstackDetachProcess(&ApcState);
            if ( (int)v49 < 0 )
            {
              _InterlockedIncrement(&dword_1C002F4D4);
              v50 = (_QWORD *)WdLogNewEntry5_WdLowResource(v42);
              v50[3] = v11;
              v50[4] = *(_QWORD *)(v11 + 8);
              v50[5] = v49;
              WdLogEvent5_WdLowResource(v50);
              v51 = *(_QWORD **)v41;
              if ( *(struct _VIDMM_GLOBAL_ALLOC **)v41 != v41 )
              {
                v52 = v118;
                v53 = (_QWORD *)(v11 + 288);
                do
                {
                  v54 = v51 - 7;
                  if ( v51 - 7 != (_QWORD *)v52 )
                  {
                    v55 = (_QWORD *)v54[5];
                    v56 = v54 + 5;
                    if ( v55 != v56 )
                    {
                      do
                      {
                        v57 = *(_QWORD *)(*(v55 - 4) + 32LL);
                        VidSchiMarkDeviceAsError(v57, 13);
                        VidSchSuspendResumeDevice(v57, 1, 0);
                        VidSchSuspendResumeDevice(v57, 0, 0);
                        v55 = (_QWORD *)*v55;
                      }
                      while ( v55 != v56 );
                      v52 = v118;
                      v53 = (_QWORD *)(v11 + 288);
                    }
                  }
                  v51 = (_QWORD *)*v51;
                }
                while ( v51 != v53 );
              }
              v58 = *(_QWORD *)(v11 + 128);
              *(_DWORD *)(v11 + 76) |= 0x20000000u;
              v59 = *(_QWORD *)(v11 + 16);
              v60 = (__int64)v118;
              *(_DWORD *)(v11 + 80) ^= (*(_DWORD *)(v11 + 80) ^ *(_DWORD *)(v58 + 20)) & 0x1F;
              v112 = 1;
              v111 = 1;
              VidMmRecordAlloc(this, v11, v60, v58, v59, 0);
              VidMmRecordAlloc(this, v11, *(_QWORD *)(v11 + 96), *(_QWORD *)(v11 + 128), *(_QWORD *)(v11 + 16), 1);
            }
          }
        }
      }
      v46 = WdLogNewEntry5_WdEvent(v42, v36);
      *(_QWORD *)(v46 + 24) = *(_QWORD *)(v11 + 96);
      WdLogEvent5_WdEvent(v46);
      if ( v112 )
        *(_QWORD *)(v11 + 96) = 0LL;
    }
  }
  else if ( v29 )
  {
    *((_BYTE *)v31 + 32) |= 2u;
  }
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v11 + 312), v33, (__int64)v31, v30);
  if ( v111 )
  {
LABEL_86:
    if ( !v117 )
    {
      v68 = *(_QWORD *)(v11 + 128);
      v69 = v121;
      if ( v68 )
      {
        LOBYTE(v109) = 1;
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v68 + 48LL))(
          v68,
          v11,
          0LL,
          0LL,
          v109,
          v121);
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v11 + 76) & 0x3F, 0LL, 0LL, 0LL, 0);
      }
      if ( *(_QWORD *)(v11 + 256) )
      {
        v70 = (_QWORD *)(v11 + 224);
        v71 = *(_QWORD *)(v11 + 224);
        v72 = *(_QWORD **)(v11 + 232);
        if ( *(_QWORD *)(v71 + 8) != v11 + 224 || (_QWORD *)*v72 != v70 )
          __fastfail(3u);
        *v72 = v71;
        *(_QWORD *)(v71 + 8) = v72;
        v73 = *(_QWORD *)(v11 + 256);
        *v70 = 0LL;
        *(_QWORD *)(v11 + 232) = 0LL;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v73 + 88LL))(v73, v11);
      }
      if ( (*(_DWORD *)(v11 + 84) & 2) != 0 )
      {
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v11, v69);
        VIDMM_GLOBAL::ReturnPinnedBackingStore(this, *(_QWORD *)(v11 + 8));
        *(_DWORD *)(v11 + 84) &= ~2u;
      }
      DXGPUSHLOCK::AcquireExclusive((VIDMM_GLOBAL *)((char *)this + 39840));
      v74 = (_QWORD *)(v11 + 400);
      if ( *v74 )
      {
        v75 = *v74;
        v76 = (_QWORD *)v74[1];
        if ( *(_QWORD **)(*v74 + 8LL) != v74 || (_QWORD *)*v76 != v74 )
          __fastfail(3u);
        *v76 = v75;
        *(_QWORD *)(v75 + 8) = v76;
        *v74 = 0LL;
      }
      *((_QWORD *)this + 4981) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 39840, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  *((_DWORD *)v12 + 7) |= 4u;
  v18 = (__int64)v12[24];
  if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 32), 0xFFFFFFFF) == 1 )
    ADAPTER_RENDER::NotifyDeferredDestructionComplete(
      *((ADAPTER_RENDER **)this + 2),
      (struct DXGTERMINATIONTRACKER *)v12[24]);
LABEL_103:
  v19 = a2;
LABEL_104:
  inited = v110;
LABEL_105:
  v77 = a3;
  if ( *a3 )
  {
LABEL_165:
    VIDMM_GLOBAL::EndPreparation(this, v20, 0LL, 0, 0LL, 0LL);
  }
  else
  {
    v78 = (int *)*((_QWORD *)v19 + 3);
    if ( v78 )
      *v78 = inited;
    v79 = 0LL;
    v80 = a5;
    v124 = v122;
    *((_QWORD *)this + 466) = (char *)this + 3720;
    *((_QWORD *)this + 465) = (char *)this + 3720;
    v123 = a5;
    if ( *((_DWORD *)this + 1604) )
    {
      do
      {
        v81 = 0;
        v82 = 456LL * (unsigned int)v79;
        if ( *(_DWORD *)(*((_QWORD *)this + 5006) + v82 + 8) )
        {
          do
          {
            v83 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v81 + *(_DWORD *)(*((_QWORD *)this + 5006) + v82 + 4)));
            (*(void (__fastcall **)(__int64, __int64, __int64, bool *))(*(_QWORD *)v83 + 144LL))(v83, v20, v10, v9);
            ++v81;
          }
          while ( v81 < *(_DWORD *)(*((_QWORD *)this + 5006) + v82 + 8) );
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_p(v18, &EventPagingEndPreparation, v10, *((_QWORD *)this + v79 + 143));
        if ( *((_DWORD *)this + v79 + 414) != *((_DWORD *)this + v79 + 478)
          || *((_DWORD *)this + v79 + 542) != *((_DWORD *)this + v79 + 606) )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, v79, 0LL, 0LL, 0LL, 0);
        }
        v18 = *((_QWORD *)this + v79 + 143);
        if ( v18 )
          *(_DWORD *)(v18 + 172) = *(_DWORD *)(v18 + 168);
        v79 = (unsigned int)(v79 + 1);
      }
      while ( (unsigned int)v79 < *((_DWORD *)this + 1604) );
      v80 = a5;
      v19 = a2;
      v77 = a3;
    }
    if ( a4 )
    {
      v84 = *((_QWORD *)this + 2);
      v126 = 0;
      VidSchSignalSyncObjectsFromGpu(
        *(unsigned int *)(*(_QWORD *)(v84 + 408) + 52LL),
        *(_QWORD **)(*(_QWORD *)(v84 + 408) + 200LL),
        1LL,
        (char *)&v124,
        0,
        &v123);
      v85 = *((_DWORD *)this + 1604);
      if ( v85 > 1 )
        VidSchWaitForPagingFence(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL), v122, v80, (unsigned int)((1 << v85) - 1));
    }
    *((_QWORD *)this + 805) = 0LL;
    *((_QWORD *)this + 806) = 0LL;
    *((_DWORD *)this + 2) = 0;
  }
  if ( *(_DWORD *)v19 == 200 )
  {
    v98 = (struct _KEVENT *)(*((_QWORD *)v19 + 2) + 72LL);
LABEL_194:
    KeSetEvent(v98, 0, 0);
    goto LABEL_195;
  }
  if ( !*v77 && v12 && _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 40, 0xFFFFFFFF) == 1 )
  {
    v98 = (struct _KEVENT *)(v12 + 21);
    goto LABEL_194;
  }
LABEL_195:
  result = (unsigned int)v110;
  *((_DWORD *)v19 + 19) = v110;
  return result;
}
