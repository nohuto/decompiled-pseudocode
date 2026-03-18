/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000FF80 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00104CC (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00123F8 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00128F8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0014B00 (memmove.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C001D264 (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     Template_pqqt @ 0x1C001E61C (Template_pqqt.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x1C0020100 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     Template_qqqxx @ 0x1C0020194 (Template_qqqxx.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C004B970 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004CAB0 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C004E584 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C004E5D0 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FA1C (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FAA8 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0050A18 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0050D4C (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051974 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0052128 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054824 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054A00 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00599EC (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C005D0C8 (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00643F8 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z @ 0x1C0066B4C (-VidMmUnmapViewOfAllocation@@YAXPEAU_VIDMM_LOCAL_ALLOC@@PEAX@Z.c)
 *     ?VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z @ 0x1C0066C38 (-VidMmMapViewOfAllocation@@YAPEAXPEAU_VIDMM_LOCAL_ALLOC@@_K1PEAPEAXH@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00671B4 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C0067670 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0098184 (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C0098518 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     ?MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z @ 0x1C0098FEC (-MakeRangePageable@VIDMM_SEGMENT@@QEAAXPEAX@Z.c)
 *     ?MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C009F530 (-MarkBlockAsAllocatedScrubPending@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::EvictResource(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int8 v7; // bl
  struct _VIDMM_LOCAL_ALLOC *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r13
  __int64 v14; // r9
  VIDMM_GLOBAL *v15; // rcx
  int v16; // edx
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  char v23; // bl
  __int64 v24; // rdx
  _BYTE *v25; // rcx
  _QWORD *v26; // r13
  _QWORD *v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  unsigned int PriorityClass; // eax
  char *v31; // r11
  char *v32; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v34; // r9
  void *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  int TemporaryResourcesForAllocation; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  int v43; // ebx
  struct _MDL *MDLForRange; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rax
  unsigned __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r13
  __int64 v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 *v64; // r13
  void *v65; // rax
  NTSTATUS VirtualMemory; // ebx
  __int64 v67; // r8
  char v68; // al
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  _QWORD *v86; // rax
  unsigned int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  _QWORD *v91; // rax
  __int64 v92; // rax
  unsigned __int64 v93; // r13
  unsigned __int64 v94; // rbx
  unsigned int v95; // r15d
  __int64 v96; // rcx
  unsigned __int64 v97; // rbx
  bool v98; // zf
  int v99; // eax
  struct _MDL *v100; // rax
  unsigned __int64 v101; // r9
  SIZE_T v102; // r8
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // r13
  _QWORD *v113; // rax
  int v114; // r13d
  unsigned __int8 v115; // al
  unsigned __int64 v116; // rcx
  unsigned __int64 v117; // rcx
  unsigned int v118; // edx
  unsigned int v119; // eax
  unsigned int v120; // ebx
  __int64 v121; // rcx
  void *v122; // rax
  __int64 v123; // rbx
  __int64 v124; // rax
  unsigned __int64 v125; // rdx
  unsigned __int64 v126; // rcx
  unsigned __int64 v127; // rdx
  PVOID v128; // rbx
  _QWORD *v129; // rax
  _QWORD *v130; // r13
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  signed __int32 v134[8]; // [rsp+0h] [rbp-A0h] BYREF
  ULONG AllocationType[2]; // [rsp+20h] [rbp-80h]
  ULONG Protect[2]; // [rsp+28h] [rbp-78h]
  struct _MDL *v137; // [rsp+30h] [rbp-70h]
  struct VIDMM_SEGMENT *v138; // [rsp+38h] [rbp-68h]
  union _LARGE_INTEGER *v139; // [rsp+40h] [rbp-60h]
  struct _MDL *v140; // [rsp+48h] [rbp-58h]
  struct _DXGK_TRANSFERFLAGS v141; // [rsp+50h] [rbp-50h]
  char v142; // [rsp+A0h] [rbp+0h] BYREF

  v6 = (unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL;
  v7 = a3;
  *(_QWORD *)(v6 + 88) = this;
  *(_QWORD *)(v6 + 96) = a2;
  v10 = a6;
  *(_QWORD *)(v6 + 24) = a6;
  *(_BYTE *)v6 = 0;
  *(_BYTE *)(v6 + 1) = 0;
  *(_DWORD *)(v6 + 4) = -1073741823;
  v11 = 456LL * *((unsigned int *)this + 93);
  v12 = *(_QWORD *)(*((_QWORD *)this + 1) + 40136LL);
  v13 = (*(_BYTE *)(v11 + v12 + 420) & 4) != 0;
  *(_BYTE *)(v6 + 2) = v13;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, a3, a4) + 24) = a2;
  if ( *((_DWORD *)a2 + 40) && g_IsInternalRelease )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11, a3, a4);
    v62[3] = 270LL;
    v62[4] = 9LL;
    v62[5] = 0LL;
    v62[6] = 0LL;
    v62[7] = 0LL;
    WdLogEvent5_WdCriticalError(v62);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 40));
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 496, 0LL);
  if ( !a6 )
  {
    v10 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 13);
    *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v10;
  }
  *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v10;
  v15 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  if ( *((_QWORD *)v15 + 5119) )
  {
    if ( (*((_DWORD *)this + 14) & 0x1000) != 0 )
      v16 = 0;
    else
      v16 = *((_DWORD *)this + 4) + 1;
    VIDMM_GLOBAL::RecordPageMappingHistory(
      (__int64)v15,
      v16,
      *((__int64 *)a2 + 18) >> 12,
      *((_QWORD *)a2 + 2) >> 12,
      4,
      (__int64)a2);
  }
  if ( (*((_DWORD *)a2 + 19) & 0x100) != 0 )
    v7 = 0;
  if ( (*((_DWORD *)a2 + 19) & 0x8000000) != 0 )
    VIDMM_GLOBAL::NotifyContextAllocationEviction(v15, a2);
  v17 = **((_DWORD **)a2 + 63);
  *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0x10000;
  if ( (v17 & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency(*((ADAPTER_RENDER ***)this + 1), (D3DGPU_VIRTUAL_ADDRESS *)a2, 0LL, v14);
  if ( (**((_DWORD **)a2 + 63) & 0x20000) != 0 && (*((_DWORD *)this + 14) & 0x40000) == 0 )
    *((_DWORD *)a2 + 19) |= 0x100000u;
  *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
  if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(*((VIDMM_GLOBAL **)this + 1), a2) )
  {
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 1;
    if ( *((_BYTE *)a2 + 98) )
      *((_BYTE *)a2 + 97) = 0;
    v7 = 0;
  }
  v20 = v7;
  if ( (*((_DWORD *)a2 + 19) & 0x100000) != 0 )
    v20 = 0LL;
  *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v20;
  v21 = *(_QWORD *)(*((_QWORD *)this + 1) + 24LL);
  if ( *(_BYTE *)(v21 + 2091) )
  {
    v63 = WdLogNewEntry5_WdEvent(v21, v20, v18, v19);
    *(_QWORD *)(v63 + 24) = a2;
    WdLogEvent5_WdEvent(v63);
    LOBYTE(v20) = 0;
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v20;
  }
  v22 = *((unsigned int *)a2 + 21);
  LOBYTE(v21) = (v22 & 8) != 0;
  if ( ((unsigned __int8)v21 & ((VIDMM_GLOBAL::_Config & 8) == 0)) != 0 )
    *((_BYTE *)a2 + 98) = 1;
  if ( (_BYTE)v20 && (v22 & 8) != 0 && !*((_BYTE *)a2 + 98) && v10 )
  {
    KeStackAttachProcess(**((PRKPROCESS **)v10 + 1), (PRKAPC_STATE)(v6 + 232));
    v64 = (__int64 *)((char *)a2 + 8);
    v65 = VidMmMapViewOfAllocation(v10, 0LL, *((_QWORD *)a2 + 1), (void **)(v6 + 72), 1);
    *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v65;
    if ( v65 )
    {
      VirtualMemory = ZwAllocateVirtualMemory(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        (PVOID *)(v6 + 64),
                        0LL,
                        (PSIZE_T)a2 + 1,
                        0x1000000u,
                        4u);
      VidMmUnmapViewOfAllocation(v10, *(void **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48));
      v68 = bTracingEnabled;
      if ( VirtualMemory < 0 )
      {
        *((_BYTE *)a2 + 98) = 1;
        if ( v68 )
        {
          v72 = (unsigned __int64)*v64 >> 12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v137) = 0;
            Protect[0] = v72;
            AllocationType[0] = 0;
            Template_pqqt(v72, &EventUnreset, v67, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v137);
          }
        }
        v73 = *v64;
        v74 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v74 + 7384);
        *(_QWORD *)(v74 + 7392) += v73;
      }
      else
      {
        if ( bTracingEnabled )
        {
          v69 = (unsigned __int64)*v64 >> 12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v137) = 1;
            Protect[0] = v69;
            AllocationType[0] = 0;
            Template_pqqt(v69, &EventUnreset, v67, a2, *(_QWORD *)AllocationType, *(_QWORD *)Protect, v137);
          }
        }
        v70 = *v64;
        v71 = *((_QWORD *)this + 1);
        ++*(_DWORD *)(v71 + 7368);
        *(_QWORD *)(v71 + 7376) += v70;
      }
    }
    KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 232));
    LODWORD(v20) = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v13 = *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 2);
  }
  v23 = *((_BYTE *)a2 + 98) != 0 ? v20 : 0;
  v24 = *((unsigned int *)a2 + 21);
  if ( (v24 & 8) == 0 && (**((_DWORD **)a2 + 63) & 0x4000003A) == 0 )
  {
    if ( v10 )
    {
      LOBYTE(v21) = ((v24 & 2) == 0) & ~*((_BYTE *)v10 + 32);
      if ( (_BYTE)v21 )
      {
        if ( !*((_QWORD *)a2 + 33) )
        {
          if ( (*((_DWORD *)a2 + 19) & 0x4000000) == 0 )
          {
            v75 = WdLogNewEntry5_WdAssertion(v21, v24);
            *(_QWORD *)(v75 + 24) = 1588LL;
            WdLogEvent5_WdAssertion(v75);
          }
          if ( !v23 )
            goto LABEL_27;
          VIDMM_GLOBAL::ResetBackingStore(*((VIDMM_GLOBAL **)this + 1), a2);
        }
      }
    }
  }
  if ( v23 )
  {
    if ( (**((_DWORD **)a2 + 63) & 0x8000000) != 0 )
    {
      if ( v10 )
      {
        LOBYTE(v21) = ((*((_DWORD *)a2 + 21) & 2) == 0) & ~*((_BYTE *)v10 + 32);
        if ( (_BYTE)v21 )
        {
          if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1)) >= 0 )
          {
            if ( (int)VIDMM_SEGMENT::LockAllocationBackingStore(this, a2) < 0 )
              VIDMM_GLOBAL::ReturnPinnedBackingStore(*((VIDMM_GLOBAL **)this + 1), *((_QWORD *)a2 + 1));
            else
              *((_DWORD *)a2 + 21) |= 2u;
          }
        }
      }
    }
    if ( !*((_DWORD *)a2 + 16) )
      goto LABEL_89;
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v21, v24, v22, v19);
    TemporaryResourcesForAllocation = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(
                                        *((VIDMM_GLOBAL **)this + 1),
                                        a2,
                                        v22,
                                        v19);
    v42 = TemporaryResourcesForAllocation;
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = TemporaryResourcesForAllocation;
    if ( TemporaryResourcesForAllocation < 0 )
    {
      if ( v13 )
      {
        v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v41, v24, v22, v19);
        v77[3] = 270LL;
        v77[4] = 9LL;
        v77[5] = a2;
        v77[6] = v42;
        v77[7] = 0LL;
        WdLogEvent5_WdCriticalError(v77);
      }
      goto LABEL_89;
    }
    if ( !v10 || (*((_BYTE *)v10 + 32) & 1) == 0 )
    {
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
      if ( (*(_DWORD *)(*((_QWORD *)this + 1) + 6464LL) & 0x400) == 0 )
      {
        v137 = (struct _MDL *)(v6 + 16);
        *(_QWORD *)Protect = (unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL;
        LOBYTE(AllocationType[0]) = 0;
        v43 = _guard_dispatch_icall_fptr();
        if ( v43 < 0 )
          goto LABEL_80;
        MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
        *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = MDLForRange;
        if ( MDLForRange )
          goto LABEL_80;
        _guard_dispatch_icall_fptr();
      }
      v43 = -1071775487;
LABEL_80:
      if ( v43 >= 0 )
      {
        if ( !*(_BYTE *)v6 )
        {
          *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
          _guard_dispatch_icall_fptr();
        }
        if ( g_IsInternalReleaseOrDbg )
        {
          WdLogNewEntry5_WdTrace(v41, v24, v22, v19);
          v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v46, v45, v47, v48);
          v49[3] = *((_QWORD *)a2 + 33);
          v49[4] = *((_QWORD *)a2 + 31);
          v49[5] = *((int *)a2 + 65);
          v49[6] = *((unsigned int *)a2 + 64);
        }
        v50 = *((_QWORD *)a2 + 1);
        v141.0 = 0;
        if ( v13 )
        {
          v140 = VidMmGetMDLForRange(a2, 0LL, v50);
          v139 = 0LL;
          v138 = 0LL;
          v50 = *((_QWORD *)a2 + 1);
        }
        else
        {
          v140 = 0LL;
          v139 = (union _LARGE_INTEGER *)((char *)a2 + 256);
          v138 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
        }
        VIDMM_GLOBAL::MemoryTransfer(
          *((VIDMM_GLOBAL **)this + 1),
          a2,
          v50,
          0LL,
          this,
          (union _LARGE_INTEGER *)a2 + 18,
          0LL,
          v138,
          v139,
          v140,
          v141);
        if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
        {
          v92 = WdLogNewEntry5_WdEvent(v52, v51, v53, v54);
          *(_QWORD *)(v92 + 24) = a2;
          WdLogEvent5_WdEvent(v92);
          goto LABEL_159;
        }
        VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL ****)this + 1), a2, v53, v54);
