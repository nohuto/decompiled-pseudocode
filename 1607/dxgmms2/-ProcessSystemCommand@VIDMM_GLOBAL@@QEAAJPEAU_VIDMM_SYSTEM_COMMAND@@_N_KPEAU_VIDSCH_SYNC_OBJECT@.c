/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0087A3C (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     ?SystemMemorySegment@VIDMM_SEGMENT@@QEBAEXZ @ 0x1C00104AC (-SystemMemorySegment@VIDMM_SEGMENT@@QEBAEXZ.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0012394 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0047FC4 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0048224 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C004CB78 (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C004E3BC (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004E990 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C004EBAC (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004EC20 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004F948 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C004FC2C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z @ 0x1C0051FEC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005BB70 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C005BD94 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C005BEE4 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0069D54 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0069FF8 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C006A29C (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C006A2E4 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C006A360 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1C006AAE8 (VidSchSignalPagingFences.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D7AC (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C006F124 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A120 (-MoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C008AB00 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C008B06C (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C008CAE8 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0097DDC (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0098B20 (-FreeVPRReserve@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0098BC8 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C009A420 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z @ 0x1C009A82C (-TrimMarkedForEvictionAllocations@VIDMM_SEGMENT@@QEAAXPEA_K@Z.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009ABD0 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009B268 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C009F530 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        unsigned __int64 this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3,
        unsigned __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  unsigned int v5; // r11d
  unsigned __int64 v6; // r12
  char v7; // r14
  int v8; // eax
  struct _VIDMM_SYSTEM_COMMAND *v9; // rsi
  VIDMM_GLOBAL *v10; // rdi
  int v11; // r13d
  __int64 v12; // r15
  unsigned int v13; // ebx
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // r14d
  unsigned int v17; // ebx
  VIDMM_SEGMENT *v18; // rcx
  __int64 v19; // rcx
  char v20; // r8
  unsigned int v21; // eax
  VIDMM_SEGMENT *v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  unsigned int m; // r14d
  _DWORD *v28; // rax
  int v29; // r9d
  unsigned int j; // ebx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned int k; // eax
  __int64 v34; // rcx
  char v35; // r8
  __int64 v36; // rcx
  VIDMM_GLOBAL *v37; // rcx
  int updated; // eax
  __int64 v39; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  __int64 v43; // rcx
  int v44; // ebx
  __int64 v45; // r14
  VIDMM_SEGMENT *v46; // rcx
  __int64 v47; // r9
  __int64 v48; // r8
  _QWORD *v49; // rcx
  CVirtualAddressAllocator *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  VIDMM_DEVICE *v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned int i; // ebx
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int64 *v59; // rcx
  __int64 v60; // rdx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  _QWORD *v64; // rax
  struct _VIDSCH_SYNC_OBJECT *v66; // [rsp+28h] [rbp-89h]
  bool v67[8]; // [rsp+60h] [rbp-51h] BYREF
  unsigned __int64 v68; // [rsp+68h] [rbp-49h] BYREF
  struct VIDMM_ALLOC *v69; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v70; // [rsp+78h] [rbp-39h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v71; // [rsp+80h] [rbp-31h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v72; // [rsp+88h] [rbp-29h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-21h] BYREF

  v5 = 0;
  v72 = a5;
  v6 = a4;
  v71 = a5;
  v7 = a3;
  v8 = *(_DWORD *)a2;
  v9 = a2;
  *(_DWORD *)(this + 48) = -1;
  v10 = (VIDMM_GLOBAL *)this;
  ++*(_QWORD *)(this + 4600);
  v11 = 0;
  LODWORD(v12) = 0;
  v68 = a4;
  v13 = 0;
  v67[0] = a3;
  v70 = a4;
  *(_DWORD *)(this + 8) = v8;
  *(_QWORD *)(this + 6440) = 0LL;
  *(_QWORD *)(this + 6448) = 0LL;
  if ( *(_DWORD *)(this + 6416) )
  {
    do
      VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(v10, v13++, a3, a4);
    while ( v13 < *((_DWORD *)v10 + 1604) );
    v5 = 0;
  }
  v14 = *(int *)v9;
  if ( (int)v14 > 205 )
    goto LABEL_141;
  if ( (_DWORD)v14 == 205 )
  {
    LOBYTE(a3) = 1;
    goto LABEL_140;
  }
  if ( (int)v14 > 116 )
  {
    if ( (int)v14 > 123 )
    {
      switch ( (_DWORD)v14 )
      {
        case '|':
          VIDMM_GLOBAL::TrimOfferCommitmentInternal(
            v10,
            *((struct VIDMM_PROCESS **)v9 + 5),
            *((struct DXGDECOMMITITERATOR **)v9 + 6),
            *(union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS *)((char *)v9 + 56),
            *((_QWORD *)v9 + 8),
            *((unsigned __int64 **)v9 + 9));
          goto LABEL_57;
        case '~':
          v57 = *((_QWORD *)v10 + 464);
          v58 = *((unsigned int *)v9 + 11);
          v67[0] = 0;
          v69 = 0LL;
          v59 = *(unsigned __int64 **)(v57 + 8 * v58);
          v68 = v59[5];
          VIDMM_SEGMENT::TrimMarkedForEvictionAllocations((VIDMM_SEGMENT *)v59, &v68);
          v61 = VIDMM_GLOBAL::MoveResources(v10, v60, *((unsigned int *)v9 + 10), *((unsigned int *)v9 + 11));
          v12 = v61;
          if ( v61 < 0 )
          {
            v63 = WdLogNewEntry5_WdWarning(v62);
            *(_QWORD *)(v63 + 24) = v12;
            WdLogEvent5_WdWarning(v63);
          }
          goto LABEL_57;
        case '\x7F':
          for ( i = 0; i < *((_DWORD *)v10 + 926); ++i )
            VIDMM_SEGMENT::InvalidateAllVirtualAddress(*(VIDMM_SEGMENT **)(*((_QWORD *)v10 + 464) + 8LL * i));
          goto LABEL_57;
      }
      this = (unsigned int)(v14 - 128);
      if ( (_DWORD)v14 == 128 )
      {
        v55 = *((_QWORD *)v9 + 5);
        if ( *((_DWORD *)v9 + 12) )
          VIDMM_SEGMENT::FreeVPRReserve((VIDMM_SEGMENT *)v55);
        else
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(*(VIDMM_LINEAR_POOL **)(v55 + 144), *(void **)(v55 + 448));
        goto LABEL_57;
      }
      if ( (_DWORD)v14 == 129 )
      {
        a2 = (struct _VIDMM_SYSTEM_COMMAND *)*((_QWORD *)v9 + 5);
        v54 = *((_QWORD *)a2 + 17);
        if ( v54 && *((_QWORD *)a2 + 58) )
          VIDMM_CPU_HOST_APERTURE::OfferRange(*(VIDMM_CPU_HOST_APERTURE **)(v54 + 472), a2);
        goto LABEL_57;
      }
      goto LABEL_141;
    }
    if ( (_DWORD)v14 == 123 )
    {
      v53 = (VIDMM_DEVICE *)*((_QWORD *)v9 + 5);
      if ( *((_BYTE *)v9 + 48) )
      {
        VIDMM_DEVICE::IndefinitelySuspend(v53, *((_BYTE *)v9 + 49));
        VIDMM_DEVICE::FaultAllAllocations(v53);
      }
      else
      {
        VIDMM_DEVICE::EnsureSchedulable(v53, 0);
      }
      goto LABEL_57;
    }
    if ( (_DWORD)v14 != 117 )
    {
      if ( (_DWORD)v14 == 118 )
      {
        LODWORD(v12) = VIDMM_GLOBAL::InitPagingProcessVaSpace(v10, *((_DWORD *)v9 + 1), 0);
        if ( (int)v12 < 0 )
        {
          v52 = WdLogNewEntry5_WdAssertion(v51, a2);
          *(_QWORD *)(v52 + 24) = 8976LL;
          WdLogEvent5_WdAssertion(v52);
        }
        goto LABEL_57;
      }
      if ( (_DWORD)v14 != 120 )
      {
        this = (unsigned int)(v14 - 121);
        if ( (_DWORD)v14 == 121 )
        {
          v47 = *((_QWORD *)v9 + 2);
          v48 = *(_QWORD *)(*(_QWORD *)v47 + 8LL);
          v49 = *(_QWORD **)(*(_QWORD *)(v48 + 16) + 8LL * *(unsigned int *)(*((_QWORD *)v10 + 3) + 200LL));
          if ( v49 && *(_DWORD *)(*v49 + 40864LL) )
          {
            if ( (*(_DWORD *)(v48 + 48) & 2) != 0 )
              v50 = *(CVirtualAddressAllocator **)(*v49 + 8LL * (*(_DWORD *)(**(_QWORD **)v47 + 76LL) & 0x3F) + 40352);
            else
              v50 = (CVirtualAddressAllocator *)v49[58];
          }
          else
          {
            v50 = 0LL;
          }
          CVirtualAddressAllocator::FreeAllocMappedVaRangeList(v50, *((struct VIDMM_ALLOC **)v9 + 2));
          goto LABEL_57;
        }
        if ( (_DWORD)v14 == 122 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)v9 + 5) + 24LL))(
            *((_QWORD *)v9 + 5),
            0LL,
            *((_QWORD *)v9 + 6),
            *((_QWORD *)v9 + 7));
          goto LABEL_57;
        }
        goto LABEL_141;
      }
      v15 = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
              v10,
              *((struct CVirtualAddressAllocator **)v9 + 5),
              *((_QWORD *)v9 + 6),
              a4,
              *((_BYTE *)v9 + 64));
      goto LABEL_70;
    }
    KeStackAttachProcess(**((PRKPROCESS **)v10 + 5040), &ApcState);
    updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                v10,
                *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)v9 + 5),
                1u);
LABEL_80:
    LODWORD(v12) = updated;
LABEL_81:
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_57;
  }
  if ( (_DWORD)v14 == 116 )
  {
    v15 = VIDMM_GLOBAL::PageInDeviceInternal(v10, *((struct VIDMM_DEVICE **)v9 + 3), 0, v67, &v69);
    goto LABEL_70;
  }
  if ( (int)v14 <= 107 )
  {
    if ( (_DWORD)v14 == 107 )
    {
      v15 = VIDMM_GLOBAL::RunApertureCoherencyTest(v10);
      goto LABEL_70;
    }
    if ( (_DWORD)v14 == 101 )
    {
      for ( j = 0; j < *((_DWORD *)v10 + 926); ++j )
      {
        v31 = *(_QWORD *)(*((_QWORD *)v10 + 464) + 8LL * j);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 136LL))(v31);
      }
      v32 = 0LL;
      for ( k = 0; k < *((_DWORD *)v10 + 1604); ++k )
      {
        v34 = *((_QWORD *)v10 + 5017) + 456LL * k;
        v35 = *(_BYTE *)(v34 + 420);
        if ( (v35 & 0x10) != 0 )
        {
          v32 |= 1LL << k;
          *(_BYTE *)(v34 + 420) = v35 & 0xEF;
        }
      }
      VIDMM_GLOBAL::RecommitGpuVirtualAddresses(v10, v32);
      goto LABEL_57;
    }
    if ( (_DWORD)v14 != 102 )
    {
      if ( (_DWORD)v14 == 103 )
      {
        VIDMM_GLOBAL::CleanupPrimaryAllocation(0LL, *((struct _VIDMM_GLOBAL_ALLOC **)v9 + 5));
        goto LABEL_57;
      }
      if ( (_DWORD)v14 != 104 )
      {
        this = (unsigned int)(v14 - 105);
        if ( (_DWORD)v14 != 105 )
        {
          if ( (_DWORD)v14 == 106 )
          {
            VIDMM_GLOBAL::ReportVidMmStateWorker(v10);
            goto LABEL_57;
          }
          goto LABEL_141;
        }
        a3 = 0LL;
LABEL_140:
        VIDMM_GLOBAL::EvictOneAllocation(v10, *((__int64 ***)v9 + 2), a3, a4);
        goto LABEL_57;
      }
      v15 = VIDMM_GLOBAL::PageInOneAllocation((__int64)v10, *((__int64 ***)v9 + 2), 4LL, 0LL, v67, &v69);
LABEL_70:
      LODWORD(v12) = v15;
      goto LABEL_57;
    }
    v16 = 0;
    v17 = *((_DWORD *)v9 + 10);
    if ( !*((_DWORD *)v10 + 926) )
      goto LABEL_52;
    while ( 1 )
    {
      VIDMM_SEGMENT::SystemMemorySegment(*(VIDMM_SEGMENT **)(*((_QWORD *)v10 + 464) + 8LL * v16));
      if ( VIDMM_SEGMENT::SystemMemorySegment(v18)
        || *((_DWORD *)v10 + 10025) == -1
        || (LOBYTE(a4) = v5, *(_QWORD *)(v19 + 224) > (unsigned __int64)qword_1C00353F8) )
      {
        LOBYTE(a4) = 1;
      }
      v21 = *(_DWORD *)(v19 + 56);
      a2 = (struct _VIDMM_SYSTEM_COMMAND *)((v21 >> 7) & 1);
      if ( ((v21 >> 7) & 1) != 0 && (v17 & 2) != 0 && v20
        || (v21 & 0x100) != 0 && (v17 & 4) != 0
        || !VIDMM_SEGMENT::SystemMemorySegment((VIDMM_SEGMENT *)v19) && (v17 & 0x10) != 0 )
      {
        goto LABEL_50;
      }
      if ( !(_DWORD)a2 || (v17 & 0x20) == 0 || !(_BYTE)a4 )
        break;
      if ( !VIDMM_SEGMENT::SystemMemorySegment(v22) )
      {
        VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(v23, v17);
LABEL_49:
        v5 = 0;
      }
LABEL_50:
      if ( ++v16 >= *((_DWORD *)v10 + 926) )
      {
        v6 = v68;
LABEL_52:
        for ( m = v5; m < *((_DWORD *)v10 + 1604); ++m )
        {
          LOBYTE(a2) = 1;
          VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)v10, (__int64)a2, m, a4);
        }
        if ( (v17 & 8) == 0 )
        {
          VIDMM_GLOBAL::PurgePageTables(v10, v17);
          v11 = 1;
          VIDMM_GLOBAL::DoDeferredUnlock(v10);
        }
LABEL_56:
        v7 = v67[0];
        goto LABEL_57;
      }
    }
    VIDMM_SEGMENT::PurgeContent(v22, v17, *((_QWORD *)v9 + 6));
    if ( (v17 & 8) == 0 )
    {
      v24 = *(_DWORD **)(*((_QWORD *)v10 + 464) + 8LL * v16);
      v25 = *((_QWORD *)v10 + 5017) + 456LL * (unsigned int)v24[93];
      if ( (v24[14] & 0x1000) != 0 )
        v26 = 0;
      else
        v26 = v24[4] + 1;
      if ( v26 == *(_DWORD *)(v25 + 40) || v26 == *(_DWORD *)(v25 + 24) )
        *(_BYTE *)(v25 + 420) |= 0x80u;
      if ( v26 == *(_DWORD *)(v25 + 48) || v26 == *(_DWORD *)(v25 + 32) )
        *(_BYTE *)(v25 + 421) |= 1u;
    }
    a2 = (struct _VIDMM_SYSTEM_COMMAND *)*(unsigned int *)(*(_QWORD *)(*((_QWORD *)v10 + 464) + 8LL * v16) + 360LL);
    if ( (_DWORD)a2 != -1 )
      (*((void (__fastcall **)(_QWORD, struct _VIDMM_SYSTEM_COMMAND *, _QWORD))v10 + 5008))(
        *((_QWORD *)v10 + 5009),
        a2,
        0LL);
    goto LABEL_49;
  }
  if ( (_DWORD)v14 == 108 )
  {
    v15 = VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage(v10);
    goto LABEL_70;
  }
  if ( (_DWORD)v14 != 110 )
  {
    v36 = (unsigned int)(v14 - 112);
    if ( (_DWORD)v14 == 112 )
    {
      v39 = *((_QWORD *)v9 + 5);
      if ( *(_QWORD *)(v39 + 136) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v10, 0xFFFFFFFF);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE, _QWORD))(**(_QWORD **)(v39 + 136) + 48LL))(
          *(_QWORD *)(v39 + 136),
          v39,
          0LL,
          0LL,
          0,
          0LL);
      }
      if ( *(_QWORD *)(v39 + 264) )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v36, a2, a3, a4);
        VIDMM_GLOBAL::FlushPagingBufferInternal(v10, *(_DWORD *)(v39 + 76) & 0x3F, 0LL, 0LL, 0LL, 0, 0);
        v40 = (_QWORD *)(v39 + 232);
        v41 = *(_QWORD *)(v39 + 232);
        v42 = *(_QWORD **)(v39 + 240);
        if ( *(_QWORD *)(v41 + 8) != v39 + 232 || (_QWORD *)*v42 != v40 )
          __fastfail(3u);
        *v42 = v41;
        *(_QWORD *)(v41 + 8) = v42;
        *v40 = 0LL;
        v43 = *(_QWORD *)(v39 + 264);
        *(_QWORD *)(v39 + 240) = 0LL;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 88LL))(v43, v39);
        VIDMM_GLOBAL::FlushPagingBufferInternal(v10, *(_DWORD *)(v39 + 76) & 0x3F, 0LL, 0LL, 0LL, 0, 0);
      }
      goto LABEL_57;
    }
    this = (unsigned int)(v14 - 114);
    if ( (_DWORD)v14 != 114 )
    {
      if ( (_DWORD)v14 == 115 )
      {
        if ( !*((_QWORD *)v9 + 5) )
        {
          CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)v9 + 6));
          goto LABEL_57;
        }
        KeStackAttachProcess(**((PRKPROCESS **)v10 + 5040), &ApcState);
        CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)v9 + 6));
        goto LABEL_81;
      }
