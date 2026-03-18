/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0
 * Callers:
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0046DC8 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004933C (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004EC20 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EE44 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0050B90 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00899E8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000F7E0 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00123F8 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     Template_pqx @ 0x1C001E7B8 (Template_pqx.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0048A50 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x1C004BA58 (-VerifyGlobalResidentLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0051F48 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z @ 0x1C0051FEC (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXEI@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0052220 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00522BC (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005BC3C (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005CBD4 (-AddCommitment@VIDMM_PROCESS@@QEAAXPEAU_VIDMM_DEVICE_COMMITMENT_INFO@@KPEAVVIDMM_SEGMENT@@EPEAU_.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005D8CC (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0064BC8 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0064D4C (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00883AC (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     CommitVirtualAddressRangesInList @ 0x1C00885A4 (CommitVirtualAddressRangesInList.c)
 *     MergeAllocationPendingVaRangeList @ 0x1C008A0CC (MergeAllocationPendingVaRangeList.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C008B008 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C0092334 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0099684 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        struct VIDMM_ALLOC **a6)
{
  unsigned int v6; // r15d
  unsigned __int8 v7; // r13
  int v8; // r12d
  __int64 *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r13
  struct _MDL *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  VIDMM_GLOBAL *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int i; // edi
  VIDMM_GLOBAL *v36; // rcx
  unsigned __int8 v37; // r8
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  VIDMM_GLOBAL *v49; // rcx
  VIDMM_GLOBAL *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rax
  _BYTE *v53; // rcx
  _QWORD *v54; // rax
  _BYTE *v55; // rcx
  _QWORD *v56; // rax
  __int64 *v57; // r12
  __int64 v58; // rax
  char v59; // al
  __int64 v60; // rcx
  int v61; // eax
  __int64 *v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // r12
  CVirtualAddressAllocator *v65; // r12
  char *v66; // r13
  __int64 v67; // rcx
  __int64 v68; // r8
  int v69; // r9d
  unsigned int v70; // ebx
  __int64 **v71; // r12
  __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rsi
  unsigned __int64 v75; // r13
  __int64 *v76; // r15
  __int64 v77; // rbx
  VIDMM_PROCESS *v78; // r13
  unsigned int *v79; // r12
  __int64 v80; // rax
  _QWORD *v81; // rcx
  __int64 v82; // rdx
  __int64 *v83; // r8
  __int64 v84; // rax
  __int64 v85; // r8
  struct VIDMM_ALLOC **v86; // rax
  void *v88; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v89; // [rsp+40h] [rbp-C0h]
  char v90; // [rsp+40h] [rbp-C0h]
  char v91; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v92[2]; // [rsp+42h] [rbp-BEh] BYREF
  unsigned int v93; // [rsp+44h] [rbp-BCh]
  _BYTE *v94; // [rsp+48h] [rbp-B8h]
  struct _MDL *FullMDL; // [rsp+50h] [rbp-B0h]
  CVirtualAddressAllocator *v96; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v97; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v98; // [rsp+68h] [rbp-98h]
  struct VIDMM_ALLOC **v99; // [rsp+70h] [rbp-90h]
  __int64 v100; // [rsp+78h] [rbp-88h]
  __int64 v101; // [rsp+88h] [rbp-78h]
  _QWORD v102[12]; // [rsp+90h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+F0h] [rbp-10h] BYREF

  v6 = 0;
  v94 = a5;
  v7 = a4;
  v8 = a3;
  v99 = a6;
  v89 = a4;
  *a6 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a2;
  if ( (*((_DWORD *)a2 + 7) & 3) == 1 )
    VIDMM_DEVICE::UnfaultCommitment((VIDMM_DEVICE *)a1, (struct VIDMM_ALLOC *)a2);
  v11 = *a2;
  v92[0] = 0;
  v12 = *v11;
  v101 = *v11;
  LODWORD(v15) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, (struct VIDMM_ALLOC *)a2, v92);
  if ( (int)v15 < 0 )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v12 + 496, 0LL);
      if ( !*(_QWORD *)(v12 + 224) )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
        VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, v8 != 0, *(_DWORD *)(v12 + 76) & 0x3F);
        if ( *v99 )
          VIDMM_GLOBAL::EvictTemporaryAllocations(
            (VIDMM_GLOBAL *)a1,
            v8 != 0,
            *(_DWORD *)(**(_QWORD **)*v99 + 76LL) & 0x3F);
        LODWORD(v15) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, a2, (unsigned int)v8, v7);
        if ( (int)v15 < 0 )
          goto LABEL_23;
      }
      v26 = **a2;
      v27 = *(struct _MDL **)(v26 + 224);
      FullMDL = v27;
      VIDMM_SEGMENT::TrimResidentBytes((VIDMM_SEGMENT *)v27);
      if ( !VIDMM_GLOBAL::VerifyGlobalResidentLimit((VIDMM_GLOBAL *)a1, v28, v29, v30) )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 3704); ++i )
          VIDMM_SEGMENT::TrimResidentBytes(*(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * i));
        v27 = FullMDL;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v32, v31, v33, v34);
      VIDMM_GLOBAL::EvictAllAllocationInList(v32, (struct _LIST_ENTRY *)(a1 + 3736), v33);
      VIDMM_GLOBAL::EvictAllAllocationInList(v36, (struct _LIST_ENTRY *)(a1 + 3752), v37);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 2040LL) + 48LL * HIDWORD(v27[7].StartVa) + 16) & 4) != 0 )
        VIDMM_SEGMENT::ProcessPendingMoves((VIDMM_SEGMENT *)v27);
      v38 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v26 + 224) + 40LL))(
              *(_QWORD *)(v26 + 224),
              v26,
              0LL);
      v15 = v38;
      if ( v38 >= 0 )
      {
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v26 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
        v92[0] = 1;
        LODWORD(v15) = 0;
        ExReleasePushLockExclusiveEx(v12 + 496, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_34;
      }
      if ( g_IsInternalReleaseOrDbg )
        break;
LABEL_25:
      v48 = *(_QWORD *)(v12 + 224);
      if ( v48 )
      {
        if ( *(_DWORD *)(v12 + 488) != -1 )
          VIDMM_CPU_HOST_APERTURE::ReleaseRange(
            *(VIDMM_CPU_HOST_APERTURE **)(v48 + 472),
            (struct _VIDMM_GLOBAL_ALLOC *)v12);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v12 + 224) + 24LL))(
          *(_QWORD *)(v12 + 224),
          v12,
          *(_QWORD *)(v12 + 208),
          *(_QWORD *)(v12 + 16));
        *(_QWORD *)(v12 + 224) = 0LL;
        *(_QWORD *)(v12 + 208) = 0LL;
      }
      ExReleasePushLockExclusiveEx(v12 + 496, 0LL);
      KeLeaveCriticalRegion();
      VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v49, (struct _LIST_ENTRY *)(a1 + 3736));
      VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v50, (struct _LIST_ENTRY *)(a1 + 3752));
      v52 = WdLogNewEntry5_WdWarning(v51);
      *(_QWORD *)(v52 + 32) = v8;
      *(_QWORD *)(v52 + 24) = a2;
      WdLogEvent5_WdWarning(v52);
      if ( v8 )
        goto LABEL_34;
      if ( (*(_DWORD *)(v12 + 76) & 0x40) == 0 )
        goto LABEL_34;
      v7 = v89;
      if ( v89 )
        goto LABEL_34;
      v8 = 2;
      VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
        (VIDMM_GLOBAL *)a1,
        *(_QWORD *)(v12 + 16) + (*(_QWORD *)(v12 + 16) >> 2));
    }
    v43 = WdLogNewEntry5_WdTrace(v40, v39, v41, v42);
    *(_QWORD *)(v43 + 24) = v26;
    *(_QWORD *)(v43 + 32) = v15;