LABEL_89:
        v55 = *(unsigned int *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        if ( (int)v55 >= 0 )
          goto LABEL_33;
        if ( (**((_DWORD **)a2 + 63) & 8) != 0 || !v10 || (*((_BYTE *)v10 + 32) & 1) == 0 )
          goto LABEL_171;
        memset((void *)(v6 + 144), 0, 0x28uLL);
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v104, v103, v105, v106);
        KeStackAttachProcess(**((PRKPROCESS **)v10 + 1), (PRKAPC_STATE)(v6 + 232));
        *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = a2;
        *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = this;
        *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *((_QWORD *)a2 + 18);
        *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0;
        v140 = (struct _MDL *)a2;
        LODWORD(v139) = 1;
        v138 = (struct VIDMM_SEGMENT *)(v6 + 144);
        v137 = (struct _MDL *)VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
        *(_QWORD *)Protect = 0LL;
        *(_QWORD *)AllocationType = 0LL;
        v107 = _guard_dispatch_icall_fptr();
        v112 = v107;
        *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v107;
        if ( ((v107 + 0x80000000) & 0x80000000) != 0 )
        {
          if ( v107 != -1073741558 )
            goto LABEL_170;
        }
        else if ( v107 != -1073741558 )
        {
          v113 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v109, v108, v110, v111);
          v113[3] = 270LL;
          v113[4] = 4LL;
          v113[5] = 2LL;
          v113[6] = v112;
          v113[7] = 0LL;
          WdLogEvent5_WdCriticalError(v113);
