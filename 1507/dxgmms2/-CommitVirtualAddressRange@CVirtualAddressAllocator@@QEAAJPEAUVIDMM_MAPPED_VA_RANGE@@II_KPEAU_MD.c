/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C005D260
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004C0F0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00544F8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C0055F38 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005B060 (-RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?CommitReservedZeroRanges@CVirtualAddressAllocator@@QEAAJXZ @ 0x1C005D158 (-CommitReservedZeroRanges@CVirtualAddressAllocator@@QEAAJXZ.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0060034 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0060D6C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@IIPEAU_VIDMM_GLOBAL_ALLOC@@_KI1PEAU_MDL@@PEAE1@Z @ 0x1C0060F88 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@IIPEAU_VIDMM_GLOBAL_.c)
 *     ?CommitVirtualAddresses@VIDMM_SEGMENT@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C006FA64 (-CommitVirtualAddresses@VIDMM_SEGMENT@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C000E0A4 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000ED20 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ @ 0x1C000EE34 (-GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ.c)
 *     Template_pqxx @ 0x1C0010794 (Template_pqxx.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0051F14 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0056C14 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C005875C (-SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005E758 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005EDDC (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C0063608 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 */

__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        char a7,
        struct VIDMM_ALLOC **a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  unsigned int v13; // r9d
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r14
  __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rcx
  VIDMM_PAGE_DIRECTORY **v22; // rsi
  __int64 v23; // rax
  VIDMM_PAGE_DIRECTORY *v24; // r12
  __int64 v25; // r8
  UINT v26; // ebx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v34; // rdx
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // ebx
  unsigned int v38; // r12d
  int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // r9
  bool v44; // r8
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAlloc; // rax
  char v46; // r8
  int *v47; // r11
  int v48; // eax
  bool v49; // r8
  struct _VIDMM_GLOBAL_ALLOC *v50; // rax
  __int64 v51; // r9
  int v52; // eax
  int v53; // r10d
  unsigned __int64 v54; // rdx
  _DWORD *v55; // rax
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // r8
  char v62; // [rsp+50h] [rbp-B0h]
  unsigned int v63; // [rsp+54h] [rbp-ACh]
  int *v64; // [rsp+58h] [rbp-A8h]
  int v65; // [rsp+60h] [rbp-A0h]
  int v66; // [rsp+64h] [rbp-9Ch]
  UINT v67; // [rsp+68h] [rbp-98h]
  unsigned int v68; // [rsp+6Ch] [rbp-94h]
  _QWORD *v69; // [rsp+70h] [rbp-90h]
  _DXGKARG_GETROOTPAGETABLESIZE v70; // [rsp+78h] [rbp-88h] BYREF
  int v71; // [rsp+80h] [rbp-80h]
  struct VIDMM_ALLOC **v72; // [rsp+88h] [rbp-78h]
  __int64 v73; // [rsp+90h] [rbp-70h]
  struct _MDL *v74; // [rsp+98h] [rbp-68h]
  unsigned __int64 v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h]
  _QWORD v77[8]; // [rsp+B0h] [rbp-50h] BYREF

  v74 = a6;
  v72 = a8;
  v71 = a3;
  *a8 = 0LL;
  v13 = *((_DWORD *)a2 + 16);
  v14 = *((_QWORD *)a2 + 12);
  v15 = (*((_QWORD *)a2 + 13) - v14) >> 12;
  v66 = (int)(v13 << 28) >> 28;
  v16 = (v13 >> 4) & 0x3F;
  v69 = (_QWORD *)*((_QWORD *)a2 + 7);
  v17 = *((_QWORD *)a2 + 9);
  v18 = (v14 >> 12) + v15;
  v75 = v17;
  v63 = v16;
  if ( v18 <= v14 >> 12 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v17, v18, a3, v16);
    *(_QWORD *)(v19 + 24) = 2227LL;
LABEL_3:
    WdLogEvent5_WdAssertion(v19);
    return 3221225485LL;
  }
  if ( v18 > *(_QWORD *)this >> 12 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v17, v18, a3, v16);
    *(_QWORD *)(v19 + 24) = 2232LL;
    goto LABEL_3;
  }
  v21 = 4294967294LL;
  if ( (*((_BYTE *)a2 + 88) & 4) != 0 )
    a4 = -2;
  v22 = (VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 12) + 32LL * (unsigned int)v16);
  v23 = *((_QWORD *)this + 8);
  v24 = *v22;
  v73 = 456LL * (unsigned int)v16;
  v65 = a4;
  v25 = *(_QWORD *)(v23 + 39992) + v73;
  v76 = v25;
  v64 = *(int **)(v25 + 424);
  if ( v24 && (*(_DWORD *)v24 & 8) == 0 )
    goto LABEL_23;
  v21 = *(_QWORD *)(v25 + 48LL * *(unsigned int *)(v25 + 412) + 96);
  v26 = (((v18 - 1) & *(_QWORD *)(v25 + 48LL * *(unsigned int *)(v25 + 412) + 88)) >> v21) + 1;
  v67 = *((_DWORD *)v22 + 4);
  if ( v26 <= v67 && v24 )
  {
    a4 = v65;
LABEL_23:
    v38 = v16;
    goto LABEL_24;
  }
  v27 = *((_DWORD *)v22 + 5);
  v68 = v27;
  if ( *(_DWORD *)(*(_QWORD *)(v25 + 424) + 16LL) == 2 )
  {
    *((_DWORD *)v22 + 4) = v26;
    v28 = *((_QWORD *)this + 8);
    v70.NumberOfPte = v26;
    v70.PhysicalAdapterIndex = v16;
    *((_DWORD *)v22 + 5) = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v28 + 16), &v70);
    *((_DWORD *)v22 + 4) = v70.NumberOfPte;
    v27 = v68;
  }
  if ( *((_DWORD *)v22 + 4) < v26 || *((_DWORD *)v22 + 5) < v27 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v21, v18, v25, v16);
    *(_QWORD *)(v29 + 24) = *((unsigned int *)v22 + 4);
    WdLogEvent5_WdAssertion(v29);
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v31, v30);
    v32[3] = 270LL;
    v32[4] = 48LL;
    v32[5] = this;
    v32[6] = 0LL;
    v32[7] = 0LL;
    WdLogEvent5_WdCriticalError(v32);
  }
  PageDirectory = CreatePageDirectory(this, v63, *(_DWORD *)(v76 + 412));
  *v22 = PageDirectory;
  if ( !PageDirectory )
  {
    v36 = WdLogNewEntry5_WdAssertion(v21, v34, v25, v35);
    *(_QWORD *)(v36 + 24) = 2276LL;
    WdLogEvent5_WdAssertion(v36);
    *((_DWORD *)v22 + 4) = v67;
    *((_DWORD *)v22 + 5) = v68;
    result = 3221225495LL;
    *v22 = v24;
    return result;
  }
  if ( !v24 )
  {
    a4 = v65;
    v38 = v63;
    goto LABEL_24;
  }
  VIDMM_PROCESS::SuspendResumeProcess(
    *((VIDMM_PROCESS **)this + 9),
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 24LL) + 184LL),
    1);
  v37 = *((_DWORD *)v22 + 4);
  *((_DWORD *)v22 + 4) = v67;
  VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v24, this, 0LL);
  *((_DWORD *)v22 + 4) = v37;
  v38 = v63;
  v39 = VIDMM_GLOBAL::RecommitGpuVirtualAddresses(*((VIDMM_GLOBAL **)this + 8), this);
  CVirtualAddressAllocator::FlushGpuVaTlb(this, v63, 0LL, 0LL);
  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 8), v63);
  VIDMM_PROCESS::SuspendResumeProcess(
    *((VIDMM_PROCESS **)this + 9),
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 24LL) + 184LL),
    0);
  if ( v39 >= 0 )
  {
    a4 = v65;
LABEL_24:
    v62 = 0;
    if ( *((struct _KTHREAD **)this + 6) != KeGetCurrentThread() )
    {
      DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 40));
      v62 = 1;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      Template_pqxx(v21, &CommitVirtualAddressStart, v25, v69, v66, v14, v15);
    memset(v77, 0, sizeof(v77));
    v43 = v77[0] | 1LL;
    v77[2] = a2;
    v77[0] |= 1uLL;
    switch ( a4 )
    {
      case -2:
        v77[0] = v43 | 2;
        v44 = a10 && !(_WORD)v14 && (v15 & 0xF) == 0 && v64[3];
        BYTE1(v77[7]) = v44;
        VidMmGlobalAlloc = VIDMM_MAPPED_VA_RANGE::GetVidMmGlobalAlloc(a2);
        if ( VidMmGlobalAlloc )
        {
          v48 = *((_DWORD *)VidMmGlobalAlloc + 8);
          if ( !v48 || (_WORD)v48 )
          {
            v46 = 0;
            BYTE1(v77[7]) = 0;
          }
        }
        LOBYTE(v77[7]) = 1;
        goto LABEL_73;
      case -3:
        v46 = 1;
        BYTE1(v77[7]) = 1;
LABEL_72:
        v47 = v64;
LABEL_73:
        v77[3] = v74;
        v77[4] = v69;
        LODWORD(v77[5]) = v66;
        v57 = *v47;
        LODWORD(v77[6]) = a4;
        if ( (v57 & 0x80u) != 0
          && (BYTE2(v77[7]) = 1, a9)
          && (v39 = VIDMM_PAGE_DIRECTORY::UncommitVirtualAddressRange(
                      *v22,
                      this,
                      v14,
                      v15,
                      v72,
                      2 - (unsigned int)(v46 != 0)),
              v39 < 0) )
        {
          v59 = WdLogNewEntry5_WdError(v58);
          *(_QWORD *)(v59 + 24) = 2474LL;
          WdLogEvent5_WdError(v59);
        }
        else
        {
          v39 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                  *v22,
                  this,
                  (const struct COMMIT_VA_STATE *)v77,
                  v75,
                  v14,
                  v15,
                  a5,
                  0,
                  v72);
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
            Template_p(v60, &CommitVirtualAddressEnd, v61, v69);
          if ( a7 )
            CVirtualAddressAllocator::FlushGpuVaTlb(this, v38, v14, (v15 << 12) + v14);
          if ( BYTE3(v77[7]) )
          {
            VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 8), v38);
            VIDMM_PROCESS::SuspendResumeProcess(
              *((VIDMM_PROCESS **)this + 9),
              *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 24LL) + 184LL),
              0);
          }
        }
        if ( v39 < 0 )
          *((_DWORD *)a2 + 16) |= 0x800u;
        else
          *((_DWORD *)a2 + 16) |= 0x400u;
        if ( v62 )
        {
          *((_QWORD *)this + 6) = 0LL;
          ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
          KeLeaveCriticalRegion();
        }
        return (unsigned int)v39;
      case -1:
        v46 = BYTE1(v77[7]);
        goto LABEL_72;
    }
    LOBYTE(v77[7]) = 1;
    v49 = a10
       && !(_WORD)v14
       && (v15 & 0xF) == 0
       && a4
       && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 3712LL)
                                + 8LL
                                * (unsigned int)(a4
                                               + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 39992LL) + v73 + 4)
                                               - 1))
                    + 368LL) == 0x10000;
    BYTE1(v77[7]) = v49;
    v50 = VIDMM_MAPPED_VA_RANGE::GetVidMmGlobalAlloc(a2);
    if ( v50 )
    {
      v52 = *((_DWORD *)v50 + 8);
      if ( !v52 || (_WORD)v52 )
      {
        v46 = 0;
        BYTE1(v77[7]) = 0;
      }
    }
    v47 = v64;
    v77[2] = a2;
    v53 = *v64;
    v54 = v51 & 0xFFFFFFFFFFFE041FuLL | (32 * (a4 & 0x1F | ((unsigned __int64)(v71 & 0x3F) << 6)));
    v77[0] = v54;
    if ( (v53 & 0x10) != 0 )
    {
      switch ( v66 )
      {
        case 1:
          v55 = *(_DWORD **)(*(_QWORD *)*v69 + 472LL);
          break;
        case 2:
LABEL_66:
          v54 |= 4uLL;
          v77[0] = v54;
          goto LABEL_67;
        case 3:
          v55 = (_DWORD *)v69[59];
          break;
        case 4:
          goto LABEL_66;
        default:
          goto LABEL_67;
      }
      if ( (*v55 & 4) != 0 )
        goto LABEL_66;
    }
LABEL_67:
    v56 = *((_QWORD *)a2 + 11);
    if ( (v53 & 1) != 0 && (v56 & 1) == 0 )
    {
      v54 |= 8uLL;
      v77[0] = v54;
    }
    if ( (v56 & 2) == 0 && (v53 & 2) != 0 )
      v77[0] = v54 | 0x10;
    goto LABEL_73;
  }
  v42 = WdLogNewEntry5_WdAssertion(v21, v40, v25, v41);
  *(_QWORD *)(v42 + 24) = 2322LL;
  WdLogEvent5_WdAssertion(v42);
  return (unsigned int)v39;
}