LABEL_23:
    if ( g_IsInternalReleaseOrDbg )
    {
      WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v45, v44, v46, v47) + 24) = a2;
    }
    goto LABEL_25;
  }
LABEL_34:
  if ( (*(_DWORD *)(v12 + 76) & 0x100000) != 0 )
  {
    v53 = v94;
    LODWORD(v15) = -1071775466;
    *v94 = 0;
    if ( g_IsInternalReleaseOrDbg )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdTrace(v53, v13, v16, v17);
      v54[3] = a2;
      v54[4] = v12;
      v54[5] = 16386LL;
    }
    goto LABEL_108;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 2091LL) )
  {
    v55 = v94;
    LODWORD(v15) = -1073741130;
    *v94 = 0;
    if ( g_IsInternalReleaseOrDbg )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v55, v13, v16, v17);
      v56[3] = a2;
      v56[4] = v12;
      v56[5] = 16394LL;
    }
    goto LABEL_108;
  }
  if ( (int)v15 < 0 )
  {
    v86 = v99;
    *v94 = 1;
    *v86 = (struct VIDMM_ALLOC *)a2;
    return (unsigned int)v15;
  }
  if ( !*((_BYTE *)a2 + 26) )
  {
    if ( a2[20]
      && (*(_BYTE *)(a1 + 40872) & 4) != 0
      && ((*(_DWORD *)(v12 + 80) & 0x80u) == 0 || (**(_DWORD **)(v12 + 504) & 0x20000008) != 0) )
    {
      KeStackAttachProcess(*(PRKPROCESS *)(*a2)[1], &ApcState);
      v57 = a2[20];
      v15 = (int)VidMmiEnsureVirtualAddressRangeValid(v57, *(_QWORD *)(v12 + 8));
      KeUnstackDetachProcess(&ApcState);
      if ( (int)v15 < 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v14, v13);
        *(_QWORD *)(v58 + 24) = v57;
        *(_QWORD *)(v58 + 32) = v15;
        WdLogEvent5_WdAssertion(v58);
        *v94 = 0;
        goto LABEL_108;
      }
    }
    *((_BYTE *)a2 + 26) = 1;
  }
  v59 = *(_BYTE *)(a1 + 40872);
  if ( (v59 & 1) == 0 || (v59 & 8) != 0 && (*(_DWORD *)(v12 + 76) & 0x100) != 0 )
  {
LABEL_99:
    if ( (*((_DWORD *)a2 + 7) & 3) != 2 )
    {
      v76 = a2[1];
      v77 = **a2;
      v78 = (VIDMM_PROCESS *)(*a2)[1];
      v79 = *(unsigned int **)(v77 + 136);
      if ( g_IsInternalReleaseOrDbg )
      {
        v80 = WdLogNewEntry5_WdTrace(v14, v13, v16, v17);
        *(_QWORD *)(v80 + 24) = a2;
        *(_QWORD *)(v80 + 32) = v76;
      }
      v81 = a2 + 7;
      v82 = v76[5] + 56LL * v79[5];
      ++*(_DWORD *)v82;
      *(_QWORD *)(v82 + 8) += *(_QWORD *)(v77 + 16);
      *(_QWORD *)(v82 + 48) = v76;
      v83 = *(__int64 **)(v82 + 40);
      if ( *v83 != v82 + 32 )
        __fastfail(3u);
      *v81 = v82 + 32;
      a2[8] = v83;
      *v83 = (__int64)v81;
      *(_QWORD *)(v82 + 40) = v81;
      VIDMM_PROCESS::AddCommitment(
        v78,
        (struct _VIDMM_DEVICE_COMMITMENT_INFO *)v82,
        *(_DWORD *)(*(_QWORD *)(*v76 + 24) + 200LL),
        (struct VIDMM_SEGMENT *)v79,
        *(_DWORD *)v82 == 1,
        (struct _VIDMM_GLOBAL_ALLOC *)v77);
      *((_DWORD *)a2 + 7) = *((_DWORD *)a2 + 7) & 0xFFFFFFFC | 2;
      ++*(_DWORD *)(v77 + 160);
      *((_DWORD *)a2 + 7) |= 0x10u;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v88) = *(_DWORD *)(*(_QWORD *)(v12 + 136) + 16LL) + 1;
        Template_pqx((unsigned int)v88, &EventPageInAllocation, v85, a2, v88, *(_QWORD *)(v12 + 144));
      }
    }
    *(_BYTE *)(v12 + 98) = 1;
    *v94 = 0;
    return (unsigned int)v15;
  }
  v60 = *(_QWORD *)(v12 + 136);
  v61 = *(_DWORD *)(v60 + 56);
  if ( (v61 & 0x1001) != 0 )
  {
    v93 = 0;
    v100 = 0LL;
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v12, 0LL);
  }
  else
  {
    if ( (v61 & 0x1000) != 0 )
      v93 = 0;
    else
      v93 = *(_DWORD *)(v60 + 16) + 1;
    v100 = *(_QWORD *)(v12 + 144);
    FullMDL = 0LL;
  }
  v62 = *a2;
  v97 = -1LL;
  v98 = 0LL;
  v63 = v62[1];
  v64 = *(_QWORD **)(*(_QWORD *)(v63 + 16) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 200LL));
  if ( v64 && *(_DWORD *)(*v64 + 40864LL) )
  {
    if ( (*(_DWORD *)(v63 + 48) & 2) != 0 )
      v65 = *(CVirtualAddressAllocator **)(*v64 + 8LL * (*(_DWORD *)(v12 + 76) & 0x3F) + 40352);
    else
      v65 = (CVirtualAddressAllocator *)v64[58];
  }
  else
  {
    v65 = 0LL;
  }
  v66 = (char *)v65 + 40;
  v96 = v65;
  v91 = 0;
  if ( *((struct _KTHREAD **)v65 + 6) != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v65 + 40, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v69 = *((_DWORD *)v65 + 14);
        if ( v69 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v67, &EventBlockThread, v68, v69);
      }
      ExAcquirePushLockExclusiveEx((char *)v65 + 40, 0LL);
    }
    *((_QWORD *)v65 + 6) = KeGetCurrentThread();
    v91 = 1;
  }
  v90 = 0;
  v70 = 0;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    memset(v102, 0, 0x58uLL);
    LODWORD(v102[3]) = v93;
    v102[5] = FullMDL;
    v102[4] = v100;
    v102[2] = 0LL;
    v102[6] = 0LL;
    LOBYTE(v102[7]) = 0;
    LOBYTE(v102[10]) = 0;
    v102[0] = a2;
    v102[1] = v65;
    HIDWORD(v102[7]) = 0;
    v102[8] = -1LL;
    v102[9] = 0LL;
    LODWORD(v15) = CommitVirtualAddressRangesInList(a2 + 16, v102);
    if ( (int)v15 < 0
      || (LODWORD(v15) = CommitVirtualAddressRangesInList(a2 + 18, v102), (int)v15 < 0)
      || (LODWORD(v15) = MergeAllocationPendingVaRangeList(v65), (int)v15 < 0) )
    {
      if ( v91 )
      {
        *((_QWORD *)v65 + 6) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v65 + 40, 0LL);
        KeLeaveCriticalRegion();
      }
      *v99 = (struct VIDMM_ALLOC *)v102[6];
      *v94 = v102[7];
      goto LABEL_108;
    }
    v70 = HIDWORD(v102[7]);
    v97 = v102[8];
    v98 = v102[9];
    v90 = v102[10];
    goto LABEL_90;
  }
  v71 = (__int64 **)a2[16];
  if ( v71 == a2 + 16 )
  {
LABEL_89:
    v65 = v96;
LABEL_90:
    if ( v91 )
    {
      *((_QWORD *)v66 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v66, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v90 && v70 )
    {
      v74 = v97;
      v75 = v98;
      do
      {
        if ( (v70 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v65, v6, v74, v75);
        ++v6;
        v70 >>= 1;
      }
      while ( v70 );
      v12 = v101;
    }
    goto LABEL_99;
  }
  while ( ((_DWORD)v71[5] & 0x400) != 0 )
  {
LABEL_88:
    v71 = (__int64 **)*v71;
    if ( v71 == a2 + 16 )
      goto LABEL_89;
  }
  LODWORD(v15) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                   v96,
                   (struct VIDMM_MAPPED_VA_RANGE *)(v71 - 3),
                   *(_DWORD *)(v12 + 76) & 0x3F,
                   v93,
                   (unsigned __int64)v71[6] + v100,
                   FullMDL,
                   0,
                   v99);
  if ( (int)v15 >= 0 )
  {
    v90 = 1;
    v73 = v97;
    v70 |= 1 << ((*((_DWORD *)v71 + 10) >> 4) & 0x3F);
    if ( v97 >= (unsigned __int64)v71[9] )
      v73 = (unsigned __int64)v71[9];
    v97 = v73;
    v14 = v98;
    if ( v98 <= (unsigned __int64)v71[10] )
      v14 = (unsigned __int64)v71[10];
    v98 = v14;
    goto LABEL_88;
  }
  v84 = WdLogNewEntry5_WdWarning(v72);
  *(_QWORD *)(v84 + 24) = a2;
  *(_QWORD *)(v84 + 32) = 16542LL;
  WdLogEvent5_WdWarning(v84);
  if ( v91 )
  {
    *((_QWORD *)v66 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v66, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v15 == -1073741267 )
    *v94 = 1;
LABEL_108:
  if ( v92[0] )
    VIDMM_SEGMENT::MarkResourcesForEviction(*(VIDMM_SEGMENT **)(v12 + 136), (struct _VIDMM_GLOBAL_ALLOC *)v12, 0LL, 0LL);
  return (unsigned int)v15;
}
