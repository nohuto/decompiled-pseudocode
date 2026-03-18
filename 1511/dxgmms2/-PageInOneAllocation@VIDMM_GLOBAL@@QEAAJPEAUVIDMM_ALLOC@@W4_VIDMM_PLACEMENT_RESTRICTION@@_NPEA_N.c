/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0
 * Callers:
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003DB48 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003E3FC (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0048244 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0060F0C (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0062C40 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C007B410 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0011448 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C001365C (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_pqx @ 0x1C001D444 (Template_pqx.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0049AB0 (-EvictAllAllocationInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z @ 0x1C0049B54 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C0049D18 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C0049E90 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00532B0 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00558B0 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F678 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006143C (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C007A448 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C007C2BC (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00810A8 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        struct VIDMM_ALLOC *a2,
        int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        struct VIDMM_ALLOC **a6)
{
  unsigned int v6; // ebp
  unsigned __int8 v7; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // r13
  VIDMM_GLOBAL *v15; // rcx
  unsigned __int8 v16; // r8
  unsigned int i; // edi
  VIDMM_GLOBAL *v18; // rcx
  unsigned __int8 v19; // r8
  __int64 v20; // rcx
  VIDMM_GLOBAL *v21; // rcx
  VIDMM_GLOBAL *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD *v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // rcx
  int v34; // eax
  unsigned __int64 v35; // r13
  struct _KTHREAD **VirtualAddressAllocator; // r10
  struct _KTHREAD **v37; // r12
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  _QWORD *v41; // r15
  unsigned int v42; // ebx
  __int64 v43; // rcx
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // r10
  __int64 v46; // rax
  __int64 v47; // r8
  void *v48; // [rsp+20h] [rbp-E8h]
  char v50; // [rsp+50h] [rbp-B8h]
  char v51; // [rsp+51h] [rbp-B7h]
  unsigned int v52; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v53; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v54; // [rsp+68h] [rbp-A0h]
  CVirtualAddressAllocator *v55; // [rsp+70h] [rbp-98h]
  __int64 v56; // [rsp+78h] [rbp-90h]
  struct _MDL *FullMDL; // [rsp+88h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-78h] BYREF

  v6 = 0;
  v7 = a4;
  *a6 = 0LL;
  if ( (*((_DWORD *)a2 + 7) & 3) == 1 )
    VIDMM_DEVICE::UnfaultCommitment((VIDMM_DEVICE *)a1, a2);
  v11 = **(_QWORD **)a2;
  LODWORD(v12) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, a2);
  if ( (int)v12 < 0 )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v11 + 464, 0LL);
      if ( *(_QWORD *)(v11 + 216)
        || (VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, a3 != 0),
            LODWORD(v12) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, a2, (unsigned int)a3, v7),
            (int)v12 >= 0) )
      {
        v14 = **(_QWORD **)a2;
        VIDMM_SEGMENT::TrimResidentBytes(*(VIDMM_SEGMENT **)(v14 + 216));
        if ( VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture > *(_QWORD *)(a1 + 6456) )
        {
          for ( i = 0; i < *(_DWORD *)(a1 + 3704); ++i )
            VIDMM_SEGMENT::TrimResidentBytes(*(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8LL * i));
        }
        VIDMM_GLOBAL::EvictAllAllocationInList(v15, (struct _LIST_ENTRY *)(a1 + 3736), v16);
        VIDMM_GLOBAL::EvictAllAllocationInList(v18, (struct _LIST_ENTRY *)(a1 + 3752), v19);
        LODWORD(v12) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v14 + 216) + 40LL))(
                         *(_QWORD *)(v14 + 216),
                         v14,
                         0LL);
        if ( (int)v12 >= 0 )
        {
          VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v14 + 76) & 0x3F, 0, 0LL, 0LL, 0);
          LODWORD(v12) = 0;
          ExReleasePushLockExclusiveEx(v11 + 464, 0LL);
          KeLeaveCriticalRegion();
          break;
        }
        v7 = a4;
      }
      v20 = *(_QWORD *)(v11 + 216);
      if ( v20 )
      {
        if ( *(_DWORD *)(v11 + 456) != -1 )
          VIDMM_CPU_HOST_APERTURE::ReleaseRange(
            *(VIDMM_CPU_HOST_APERTURE **)(v20 + 440),
            (struct _VIDMM_GLOBAL_ALLOC *)v11,
            0LL,
            v13);
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v11 + 216) + 24LL))(
          *(_QWORD *)(v11 + 216),
          v11,
          *(_QWORD *)(v11 + 200),
          *(_QWORD *)(v11 + 16));
        *(_QWORD *)(v11 + 216) = 0LL;
        *(_QWORD *)(v11 + 200) = 0LL;
      }
      ExReleasePushLockExclusiveEx(v11 + 464, 0LL);
      KeLeaveCriticalRegion();
      VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v21, (struct _LIST_ENTRY *)(a1 + 3736));
      VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v22, (struct _LIST_ENTRY *)(a1 + 3752));
      v24 = WdLogNewEntry5_WdWarning(v23);
      *(_QWORD *)(v24 + 32) = a3;
      *(_QWORD *)(v24 + 24) = a2;
      WdLogEvent5_WdWarning(v24);
      if ( a3 || (*(_DWORD *)(v11 + 76) & 0x40) == 0 || v7 )
        break;
      a3 = 2;
      VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
        (VIDMM_GLOBAL *)a1,
        *(_QWORD *)(v11 + 16) + (*(_QWORD *)(v11 + 16) >> 2));
    }
  }
  if ( (*(_DWORD *)(v11 + 76) & 0x100000) != 0 )
  {
    *a5 = 0;
    return 3223191830LL;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 1951LL) )
  {
    *a5 = 0;
    return 3221226166LL;
  }
  if ( (int)v12 < 0 )
  {
    *a5 = 1;
    *a6 = a2;
    return (unsigned int)v12;
  }
  if ( !*((_BYTE *)a2 + 26) )
  {
    if ( *((_QWORD *)a2 + 18)
      && (*(_BYTE *)(a1 + 40608) & 4) != 0
      && ((*(_DWORD *)(v11 + 80) & 0x80u) == 0 || (**(_DWORD **)(v11 + 472) & 0x20000008) != 0) )
    {
      KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)a2 + 8LL), &ApcState);
      v26 = (_QWORD *)*((_QWORD *)a2 + 18);
      v12 = (int)VidMmiEnsureVirtualAddressRangeValid(v26, *(_QWORD *)(v11 + 8));
      KeUnstackDetachProcess(&ApcState);
      if ( (int)v12 < 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
        *(_QWORD *)(v31 + 24) = v26;
        *(_QWORD *)(v31 + 32) = v12;
        WdLogEvent5_WdAssertion(v31);
        *a5 = 0;
        return (unsigned int)v12;
      }
    }
    *((_BYTE *)a2 + 26) = 1;
  }
  v32 = *(_BYTE *)(a1 + 40608);
  if ( (v32 & 1) == 0 || (v32 & 8) != 0 && (*(_DWORD *)(v11 + 76) & 0x100) != 0 )
  {
LABEL_72:
    if ( (*((_DWORD *)a2 + 7) & 3) != 2 )
    {
      VIDMM_DEVICE::AddCommitment(*((VIDMM_DEVICE **)a2 + 1), a2);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          LODWORD(v48) = *(_DWORD *)(*(_QWORD *)(v11 + 128) + 16LL) + 1;
          Template_pqx((unsigned int)v48, &EventPageInAllocation, v47, a2, v48, *(_QWORD *)(v11 + 136));
        }
      }
    }
    *(_BYTE *)(v11 + 95) = 1;
    *a5 = 0;
    return (unsigned int)v12;
  }
  v33 = *(_QWORD *)(v11 + 128);
  v34 = *(_DWORD *)(v33 + 56);
  if ( (v34 & 0x1001) != 0 )
  {
    v52 = 0;
    v56 = 0LL;
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v11, 0LL);
  }
  else
  {
    if ( (v34 & 0x1000) != 0 )
      v52 = 0;
    else
      v52 = *(_DWORD *)(v33 + 16) + 1;
    v56 = *(_QWORD *)(v11 + 136);
    FullMDL = 0LL;
  }
  v35 = -1LL;
  v54 = -1LL;
  v53 = 0LL;
  VirtualAddressAllocator = (struct _KTHREAD **)VIDMM_PROCESS::GetVirtualAddressAllocator(
                                                  *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
                                                  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 184LL),
                                                  *(_DWORD *)(v11 + 76) & 0x3F);
  v55 = (CVirtualAddressAllocator *)VirtualAddressAllocator;
  v51 = 0;
  v37 = VirtualAddressAllocator + 5;
  if ( VirtualAddressAllocator[6] != KeGetCurrentThread() )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v37, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v40 = *((_DWORD *)v37 + 4);
        if ( v40 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v38, &EventBlockThread, v39, v40);
      }
      ExAcquirePushLockExclusiveEx(v37, 0LL);
    }
    VirtualAddressAllocator = (struct _KTHREAD **)v55;
    v37[1] = KeGetCurrentThread();
    v51 = 1;
  }
  v50 = 0;
  v41 = (_QWORD *)*((_QWORD *)a2 + 16);
  v42 = 0;
  if ( v41 == (_QWORD *)((char *)a2 + 128) )
  {
LABEL_65:
    if ( v51 )
    {
      v37[1] = 0LL;
      ExReleasePushLockExclusiveEx(v37, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v50 && v42 )
    {
      do
      {
        if ( (v42 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v55, v6, v35, v53);
        ++v6;
        v42 >>= 1;
      }
      while ( v42 );
    }
    goto LABEL_72;
  }
  while ( 1 )
  {
    if ( (v41[5] & 0x400) != 0 )
      goto LABEL_58;
    LODWORD(v12) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     (CVirtualAddressAllocator *)VirtualAddressAllocator,
                     (struct VIDMM_MAPPED_VA_RANGE *)(v41 - 3),
                     *(_DWORD *)(v11 + 76) & 0x3F,
                     v52,
                     v41[6] + v56,
                     FullMDL,
                     0,
                     a6,
                     0);
    if ( (int)v12 < 0 )
      break;
    v44 = v54;
    v50 = 1;
    v42 |= 1 << ((*((_DWORD *)v41 + 10) >> 4) & 0x3F);
    if ( v54 >= v41[9] )
      v44 = v41[9];
    v54 = v44;
    v45 = v53;
    if ( v53 <= v41[10] )
      v45 = v41[10];
    v53 = v45;
LABEL_58:
    v41 = (_QWORD *)*v41;
    if ( v41 == (_QWORD *)((char *)a2 + 128) )
    {
      v35 = v54;
      goto LABEL_65;
    }
    VirtualAddressAllocator = (struct _KTHREAD **)v55;
  }
  v46 = WdLogNewEntry5_WdWarning(v43);
  *(_QWORD *)(v46 + 24) = a2;
  *(_QWORD *)(v46 + 32) = 15664LL;
  WdLogEvent5_WdWarning(v46);
  if ( v51 )
  {
    v37[1] = 0LL;
    ExReleasePushLockExclusiveEx(v37, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v12 == -1073741267 )
    *a5 = 1;
  return (unsigned int)v12;
}
