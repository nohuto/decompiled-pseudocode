/*
 * XREFs of ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C004DE74 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C004EDF8 (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 *     ?PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050D60 (-PageInDeviceInternal@VIDMM_GLOBAL@@IEAAJPEAVVIDMM_DEVICE@@_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C0050FD8 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D078 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D100 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVVIDMM_GLOBAL@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000ED20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     Template_pqx @ 0x1C000FA20 (Template_pqx.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011BDC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C003A96C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z @ 0x1C003A994 (-EvictTemporaryAllocations@VIDMM_GLOBAL@@IEAAXE@Z.c)
 *     ?FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_N@Z @ 0x1C003AA74 (-FindResourcesForOneAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTIO.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C003ABE8 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C003D280 (-TrimResidentBytes@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C003DDD4 (-AddCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00400C4 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C004BB94 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0053AB0 (-TrimMarkedForEvictionAllocations@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00596FC (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C005BDEC (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 */

__int64 __fastcall VIDMM_GLOBAL::PageInOneAllocation(
        __int64 a1,
        struct VIDMM_ALLOC *a2,
        int a3,
        char a4,
        char *a5,
        struct VIDMM_ALLOC **a6)
{
  char v6; // bp
  char *v7; // r13
  char v8; // r15
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r15
  __int64 i; // rsi
  __int64 v19; // rcx
  VIDMM_GLOBAL *v20; // rcx
  VIDMM_GLOBAL *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // ecx
  _QWORD *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  char v33; // al
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // r12d
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  CVirtualAddressAllocator *v38; // r10
  char *v39; // r15
  _QWORD *v40; // r13
  unsigned int v41; // r14d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned __int64 v45; // r11
  unsigned __int64 v46; // r11
  __int64 v47; // rax
  unsigned int j; // r15d
  __int64 v49; // r8
  unsigned __int64 v51; // [rsp+20h] [rbp-E8h]
  char v53; // [rsp+50h] [rbp-B8h]
  char v54; // [rsp+51h] [rbp-B7h]
  unsigned __int64 v55; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v56; // [rsp+68h] [rbp-A0h]
  CVirtualAddressAllocator *v57; // [rsp+70h] [rbp-98h]
  struct _MDL *FullMDL; // [rsp+78h] [rbp-90h]
  __int64 v59; // [rsp+88h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+98h] [rbp-70h] BYREF

  v6 = 1;
  v7 = a5;
  v8 = a4;
  *a6 = 0LL;
  if ( (*((_DWORD *)a2 + 7) & 3) == 1 )
    VIDMM_DEVICE::UnfaultCommitment((VIDMM_DEVICE *)a1, a2);
  v12 = **(_QWORD **)a2;
  LODWORD(v13) = VIDMM_GLOBAL::ReferenceAllocationForPreparation((VIDMM_GLOBAL *)a1, a2);
  if ( (int)v13 >= 0 )
    goto LABEL_23;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12 + 464, 0LL);
    if ( *(_QWORD *)(v12 + 216) )
    {
      LODWORD(v13) = 0;
    }
    else
    {
      VIDMM_GLOBAL::EvictTemporaryAllocations((VIDMM_GLOBAL *)a1, a3 != 0);
      LOBYTE(v16) = v8;
      LODWORD(v13) = VIDMM_GLOBAL::FindResourcesForOneAllocation(a1, a2, (unsigned int)a3, v16);
    }
    if ( (int)v13 >= 0 )
      break;