LABEL_170:
          *((_BYTE *)v10 + 32) &= ~1u;
          KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 232));
          v55 = *(unsigned int *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
LABEL_171:
          if ( (int)v55 < 0 )
          {
            if ( g_IsInternalReleaseOrDbg )
              WdLogNewEntry5_WdTrace(v55, v24, v22, v19);
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v55, &EventPerformanceWarning, v22, 2);
            v114 = 0;
            *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
            if ( (**((_DWORD **)a2 + 63) & 8) == 0 && v10 )
            {
              KeStackAttachProcess(**((PRKPROCESS **)v10 + 1), (PRKAPC_STATE)(v6 + 232));
              v114 = 1;
              *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 1;
            }
            v115 = Use64KbPagesForTransfer(a2, *((struct VIDMM_SEGMENT **)a2 + 17));
            v116 = *((_QWORD *)a2 + 1);
            if ( v115 )
            {
              v117 = v116 >> 16;
              v118 = 0x10000;
            }
            else
            {
              v118 = 4096;
              *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 4096;
              v117 = v116 >> 12;
            }
            *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v117;
            *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *((_QWORD *)a2 + 18);
            v119 = 0;
            while ( 1 )
            {
              *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v119;
              if ( v119 >= (unsigned int)v117 )
                break;
              v120 = v118 * v119;
              VIDMM_GLOBAL::MemoryTransfer(
                *((VIDMM_GLOBAL **)this + 1),
                a2,
                v118,
                v118 * v119,
                this,
                (union _LARGE_INTEGER *)(v6 + 24),
                0LL,
                0LL,
                0LL,
                *(struct _MDL **)(*((_QWORD *)this + 32) + 8LL),
                0);
              VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
              v121 = *(unsigned int *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
              *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) += v121;
              v122 = VidMmMapViewOfAllocation(v10, v120, (unsigned int)v121, (void **)(v6 + 48), 0);
              if ( v122 )
              {
                memmove(
                  v122,
                  *((const void **)this + 31),
                  *(unsigned int *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC));
                VidMmUnmapViewOfAllocation(v10, *(void **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30));
              }
              else
              {
                *((_DWORD *)a2 + 19) |= 0x100000u;
              }
              v119 = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 4) + 1;
              v117 = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
              v118 = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
            }
            if ( v114 )
              KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 232));
          }
          goto LABEL_33;
        }
        *((_DWORD *)a2 + 19) |= 0x100000u;
        *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
        goto LABEL_170;
      }
      v93 = 0LL;
      v94 = *((_QWORD *)a2 + 1) >> 1;
      if ( !*(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 2)
        || (v95 = 0x10000, !Use64KbPagesForTransfer(a2, this)) )
      {
        v95 = 4096;
      }
      while ( 1 )
      {
        if ( v93 == *((_QWORD *)a2 + 1) || (v22 = *((_QWORD *)this + 1), *(_BYTE *)(*(_QWORD *)(v22 + 24) + 2091LL)) )
        {
          v10 = *(struct _VIDMM_LOCAL_ALLOC **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
LABEL_159:
          *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
          goto LABEL_89;
        }
        *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 0LL;
        v24 = v95;
        v96 = (v95 + v94 - 1) & ~(v95 - 1);
        v97 = v96;
        if ( (*(_DWORD *)(v22 + 6464) & 0x800) != 0 )
        {
          v98 = v95 == v96;
          if ( v95 != v96 )
            goto LABEL_144;
        }
        else
        {
          v98 = v95 == v96;
        }
        v137 = (struct _MDL *)(v6 + 16);
        *(_QWORD *)Protect = (unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL;
        LOBYTE(AllocationType[0]) = v98;
        v99 = _guard_dispatch_icall_fptr();
        *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v99;
        if ( v99 < 0 )
          goto LABEL_153;
        if ( !*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
        {
          v100 = VidMmGetMDLForRange(a2, v93, v97);
          *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v100;
          if ( v100 )
          {
            v99 = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            goto LABEL_150;
          }
          _guard_dispatch_icall_fptr();
LABEL_144:
          v99 = -1071775487;
        }
LABEL_150:
        if ( v99 < 0 )
        {
LABEL_153:
          v94 = v97 >> 1;
        }
        else
        {
          if ( !*(_BYTE *)v6 )
          {
            *(_QWORD *)AllocationType = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            _guard_dispatch_icall_fptr();
          }
          v141.0 = 0;
          if ( *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 2) )
          {
            *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v93 + *((_QWORD *)a2 + 18);
            v140 = *(struct _MDL **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            v139 = 0LL;
            v138 = 0LL;
            v137 = 0LL;
            *(_QWORD *)Protect = v6 + 80;
            v101 = v93;
            v102 = v97;
          }
          else
          {
            v140 = 0LL;
            v139 = (union _LARGE_INTEGER *)((char *)a2 + 256);
            v138 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
            v137 = 0LL;
            *(_QWORD *)Protect = (char *)a2 + 144;
            v101 = 0LL;
            v102 = *((_QWORD *)a2 + 1);
          }
          VIDMM_GLOBAL::MemoryTransfer(
            *((VIDMM_GLOBAL **)this + 1),
            a2,
            v102,
            v101,
            this,
            *(union _LARGE_INTEGER **)Protect,
            v137,
            v138,
            v139,
            v140,
            v141);
          VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
          *(_QWORD *)AllocationType = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          _guard_dispatch_icall_fptr();
          _guard_dispatch_icall_fptr();
          v93 += v97;
          v94 = *((_QWORD *)a2 + 1) - v93;
        }
      }
    }
    memset((void *)(v6 + 104), 0, 0x28uLL);
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v79, v78, v80, v81);
      v86 = (_QWORD *)WdLogNewEntry5_WdTrace(v83, v82, v84, v85);
      v86[3] = *((_QWORD *)a2 + 33);
      v86[4] = *((_QWORD *)a2 + 31);
      v86[5] = *((int *)a2 + 65);
      v86[6] = *((unsigned int *)a2 + 64);
    }
    if ( *((_BYTE *)a2 + 289) )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
      *(_QWORD *)AllocationType = VidMmGetMDLForRange(a2, *((_QWORD *)a2 + 34), *((_QWORD *)a2 + 35));
      _guard_dispatch_icall_fptr();
      _guard_dispatch_icall_fptr();
    }
    KeStackAttachProcess(**((PRKPROCESS **)v10 + 1), (PRKAPC_STATE)(v6 + 232));
    *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = a2;
    *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = this;
    *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = *((_QWORD *)a2 + 18);
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0;
    v140 = (struct _MDL *)a2;
    LODWORD(v139) = 1;
    v138 = (struct VIDMM_SEGMENT *)(v6 + 104);
    v137 = (struct _MDL *)VIDMM_MEMORY_SEGMENT::RotateCopyCallback;
    *(_QWORD *)Protect = 0LL;
    *(_QWORD *)AllocationType = 0LL;
    v87 = _guard_dispatch_icall_fptr();
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v87;
    if ( (int)(v87 + 0x80000000) < 0 )
    {
      if ( v87 != -1073741558 )
        goto LABEL_130;
    }
    else if ( v87 != -1073741558 )
    {
      v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v87, v88, v89, v90);
      v91[3] = 270LL;
      v91[4] = 4LL;
      v91[5] = 2LL;
      v91[6] = *(int *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v91[7] = 0LL;
      WdLogEvent5_WdCriticalError(v91);
LABEL_130:
      *((_BYTE *)v10 + 32) &= ~1u;
      KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 232));
      *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
      goto LABEL_89;
    }
    *((_DWORD *)a2 + 19) |= 0x100000u;
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = 0;
    goto LABEL_130;
  }
