/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C00069D0 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     Template_q @ 0x1C0007190 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00081C0 (memmove.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C000E134 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_pqqt @ 0x1C000F884 (Template_pqqt.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00100E8 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C0010EA0 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     Template_qqqxx @ 0x1C0010F34 (Template_qqqxx.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011BDC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011C90 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C003D168 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C003D790 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C003DC60 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004B844 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C004BCAC (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C9CC (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004CB80 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004F4A0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004F850 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0050824 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050870 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0052098 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052E88 (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RemoveAllocationFromMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052EB8 (-RemoveAllocationFromMigrationTable@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0053080 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00534AC (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C005B4BC (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z @ 0x1C005B500 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1H@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005BB44 (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C006F868 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C006FEB4 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C007026C (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
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
  struct _VIDMM_LOCAL_ALLOC *v10; // rbx
  __int64 v11; // r13
  VIDMM_GLOBAL *v12; // r9
  VIDMM_GLOBAL *v13; // rcx
  int v14; // edx
  unsigned __int8 v15; // bl
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  __int64 v22; // rax
  __int64 *v23; // rdi
  char *v24; // rax
  NTSTATUS VirtualMemory; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r8
  char v30; // al
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  char v37; // bl
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r13
  __int64 v45; // rcx
  _QWORD *v46; // rax
  int TemporaryResourcesForAllocation; // eax
  __int64 v48; // rdx
  _QWORD *v49; // rax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  int v55; // ebx
  struct _MDL *MDLForRange; // rax
  unsigned __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned __int64 v61; // rbx
  unsigned int v62; // eax
  __int64 v63; // r12
  __int64 v64; // r13
  __int64 v65; // rdi
  unsigned __int64 v66; // rbx
  bool v67; // zf
  int v68; // eax
  struct _MDL *v69; // rax
  unsigned __int64 v70; // r9
  unsigned __int64 v71; // r8
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  _QWORD *v76; // rax
  int v77; // r13d
  __int64 v78; // rcx
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rax
  unsigned int v81; // edx
  __int64 v82; // rbx
  unsigned int v83; // ecx
  unsigned int v84; // edi
  __int64 v85; // rcx
  char *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r13
  __int64 v93; // rbx
  char v94; // dl
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 v98; // rcx
  _QWORD *v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  _QWORD *v103; // rbx
  _QWORD *v104; // rax
  __int64 v105; // rdx
  _QWORD *v106; // rcx
  unsigned int PriorityClass; // eax
  char *v108; // r11
  char *v109; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v111; // r9
  void *v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rax
  signed __int32 v117[8]; // [rsp+0h] [rbp-A0h] BYREF
  ULONG AllocationType[2]; // [rsp+20h] [rbp-80h]
  ULONG Protect[2]; // [rsp+28h] [rbp-78h]
  struct _MDL *v120; // [rsp+30h] [rbp-70h]
  struct VIDMM_SEGMENT *v121; // [rsp+38h] [rbp-68h]
  union _LARGE_INTEGER *v122; // [rsp+40h] [rbp-60h]
  struct _MDL *v123; // [rsp+48h] [rbp-58h]
  struct _DXGK_TRANSFERFLAGS v124; // [rsp+50h] [rbp-50h]
  char v125; // [rsp+A0h] [rbp+0h] BYREF

  v6 = (unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v6 + 72) = this;
  *(_QWORD *)(v6 + 80) = a2;
  v10 = a6;
  *(_QWORD *)(v6 + 32) = a6;
  *(_BYTE *)(v6 + 2) = 0;
  *(_BYTE *)(v6 + 1) = 0;
  LODWORD(v11) = -1073741823;
  v12 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  *(_BYTE *)v6 = (*(_BYTE *)(456LL * *((unsigned int *)this + 93) + *((_QWORD *)v12 + 4999) + 420) & 4) != 0;
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(v12, a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 464, 0LL);
  if ( !a6 )
  {
    v10 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 12);
    *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v10;
  }
  *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v10;
  v13 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( *((_QWORD *)v13 + 5079) )
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
  if ( (*((_DWORD *)a2 + 19) & 0x4000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v13, a2);
  v16 = **((_DWORD **)a2 + 59);
  v17 = 0x10000LL;
  *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0x10000;
  if ( (v16 & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*((ADAPTER_RENDER ***)this + 1), a2, 0LL);
  if ( (**((_DWORD **)a2 + 59) & 0x20000) != 0 && (*((_DWORD *)this + 14) & 0x40000) == 0 )
    *((_DWORD *)a2 + 19) |= 0x80000u;
  *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
  if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation((VIDMM_GLOBAL *)v17, a2) )
  {
    *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 1;
    if ( *((_BYTE *)a2 + 95) )
      *((_BYTE *)a2 + 94) = 0;
    v15 = 0;
  }
  v21 = v15;
  if ( (*((_DWORD *)a2 + 19) & 0x80000) != 0 )
    v21 = 0;
  *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v21;
  if ( (dword_1C00270E4 & 8) == 0 && (*((_DWORD *)a2 + 21) & 8) != 0 )
    *((_BYTE *)a2 + 95) = 1;
  if ( (_BYTE)v21 )
  {
    if ( (*((_DWORD *)a2 + 21) & 8) != 0 && !*((_BYTE *)a2 + 95) )
    {
      v22 = *((_QWORD *)a2 + 12);
      if ( v22 )
      {
        KeStackAttachProcess(**(PRKPROCESS **)(v22 + 8), (PRKAPC_STATE)(v6 + 232));
        v23 = (__int64 *)((char *)a2 + 8);
        v24 = VidMmMapViewOfAllocation(a2, 0LL, *((_QWORD *)a2 + 1), 1);
        *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v24;
        if ( v24 )
        {
          VirtualMemory = ZwAllocateVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            (PVOID *)(v6 + 96),
                            0LL,
                            (PSIZE_T)a2 + 1,
                            0x1000000u,
                            4u);
          VidMmUnmapViewOfAllocation(a2, v26, v27, v28);
          v30 = bTracingEnabled;
          if ( VirtualMemory < 0 )
          {
            *((_BYTE *)a2 + 95) = 1;
            if ( v30 )
            {
              v34 = (unsigned __int64)*v23 >> 12;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              {
                LODWORD(v120) = 0;
                Protect[0] = v34;
                AllocationType[0] = 0;
                Template_pqqt(v34, &EventUnreset, v29, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v120);
              }
            }
            v35 = *v23;
            v36 = *((_QWORD *)this + 1);
            ++*(_DWORD *)(v36 + 7384);
            *(_QWORD *)(v36 + 7392) += v35;
          }
          else
          {
            if ( bTracingEnabled )
            {
              v31 = (unsigned __int64)*v23 >> 12;
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
              {
                LODWORD(v120) = 1;
                Protect[0] = v31;
                AllocationType[0] = 0;
                Template_pqqt(v31, &EventUnreset, v29, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v120);
              }
            }
            v32 = *v23;
            v33 = *((_QWORD *)this + 1);
            ++*(_DWORD *)(v33 + 7368);
            *(_QWORD *)(v33 + 7376) += v32;
          }
        }
        KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 232));
        v21 = *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      }
    }
  }
  v37 = *((_BYTE *)a2 + 95) != 0 ? v21 : 0;
  v38 = *((unsigned int *)a2 + 21);
  v39 = *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( (v38 & 8) == 0
    && (**((_DWORD **)a2 + 59) & 0x4000003A) == 0
    && v39
    && (*(_BYTE *)(v39 + 32) & 1) == 0
    && (v38 & 2) == 0
    && !*((_QWORD *)a2 + 32) )
  {
    if ( (*((_DWORD *)a2 + 19) & 0x2000000) == 0 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v38, v18, v19, v20);
      *(_QWORD *)(v40 + 24) = 1520LL;
      WdLogEvent5_WdAssertion(v40);
    }
    if ( !v37 )
      goto LABEL_61;
    VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
  }
  if ( v37 )
  {
    if ( (**((_DWORD **)a2 + 59) & 0x8000000) != 0 )
    {
      v41 = *((_QWORD *)a2 + 12);
      if ( v41 )
      {
        if ( (*(_BYTE *)(v41 + 32) & 1) == 0
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
      goto LABEL_123;
    TemporaryResourcesForAllocation = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
                                        *((VIDMM_GLOBAL **)this + 1),
                                        a2);
    v11 = TemporaryResourcesForAllocation;
    *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = TemporaryResourcesForAllocation;
    if ( TemporaryResourcesForAllocation < 0 )
    {
      if ( *(_BYTE *)v6 )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v48);
        v49[3] = 270LL;
        v49[4] = 9LL;
        v49[5] = a2;
        v49[6] = v11;
        v49[7] = 0LL;
        WdLogEvent5_WdCriticalError(v49);
      }
      goto LABEL_123;
    }
    v50 = *((_QWORD *)a2 + 12);
    if ( v50 && (*(_BYTE *)(v50 + 32) & 1) != 0 )
    {
      memset((void *)(v6 + 104), 0, 0x28uLL);
      if ( *((_BYTE *)a2 + 281) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 33), *((_QWORD *)a2 + 34));
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
      }
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), (PRKAPC_STATE)(v6 + 232));
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = a2;
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = this;
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *((_QWORD *)a2 + 17);
      *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0;
      v123 = (struct _MDL *)a2;
      LODWORD(v122) = 1;
      v121 = (struct VIDMM_SEGMENT *)(v6 + 104);
      v120 = (struct _MDL *)VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
      *(_QWORD *)Protect = 0LL;
      *(_QWORD *)AllocationType = 0LL;
      v51 = _guard_dispatch_icall_fptr();
      v11 = v51;
      if ( (int)(v51 + 0x80000000) < 0 )
      {
        if ( v51 != -1073741558 )
          goto LABEL_83;
      }
      else if ( v51 != -1073741558 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53, v52);
        v54[3] = 270LL;
        v54[4] = 4LL;
        v54[5] = 2LL;
        v54[6] = v11;
        v54[7] = 0LL;
        WdLogEvent5_WdCriticalError(v54);
LABEL_83:
        *(_BYTE *)(*((_QWORD *)a2 + 12) + 32LL) &= ~1u;
        KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 232));
        *(_BYTE *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
        goto LABEL_123;
      }
      *((_DWORD *)a2 + 19) |= 0x80000u;
      LODWORD(v11) = 0;
      goto LABEL_83;
    }
    *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
    if ( (VIDMM_GLOBAL::_Config & 0x30) == 0 )
    {
      v120 = (struct _MDL *)(v6 + 16);
      *(_QWORD *)Protect = v6 + 2;
      LOBYTE(AllocationType[0]) = 0;
      v55 = _guard_dispatch_icall_fptr();
      if ( v55 < 0 )
        goto LABEL_89;
      MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = MDLForRange;
      if ( MDLForRange )
        goto LABEL_89;
      _guard_dispatch_icall_fptr();
    }
    v55 = -1071775487;
LABEL_89:
    if ( v55 >= 0 )
    {
      if ( !*(_BYTE *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 2) )
      {
        *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
        _guard_dispatch_icall_fptr();
      }
      v57 = *((_QWORD *)a2 + 1);
      if ( *(_BYTE *)v6 )
      {
        v124.0 = 0;
        v123 = VidMmGetMDLForRange(a2, 0LL, v57);
        v122 = 0LL;
        v121 = 0LL;
        v57 = *((_QWORD *)a2 + 1);
      }
      else
      {
        v124.0 = 0;
        v123 = 0LL;
        v122 = (union _LARGE_INTEGER *)((char *)a2 + 248);
        v121 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
      }
      VIDMM_GLOBAL::MemoryTransfer(
        *((VIDMM_GLOBAL **)this + 1),
        a2,
        v57,
        0LL,
        this,
        (union _LARGE_INTEGER *)a2 + 17,
        0LL,
        v121,
        v122,
        v123,
        v124);
      if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
      {
        v60 = WdLogNewEntry5_WdEvent(v59, v58);
        *(_QWORD *)(v60 + 24) = a2;
        WdLogEvent5_WdEvent(v60);
        goto LABEL_122;
      }
      VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
LABEL_123:
      if ( (int)v11 >= 0 )
        goto LABEL_151;
      if ( (**((_DWORD **)a2 + 59) & 8) != 0 )
        goto LABEL_133;
      v72 = *((_QWORD *)a2 + 12);
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v72;
      if ( !v72 || (*(_BYTE *)(v72 + 32) & 1) == 0 )
        goto LABEL_133;
      memset((void *)(v6 + 144), 0, 0x28uLL);
      KeStackAttachProcess(
        **(PRKPROCESS **)(*(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) + 8LL),
        (PRKAPC_STATE)(v6 + 232));
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = a2;
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = this;
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *((_QWORD *)a2 + 17);
      *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0;
      v123 = (struct _MDL *)a2;
      LODWORD(v122) = 1;
      v121 = (struct VIDMM_SEGMENT *)(v6 + 144);
      v120 = (struct _MDL *)VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
      *(_QWORD *)Protect = 0LL;
      *(_QWORD *)AllocationType = 0LL;
      v73 = _guard_dispatch_icall_fptr();
      v11 = v73;
      if ( ((v73 + 0x80000000) & 0x80000000) != 0 )
      {
        if ( v73 != -1073741558 )
          goto LABEL_132;
      }
      else if ( v73 != -1073741558 )
      {
        v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v75, v74);
        v76[3] = 270LL;
        v76[4] = 4LL;
        v76[5] = 2LL;
        v76[6] = v11;
        v76[7] = 0LL;
        WdLogEvent5_WdCriticalError(v76);
LABEL_132:
        *(_BYTE *)(*((_QWORD *)a2 + 12) + 32LL) &= ~1u;
        KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 232));
LABEL_133:
        if ( (int)v11 < 0 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
            Template_q(v38, &EventPerformanceWarning, v19, 2);
          v77 = 0;
          *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
          if ( (**((_DWORD **)a2 + 59) & 8) == 0 )
          {
            v78 = *((_QWORD *)a2 + 12);
            if ( v78 )
            {
              KeStackAttachProcess(**(PRKPROCESS **)(v78 + 8), (PRKAPC_STATE)(v6 + 232));
              v77 = 1;
              *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
            }
          }
          v67 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 16)) == 0;
          v79 = *((_QWORD *)a2 + 1);
          if ( v67 )
          {
            v81 = 4096;
            *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 4096;
            v80 = v79 >> 12;
          }
          else
          {
            v80 = v79 >> 16;
            v81 = 0x10000;
          }
          *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v80;
          v82 = *((_QWORD *)a2 + 17);
          *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v82;
          v83 = 0;
          while ( 1 )
          {
            *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v83;
            if ( v83 >= (unsigned int)v80 )
              break;
            v84 = v81 * v83;
            VIDMM_GLOBAL::MemoryTransfer(
              *((VIDMM_GLOBAL **)this + 1),
              a2,
              v81,
              v81 * v83,
              this,
              (union _LARGE_INTEGER *)(v6 + 56),
              0LL,
              0LL,
              0LL,
              *(struct _MDL **)(*((_QWORD *)this + 32) + 8LL),
              0);
            VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
            v85 = *(unsigned int *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            v82 += v85;
            *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v82;
            v86 = VidMmMapViewOfAllocation(a2, v84, (unsigned int)v85, 0);
            if ( v86 )
            {
              memmove(
                v86,
                *((const void **)this + 31),
                *(unsigned int *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
              VidMmUnmapViewOfAllocation(a2, v87, v88, v89);
            }
            else
            {
              *((_DWORD *)a2 + 19) |= 0x80000u;
            }
            v83 = *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 4) + 1;
            v80 = *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
            v39 = *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
            v81 = *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          }
          if ( v77 )
            KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 232));
        }
        goto LABEL_151;
      }
      *((_DWORD *)a2 + 19) |= 0x80000u;
      LODWORD(v11) = 0;
      goto LABEL_132;
    }
    v19 = *((_QWORD *)a2 + 1);
    v61 = v19 >> 1;
    if ( !*(_BYTE *)v6 || (v67 = Use64KbPagesForTransfer(a2, this) == 0, v62 = 0x10000, v67) )
      v62 = 4096;
    if ( !v19 )
    {
LABEL_122:
      *(_BYTE *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
      goto LABEL_123;
    }
    v63 = v62;
    v64 = ~(v62 - 1);
    v65 = 0LL;
    while ( 1 )
    {
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      v66 = v64 & (v63 + v61 - 1);
      if ( (VIDMM_GLOBAL::_Config & 0x20) != 0 )
      {
        v67 = v63 == v66;
        if ( v63 != v66 )
          goto LABEL_105;
      }
      else
      {
        v67 = v63 == v66;
      }
      v120 = (struct _MDL *)(v6 + 16);
      *(_QWORD *)Protect = v6 + 2;
      LOBYTE(AllocationType[0]) = v67;
      v68 = _guard_dispatch_icall_fptr();
      *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v68;
      if ( v68 < 0 )
        goto LABEL_113;
      if ( !*(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      {
        v69 = VidMmGetMDLForRange(a2, v65, v66);
        *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v69;
        if ( !v69 )
        {
          _guard_dispatch_icall_fptr();
LABEL_105:
          v68 = -1071775487;
          goto LABEL_112;
        }
        v68 = *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      }
LABEL_112:
      if ( v68 >= 0 )
      {
        if ( !*(_BYTE *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 2) )
        {
          *(_QWORD *)AllocationType = *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          _guard_dispatch_icall_fptr();
        }
        v124.0 = 0;
        if ( *(_BYTE *)v6 )
        {
          *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v65 + *((_QWORD *)a2 + 17);
          v123 = *(struct _MDL **)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          v122 = 0LL;
          v121 = 0LL;
          v120 = 0LL;
          *(_QWORD *)Protect = v6 + 88;
          v70 = v65;
          v71 = v66;
        }
        else
        {
          v123 = 0LL;
          v122 = (union _LARGE_INTEGER *)((char *)a2 + 248);
          v121 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 32);
          v120 = 0LL;
          *(_QWORD *)Protect = (char *)a2 + 136;
          v70 = 0LL;
          v71 = *((_QWORD *)a2 + 1);
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v71,
          v70,
          this,
          *(union _LARGE_INTEGER **)Protect,
          v120,
          v121,
          v122,
          v123,
          v124);
        VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
        *(_QWORD *)AllocationType = *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
        v65 += v66;
        v61 = *((_QWORD *)a2 + 1) - v65;
        goto LABEL_120;
      }
LABEL_113:
      v61 = v66 >> 1;
LABEL_120:
      if ( v65 == *((_QWORD *)a2 + 1) )
      {
        LODWORD(v11) = *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v39 = *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        goto LABEL_122;
      }
    }
  }
LABEL_61:
  if ( v39 && (*(_BYTE *)(v39 + 32) & 1) != 0 )
  {
    KeStackAttachProcess(**(PRKPROCESS **)(v39 + 8), (PRKAPC_STATE)(v6 + 232));
    v123 = (struct _MDL *)a2;
    LODWORD(v122) = 1;
    v121 = 0LL;
    v120 = 0LL;
    *(_QWORD *)Protect = 0LL;
    *(_QWORD *)AllocationType = 0LL;
    v42 = _guard_dispatch_icall_fptr();
    v44 = v42;
    v45 = v42 + 0x80000000;
    if ( (int)v45 >= 0 && v42 != -1073741558 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45, v43);
      v46[3] = 270LL;
      v46[4] = 4LL;
      v46[5] = 3LL;
      v46[6] = v44;
      v46[7] = 0LL;
      WdLogEvent5_WdCriticalError(v46);
    }
    *(_BYTE *)(v39 + 32) &= ~1u;
    KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 232));
  }
  if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
    VIDMM_GLOBAL::DiscardAllocation(*((ADAPTER_RENDER ***)this + 1), a2, (struct _VIDMM_GLOBAL_ALLOC *)v19);
