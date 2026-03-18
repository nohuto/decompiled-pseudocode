/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0079CA0 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C003FFBC (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C004011C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0043E5C (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C00460A8 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0046760 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C004697C (-StartPreparationOnPhysicalAdapter@VIDMM_GLOBAL@@IEAAXI@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0047074 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00472BC (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z @ 0x1C0049B54 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0060F0C (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00624B4 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00628B8 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0062D08 (-DoDeferredUnlock@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062D50 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0062E54 (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     VidSchSignalPagingFences @ 0x1C00631E0 (VidSchSignalPagingFences.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067B40 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007BDA8 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C007D678 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?ResumeCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C008520C (-ResumeCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C0085344 (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00858F8 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0085F84 (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        VIDMM_GLOBAL *this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        __int64 a3,
        unsigned __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  char v5; // r13
  __int64 v8; // r14
  int inited; // r15d
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // ebx
  VIDMM_SEGMENT *v15; // rcx
  int v16; // eax
  int *v17; // rax
  int v18; // r9d
  int v19; // ebx
  VIDMM_SEGMENT **v20; // r10
  int v21; // eax
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // r10
  unsigned int v25; // r8d
  bool v26; // dl
  bool v27; // cl
  _DWORD *v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  unsigned int i; // ebx
  __int64 v33; // rcx
  __int64 v34; // rbx
  unsigned int v35; // r11d
  unsigned int v36; // r10d
  __int64 v37; // rbx
  VIDMM_SEGMENT *v38; // rcx
  int v39; // eax
  _QWORD *v40; // rax
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v42; // r8
  __int64 v43; // r9
  struct VIDMM_ALLOC *v44; // r10
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  int updated; // eax
  __int64 v50; // rdx
  __int64 v51; // r8
  unsigned __int8 v52; // r9
  VIDMM_GLOBAL *v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rbx
  _QWORD *v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rcx
  __int64 v60; // rcx
  bool v62[8]; // [rsp+40h] [rbp-51h] BYREF
  struct VIDMM_ALLOC *v63; // [rsp+48h] [rbp-49h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v64; // [rsp+50h] [rbp-41h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v65; // [rsp+58h] [rbp-39h]
  unsigned __int64 v66; // [rsp+60h] [rbp-31h]
  unsigned __int64 v67; // [rsp+68h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-21h] BYREF

  v62[0] = a3;
  LODWORD(v63) = 0;
  v66 = a4;
  v5 = a3;
  v67 = a4;
  v65 = a5;
  v8 = 0LL;
  v64 = a5;
  inited = 0;
  v10 = *(_DWORD *)a2;
  v11 = 0;
  *((_DWORD *)this + 12) = -1;
  ++*((_QWORD *)this + 575);
  *((_DWORD *)this + 2) = v10;
  *((_QWORD *)this + 805) = 0LL;
  *((_QWORD *)this + 806) = 0LL;
  if ( *((_DWORD *)this + 1604) )
  {
    do
      VIDMM_GLOBAL::StartPreparationOnPhysicalAdapter(this, v11++, a3, a4);
    while ( v11 < *((_DWORD *)this + 1604) );
  }
  v12 = *(int *)a2;
  if ( (int)v12 > 111 )
  {
    switch ( (_DWORD)v12 )
    {
      case 'p':
        v56 = *((_QWORD *)a2 + 5);
        if ( *(_QWORD *)(v56 + 128) )
        {
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE, _QWORD))(**(_QWORD **)(v56 + 128) + 48LL))(
            *(_QWORD *)(v56 + 128),
            v56,
            0LL,
            0LL,
            0,
            0LL);
        }
        if ( *(_QWORD *)(v56 + 256) )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v56 + 76) & 0x3F, 0LL, 0LL, 0LL, 0);
          v57 = (_QWORD *)(v56 + 224);
          v58 = *(_QWORD *)(v56 + 224);
          v59 = *(_QWORD **)(v56 + 232);
          if ( *(_QWORD *)(v58 + 8) != v56 + 224 || (_QWORD *)*v59 != v57 )
            __fastfail(3u);
          *v59 = v58;
          *(_QWORD *)(v58 + 8) = v59;
          v60 = *(_QWORD *)(v56 + 256);
          *v57 = 0LL;
          *(_QWORD *)(v56 + 232) = 0LL;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 88LL))(v60, v56);
          VIDMM_GLOBAL::FlushPagingBufferInternal(this, *(_DWORD *)(v56 + 76) & 0x3F, 0LL, 0LL, 0LL, 0);
        }
        goto LABEL_20;
      case 'r':
        KeStackAttachProcess(**((PRKPROCESS **)this + 5007), &ApcState);
        updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v53, a2, v54, v55);
        break;
      case 's':
        if ( !*((_QWORD *)a2 + 5) )
        {
          CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)a2 + 6), (__int64)a2, a3, a4);
          goto LABEL_20;
        }
        KeStackAttachProcess(**((PRKPROCESS **)this + 5007), &ApcState);
        CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)a2 + 6), v50, v51, v52);
        goto LABEL_114;
      case 't':
        v22 = VIDMM_GLOBAL::PageInDeviceInternal(this, *((struct VIDMM_DEVICE **)a2 + 3), 0, v62, &v63);
        goto LABEL_35;
      case 'u':
        KeStackAttachProcess(**((PRKPROCESS **)this + 5007), &ApcState);
        updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                    this,
                    *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                    1u);
        break;
      case 'v':
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(this, *((_DWORD *)a2 + 1), 0);
        if ( inited < 0 )
        {
          v48 = WdLogNewEntry5_WdAssertion(v45, a2, v46, v47);
          *(_QWORD *)(v48 + 24) = 8873LL;
          WdLogEvent5_WdAssertion(v48);
        }
        goto LABEL_20;
      case 'x':
        v22 = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                this,
                *((struct CVirtualAddressAllocator **)a2 + 5),
                *((_QWORD *)a2 + 6),
                a4,
                *((_BYTE *)a2 + 64));