LABEL_27:
  v25 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(*(_QWORD *)&g_IsInternalReleaseOrDbg, v24, v22, v19);
    v25 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
  }
  if ( v10 && (*((_BYTE *)v10 + 32) & 1) != 0 )
  {
    if ( *v25 )
      WdLogNewEntry5_WdTrace(v25, v24, v22, v19);
    KeStackAttachProcess(**((PRKPROCESS **)v10 + 1), (PRKAPC_STATE)(v6 + 232));
    v140 = (struct _MDL *)a2;
    LODWORD(v139) = 1;
    v138 = 0LL;
    v137 = 0LL;
    *(_QWORD *)Protect = 0LL;
    *(_QWORD *)AllocationType = 0LL;
    v56 = _guard_dispatch_icall_fptr();
    v60 = v56;
    v61 = v56 + 0x80000000;
    if ( (int)v61 >= 0 && v56 != -1073741558 )
    {
      v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v61, v57, v58, v59);
      v76[3] = 270LL;
      v76[4] = 4LL;
      v76[5] = 3LL;
      v76[6] = v60;
      v76[7] = 0LL;
      WdLogEvent5_WdCriticalError(v76);
    }
    *((_BYTE *)v10 + 32) &= ~1u;
    KeUnstackDetachProcess((PRKAPC_STATE)(v6 + 232));
  }
  if ( (*((_DWORD *)a2 + 19) & 0x100) == 0 )
    VIDMM_GLOBAL::DiscardAllocation(*((ADAPTER_RENDER ***)this + 1), a2, (struct _VIDMM_GLOBAL_ALLOC *)v22, v19);
