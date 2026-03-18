/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056890
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B78 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00133C4 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0013530 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C001365C (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00168C0 (memmove.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001C48C (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_pqqt @ 0x1C001D2A8 (Template_pqqt.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C001E5B0 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     Template_qqqxx @ 0x1C001E644 (Template_qqqxx.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0042E38 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0043D9C (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00461E4 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0046230 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?RemoveAllocationFromMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004629C (-RemoveAllocationFromMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004710C (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004713C (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0048090 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0048454 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0049524 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0049C34 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C8A8 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CB60 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0052668 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C0054AC0 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055AB0 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EA34 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005EB6C (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAPEAXHPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C005F6BC (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C005FBA8 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00846D8 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C0084D6C (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C008A208 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::EvictResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v10; // r13
  VIDMM_GLOBAL *v11; // r9
  __int64 v12; // rax
  VIDMM_GLOBAL *v13; // rcx
  int v14; // edx
  unsigned __int8 v15; // bl
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // rdi
  void *v25; // rax
  NTSTATUS VirtualMemory; // ebx
  __int64 v27; // r8
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  char v35; // bl
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  __int64 v45; // rcx
  _QWORD *v46; // rax
  int TemporaryResourcesForAllocation; // eax
  __int64 v48; // rdx
  __int64 v49; // r9
  char v50; // di
  _QWORD *v51; // rax
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  int v59; // ebx
  struct _MDL *MDLForRange; // rax
  unsigned __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int64 v65; // rdi
  unsigned __int64 v66; // rbx
  unsigned int v67; // eax
  __int64 v68; // r13
  unsigned __int64 v69; // rbx
  bool v70; // zf
  int v71; // eax
  struct _MDL *v72; // rax
  char *v73; // r9
  SIZE_T v74; // r8
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  _QWORD *v81; // rax
  int v82; // r13d
  __int64 v83; // rcx
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  unsigned int v86; // edx
  __int64 v87; // rbx
  unsigned int v88; // ecx
  unsigned int v89; // edi
  __int64 v90; // rcx
  void *v91; // rax
  __int64 v92; // r9
  __int64 v93; // r13
  __int64 v94; // rbx
  char v95; // r9
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  __int64 v98; // r8
  unsigned __int64 v99; // rcx
  __int64 v100; // r8
  unsigned __int64 v101; // rdx
  PVOID v102; // rbx
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  _QWORD *v107; // rdi
  _QWORD *v108; // rax
  __int64 v109; // rdx
  _QWORD *v110; // rcx
  __int64 v111; // rcx
  unsigned int PriorityClass; // eax
  char *v113; // r11
  char *v114; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v116; // r9
  void *v117; // rdx
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rax
  signed __int32 v122[8]; // [rsp+0h] [rbp-A0h] BYREF
  ULONG AllocationType[2]; // [rsp+20h] [rbp-80h]
  ULONG Protect[2]; // [rsp+28h] [rbp-78h]
  struct _MDL *v125; // [rsp+30h] [rbp-70h]
  struct VIDMM_SEGMENT *v126; // [rsp+38h] [rbp-68h]
  union _LARGE_INTEGER *v127; // [rsp+40h] [rbp-60h]
  struct _MDL *v128; // [rsp+48h] [rbp-58h]
  struct _DXGK_TRANSFERFLAGS v129; // [rsp+50h] [rbp-50h]
  char v130; // [rsp+A0h] [rbp+0h] BYREF

  v6 = (unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v6 + 80) = this;
  *(_QWORD *)(v6 + 72) = a2;
  *(_QWORD *)(v6 + 24) = a6;
  *(_BYTE *)(v6 + 2) = 0;
  *(_BYTE *)(v6 + 1) = 0;
  LODWORD(v10) = -1073741823;
  v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  *(_BYTE *)v6 = (*(_BYTE *)(456LL * *((unsigned int *)this + 93) + *((_QWORD *)v11 + 5006) + 420) & 4) != 0;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(v11, a2, 0);
  DXGFASTMUTEX::Acquire(*((union _LARGE_INTEGER **)a2 + 39));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 464, 0LL);
  if ( a6 )
  {
    *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = a6;
  }
  else
  {
    v12 = *((_QWORD *)a2 + 12);
    *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v12;
    *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v12;
  }
  v13 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( *((_QWORD *)v13 + 5086) )
  {
    if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
      v14 = 0;
    else
      v14 = *((_DWORD *)this + 4) + 1;
    VIDMM_GLOBAL::RecordPageMappingHistory(
      (__int64)v13,
      v14,
      *((__int64 *)a2 + 17) >> 12,
      *((_QWORD *)a2 + 2) >> 12,
      4,
      (__int64)a2);
  }
  v15 = a3;
  if ( (*((_DWORD *)a2 + 19) & 0x100) != 0 )
    v15 = 0;
  if ( (*((_DWORD *)a2 + 19) & 0x8000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v13, a2);
  v16 = **((_DWORD **)a2 + 59);
  v17 = 0x10000LL;
  *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0x10000;
  if ( (v16 & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*((ADAPTER_RENDER ***)this + 1), a2, 0LL);
  if ( (**((_DWORD **)a2 + 59) & 0x20000) != 0 && (*((_DWORD *)this + 14) & 0x40000) == 0 )
    *((_DWORD *)a2 + 19) |= 0x100000u;
  *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
  if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation((VIDMM_GLOBAL *)v17, a2) )
  {
    *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 1;
    if ( *((_BYTE *)a2 + 95) )
      *((_BYTE *)a2 + 94) = 0;
    v15 = 0;
  }
  v20 = v15;
  if ( (*((_DWORD *)a2 + 19) & 0x100000) != 0 )
    v20 = 0LL;
  *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v20;
  v21 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  if ( *(_BYTE *)(v21 + 1951) )
  {
    v22 = WdLogNewEntry5_WdEvent(v21, v20);
    *(_QWORD *)(v22 + 24) = a2;
    WdLogEvent5_WdEvent(v22);
    LOBYTE(v20) = 0;
    *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v20;
  }
  if ( (dword_1C002F104 & 8) == 0 && (*((_DWORD *)a2 + 21) & 8) != 0 )
    *((_BYTE *)a2 + 95) = 1;
  if ( (_BYTE)v20 )
  {
    if ( (*((_DWORD *)a2 + 21) & 8) != 0 && !*((_BYTE *)a2 + 95) )
    {
      v23 = *((_QWORD *)a2 + 12);
      if ( v23 )
      {
        KeStackAttachProcess(**(PRKPROCESS **)(v23 + 8), (PRKAPC_STATE)(v6 + 240));
        v24 = (__int64 *)((char *)a2 + 8);
        v25 = VidMmMapViewOfAllocation(a2, 0LL, *((_QWORD *)a2 + 1), (void **)(v6 + 104), 1, 0LL);
        *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v25;
        if ( v25 )
        {
          VirtualMemory = ZwAllocateVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            (PVOID *)(v6 + 88),
                            0LL,
                            (PSIZE_T)a2 + 1,
                            0x1000000u,
                            4u);
          VidMmUnmapViewOfAllocation(a2, *(void **)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68), 0LL);
          v28 = bTracingEnabled;
          if ( VirtualMemory < 0 )
          {
            *((_BYTE *)a2 + 95) = 1;
            if ( v28 )
            {
              v32 = (unsigned __int64)*v24 >> 12;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              {
                LODWORD(v125) = 0;
                Protect[0] = v32;
                AllocationType[0] = 0;
                Template_pqqt(v32, &EventUnreset, v27, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v125);
              }
            }
            v33 = *v24;
            v34 = *((_QWORD *)this + 1);
            ++*(_DWORD *)(v34 + 7384);
            *(_QWORD *)(v34 + 7392) += v33;
          }
          else
          {
            if ( bTracingEnabled )
            {
              v29 = (unsigned __int64)*v24 >> 12;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              {
                LODWORD(v125) = 1;
                Protect[0] = v29;
                AllocationType[0] = 0;
                Template_pqqt(v29, &EventUnreset, v27, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v125);
              }
            }
            v30 = *v24;
            v31 = *((_QWORD *)this + 1);
            ++*(_DWORD *)(v31 + 7368);
            *(_QWORD *)(v31 + 7376) += v30;
          }
        }
        KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 240));
        v20 = *(unsigned int *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      }
    }
  }
  v35 = *((_BYTE *)a2 + 95) != 0 ? v20 : 0;
  v36 = *((unsigned int *)a2 + 21);
  v37 = *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( (v36 & 8) == 0
    && (**((_DWORD **)a2 + 59) & 0x4000003A) == 0
    && v37
    && (*(_BYTE *)(v37 + 32) & 1) == 0
    && (v36 & 2) == 0
    && !*((_QWORD *)a2 + 32) )
  {
    if ( (*((_DWORD *)a2 + 19) & 0x4000000) == 0 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v36, v20, v18, v19);
      *(_QWORD *)(v38 + 24) = 1530LL;
      WdLogEvent5_WdAssertion(v38);
    }
    if ( !v35 )
      goto LABEL_64;
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  }
  if ( !v35 )
  {
LABEL_64:
    if ( v37 && (*(_BYTE *)(v37 + 32) & 1) != 0 )
    {
      KeStackAttachProcess(**(PRKPROCESS **)(v37 + 8), (PRKAPC_STATE)(v6 + 240));
      v128 = (struct _MDL *)a2;
      LODWORD(v127) = 1;
      v126 = 0LL;
      v125 = 0LL;
      *(_QWORD *)Protect = 0LL;
      *(_QWORD *)AllocationType = 0LL;
      v40 = _guard_dispatch_icall_fptr();
      v44 = v40;
      v45 = v40 + 0x80000000;
      if ( (int)v45 >= 0 && v40 != -1073741558 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v41, v42, v43);
        v46[3] = 270LL;
        v46[4] = 4LL;
        v46[5] = 3LL;
        v46[6] = v44;
        v46[7] = 0LL;
        WdLogEvent5_WdCriticalError(v46);
      }
      *(_BYTE *)(*(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) + 32LL) &= ~1u;
      KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 240));
    }
    if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
      VIDMM_GLOBAL::DiscardAllocation(*((ADAPTER_RENDER ***)this + 1), a2, (struct _VIDMM_GLOBAL_ALLOC *)v18);
    goto LABEL_155;
  }
  if ( (**((_DWORD **)a2 + 59) & 0x8000000) != 0 )
  {
    v39 = *((_QWORD *)a2 + 12);
    if ( v39 )
    {
      if ( (*(_BYTE *)(v39 + 32) & 1) == 0
        && (*((_DWORD *)a2 + 21) & 2) == 0
        && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
      {
        if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, a2) < 0 )
          VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
        else
          *((_DWORD *)a2 + 21) |= 2u;
      }
    }
  }
  if ( !*((_DWORD *)a2 + 16) )
    goto LABEL_127;
  TemporaryResourcesForAllocation = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
                                      *((VIDMM_GLOBAL **)this + 1),
                                      a2,
                                      v18,
                                      v19);
  v10 = TemporaryResourcesForAllocation;
  *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = TemporaryResourcesForAllocation;
  v50 = *(_BYTE *)v6;
  if ( TemporaryResourcesForAllocation < 0 )
  {
    if ( v50 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v36, v48, v18, v49);
      v51[3] = 270LL;
      v51[4] = 9LL;
      v51[5] = a2;
      v51[6] = v10;
      v51[7] = 0LL;
      WdLogEvent5_WdCriticalError(v51);
    }
    goto LABEL_127;
  }
  v52 = *((_QWORD *)a2 + 12);
  if ( v52 && (*(_BYTE *)(v52 + 32) & 1) != 0 )
  {
    memset((void *)(v6 + 112), 0, 0x28uLL);
    if ( *((_BYTE *)a2 + 281) )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
      *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34));
      _guard_dispatch_icall_fptr();
      _guard_dispatch_icall_fptr();
    }
    KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), (PRKAPC_STATE)(v6 + 240));
    *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = a2;
    *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = this;
    *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *((_QWORD *)a2 + 17);
    *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0;
    v128 = (struct _MDL *)a2;
    LODWORD(v127) = 1;
    v126 = (struct VIDMM_SEGMENT *)(v6 + 112);
    v125 = (struct _MDL *)VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
    *(_QWORD *)Protect = 0LL;
    *(_QWORD *)AllocationType = 0LL;
    v53 = _guard_dispatch_icall_fptr();
    v10 = v53;
    if ( (int)(v53 + 0x80000000) < 0 )
    {
      if ( v53 != -1073741558 )
        goto LABEL_86;
    }
    else if ( v53 != -1073741558 )
    {
      v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v55, v54, v56, v57);
      v58[3] = 270LL;
      v58[4] = 4LL;
      v58[5] = 2LL;
      v58[6] = v10;
      v58[7] = 0LL;
      WdLogEvent5_WdCriticalError(v58);