LABEL_13:
    v19 = *(_QWORD *)(v12 + 216);
    if ( v19 )
    {
      if ( *(_DWORD *)(v12 + 456) != -1 )
        VIDMM_CPU_HOST_APERTURE::ReleaseRange(
          *(VIDMM_CPU_HOST_APERTURE **)(v19 + 440),
          (struct _VIDMM_GLOBAL_ALLOC *)v12,
          v14,
          v15);
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v12 + 216) + 24LL))(
        *(_QWORD *)(v12 + 216),
        v12,
        *(_QWORD *)(v12 + 200),
        *(_QWORD *)(v12 + 16));
      *(_QWORD *)(v12 + 216) = 0LL;
      *(_QWORD *)(v12 + 200) = 0LL;
    }
    ExReleasePushLockExclusiveEx(v12 + 464, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v20, (struct _LIST_ENTRY *)(a1 + 3736));
    VIDMM_GLOBAL::CancelAllReclaimedAllocationsInList(v21, (struct _LIST_ENTRY *)(a1 + 3752));
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 32) = a3;
    *(_QWORD *)(v25 + 24) = a2;
    WdLogEvent5_WdWarning(v25);
    if ( a3 || (*(_DWORD *)(v12 + 76) & 0x40) == 0 || v8 )
      goto LABEL_22;
    a3 = 2;
    VIDMM_GLOBAL::TrimMarkedForEvictionAllocations(
      (VIDMM_GLOBAL *)a1,
      *(_QWORD *)(v12 + 16) + (*(_QWORD *)(v12 + 16) >> 2));
  }
  v17 = **(_QWORD **)a2;
  VIDMM_SEGMENT::TrimResidentBytes(*(VIDMM_SEGMENT **)(v17 + 216));
  if ( VIDMM_SEGMENT::_GlobalTotalBytesResidentInAperture > *(_QWORD *)(a1 + 6456) )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 3704); i = (unsigned int)(i + 1) )
      VIDMM_SEGMENT::TrimResidentBytes(*(VIDMM_SEGMENT **)(*(_QWORD *)(a1 + 3712) + 8 * i));
  }
  VIDMM_GLOBAL::EvictAllReclaimedAllocation((VIDMM_GLOBAL *)a1);
  LODWORD(v13) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v17 + 216) + 40LL))(
                   *(_QWORD *)(v17 + 216),
                   v17,
                   0LL);
  if ( (int)v13 < 0 )
  {
    v8 = a4;
    goto LABEL_13;
  }
  VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)a1, *(_DWORD *)(v17 + 76) & 0x3F, 0, 0LL, 0LL, 0);
  LODWORD(v13) = 0;
  ExReleasePushLockExclusiveEx(v12 + 464, 0LL);
  KeLeaveCriticalRegion();
LABEL_22:
  v7 = a5;