LABEL_151:
  if ( *((_QWORD *)a2 + 54) )
  {
    VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 55), a2);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(*((VIDMM_CPU_HOST_APERTURE **)this + 55), a2, v90, v91);
  }
  v92 = *((_QWORD *)a2 + 18);
  if ( (**((_DWORD **)a2 + 59) & 0x20000) != 0 )
  {
    if ( !v92 )
      goto LABEL_172;
    v93 = ~*((_QWORD *)this + 49) & (*((_QWORD *)this + 49) + *((_QWORD *)a2 + 2));
    memset((void *)(v6 + 184), 0, 0x30uLL);
    *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = *((_DWORD *)this + 93);
    if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
      *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = 0;
    else
      *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = *((_DWORD *)this + 4) + 1;
    v94 = 1;
    if ( *((_DWORD *)this + 101) )
    {
      v95 = *((_QWORD *)this + 51);
      if ( *((_QWORD *)a2 + 17) == v95 )
      {
        *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = v95;
        v96 = *((_QWORD *)this + 53);
        *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v96;
        v97 = v93 + v95;
        *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = v97;
        v98 = v96 - v93;
        *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = v98;
        *((_QWORD *)this + 53) = v98;
        *((_QWORD *)this + 51) = v97;
      }
      else
      {
        v94 = 0;
      }
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = *((_QWORD *)a2 + 17);
      *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v93;
    }
    if ( v94 )
    {
      v99 = operator new(0x70uLL, 0x31356956u, PagedPool);
      v103 = v99;
      if ( v99 )
      {
        memset(v99, 0, 0x70uLL);
        v103[2] = DeferredSetVprCallback;
        *((_OWORD *)v103 + 4) = *(_OWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8);
        *((_OWORD *)v103 + 5) = *(_OWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8);
        *((_OWORD *)v103 + 6) = *(_OWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8);
        v103[4] = *((_QWORD *)this + 1);
        v103[5] = this;
        v103[6] = *((_QWORD *)a2 + 18);
        v103[7] = *((_QWORD *)a2 + 2);
        v103[3] = v103;
        DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
          (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 40704LL),
          (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v103);
        *((_QWORD *)a2 + 18) = 0LL;
      }
      else
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_qqqxx(
            v101,
            v100,
            v102,
            *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8),
            *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC),
            *(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0),
            *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8),
            *(_QWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0));
        ADAPTER_RENDER::DdiSetVideoProtectedRegion(
          *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 1984LL),
          (struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(v6 + 184));
      }
    }
  }
  if ( v92 )
  {
    _guard_dispatch_icall_fptr();
    *((_QWORD *)a2 + 18) = 0LL;
  }