LABEL_86:
      *(_BYTE *)(*((_QWORD *)a2 + 12) + 32LL) &= ~1u;
      KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 240));
      *(_BYTE *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
      goto LABEL_127;
    }
    *((_DWORD *)a2 + 19) |= 0x100000u;
    LODWORD(v10) = 0;
    goto LABEL_86;
  }
  *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
  if ( (VIDMM_GLOBAL::_Config & 0x30) != 0 )
    goto LABEL_91;
  v125 = (struct _MDL *)(v6 + 16);
  *(_QWORD *)Protect = v6 + 2;
  LOBYTE(AllocationType[0]) = 0;
  v59 = _guard_dispatch_icall_fptr();
  if ( v59 >= 0 )
  {
    MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
    *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = MDLForRange;
    if ( !MDLForRange )
    {
      _guard_dispatch_icall_fptr();
LABEL_91:
      v59 = -1071775487;
    }
  }
  if ( v59 < 0 )
  {
    v65 = 0LL;
    v18 = *((_QWORD *)a2 + 1);
    v66 = v18 >> 1;
    if ( !*(_BYTE *)v6 || (v70 = Use64KbPagesForTransfer(a2, this) == 0, v67 = 0x10000, v70) )
      v67 = 4096;
    *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v67;
    if ( !v18 )
    {
LABEL_126:
      *(_BYTE *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
      goto LABEL_127;
    }
    v68 = v67;
    while ( 1 )
    {
      v36 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
      if ( *(_BYTE *)(v36 + 1951) )
      {
LABEL_125:
        LODWORD(v10) = *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
        goto LABEL_126;
      }
      *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      v36 = (v66 + v68 - 1) & (unsigned int)~(v68 - 1);
      v69 = v36;
      if ( (VIDMM_GLOBAL::_Config & 0x20) != 0 )
      {
        v70 = v68 == v36;
        if ( v68 != v36 )
          goto LABEL_109;
      }
      else
      {
        v70 = v68 == v36;
      }
      v125 = (struct _MDL *)(v6 + 16);
      *(_QWORD *)Protect = v6 + 2;
      LOBYTE(AllocationType[0]) = v70;
      v71 = _guard_dispatch_icall_fptr();
      *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v71;
      if ( v71 < 0 )
        goto LABEL_117;
      if ( !*(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      {
        v72 = VidMmGetMDLForRange(a2, v65, v69);
        *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v72;
        if ( !v72 )
        {
          _guard_dispatch_icall_fptr();
LABEL_109:
          v71 = -1071775487;
          goto LABEL_116;
        }
        v71 = *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      }
LABEL_116:
      if ( v71 >= 0 )
      {
        if ( !*(_BYTE *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 2) )
        {
          *(_QWORD *)AllocationType = *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          _guard_dispatch_icall_fptr();
        }
        v129.0 = 0;
        if ( *(_BYTE *)v6 )
        {
          *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v65 + *((_QWORD *)a2 + 17);
          v128 = *(struct _MDL **)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v127 = 0LL;
          v126 = 0LL;
          v125 = 0LL;
          *(_QWORD *)Protect = v6 + 96;
          v73 = (char *)v65;
          v74 = v69;
        }
        else
        {
          v128 = 0LL;
          v127 = (union _LARGE_INTEGER *)((char *)a2 + 248);
          v126 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
          v125 = 0LL;
          *(_QWORD *)Protect = (char *)a2 + 136;
          v73 = 0LL;
          v74 = *((_QWORD *)a2 + 1);
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v74,
          v73,
          this,
          *(union _LARGE_INTEGER **)Protect,
          v125,
          v126,
          v127,
          v128,
          v129);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        *(_QWORD *)AllocationType = *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
        v65 += v69;
        v66 = *((_QWORD *)a2 + 1) - v65;
        goto LABEL_124;
      }
LABEL_117:
      v66 = v69 >> 1;
LABEL_124:
      if ( v65 == *((_QWORD *)a2 + 1) )
        goto LABEL_125;
    }
  }
  if ( !*(_BYTE *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 2) )
  {
    *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
    _guard_dispatch_icall_fptr();
  }
  v61 = *((_QWORD *)a2 + 1);
  v129.0 = 0;
  if ( v50 )
  {
    v128 = VidMmGetMDLForRange(a2, 0LL, v61);
    v127 = 0LL;
    v126 = 0LL;
    v61 = *((_QWORD *)a2 + 1);
  }
  else
  {
    v128 = 0LL;
    v127 = (union _LARGE_INTEGER *)((char *)a2 + 248);
    v126 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
  }
  VIDMM_GLOBAL::MemoryTransfer(
    *((VIDMM_GLOBAL **)this + 1),
    a2,
    v61,
    0LL,
    this,
    (union _LARGE_INTEGER *)a2 + 17,
    0LL,
    v126,
    v127,
    v128,
    v129);
  if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
  {
    v64 = WdLogNewEntry5_WdEvent(v63, v62);
    *(_QWORD *)(v64 + 24) = a2;
    WdLogEvent5_WdEvent(v64);
    goto LABEL_126;
  }
  VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
LABEL_127:
  if ( (int)v10 < 0 )
  {
    if ( (**((_DWORD **)a2 + 59) & 8) != 0
      || (v75 = *((_QWORD *)a2 + 12),
          (*(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v75) == 0LL)
      || (*(_BYTE *)(v75 + 32) & 1) == 0 )
    {
LABEL_137:
      if ( (int)v10 < 0 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v36, &EventPerformanceWarning, v18, 2);
        v82 = 0;
        *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
        if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
        {
          v83 = *((_QWORD *)a2 + 12);
          if ( v83 )
          {
            KeStackAttachProcess(**(PRKPROCESS **)(v83 + 8), (PRKAPC_STATE)(v6 + 240));
            v82 = 1;
            *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 1;
          }
        }
        v70 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 16)) == 0;
        v84 = *((_QWORD *)a2 + 1);
        if ( v70 )
        {
          v86 = 4096;
          *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 4096;
          v85 = v84 >> 12;
        }
        else
        {
          v85 = v84 >> 16;
          v86 = 0x10000;
        }
        *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v85;
        v87 = *((_QWORD *)a2 + 17);
        *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v87;
        v88 = 0;
        while ( 1 )
        {
          *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v88;
          if ( v88 >= (unsigned int)v85 )
            break;
          v89 = v86 * v88;
          VIDMM_GLOBAL::MemoryTransfer(
            *((VIDMM_GLOBAL **)this + 1),
            a2,
            v86,
            (char *)(v86 * v88),
            this,
            (union _LARGE_INTEGER *)(v6 + 40),
            0LL,
            0LL,
            0LL,
            *(struct _MDL **)(*((_QWORD *)this + 32) + 8LL),
            0);
          VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
          v90 = *(unsigned int *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
          v87 += v90;
          *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v87;
          v91 = VidMmMapViewOfAllocation(a2, v89, (unsigned int)v90, (void **)(v6 + 56), 0, 0LL);
          if ( v91 )
          {
            memmove(
              v91,
              *((const void **)this + 31),
              *(unsigned int *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC));
            VidMmUnmapViewOfAllocation(a2, *(void **)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38), 0LL);
          }
          else
          {
            *((_DWORD *)a2 + 19) |= 0x100000u;
          }
          v88 = *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 1;
          v85 = *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
          v86 = *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
        }
        if ( v82 )
          KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 240));
      }
      goto LABEL_155;
    }
    memset((void *)(v6 + 152), 0, 0x28uLL);
    KeStackAttachProcess(
      **(PRKPROCESS **)(*(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) + 8LL),
      (PRKAPC_STATE)(v6 + 240));
    *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = a2;
    *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = this;
    *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = *((_QWORD *)a2 + 17);
    *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 0;
    v128 = (struct _MDL *)a2;
    LODWORD(v127) = 1;
    v126 = (struct VIDMM_SEGMENT *)(v6 + 152);
    v125 = (struct _MDL *)VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
    *(_QWORD *)Protect = 0LL;
    *(_QWORD *)AllocationType = 0LL;
    v76 = _guard_dispatch_icall_fptr();
    v10 = v76;
    if ( ((v76 + 0x80000000) & 0x80000000) != 0 )
    {
      if ( v76 != -1073741558 )
        goto LABEL_136;
    }
    else if ( v76 != -1073741558 )
    {
      v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v78, v77, v79, v80);
      v81[3] = 270LL;
      v81[4] = 4LL;
      v81[5] = 2LL;
      v81[6] = v10;
      v81[7] = 0LL;
      WdLogEvent5_WdCriticalError(v81);