LABEL_33:
  if ( *((_QWORD *)a2 + 58) )
  {
    VIDMM_CPU_HOST_APERTURE::UnmapRange(*((VIDMM_CPU_HOST_APERTURE **)this + 59), a2);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(*((VIDMM_CPU_HOST_APERTURE **)this + 59), a2);
  }
  v26 = (_QWORD *)*((_QWORD *)a2 + 19);
  *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v26;
  if ( (**((_DWORD **)a2 + 63) & 0x20000) != 0 )
  {
    if ( !v26 )
      goto LABEL_38;
    v123 = ~*((_QWORD *)this + 49) & (*((_QWORD *)this + 49) + *((_QWORD *)a2 + 2));
    memset((void *)(v6 + 184), 0, 0x30uLL);
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = *((_DWORD *)this + 93);
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC) = (*((_DWORD *)this + 14) & 0x1000) != 0
                                                                          ? 0
                                                                          : *((_DWORD *)this + 4) + 1;
    LOBYTE(v19) = 1;
    if ( *((_DWORD *)this + 101) )
    {
      v124 = *((_QWORD *)this + 51);
      if ( *((_QWORD *)a2 + 18) == v124 )
      {
        *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = v124;
        *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = *((_QWORD *)this + 53);
        v125 = *((_QWORD *)this + 52);
        v22 = (__int64)v26;
        v126 = *v26 + v26[1];
        if ( v126 >= v125 )
        {
LABEL_202:
          v126 = *((_QWORD *)this + 52);
        }
        else
        {
          while ( 1 )
          {
            v22 = *(_QWORD *)(v22 + 40);
            if ( v22 == *((_QWORD *)this + 18) + 72LL )
              break;
            v22 -= 40LL;
            if ( *(_BYTE *)(v22 + 56) != 2 )
              break;
            v126 = *(_QWORD *)v22 + *(_QWORD *)(v22 + 8);
            if ( v126 >= v125 )
              goto LABEL_202;
          }
        }
        *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = v126;
        v127 = v125 - v126;
        *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = v127;
        *((_QWORD *)this + 53) = v127;
        *((_QWORD *)this + 51) = v126;
      }
      else
      {
        LOBYTE(v19) = 0;
      }
    }
    else
    {
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = *((_QWORD *)a2 + 18);
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = v123;
    }
    if ( (_BYTE)v19 )
    {
      v128 = operator new(0x60uLL, 0x31356956u, PagedPool);
      v129 = operator new(0x28uLL, 0x38356956u, PagedPool);
      v130 = v129;
      if ( v128 )
      {
        if ( v129 )
        {
          memset(v128, 0, 0x60uLL);
          *((_QWORD *)v128 + 2) = DeferredSetVprCallback;
          *((_OWORD *)v128 + 3) = *(_OWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8);
          *((_OWORD *)v128 + 4) = *(_OWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8);
          *((_OWORD *)v128 + 5) = *(_OWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8);
          *((_QWORD *)v128 + 4) = *((_QWORD *)this + 1);
          *((_QWORD *)v128 + 5) = v130;
          v130[2] = this;
          v130[3] = *((_QWORD *)a2 + 19);
          v130[4] = *((_QWORD *)a2 + 2);
          *((_QWORD *)v128 + 3) = v128;
          DXG_DEFERRED_WORK_QUEUE::QueueWorkItem(
            (DXG_DEFERRED_WORK_QUEUE *)(*((_QWORD *)this + 1) + 41024LL),
            (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)v128);
          VIDMM_LINEAR_POOL::MarkBlockAsAllocatedScrubPending(*((VIDMM_LINEAR_POOL **)this + 18), *((void **)a2 + 19));
          *((_QWORD *)a2 + 19) = 0LL;
LABEL_216:
          v26 = *(_QWORD **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          goto LABEL_36;
        }
        operator delete(v128);
      }
      if ( v130 )
        operator delete(v130);
      VIDMM_SEGMENT::CheckFreeVPRReserve(this, (struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(v6 + 184));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_qqqxx(
          v132,
          v131,
          v133,
          *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8),
          *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xBC),
          *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0),
          *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8),
          *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0));
      ADAPTER_RENDER::DdiSetVideoProtectedRegion(
        *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2136LL),
        (const struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(v6 + 184));
      goto LABEL_216;
    }
  }