LABEL_35:
        inited = v22;
        goto LABEL_20;
      default:
        v13 = (unsigned int)(v12 - 121);
        if ( (_DWORD)v12 == 121 )
        {
          VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      *(VIDMM_PROCESS **)(**((_QWORD **)a2 + 2) + 8LL),
                                      *(_DWORD *)(*((_QWORD *)this + 3) + 184LL),
                                      *(_DWORD *)(***((_QWORD ***)a2 + 2) + 76LL) & 0x3F);
          CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, v44, v42, v43);
          goto LABEL_20;
        }
        if ( (_DWORD)v12 == 122 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 5) + 24LL))(
            *((_QWORD *)a2 + 5),
            0LL,
            *((_QWORD *)a2 + 6),
            *((_QWORD *)a2 + 7));
          goto LABEL_20;
        }
LABEL_101:
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, a2, a3, a4);
        v40[3] = 270LL;
        v40[4] = 23LL;
        v40[5] = -1073741811LL;
        v40[6] = v12;
        v40[7] = 0LL;
        WdLogEvent5_WdCriticalError(v40);
        goto LABEL_20;
    }
    inited = updated;
LABEL_114:
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_20;
  }
  switch ( (_DWORD)v12 )
  {
    case 'o':
      v35 = *((_DWORD *)this + 926);
      v36 = 0;
      if ( v35 )
      {
        v37 = *((_QWORD *)this + 464);
        do
        {
          v38 = *(VIDMM_SEGMENT **)(v37 + 8LL * v36);
          v39 = *((_DWORD *)v38 + 14);
          if ( (v39 & 0x1001) == 0 && (v39 & 4) != 0 )
          {
            inited = VIDMM_SEGMENT::ResumeCpuAccess(v38);
            if ( inited < 0 )
              break;
          }
          ++v36;
        }
        while ( v36 < v35 );
      }
      goto LABEL_20;
    case 'e':
      for ( i = 0; i < *((_DWORD *)this + 926); ++i )
      {
        v33 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * i);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 136LL))(v33);
      }
      if ( *((_DWORD *)this + 1604) )
      {
        do
        {
          v34 = *((_QWORD *)this + 5006) + 456LL * (unsigned int)v8;
          if ( (*(_BYTE *)(v34 + 420) & 0x10) != 0 )
          {
            VIDMM_GLOBAL::RecommitGpuVirtualAddresses(this, 0LL);
            *(_BYTE *)(v34 + 420) &= ~0x10u;
          }
          LODWORD(v8) = v8 + 1;
        }
        while ( (unsigned int)v8 < *((_DWORD *)this + 1604) );
      }
      LODWORD(v8) = 0;
      goto LABEL_20;
    case 'f':
      v23 = *((_DWORD *)a2 + 10);
      if ( *((_DWORD *)this + 926) )
      {
        do
        {
          v24 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (unsigned int)v8);
          v25 = *(_DWORD *)(v24 + 56);
          v26 = (v25 & 0x1001) != 0
             || *((_DWORD *)this + 10003) == -1
             || (v23 & 0x40) != 0 && *(_QWORD *)(v24 + 224) > (unsigned __int64)qword_1C002F3F0;
          v27 = (v25 & 0x1001) != 0
             || *((_DWORD *)this + 10003) == -1
             || *(_QWORD *)(v24 + 224) > (unsigned __int64)qword_1C002F3F0;
          if ( (((v25 >> 7) & 1) == 0 || (v23 & 2) == 0 || !v26)
            && ((v25 & 0x100) == 0 || (v23 & 4) == 0)
            && (((v25 >> 7) & 1) == 0 || (v23 & 0x20) == 0 || !v27)
            && ((v25 & 0x1001) != 0 || (v23 & 0x10) == 0) )
          {
            VIDMM_SEGMENT::PurgeContent(v24, v23, *((_QWORD *)a2 + 6));
            if ( (v23 & 8) == 0 )
            {
              v28 = *(_DWORD **)(*((_QWORD *)this + 464) + 8LL * (unsigned int)v8);
              v29 = *((_QWORD *)this + 5006) + 456LL * (unsigned int)v28[93];
              if ( (v28[14] & 0x1000) != 0 )
                v30 = 0;
              else
                v30 = v28[4] + 1;
              if ( v30 == *(_DWORD *)(v29 + 40) || v30 == *(_DWORD *)(v29 + 24) )
                *(_BYTE *)(v29 + 420) |= 0x80u;
              if ( v30 == *(_DWORD *)(v29 + 48) || v30 == *(_DWORD *)(v29 + 32) )
                *(_BYTE *)(v29 + 421) |= 1u;
            }
            v31 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (unsigned int)v8) + 360LL);
            if ( (_DWORD)v31 != -1 )
              (*((void (__fastcall **)(_QWORD, __int64, _QWORD))this + 4997))(*((_QWORD *)this + 4998), v31, 0LL);
          }
          LODWORD(v8) = v8 + 1;
        }
        while ( (unsigned int)v8 < *((_DWORD *)this + 926) );
        v5 = v62[0];
      }
      VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL **)this, 1);
      if ( (v23 & 8) != 0 )
      {
        LODWORD(v8) = 0;
      }
      else
      {
        VIDMM_GLOBAL::PurgePageTables(this, v23);
        LODWORD(v8) = 1;
        VIDMM_GLOBAL::DoDeferredUnlock(this);
      }
      goto LABEL_20;
    case 'g':
      VIDMM_GLOBAL::CleanupPrimaryAllocation(0LL, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
      goto LABEL_20;
    case 'h':
      v22 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, *((struct VIDMM_ALLOC **)a2 + 2), 4, 0, v62, &v63);
      goto LABEL_35;
    case 'i':
      VIDMM_GLOBAL::EvictOneAllocation(this, *((__int64 ***)a2 + 2), 0LL);
      goto LABEL_20;
    case 'j':
      VIDMM_GLOBAL::ReportVidMmStateWorker(this);
      goto LABEL_20;
    case 'k':
      v22 = VIDMM_GLOBAL::RunApertureCoherencyTest(this);
      goto LABEL_35;
  }
  v13 = (unsigned int)(v12 - 108);
  if ( (_DWORD)v12 == 108 )
  {
    v22 = VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage(this);
    goto LABEL_35;
  }
  if ( (_DWORD)v12 != 110 )
    goto LABEL_101;
  v14 = 0;
  if ( *((int *)this + 926) > 0 )
  {
    while ( 1 )
    {
      v15 = *(VIDMM_SEGMENT **)(v8 + *((_QWORD *)this + 464));
      v16 = *((_DWORD *)v15 + 14);
      if ( (v16 & 0x1001) == 0 && (v16 & 4) != 0 )
      {
        inited = VIDMM_SEGMENT::SuspendCpuAccess(v15);
        if ( inited < 0 )
          break;
      }
      ++v14;
      v8 += 8LL;
      if ( v14 >= *((_DWORD *)this + 926) )
        goto LABEL_19;
    }
    v19 = v14 - 1;
    if ( v19 > 0 )
    {
      v20 = (VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8LL * v19);
      while ( 1 )
      {
        v21 = *((_DWORD *)*v20 + 14);
        if ( (v21 & 0x1001) == 0 && (v21 & 4) != 0 && (int)VIDMM_SEGMENT::ResumeCpuAccess(*v20) < 0 )
          break;
        --v19;
        --v20;
        if ( v19 <= 0 )
          goto LABEL_19;
      }
      inited = -1071775482;
    }
LABEL_19:
    LODWORD(v8) = (_DWORD)v63;
  }
LABEL_20:
  v17 = (int *)*((_QWORD *)a2 + 4);
  if ( v17 )
    *v17 = inited;
  if ( (_DWORD)v8 )
  {
    VIDMM_GLOBAL::EndPreparation(this, (__int64)a2, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
    VIDMM_GLOBAL::UnmapAllPagingBuffers(this);
    if ( v5 )
      VidSchSignalPagingFences(
        *(_QWORD *)(*((_QWORD *)this + 2) + 408LL),
        (unsigned int)&v64,
        (unsigned int)&v67,
        v18,
        -1);
    else
      KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
  else
  {
    VIDMM_GLOBAL::EndPreparation(this, (__int64)a2, *((struct _KEVENT **)a2 + 1), v5, v66, v65);
  }
  return (unsigned int)inited;
}