LABEL_136:
      *(_BYTE *)(*((_QWORD *)a2 + 12) + 32LL) &= ~1u;
      KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 240));
      goto LABEL_137;
    }
    *((_DWORD *)a2 + 19) |= 0x100000u;
    LODWORD(v10) = 0;
    goto LABEL_136;
  }
LABEL_155:
  if ( *((_QWORD *)a2 + 54) )
  {
    VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 55), a2, 0);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(*((VIDMM_CPU_HOST_APERTURE **)this + 55), a2, 0LL, v92);
  }
  v93 = *((_QWORD *)a2 + 18);
  if ( (**((_DWORD **)a2 + 59) & 0x20000) != 0 )
  {
    if ( !v93 )
      goto LABEL_185;
    v94 = ~*((_QWORD *)this + 49) & (*((_QWORD *)this + 49) + *((_QWORD *)a2 + 2));
    memset((void *)(v6 + 192), 0, 0x30uLL);
    *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = *((_DWORD *)this + 93);
    *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC4) = (*((_DWORD *)this + 14) & 0x1000) != 0
                                                                          ? 0
                                                                          : *((_DWORD *)this + 4) + 1;
    v95 = 1;
    if ( *((_DWORD *)this + 101) )
    {
      v96 = *((_QWORD *)this + 51);
      if ( *((_QWORD *)a2 + 17) == v96 )
      {
        *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v96;
        *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = *((_QWORD *)this + 53);
        v97 = *((_QWORD *)this + 52);
        v98 = v93;
        v99 = *(_QWORD *)(v93 + 8) + *(_QWORD *)(v93 + 16);
        if ( v99 >= v97 )
        {
LABEL_169:
          v99 = *((_QWORD *)this + 52);
        }
        else
        {
          while ( 1 )
          {
            v100 = *(_QWORD *)(v98 + 48);
            if ( v100 == *((_QWORD *)this + 18) + 72LL )
              break;
            v98 = v100 - 48;
            if ( *(_DWORD *)v98 != 2 )
              break;
            v99 = *(_QWORD *)(v98 + 8) + *(_QWORD *)(v98 + 16);
            if ( v99 >= v97 )
              goto LABEL_169;
          }
        }
        *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = v99;
        v101 = v97 - v99;
        *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = v101;
        *((_QWORD *)this + 53) = v101;
        *((_QWORD *)this + 51) = v99;
      }
      else
      {
        v95 = 0;
      }
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *((_QWORD *)a2 + 17);
      *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = v94;
    }
    if ( v95 )
    {
      v102 = operator new(0x60uLL, 0x31356956u, PagedPool);
      v103 = operator new(0x28uLL, 0x38356956u, PagedPool);
      v107 = v103;
      if ( v102 )
      {
        if ( v103 )
        {
          memset(v102, 0, 0x60uLL);
          *((_QWORD *)v102 + 2) = DeferredSetVprCallback;
          *((_OWORD *)v102 + 3) = *(_OWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0);
          *((_OWORD *)v102 + 4) = *(_OWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0);
          *((_OWORD *)v102 + 5) = *(_OWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0);
          *((_QWORD *)v102 + 4) = *((_QWORD *)this + 1);
          *((_QWORD *)v102 + 5) = v107;
          v107[2] = this;
          v107[3] = *((_QWORD *)a2 + 18);
          v107[4] = *((_QWORD *)a2 + 2);
          *((_QWORD *)v102 + 3) = v102;
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 40760LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v102);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(*((VIDMM_LINEAR_POOL **)this + 18), *((void **)a2 + 18));
          *((_QWORD *)a2 + 18) = 0LL;
          goto LABEL_183;
        }
        operator delete(v102);
      }
      if ( v107 )
        operator delete(v107);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_qqqxx(
          v105,
          v104,
          v106,
          *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0),
          *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC4),
          *(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8),
          *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0),
          *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8));
      ADAPTER_RENDER::DdiSetVideoProtectedRegion(
        *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 1992LL),
        (const struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(v6 + 192));
    }
  }