LABEL_141:
      v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
      v64[7] = 0LL;
      v64[3] = 270LL;
      v64[4] = 23LL;
      v64[5] = -1073741811LL;
      v64[6] = v14;
      WdLogEvent5_WdCriticalError(v64);
      goto LABEL_57;
    }
    KeStackAttachProcess(**((PRKPROCESS **)v10 + 5040), &ApcState);
    updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v37, v9);
    goto LABEL_80;
  }
  v44 = 0;
  if ( *((int *)v10 + 926) > 0 )
  {
    v45 = 0LL;
    do
    {
      if ( !VIDMM_SEGMENT::SystemMemorySegment(*(VIDMM_SEGMENT **)(v45 + *((_QWORD *)v10 + 464)))
        && (*((_DWORD *)v46 + 14) & 4) != 0 )
      {
        LODWORD(v12) = VIDMM_SEGMENT::SuspendCpuAccess(v46);
        if ( (int)v12 < 0 )
          break;
      }
      ++v44;
      v45 += 8LL;
    }
    while ( v44 < *((_DWORD *)v10 + 926) );
    goto LABEL_56;
  }
LABEL_57:
  v28 = (_DWORD *)*((_QWORD *)v9 + 4);
  if ( v28 )
    *v28 = v12;
  if ( v11 )
  {
    VIDMM_GLOBAL::EndPreparation(v10, (__int64)a2, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(v10, 0xFFFFFFFF);
    VIDMM_GLOBAL::UnmapAllPagingBuffers(v10);
    if ( v7 )
    {
      LOBYTE(v66) = 0;
      VidSchSignalPagingFences(
        *(_QWORD *)(*((_QWORD *)v10 + 2) + 384LL),
        (unsigned int)&v71,
        (unsigned int)&v70,
        v29,
        -1,
        (__int64)v66);
    }
    else
    {
      KeSetEvent(*((PRKEVENT *)v9 + 1), 0, 0);
    }
  }
  else
  {
    VIDMM_GLOBAL::EndPreparation(v10, (__int64)a2, *((struct _KEVENT **)v9 + 1), v7, v6, v72);
  }
  return (unsigned int)v12;
}