LABEL_23:
  if ( (*(_DWORD *)(v12 + 76) & 0x80000) != 0 )
  {
    LODWORD(v13) = -1071775466;
LABEL_33:
    *v7 = 0;
    return (unsigned int)v13;
  }
  if ( (int)v13 < 0 )
  {
LABEL_72:
    *a5 = v6;
    if ( v6 )
      *a6 = a2;
    return (unsigned int)v13;
  }
  if ( !*((_BYTE *)a2 + 26) )
  {
    if ( *((_QWORD *)a2 + 18) )
    {
      if ( (*(_BYTE *)(a1 + 40552) & 4) != 0 )
      {
        v26 = **(_DWORD **)(v12 + 472);
        if ( (v26 & 1) == 0 || (v26 & 0x20000008) != 0 )
        {
          KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)a2 + 8LL), &ApcState);
          v27 = (_QWORD *)*((_QWORD *)a2 + 18);
          v13 = (int)VidMmiEnsureVirtualAddressRangeValid(v27, *(_QWORD *)(v12 + 8));
          KeUnstackDetachProcess(&ApcState);
          if ( (int)v13 < 0 )
          {
            v32 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
            *(_QWORD *)(v32 + 24) = v27;
            *(_QWORD *)(v32 + 32) = v13;
            WdLogEvent5_WdAssertion(v32);
            goto LABEL_33;
          }
        }
      }
    }
    *((_BYTE *)a2 + 26) = 1;
  }
  v33 = *(_BYTE *)(a1 + 40552);
  if ( (v33 & 1) == 0 || (v33 & 8) != 0 && (*(_DWORD *)(v12 + 76) & 0x100) != 0 )
  {
LABEL_67:
    if ( (*((_DWORD *)a2 + 7) & 3) != 2 )
    {
      VIDMM_DEVICE::AddCommitment(*((VIDMM_DEVICE **)a2 + 1), a2);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        {
          LODWORD(v51) = *(_DWORD *)(*(_QWORD *)(v12 + 128) + 16LL) + 1;
          Template_pqx((unsigned int)v51, &EventPageInAllocation, v49, a2, v51, *(_QWORD *)(v12 + 136));
        }
      }
    }
    *(_BYTE *)(v12 + 95) = 1;
    v6 = 0;
    goto LABEL_72;
  }
  v34 = *(_QWORD *)(v12 + 128);
  v35 = *(_DWORD *)(v34 + 56);
  if ( (v35 & 0x1001) != 0 )
  {
    v36 = 0;
    v59 = 0LL;
    FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)v12, 0LL);
  }
  else
  {
    if ( (v35 & 0x1000) != 0 )
      v36 = 0;
    else
      v36 = *(_DWORD *)(v34 + 16) + 1;
    FullMDL = 0LL;
    v59 = *(_QWORD *)(v12 + 136);
  }
  v56 = -1LL;
  v55 = 0LL;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              *(VIDMM_PROCESS **)(*(_QWORD *)a2 + 8LL),
                              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 184LL),
                              *(_DWORD *)(v12 + 76) & 0x3F);
  v38 = VirtualAddressAllocator;
  v57 = VirtualAddressAllocator;
  v54 = 0;
  v39 = (char *)VirtualAddressAllocator + 40;
  if ( *((struct _KTHREAD **)VirtualAddressAllocator + 6) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((struct CVirtualAddressAllocator *)((char *)VirtualAddressAllocator + 40));
    v38 = v57;
    v54 = 1;
  }
  v53 = 0;
  v40 = (_QWORD *)*((_QWORD *)a2 + 16);
  v41 = 0;
  if ( v40 == (_QWORD *)((char *)a2 + 128) )
  {
LABEL_60:
    if ( v54 )
    {
      *((_QWORD *)v39 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v39, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v53 )
    {
      for ( j = 0; v41; v41 >>= 1 )
      {
        if ( (v41 & 1) != 0 )
          CVirtualAddressAllocator::FlushGpuVaTlb(v57, j, v56, v55);
        ++j;
      }
    }
    goto LABEL_67;
  }
  while ( 1 )
  {
    if ( (v40[5] & 0x400) != 0 )
      goto LABEL_54;
    LODWORD(v13) = CVirtualAddressAllocator::CommitVirtualAddressRange(
                     v38,
                     (struct VIDMM_MAPPED_VA_RANGE *)(v40 - 3),
                     *(_DWORD *)(v12 + 76) & 0x3F,
                     v36,
                     v40[6] + v59,
                     FullMDL,
                     0,
                     a6,
                     0,
                     1u);
    if ( (int)v13 < 0 )
      break;
    v45 = v56;
    v53 = 1;
    v41 |= 1 << ((*((_DWORD *)v40 + 10) >> 4) & 0x3F);
    if ( v56 >= v40[9] )
      v45 = v40[9];
    v56 = v45;
    v46 = v55;
    if ( v55 <= v40[10] )
      v46 = v40[10];
    v55 = v46;
LABEL_54:
    v40 = (_QWORD *)*v40;
    if ( v40 == (_QWORD *)((char *)a2 + 128) )
      goto LABEL_60;
    v38 = v57;
  }
  v47 = WdLogNewEntry5_WdWarning(v43, v42, v44);
  *(_QWORD *)(v47 + 24) = a2;
  *(_QWORD *)(v47 + 32) = 15419LL;
  WdLogEvent5_WdWarning(v47);
  if ( v54 )
  {
    *((_QWORD *)v39 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v39, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( (_DWORD)v13 == -1073741267 )
    *a5 = 1;
  return (unsigned int)v13;
}