LABEL_183:
  if ( v93 )
  {
    _guard_dispatch_icall_fptr();
    *((_QWORD *)a2 + 18) = 0LL;
  }
LABEL_185:
  v108 = (_QWORD *)((char *)a2 + 384);
  v109 = *((_QWORD *)a2 + 48);
  v110 = (_QWORD *)*((_QWORD *)a2 + 49);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v109 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (_QWORD *)*v110 != v108 )
  {
    __fastfail(3u);
  }
  *v110 = v109;
  *(_QWORD *)(v109 + 8) = v110;
  *v108 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  v111 = *(_QWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
  if ( v111 && *(_QWORD *)(v111 + 8) )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, v111, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 16) + 304LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 94), v109);
  *(_QWORD *)(*((_QWORD *)a2 + 16) + 8LL * PriorityClass + 320) += *((_QWORD *)a2 + 2);
  v113 = (char *)a2 + 288;
  v114 = (char *)*((_QWORD *)a2 + 36);
  while ( v114 != v113 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              *((VIDMM_PROCESS **)v114 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 184LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v116 + 7128, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v116 + 8));
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 40040LL) -= *((_QWORD *)a2 + 2) >> 12;
  *((_QWORD *)a2 + 16) = 0LL;
  *((_DWORD *)a2 + 30) = 0;
  VIDMM_GLOBAL::RemoveAllocationFromMigrationTable(*((union _LARGE_INTEGER ***)this + 1), a2);
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  if ( *(_BYTE *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
    _guard_dispatch_icall_fptr();
  v117 = (void *)*((_QWORD *)a2 + 46);
  if ( v117 )
  {
    VIDMM_SEGMENT::MakeRangePageable(this, v117);
    *((_QWORD *)a2 + 46) = 0LL;
  }
  if ( !*(_DWORD *)(((unsigned __int64)&v130 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
  {
    *((_BYTE *)a2 + 95) = 0;
    *((_DWORD *)a2 + 21) &= ~8u;
  }
  *((_DWORD *)a2 + 19) &= ~0x4000000u;
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  ExReleasePushLockExclusiveEx((char *)a2 + 464, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(*((DXGFASTMUTEX **)a2 + 39), v118, v119, v120);
  v121 = *((_QWORD *)this + 1);
  _InterlockedOr(v122, 0);
  ++*(_QWORD *)(v121 + 40);
}
