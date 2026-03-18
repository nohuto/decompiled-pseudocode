/*
 * XREFs of ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0
 * Callers:
 *     ?ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z @ 0x1C0035FBC (-ProcessPendingTerminations@VIDMM_WORKER_THREAD@@AEAAX_NPEA_N1@Z.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0039848 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0003ED4 (VidSchiMarkDeviceAsError.c)
 *     ?NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00041A8 (-NotifyDeferredDestructionComplete@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C00069D0 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1C000EBC0 (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 *     VidSchCancelDeviceCommand @ 0x1C001C18C (VidSchCancelDeviceCommand.c)
 *     VidSchSuspendResumeDevice @ 0x1C001D320 (VidSchSuspendResumeDevice.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00321E8 (-CleanupAllocationCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003369C (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0033820 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00341E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C003A96C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?CalculateLockData@VIDMM_GLOBAL@@IEAA?AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z @ 0x1C004BAD0 (-CalculateLockData@VIDMM_GLOBAL@@IEAA-AUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004C0F0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004CFC0 (-EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004D098 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C004DE74 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C004EEA4 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0050684 (-NeedsApertureForLock@VIDMM_GLOBAL@@IEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00506B0 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C005202C (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00534AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C00539E8 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z @ 0x1C0054128 (-UnpinOneAllocation@VIDMM_GLOBAL@@QEAA_NPEAUVIDMM_ALLOC@@W4VIDMM_UNPIN_ACTION@@_N@Z.c)
 *     ?UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z @ 0x1C0054290 (-UpdateAllocationPriority@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@K@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00544F8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0057A94 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00596FC (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00718AC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessDeferredCommand(
        ADAPTER_RENDER **this,
        struct _VIDMM_DEFERRED_COMMAND *a2,
        bool *a3,
        bool a4,
        unsigned __int64 a5,
        struct _VIDSCH_SYNC_OBJECT *a6,
        bool a7,
        struct VIDMM_ALLOC **a8)
{
  struct _VIDMM_DEFERRED_COMMAND *v8; // r15
  bool *v10; // rax
  __int64 v11; // rdi
  struct _VIDMM_GLOBAL_ALLOC ***v12; // rsi
  BOOL v13; // ecx
  VIDMM_DEVICE *v14; // rbx
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v22; // rbx
  __int64 v23; // rax
  bool *v24; // rbx
  int inited; // eax
  int v26; // eax
  unsigned int v27; // r13d
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rdx
  _QWORD *v36; // r8
  _QWORD *v37; // rcx
  struct _VIDMM_GLOBAL_ALLOC ***v38; // rax
  char v39; // al
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  _QWORD *v43; // rcx
  __int64 v44; // rcx
  struct VIDMM_ALLOC **v45; // rdx
  struct VIDMM_ALLOC **v46; // rcx
  VIDMM_DEVICE *v47; // r8
  struct VIDMM_ALLOC *v48; // rax
  __int64 v49; // r9
  __int64 v50; // rax
  VIDMM_GLOBAL *v51; // rcx
  _QWORD *v52; // rax
  VIDMM_DEVICE *v53; // rcx
  VIDMM_DEVICE *v54; // rax
  struct VIDMM_ALLOC **v55; // r8
  _QWORD **v56; // rdx
  _QWORD *v57; // r12
  __int64 v58; // r15
  __int64 v59; // rbx
  __int64 v60; // r9
  __int64 v61; // rax
  VIDMM_GLOBAL *v62; // rcx
  __int64 v63; // rax
  struct _VIDMM_LOCAL_ALLOC *v64; // r8
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // r9
  __int64 v68; // rax
  char v69; // al
  __int64 v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rcx
  __int64 v74; // rcx
  _QWORD *v75; // rdi
  __int64 v76; // rcx
  _QWORD *v77; // rax
  volatile signed __int32 *v78; // rcx
  int updated; // eax
  _QWORD *v80; // rax
  _QWORD **v81; // r13
  _QWORD *v82; // rbx
  _QWORD *i; // rdi
  int v84; // eax
  _QWORD *v85; // rax
  __int64 v86; // rdx
  _QWORD *v87; // rcx
  __int64 v88; // rcx
  struct VIDMM_ALLOC **v89; // rbx
  int *v90; // rax
  int v92; // [rsp+20h] [rbp-E0h]
  char v93; // [rsp+40h] [rbp-C0h]
  char v94; // [rsp+41h] [rbp-BFh]
  VIDMM_DEVICE *v97; // [rsp+58h] [rbp-A8h]
  VIDMM_DEVICE *v98; // [rsp+58h] [rbp-A8h]
  int v99; // [rsp+58h] [rbp-A8h]
  VIDMM_DEVICE *v100; // [rsp+58h] [rbp-A8h]
  struct VIDMM_ALLOC **v101; // [rsp+60h] [rbp-A0h]
  int v102; // [rsp+68h] [rbp-98h]
  unsigned __int8 v103[4]; // [rsp+6Ch] [rbp-94h] BYREF
  BOOL v104; // [rsp+70h] [rbp-90h]
  int v105; // [rsp+78h] [rbp-88h] BYREF
  PRKPROCESS **v106; // [rsp+80h] [rbp-80h]
  struct VIDMM_ALLOC *v107; // [rsp+88h] [rbp-78h] BYREF
  struct _VIDMM_LOCAL_ALLOC *v108; // [rsp+90h] [rbp-70h]
  int v109; // [rsp+98h] [rbp-68h]
  struct _VIDMM_DEFERRED_COMMAND *v110; // [rsp+A0h] [rbp-60h]
  struct _VIDSCH_SYNC_OBJECT *v111; // [rsp+A8h] [rbp-58h]
  _QWORD v112[7]; // [rsp+B0h] [rbp-50h] BYREF
  _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  struct _KAPC_STATE v114; // [rsp+118h] [rbp+18h] BYREF

  v8 = a2;
  v110 = a2;
  v10 = a3;
  *a8 = 0LL;
  v11 = 0LL;
  v12 = (struct _VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)a2 + 2);
  v111 = a6;
  v106 = 0LL;
  v108 = 0LL;
  LOBYTE(v104) = 0;
  if ( v12 )
  {
    v106 = (PRKPROCESS **)*v12;
    v11 = (__int64)*v106;
    v13 = (*((_DWORD *)*v106 + 19) & 0x10000000) != 0;
    v108 = (*v106)[12];
    v104 = v13;
    v10 = a3;
  }
  v14 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
  v15 = 0;
  v94 = 0;
  v93 = 0;
  v97 = v14;
  if ( !v14 )
  {
    v14 = (VIDMM_DEVICE *)v12[1];
    v97 = v14;
  }
  *v10 = 0;
  VIDMM_GLOBAL::StartPreparation(this, 0LL, v14, v12, *(_DWORD *)a2);
  v17 = *((_QWORD *)v14 + 4);
  v18 = 0LL;
  if ( *(_BYTE *)(v17 + 172) || _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 168), 0, 0) )
  {
    *((_DWORD *)v8 + 19) = -1071775232;
    *((_BYTE *)v8 + 72) = 1;
  }
  if ( *((_BYTE *)v8 + 72) )
  {
    v19 = *(_DWORD *)v8 - 203;
    if ( v19 <= 7 )
    {
      v16 = 233LL;
      if ( _bittest((const int *)&v16, v19) )
      {
        v15 = *((_DWORD *)v8 + 19);
LABEL_169:
        v24 = a3;
        goto LABEL_170;
      }
    }
    if ( *(_DWORD *)v8 == 113 )
      *((_BYTE *)v8 + 64) = 0;
  }
  v20 = *(int *)v8;
  if ( (int)v20 <= 207 )
  {
    switch ( (_DWORD)v20 )
    {
      case 0xCF:
        if ( !*((_DWORD *)v12 + 38) && (*((_BYTE *)v12 + 25) & 1) == 0 )
          VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)v12, *((_BYTE *)v8 + 32) & 1);
        _InterlockedDecrement((volatile signed __int32 *)v12 + 41);
        goto LABEL_169;
      case 0x71:
        updated = VIDMM_GLOBAL::CommitVirtualAddressRangeSystemCommand(
                    0LL,
                    (struct _VIDMM_DEFERRED_COMMAND *)((char *)v8 + 32),
                    a8);
        break;
      case 0x77:
        updated = VIDMM_GLOBAL::UpdateGpuVirtualAddressSystemCommand(
                    (VIDMM_GLOBAL *)this,
                    *((struct VIDSCH_DEVICE_COMMAND_UPDATEGPUVA **)v8 + 4),
                    a8);
        break;
      case 0xC8:
        v29 = *((_DWORD *)v12 + 7) & 3;
        if ( v29 == 2 )
        {
          VIDMM_GLOBAL::NotifyAllocationEviction((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)v12, 0, 0LL, 0LL);
        }
        else if ( v29 == 1 )
        {
          VIDMM_DEVICE::UnfaultCommitment((VIDMM_DEVICE *)(unsigned int)(v20 - 200), (struct VIDMM_ALLOC *)v12);
        }
        if ( (*((_BYTE *)v12 + 25) & 1) != 0 )
          VIDMM_GLOBAL::UnpinOneAllocation(this, v12, 3LL, 0LL);
        VIDMM_DEVICE::CleanupAllocationCommitment(v97, (struct VIDMM_ALLOC *)v12);
        DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v11 + 312));
        if ( *((int *)v12[12] + 2) > 0 )
        {
          memset(v112, 0, sizeof(v112));
          v33 = *((_QWORD *)v97 + 4);
          LODWORD(v112[6]) = 3;
          v112[4] = v12;
          VidSchCancelDeviceCommand(v33, (__int64)v112, 1, 0);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 312), v30, v31, v32);
        if ( (**(_DWORD **)(v11 + 472) & 0x20000000) == 0 )
        {
          v69 = 1;
LABEL_112:
          if ( v69 && !v104 )
          {
            v70 = *(_QWORD *)(v11 + 128);
            if ( v70 )
            {
              LOBYTE(v92) = 1;
              (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, struct _VIDMM_LOCAL_ALLOC *))(*(_QWORD *)v70 + 48LL))(
                v70,
                v11,
                0LL,
                0LL,
                v92,
                v108);
              VIDMM_GLOBAL::FlushPagingBufferInternal(
                (VIDMM_GLOBAL *)this,
                *(_DWORD *)(v11 + 76) & 0x3F,
                0,
                0LL,
                0LL,
                0);
            }
            if ( *(_QWORD *)(v11 + 256) )
            {
              v71 = (_QWORD *)(v11 + 224);
              v72 = *(_QWORD *)(v11 + 224);
              v73 = *(_QWORD **)(v11 + 232);
              if ( *(_QWORD *)(v72 + 8) != v11 + 224 || (_QWORD *)*v73 != v71 )
                __fastfail(3u);
              *v73 = v72;
              *(_QWORD *)(v72 + 8) = v73;
              *v71 = 0LL;
              v74 = *(_QWORD *)(v11 + 256);
              *(_QWORD *)(v11 + 232) = 0LL;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v74 + 88LL))(v74, v11);
            }
            if ( (*(_DWORD *)(v11 + 84) & 2) != 0 )
            {
              VIDMM_SEGMENT::UnlockAllocationBackingStore(
                (struct VIDMM_GLOBAL *)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v11,
                v108);
              VIDMM_GLOBAL::ReturnPinnedBackingStore((VIDMM_GLOBAL *)this, *(_QWORD *)(v11 + 8));
              *(_DWORD *)(v11 + 84) &= ~2u;
            }
            DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 4980));
            v75 = (_QWORD *)(v11 + 400);
            if ( *v75 )
            {
              v76 = *v75;
              v77 = (_QWORD *)v75[1];
              if ( *(_QWORD **)(*v75 + 8LL) != v75 || (_QWORD *)*v77 != v75 )
                __fastfail(3u);
              *v77 = v76;
              *(_QWORD *)(v76 + 8) = v77;
              *v75 = 0LL;
            }
            this[4981] = 0LL;
            ExReleasePushLockExclusiveEx(this + 4980, 0LL);
            KeLeaveCriticalRegion();
          }
          *((_DWORD *)v12 + 7) |= 4u;
          v78 = (volatile signed __int32 *)v12[24];
          if ( v78 && _InterlockedExchangeAdd(v78 + 8, 0xFFFFFFFF) == 1 )
            ADAPTER_RENDER::NotifyDeferredDestructionComplete(this[2], (struct DXGTERMINATIONTRACKER *)v12[24]);
          goto LABEL_169;
        }
        DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v11 + 312));
        v35 = (__int64)*v12;
        v36 = *v12 + 5;
        v37 = (_QWORD *)*v36;
        while ( v37 != v36 )
        {
          v38 = (struct _VIDMM_GLOBAL_ALLOC ***)(v37 - 5);
          v37 = (_QWORD *)*v37;
          if ( v38 != v12 && (*((_DWORD *)v38 + 7) & 4) == 0 )
          {
            v39 = 0;
            goto LABEL_65;
          }
        }
        v39 = 1;
LABEL_65:
        if ( v35 == *(_QWORD *)(v11 + 96) )
        {
          if ( v39 )
          {
            v40 = WdLogNewEntry5_WdEvent(v37, v35);
            *(_QWORD *)(v40 + 24) = v11;
            *(_QWORD *)(v40 + 32) = v12;
            WdLogEvent5_WdEvent(v40);
            if ( *(_QWORD *)(v11 + 256) )
            {
              v41 = (_QWORD *)(v11 + 224);
              v42 = *(_QWORD *)(v11 + 224);
              v43 = *(_QWORD **)(v11 + 232);
              if ( *(_QWORD *)(v42 + 8) != v11 + 224 || (_QWORD *)*v43 != v41 )
                __fastfail(3u);
              *v43 = v42;
              *(_QWORD *)(v42 + 8) = v43;
              v44 = *(_QWORD *)(v11 + 256);
              *v41 = 0LL;
              *(_QWORD *)(v11 + 232) = 0LL;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 88LL))(v44, v11);
            }
            *(_BYTE *)(*(_QWORD *)(v11 + 96) + 32LL) |= 2u;
            if ( (*(_DWORD *)(v11 + 84) & 2) != 0 )
            {
              VIDMM_SEGMENT::UnlockAllocationBackingStore(
                (struct VIDMM_GLOBAL *)this,
                (struct _VIDMM_GLOBAL_ALLOC *)v11,
                0LL);
              VIDMM_GLOBAL::ReturnPinnedBackingStore((VIDMM_GLOBAL *)this, *(_QWORD *)(v11 + 8));
              *(_DWORD *)(v11 + 84) &= ~2u;
            }
            v45 = (struct VIDMM_ALLOC **)(v11 + 288);
            v46 = *(struct VIDMM_ALLOC ***)(v11 + 288);
            v101 = *(struct VIDMM_ALLOC ***)(v11 + 96);
            do
            {
              if ( v46 == v45 )
              {
                v45 = 0LL;
                v94 = 1;
                v93 = 1;
                v46 = (struct VIDMM_ALLOC **)v12[2][5];
                if ( v46 )
                {
                  v48 = v46[7];
                  if ( v48 )
                  {
                    if ( *((_DWORD *)v48 + 14) )
                    {
                      v107 = 0LL;
                      if ( (int)VIDMM_GLOBAL::OpenOneAllocation(
                                  (VIDMM_GLOBAL *)this,
                                  this[5001],
                                  (struct _VIDMM_GLOBAL_ALLOC *)v11,
                                  0LL,
                                  0,
                                  0LL,
                                  &v107,
                                  v103) >= 0 )
                      {
                        LOBYTE(v62) = 0;
                        v93 = 0;
                        v94 = 0;
                        v64 = *(struct _VIDMM_LOCAL_ALLOC **)v107;
                        *(_DWORD *)(v11 + 84) |= 4u;
                        *(_QWORD *)(v11 + 96) = v64;
                        if ( *(int *)(v11 + 340) <= 0
                          || (v102 = VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(
                                       v62,
                                       (struct _VIDMM_LOCAL_ALLOC *)v101,
                                       v64),
                              v102 >= 0) )
                        {
                          v46 = v101;
                          if ( v101[1] )
                          {
                            v67 = *(_QWORD *)(v11 + 128);
                            if ( v67 )
                            {
                              VidMmRecordAlloc((VIDMM_GLOBAL *)this, v11, (__int64)v101, v67, *(_QWORD *)(v11 + 16), 1);
                              VidMmRecordAlloc(
                                (VIDMM_GLOBAL *)this,
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
                          _InterlockedIncrement(&dword_1C00274C4);
                          v66 = (_QWORD *)WdLogNewEntry5_WdLowResource(v65);
                          v66[3] = v11;
                          v66[4] = *(_QWORD *)(v11 + 8);
                          v66[5] = v102;
                          WdLogEvent5_WdLowResource(v66);
                          v109 = 0;
                          VIDMM_GLOBAL::CloseOneAllocation((VIDMM_GLOBAL *)this, v107, 0LL, 0, 0, 0LL);
                          *(_QWORD *)(v11 + 96) = 0LL;
                          *(_DWORD *)(v11 + 84) &= ~4u;
                          v94 = 1;
                          v93 = 1;
                        }
                      }
                      else
                      {
                        _InterlockedIncrement(&dword_1C00274C4);
                        v63 = WdLogNewEntry5_WdLowResource(v62);
                        *(_QWORD *)(v63 + 24) = v11;
                        *(_QWORD *)(v63 + 32) = *(_QWORD *)(v11 + 8);
                        WdLogEvent5_WdLowResource(v63);
                      }
                    }
                    else
                    {
                      *(_DWORD *)(v11 + 84) |= 1u;
                    }
                  }
                }
                goto LABEL_105;
              }
              v47 = (VIDMM_DEVICE *)(v46 - 7);
              v46 = (struct VIDMM_ALLOC **)*v46;
              v98 = v47;
            }
            while ( (*((_BYTE *)v47 + 32) & 2) != 0 );
            v49 = *(_QWORD *)(v11 + 128);
            if ( v49 )
            {
              VidMmRecordAlloc((VIDMM_GLOBAL *)this, v11, *(_QWORD *)(v11 + 96), v49, *(_QWORD *)(v11 + 16), 1);
              VidMmRecordAlloc(
                (VIDMM_GLOBAL *)this,
                v11,
                (__int64)v98,
                *(_QWORD *)(v11 + 128),
                *(_QWORD *)(v11 + 16),
                0);
              v47 = v98;
            }
            v50 = *(_QWORD *)(v11 + 128);
            *(_QWORD *)(v11 + 96) = v47;
            if ( v50 )
            {
              if ( (*(_DWORD *)(v50 + 56) & 0x1001) != 0 && *(int *)(v11 + 340) > 0 )
              {
                KeStackAttachProcess(**((PRKPROCESS **)v47 + 1), &ApcState);
                v99 = VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(
                        v51,
                        (struct _VIDMM_LOCAL_ALLOC *)v101,
                        *(struct _VIDMM_LOCAL_ALLOC **)(v11 + 96));
                KeUnstackDetachProcess(&ApcState);
                if ( v99 < 0 )
                {
                  _InterlockedIncrement(&dword_1C00274C4);
                  v52 = (_QWORD *)WdLogNewEntry5_WdLowResource(v46);
                  v52[3] = v11;
                  v52[4] = *(_QWORD *)(v11 + 8);
                  v52[5] = v99;
                  WdLogEvent5_WdLowResource(v52);
                  v53 = (VIDMM_DEVICE *)(v11 + 288);
                  v54 = *(VIDMM_DEVICE **)(v11 + 288);
                  v100 = v54;
                  if ( v54 != (VIDMM_DEVICE *)(v11 + 288) )
                  {
                    v55 = v101;
                    do
                    {
                      if ( (struct VIDMM_ALLOC **)((char *)v54 - 56) != v55 )
                      {
                        v56 = (_QWORD **)((char *)v54 - 16);
                        v57 = *v56;
                        if ( *v56 != v56 )
                        {
                          v58 = (__int64)v54 - 16;
                          do
                          {
                            v59 = *(_QWORD *)(*(v57 - 4) + 32LL);
                            VidSchiMarkDeviceAsError(v59, 13);
                            VidSchSuspendResumeDevice(v59, 1, 0);
                            VidSchSuspendResumeDevice(v59, 0, 0);
                            v57 = (_QWORD *)*v57;
                          }
                          while ( v57 != (_QWORD *)v58 );
                          v54 = v100;
                          v53 = (VIDMM_DEVICE *)(v11 + 288);
                          v55 = v101;
                        }
                      }
                      v54 = *(VIDMM_DEVICE **)v54;
                      v100 = v54;
                    }
                    while ( v54 != v53 );
                    v8 = v110;
                    v15 = 0;
                  }
                  v60 = *(_QWORD *)(v11 + 128);
                  *(_DWORD *)(v11 + 76) |= 0x10000000u;
                  v61 = *(_QWORD *)(v11 + 16);
                  *(_DWORD *)(v11 + 80) ^= (*(_DWORD *)(v11 + 80) ^ *(_DWORD *)(v60 + 20)) & 0x1F;
                  v93 = 1;
                  v94 = 1;
                  VidMmRecordAlloc((VIDMM_GLOBAL *)this, v11, (__int64)v101, v60, v61, 0);
                  VidMmRecordAlloc(
                    (VIDMM_GLOBAL *)this,
                    v11,
                    *(_QWORD *)(v11 + 96),
                    *(_QWORD *)(v11 + 128),
                    *(_QWORD *)(v11 + 16),
                    1);
                }
              }
            }
LABEL_105:
            v68 = WdLogNewEntry5_WdEvent(v46, v45);
            *(_QWORD *)(v68 + 24) = *(_QWORD *)(v11 + 96);
            WdLogEvent5_WdEvent(v68);
            goto LABEL_108;
          }
        }
        else if ( v39 )
        {
          *(_BYTE *)(v35 + 32) |= 2u;
LABEL_108:
          if ( v93 )
            *(_QWORD *)(v11 + 96) = 0LL;
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v11 + 312), v35, (__int64)v36, v34);
        v69 = v94;
        goto LABEL_112;
      case 0xCB:
        if ( *(_BYTE *)(v11 + 93) )
        {
          v15 = -1071775482;
          goto LABEL_169;
        }
        if ( !*(_DWORD *)(v11 + 156) )
        {
          if ( *(_QWORD *)(v11 + 128) )
          {
            v26 = **(_DWORD **)(v11 + 472);
            if ( (v26 & 0x40000000) == 0 && ((v26 & 0x20000000) == 0 || (v26 & 0x80000000) == 0) && (v26 & 0x80000) == 0 )
            {
              VIDMM_WORKER_THREAD::SuspendAccessToAllocation(*this, (struct _VIDMM_GLOBAL_ALLOC *)v11);
              VIDMM_GLOBAL::EvictAllocation((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)v12);
              VIDMM_GLOBAL::EvictAllReclaimedAllocation((VIDMM_GLOBAL *)this);
              v18 = 0LL;
            }
          }
        }
        v27 = 4;
        v28 = **(_DWORD **)(v11 + 472);
        if ( (v28 & 0x20000) != 0 )
        {
          if ( *((_DWORD *)v8 + 8) )
          {
            v27 = 6;
          }
          else
          {
            v27 = 5;
            *((_DWORD *)v8 + 8) = 5;
          }
        }
        else if ( (v28 & 0x40000000) != 0 || v28 < 0 )
        {
          v27 = 3;
        }
        LOBYTE(v18) = a7;
        v24 = a3;
        v15 = VIDMM_GLOBAL::PageInOneAllocation(this, v12, v27, v18, a3, a8);
        if ( v15 >= 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 156));
        VIDMM_GLOBAL::RecommitTrimmedList((VIDMM_GLOBAL *)this);
        goto LABEL_170;
      default:
        v21 = (unsigned int)(v20 - 205);
        if ( (_DWORD)v20 == 205 )
        {
          VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)v12, *((_BYTE *)v8 + 32) & 1);
          goto LABEL_169;
        }
        if ( (_DWORD)v20 == 206 )
        {
          v22 = **v12;
          if ( *((_DWORD *)v22 + 84)
            && VIDMM_GLOBAL::NeedsApertureForLock((VIDMM_GLOBAL *)this, **v12)
            && (*((_DWORD *)v22 + 19) & 0x40) == 0 )
          {
            v23 = WdLogNewEntry5_WdWarning();
            *(_QWORD *)(v23 + 24) = v22;
            WdLogEvent5_WdWarning(v23);
            v15 = -1073741823;
            goto LABEL_169;
          }
          if ( !(*((_BYTE *)v12 + 25) & 1 | *((_DWORD *)v12 + 38)) || *(int *)(*((_QWORD *)v22 + 59) + 4LL) >= 2 )
            goto LABEL_169;
          v24 = a3;
          LOBYTE(v18) = a7;
          inited = VIDMM_GLOBAL::PageInOneAllocation(this, v12, 0LL, v18, a3, a8);
LABEL_29:
          v15 = inited;
          goto LABEL_170;
        }
LABEL_145:
        v80 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v21, v16);
        v80[7] = 0LL;
        v80[3] = 270LL;
        v80[4] = 5LL;
        v80[5] = v20;
        v80[6] = -1073741811LL;
        WdLogEvent5_WdCriticalError(v80);
        goto LABEL_169;
    }
    v24 = a3;
    v15 = updated;
    if ( updated == -1073741267 )
      *a3 = 1;
    goto LABEL_170;
  }
  if ( (_DWORD)v20 == 208 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v11 + 464, 0LL);
    if ( *(_QWORD *)(v11 + 256) )
    {
      v85 = (_QWORD *)(v11 + 224);
      v86 = *(_QWORD *)(v11 + 224);
      v87 = *(_QWORD **)(v11 + 232);
      if ( *(_QWORD *)(v86 + 8) != v11 + 224 || (_QWORD *)*v87 != v85 )
        __fastfail(3u);
      *v87 = v86;
      *(_QWORD *)(v86 + 8) = v87;
      v88 = *(_QWORD *)(v11 + 256);
      *v85 = 0LL;
      *(_QWORD *)(v11 + 232) = 0LL;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v88 + 88LL))(v88, v11);
      VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, *(_DWORD *)(v11 + 76) & 0x3F, 0, 0LL, 0LL, 0);
    }
    VIDMM_GLOBAL::CalculateLockData(this, &v105, v12);
    if ( v105 == 4 )
    {
      v89 = a8;
    }
    else
    {
      KeStackAttachProcess(*v106[1], &v114);
      v89 = a8;
      v15 = VIDMM_GLOBAL::LockInternal(
              (VIDMM_GLOBAL *)this,
              (struct VIDMM_LOCK2_DATA *)&v105,
              (struct VIDMM_ALLOC *)v12,
              *((void ***)v8 + 4),
              *((_DWORD *)v8 + 10),
              a3,
              a8);
      KeUnstackDetachProcess(&v114);
      if ( v105 != 4 )
      {
LABEL_168:
        ExReleasePushLockExclusiveEx(v11 + 464, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_169;
      }
    }
    v15 = VIDMM_GLOBAL::LockInternal(
            (VIDMM_GLOBAL *)this,
            (struct VIDMM_LOCK2_DATA *)&v105,
            (struct VIDMM_ALLOC *)v12,
            *((void ***)v8 + 4),
            *((_DWORD *)v8 + 10),
            a3,
            v89);
    goto LABEL_168;
  }
  if ( (_DWORD)v20 == 209 )
  {
    v24 = a3;
    inited = VIDMM_GLOBAL::InitContextAllocation((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)v12, 1u, a3, a8);
    goto LABEL_29;
  }
  if ( (_DWORD)v20 != 210 )
  {
    v21 = (unsigned int)(v20 - 211);
    if ( (_DWORD)v20 == 211 )
    {
      v81 = (_QWORD **)(*((_QWORD *)v8 + 4) + 288LL);
      v82 = *v81;
      if ( *v81 != v81 )
      {
        do
        {
          for ( i = (_QWORD *)*(v82 - 2); i != v82 - 2; i = (_QWORD *)*i )
          {
            v16 = (__int64)(i - 5);
            if ( (*((_DWORD *)i - 3) & 3) == 2 )
              VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)v16, 0);
          }
          v82 = (_QWORD *)*v82;
        }
        while ( v82 != v81 );
        v15 = 0;
      }
      goto LABEL_169;
    }
    if ( (_DWORD)v20 == 212 )
    {
      VIDMM_GLOBAL::UpdateAllocationPriority((VIDMM_GLOBAL *)this, (struct VIDMM_ALLOC *)v12, *((_DWORD *)v8 + 8));
      goto LABEL_169;
    }
    goto LABEL_145;
  }
  if ( !(*((_BYTE *)v12 + 25) & 1 | *((_DWORD *)v12 + 38)) )
    goto LABEL_169;
  v24 = a3;
  if ( *(int *)(*(_QWORD *)(v11 + 472) + 4LL) < 2 )
  {
    LOBYTE(v18) = a7;
    v84 = VIDMM_GLOBAL::PageInOneAllocation(this, v12, 0LL, v18, a3, a8);
    *(_DWORD *)(v11 + 80) &= ~0x40u;
    v15 = v84;
  }
LABEL_170:
  if ( *v24 )
  {
    VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)this, v16, 0LL, 0, 0LL, 0LL);
  }
  else
  {
    v90 = (int *)*((_QWORD *)v8 + 3);
    if ( v90 )
      *v90 = v15;
    VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)this, v16, 0LL, a4, a5, v111);
  }
  if ( *(_DWORD *)v8 == 200 )
  {
    KeSetEvent((PRKEVENT)(*((_QWORD *)v8 + 2) + 72LL), 0, 0);
  }
  else if ( !*a3 && v12 )
  {
    VIDMM_ALLOC::DecrementPagingPacketReferenceCount((VIDMM_ALLOC *)v12);
  }
  *((_DWORD *)v8 + 19) = v15;
  return (unsigned int)v15;
}
