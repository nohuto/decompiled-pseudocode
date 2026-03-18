/*
 * XREFs of ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C
 * Callers:
 *     ?SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0039848 (-SubmitPacket@VIDMM_WORKER_THREAD@@AEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_PAGING_QUEUE_PACKET@@_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003369C (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z @ 0x1C0033820 (-StartPreparation@VIDMM_GLOBAL@@IEAAXIPEAVVIDMM_DEVICE@@PEAUVIDMM_ALLOC@@W4_VIDMM_OPERATION@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z @ 0x1C003A994 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z.c)
 *     VidSchSignalPagingFences @ 0x1C0044B54 (VidSchSignalPagingFences.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004BD88 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C004D098 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C004DB7C (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050D60 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C005155C (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0051F14 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0052F68 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0053C8C (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0053EE0 (-UnmapAllPagingBuffers@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C0055F38 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0056C14 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005F140 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005F954 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0070634 (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?ResumeCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C0071134 (-ResumeCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C007126C (-SuspendCpuAccess@VIDMM_SEGMENT@@QEAAJXZ.c)
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0071920 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ?ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0071FAC (-ValidateApertureUnmapToDummyPage@VIDMM_GLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProcessSystemCommand(
        PRKPROCESS **this,
        struct _VIDMM_SYSTEM_COMMAND *a2,
        bool a3,
        unsigned __int64 a4,
        struct _VIDSCH_SYNC_OBJECT *a5)
{
  char v5; // r13
  __int64 v8; // r14
  int inited; // r15d
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
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
  PRKPROCESS v24; // r10
  unsigned int v25; // r8d
  bool v26; // dl
  bool v27; // cl
  _DWORD *v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  unsigned int i; // ebx
  PRKPROCESS v33; // rcx
  __int64 v34; // rbx
  unsigned int v35; // r11d
  unsigned int v36; // r10d
  PRKPROCESS *v37; // rbx
  VIDMM_SEGMENT *v38; // rcx
  int v39; // eax
  _QWORD *v40; // rax
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  struct VIDMM_ALLOC *v42; // r10
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  int updated; // eax
  VIDMM_GLOBAL *v48; // rcx
  __int64 v49; // rbx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  __int64 v53; // rcx
  int v55; // [rsp+20h] [rbp-71h]
  int v56; // [rsp+20h] [rbp-71h]
  char v57[8]; // [rsp+40h] [rbp-51h] BYREF
  struct VIDMM_ALLOC *v58; // [rsp+48h] [rbp-49h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v59; // [rsp+50h] [rbp-41h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v60; // [rsp+58h] [rbp-39h]
  unsigned __int64 v61; // [rsp+60h] [rbp-31h]
  unsigned __int64 v62; // [rsp+68h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-21h] BYREF

  v57[0] = a3;
  v61 = a4;
  v62 = a4;
  v5 = a3;
  v60 = a5;
  v59 = a5;
  v55 = *(_DWORD *)a2;
  v8 = 0LL;
  LODWORD(v58) = 0;
  inited = 0;
  VIDMM_GLOBAL::StartPreparation((__int64)this, (__int64)a2, 0LL, 0LL, v55);
  v12 = *(int *)a2;
  if ( (int)v12 > 111 )
  {
    switch ( (_DWORD)v12 )
    {
      case 'p':
        v49 = *((_QWORD *)a2 + 5);
        if ( *(_QWORD *)(v49 + 128) )
        {
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)this, 0xFFFFFFFF);
          LOBYTE(v56) = 0;
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, _QWORD))(**(_QWORD **)(v49 + 128) + 48LL))(
            *(_QWORD *)(v49 + 128),
            v49,
            0LL,
            0LL,
            v56,
            0LL);
        }
        if ( *(_QWORD *)(v49 + 256) )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, *(_DWORD *)(v49 + 76) & 0x3F, 0, 0LL, 0LL, 0);
          v50 = (_QWORD *)(v49 + 224);
          v51 = *(_QWORD *)(v49 + 224);
          v52 = *(_QWORD **)(v49 + 232);
          if ( *(_QWORD *)(v51 + 8) != v49 + 224 || (_QWORD *)*v52 != v50 )
            __fastfail(3u);
          *v52 = v51;
          *(_QWORD *)(v51 + 8) = v52;
          v53 = *(_QWORD *)(v49 + 256);
          *v50 = 0LL;
          *(_QWORD *)(v49 + 232) = 0LL;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 88LL))(v53, v49);
          VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, *(_DWORD *)(v49 + 76) & 0x3F, 0, 0LL, 0LL, 0);
        }
        goto LABEL_18;
      case 'r':
        KeStackAttachProcess(*this[5000], &ApcState);
        updated = VIDMM_GLOBAL::UncommitVirtualAddressRangeSystemCommand(v48, a2);
        break;
      case 's':
        if ( !*((_QWORD *)a2 + 5) )
        {
          CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)a2 + 6));
          goto LABEL_18;
        }
        KeStackAttachProcess(*this[5000], &ApcState);
        CVirtualAddressAllocator::DestroyVaAllocator(*((CVirtualAddressAllocator **)a2 + 6));
        goto LABEL_112;
      case 't':
        v22 = VIDMM_GLOBAL::PageInDeviceInternal(
                (VIDMM_GLOBAL *)this,
                *((struct VIDMM_DEVICE **)a2 + 3),
                0,
                (bool *)v57,
                &v58);
        goto LABEL_33;
      case 'u':
        KeStackAttachProcess(*this[5000], &ApcState);
        updated = VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
                    (VIDMM_GLOBAL *)this,
                    *((const struct _DXGKARGCB_UPDATECONTEXTALLOCATION **)a2 + 5),
                    1u);
        break;
      case 'v':
        inited = VIDMM_GLOBAL::InitPagingProcessVaSpace(
                   (VIDMM_GLOBAL *)this,
                   (__int64 *)*((unsigned int *)a2 + 1),
                   0LL,
                   v11);
        if ( inited < 0 )
        {
          v46 = WdLogNewEntry5_WdAssertion(v43, v10, v44, v45);
          *(_QWORD *)(v46 + 24) = 8772LL;
          WdLogEvent5_WdAssertion(v46);
        }
        goto LABEL_18;
      case 'x':
        v22 = VIDMM_GLOBAL::FreeGpuVirtualAddressSystemCommand(
                (VIDMM_GLOBAL *)this,
                *((struct CVirtualAddressAllocator **)a2 + 5),
                *((_QWORD *)a2 + 6),
                v11,
                *((_BYTE *)a2 + 64));
LABEL_33:
        inited = v22;
        goto LABEL_18;
      default:
        v13 = (unsigned int)(v12 - 121);
        if ( (_DWORD)v12 == 121 )
        {
          VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      *(VIDMM_PROCESS **)(**((_QWORD **)a2 + 2) + 8LL),
                                      *((_DWORD *)this[3] + 46),
                                      *(_DWORD *)(***((_QWORD ***)a2 + 2) + 76LL) & 0x3F);
          CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VirtualAddressAllocator, v42);
          goto LABEL_18;
        }
        if ( (_DWORD)v12 == 122 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)a2 + 5) + 24LL))(
            *((_QWORD *)a2 + 5),
            0LL,
            *((_QWORD *)a2 + 6),
            *((_QWORD *)a2 + 7));
          goto LABEL_18;
        }
LABEL_99:
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v10);
        v40[3] = 270LL;
        v40[4] = 23LL;
        v40[5] = -1073741811LL;
        v40[6] = v12;
        v40[7] = 0LL;
        WdLogEvent5_WdCriticalError(v40);
        goto LABEL_18;
    }
    inited = updated;
LABEL_112:
    KeUnstackDetachProcess(&ApcState);
    goto LABEL_18;
  }
  switch ( (_DWORD)v12 )
  {
    case 'o':
      v35 = *((_DWORD *)this + 926);
      v36 = 0;
      if ( v35 )
      {
        v37 = this[464];
        do
        {
          v38 = v37[v36];
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
      goto LABEL_18;
    case 'e':
      for ( i = 0; i < *((_DWORD *)this + 926); ++i )
      {
        v33 = this[464][i];
        (*(void (__fastcall **)(PRKPROCESS))(*(_QWORD *)v33 + 136LL))(v33);
      }
      if ( *((_DWORD *)this + 1604) )
      {
        do
        {
          v34 = (__int64)&this[4999][57 * (unsigned int)v8];
          if ( (*(_BYTE *)(v34 + 420) & 0x10) != 0 )
          {
            VIDMM_GLOBAL::RecommitGpuVirtualAddresses((VIDMM_GLOBAL *)this, 0LL);
            *(_BYTE *)(v34 + 420) &= ~0x10u;
          }
          LODWORD(v8) = v8 + 1;
        }
        while ( (unsigned int)v8 < *((_DWORD *)this + 1604) );
      }
      LODWORD(v8) = 0;
      goto LABEL_18;
    case 'f':
      v23 = *((_DWORD *)a2 + 10);
      if ( *((_DWORD *)this + 926) )
      {
        do
        {
          v24 = this[464][(unsigned int)v8];
          v25 = *((_DWORD *)v24 + 14);
          v26 = (v25 & 0x1001) != 0
             || *((_DWORD *)this + 9989) == -1
             || (v23 & 0x40) != 0 && *((_QWORD *)v24 + 28) > (unsigned __int64)qword_1C00273C8;
          v27 = (v25 & 0x1001) != 0
             || *((_DWORD *)this + 9989) == -1
             || *((_QWORD *)v24 + 28) > (unsigned __int64)qword_1C00273C8;
          if ( (((v25 >> 7) & 1) == 0 || (v23 & 2) == 0 || !v26)
            && ((v25 & 0x100) == 0 || (v23 & 4) == 0)
            && (((v25 >> 7) & 1) == 0 || (v23 & 0x20) == 0 || !v27)
            && ((v25 & 0x1001) != 0 || (v23 & 0x10) == 0) )
          {
            VIDMM_SEGMENT::PurgeContent(v24, v23, *((_QWORD *)a2 + 6));
            if ( (v23 & 8) == 0 )
            {
              v28 = this[464][(unsigned int)v8];
              v29 = (__int64)&this[4999][57 * (unsigned int)v28[93]];
              if ( (v28[14] & 0x1000) != 0 )
                v30 = 0;
              else
                v30 = v28[4] + 1;
              if ( v30 == *(_DWORD *)(v29 + 40) || v30 == *(_DWORD *)(v29 + 24) )
                *(_BYTE *)(v29 + 420) |= 0x80u;
              if ( v30 == *(_DWORD *)(v29 + 48) || v30 == *(_DWORD *)(v29 + 32) )
                *(_BYTE *)(v29 + 421) |= 1u;
            }
            v31 = *((unsigned int *)this[464][(unsigned int)v8] + 90);
            if ( (_DWORD)v31 != -1 )
              ((void (__fastcall *)(PRKPROCESS *, __int64, _QWORD))this[4990])(this[4991], v31, 0LL);
          }
          LODWORD(v8) = v8 + 1;
        }
        while ( (unsigned int)v8 < *((_DWORD *)this + 926) );
        v5 = v57[0];
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
      }
      goto LABEL_18;
    case 'g':
      VIDMM_GLOBAL::CleanupPrimaryAllocation(0LL, *((struct _VIDMM_GLOBAL_ALLOC **)a2 + 5));
      goto LABEL_18;
    case 'h':
      v22 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, *((struct VIDMM_ALLOC **)a2 + 2), 4, 0, v57, &v58);
      goto LABEL_33;
    case 'i':
      VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)this, *((struct VIDMM_ALLOC **)a2 + 2), 0);
      goto LABEL_18;
    case 'j':
      VIDMM_GLOBAL::ReportVidMmStateWorker((VIDMM_GLOBAL *)this);
      goto LABEL_18;
    case 'k':
      v22 = VIDMM_GLOBAL::RunApertureCoherencyTest((VIDMM_GLOBAL *)this);
      goto LABEL_33;
  }
  v13 = (unsigned int)(v12 - 108);
  if ( (_DWORD)v12 == 108 )
  {
    v22 = VIDMM_GLOBAL::ValidateApertureUnmapToDummyPage((VIDMM_GLOBAL *)this);
    goto LABEL_33;
  }
  if ( (_DWORD)v12 != 110 )
    goto LABEL_99;
  v14 = 0;
  if ( *((int *)this + 926) > 0 )
  {
    while ( 1 )
    {
      v15 = *(PRKPROCESS *)((char *)this[464] + v8);
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
        goto LABEL_17;
    }
    v19 = v14 - 1;
    if ( v19 > 0 )
    {
      v20 = &this[464][v19];
      while ( 1 )
      {
        v21 = *((_DWORD *)*v20 + 14);
        if ( (v21 & 0x1001) == 0 && (v21 & 4) != 0 && (int)VIDMM_SEGMENT::ResumeCpuAccess(*v20) < 0 )
          break;
        --v19;
        --v20;
        if ( v19 <= 0 )
          goto LABEL_17;
      }
      inited = -1071775482;
    }
LABEL_17:
    LODWORD(v8) = (_DWORD)v58;
  }
LABEL_18:
  v17 = (int *)*((_QWORD *)a2 + 4);
  if ( v17 )
    *v17 = inited;
  if ( (_DWORD)v8 )
  {
    VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)this, v10, 0LL, 0, 0LL, 0LL);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle((VIDMM_GLOBAL *)this, 0xFFFFFFFF);
    VIDMM_GLOBAL::UnmapAllPagingBuffers((VIDMM_GLOBAL *)this);
    if ( v5 )
      VidSchSignalPagingFences((unsigned int)this[2][48], (unsigned int)&v59, (unsigned int)&v62, v18, -1);
    else
      KeSetEvent(*((PRKEVENT *)a2 + 1), 0, 0);
  }
  else
  {
    VIDMM_GLOBAL::EndPreparation((VIDMM_GLOBAL *)this, v10, *((struct _KEVENT **)a2 + 1), v5, v61, v60);
  }
  return (unsigned int)inited;
}