LABEL_36:
  if ( v26 )
  {
    _guard_dispatch_icall_fptr();
    *((_QWORD *)a2 + 19) = 0LL;
  }
LABEL_38:
  v27 = (_QWORD *)((char *)a2 + 400);
  v28 = *((_QWORD *)a2 + 50);
  v29 = (_QWORD *)*((_QWORD *)a2 + 51);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v28 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400)
    || (_QWORD *)*v29 != v27 )
  {
    __fastfail(3u);
  }
  *v29 = v28;
  *(_QWORD *)(v28 + 8) = v29;
  *v27 = 0LL;
  *((_QWORD *)a2 + 51) = 0LL;
  if ( v10 && *((_QWORD *)v10 + 1) )
    VidMmRecordAlloc(*((VIDMM_GLOBAL **)this + 1), (__int64)a2, (__int64)v10, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 304LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 98), v28, v22, v19);
  *(_QWORD *)(*((_QWORD *)a2 + 17) + 8LL * PriorityClass + 320) += *((_QWORD *)a2 + 2);
  v31 = (char *)a2 + 296;
  v32 = (char *)*((_QWORD *)a2 + 37);
  while ( v32 != v31 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              *((VIDMM_PROCESS **)v32 - 6),
                              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 200LL),
                              *((_DWORD *)this + 5));
    VidMmRecordEviction(v34 + 7128, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v34 + 8));
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 40128LL) -= *((_QWORD *)a2 + 2) >> 12;
  *(_WORD *)(*((_QWORD *)a2 + 63) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 63) + 24LL) = 0LL;
  *((_QWORD *)a2 + 17) = 0LL;
  *((_DWORD *)a2 + 32) = 0;
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  if ( *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 1) )
    _guard_dispatch_icall_fptr();
  v35 = (void *)*((_QWORD *)a2 + 48);
  if ( v35 )
  {
    VIDMM_SEGMENT::MakeRangePageable(this, v35);
    *((_QWORD *)a2 + 48) = 0LL;
  }
  if ( !*(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) )
  {
    *((_BYTE *)a2 + 98) = 0;
    *((_DWORD *)a2 + 21) &= ~8u;
  }
  *((_DWORD *)a2 + 19) &= ~0x4000000u;
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(*((VIDMM_GLOBAL **)this + 1), a2, 0);
  ExReleasePushLockExclusiveEx((char *)a2 + 496, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 40), v36, v37, v38);
  v39 = *((_QWORD *)this + 1);
  _InterlockedOr(v134, 0);
  ++*(_QWORD *)(v39 + 40);
}