LABEL_172:
  v104 = (_QWORD *)((char *)a2 + 384);
  v105 = *((_QWORD *)a2 + 48);
  v106 = (_QWORD *)*((_QWORD *)a2 + 49);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v105 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 384)
    || (_QWORD *)*v106 != v104 )
  {
    __fastfail(3u);
  }
  *v106 = v105;
  *(_QWORD *)(v105 + 8) = v106;
  *v104 = 0LL;
  *((_QWORD *)a2 + 49) = 0LL;
  if ( v39 && *(_QWORD *)(v39 + 8) )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, v39, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 16) + 304LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 94));
  *(_QWORD *)(*((_QWORD *)a2 + 16) + 8LL * PriorityClass + 320) += *((_QWORD *)a2 + 2);
  v108 = (char *)a2 + 288;
  v109 = (char *)*((_QWORD *)a2 + 36);
  while ( v109 != v108 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              *((VIDMM_PROCESS **)v109 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 184LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v111 + 7128, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v111 + 8));
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 39984LL) -= *((_QWORD *)a2 + 2) >> 12;
  *((_QWORD *)a2 + 16) = 0LL;
  *((_DWORD *)a2 + 30) = 0;
  VIDMM_GLOBAL::RemoveAllocationFromMigrationTable(*((DXGFASTMUTEX ***)this + 1), a2);
  *((_DWORD *)a2 + 19) &= ~0x400000u;
  if ( *(_BYTE *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
    _guard_dispatch_icall_fptr();
  v112 = (void *)*((_QWORD *)a2 + 46);
  if ( v112 )
  {
    VIDMM_SEGMENT::MakeRangePageable(this, v112);
    *((_QWORD *)a2 + 46) = 0LL;
  }
  if ( !*(_DWORD *)(((unsigned __int64)&v125 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) )
  {
    *((_BYTE *)a2 + 95) = 0;
    *((_DWORD *)a2 + 21) &= ~8u;
  }
  *((_DWORD *)a2 + 19) &= ~0x2000000u;
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  ExReleasePushLockExclusiveEx((char *)a2 + 464, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v113, v114, v115);
  v116 = *((_QWORD *)this + 1);
  _InterlockedOr(v117, 0);
  ++*(_QWORD *)(v116 + 40);
}
