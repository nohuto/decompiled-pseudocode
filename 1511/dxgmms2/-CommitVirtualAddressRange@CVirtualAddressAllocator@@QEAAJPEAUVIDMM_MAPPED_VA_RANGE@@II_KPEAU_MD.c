/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390
 * Callers:
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C003CB54 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0043F78 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C00469F0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?CommitVirtualAddresses@VIDMM_SEGMENT@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062280 (-CommitVirtualAddresses@VIDMM_SEGMENT@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062950 (-RestoreMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062D50 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0066F14 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007C784 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C007D678 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ @ 0x1C00113FC (-GetVidMmAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAUVIDMM_ALLOC@@XZ.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0011448 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C00115D8 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ @ 0x1C001C358 (-GetVidMmGlobalAlloc@VIDMM_MAPPED_VA_RANGE@@QEAAPEAU_VIDMM_GLOBAL_ALLOC@@XZ.c)
 *     Template_p @ 0x1C001CD38 (Template_p.c)
 *     Template_pqxx @ 0x1C001DFE4 (Template_pqxx.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C003E1F8 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C00472BC (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005FBF0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062D50 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C007F774 (-SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z.c)
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
        unsigned __int8 a9)
{
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r14d
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r8
  VIDMM_PAGE_DIRECTORY *v20; // r13
  _DWORD *v21; // rdi
  UINT v22; // edi
  __int64 v23; // r8
  char v24; // r9
  int v25; // eax
  struct VIDMM_ALLOC *VidMmAlloc; // rax
  __int64 v27; // rcx
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // r8
  __int64 result; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  int RootPageTableSize; // eax
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rax
  __int64 v50; // rax
  int v51; // edi
  unsigned __int8 v52; // r9
  int v53; // r13d
  __int64 v54; // rdx
  __int64 v55; // r9
  __int64 v56; // rax
  bool v57; // r9
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAlloc; // rax
  int v59; // eax
  __int64 v60; // rax
  char v61; // [rsp+58h] [rbp-B0h]
  unsigned int v62; // [rsp+5Ch] [rbp-ACh]
  unsigned __int64 v63; // [rsp+60h] [rbp-A8h]
  unsigned int v64; // [rsp+68h] [rbp-A0h]
  UINT v65; // [rsp+6Ch] [rbp-9Ch]
  _DWORD **v66; // [rsp+70h] [rbp-98h]
  _DWORD *v67; // [rsp+78h] [rbp-90h]
  unsigned __int64 v68; // [rsp+88h] [rbp-80h]
  _DXGKARG_GETROOTPAGETABLESIZE v69; // [rsp+90h] [rbp-78h] BYREF
  int v70; // [rsp+98h] [rbp-70h]
  __int64 v71; // [rsp+A0h] [rbp-68h]
  struct _MDL *v72; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v73; // [rsp+B0h] [rbp-58h]
  __int64 v74; // [rsp+B8h] [rbp-50h]
  _QWORD v75[7]; // [rsp+C0h] [rbp-48h] BYREF

  v72 = a6;
  v70 = a3;
  *a8 = 0LL;
  v12 = *((_QWORD *)a2 + 12);
  v13 = (*((_DWORD *)a2 + 16) >> 4) & 0x3F;
  v68 = (*((_QWORD *)a2 + 13) - v12) >> 12;
  v63 = v12;
  v12 >>= 12;
  v14 = (int)(*((_DWORD *)a2 + 16) << 28) >> 28;
  v62 = (*((_DWORD *)a2 + 16) >> 4) & 0x3F;
  v15 = v12 + v68;
  v66 = (_DWORD **)*((_QWORD *)a2 + 7);
  v16 = *((_QWORD *)a2 + 9);
  v73 = v16;
  if ( v12 + v68 <= v12 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v16, v15, a3, v13);
    *(_QWORD *)(v42 + 24) = 2221LL;
    WdLogEvent5_WdAssertion(v42);
    return 3221225485LL;
  }
  if ( v15 > *(_QWORD *)this >> 12 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v16, v15, a3, v13);
    *(_QWORD *)(v43 + 24) = 2226LL;
    WdLogEvent5_WdAssertion(v43);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)a2 + 88) & 4) != 0 )
    a4 = -2;
  v17 = *((_QWORD *)this + 8);
  v18 = *((_QWORD *)this + 12) + 32LL * (unsigned int)v13;
  v74 = 456LL * (unsigned int)v13;
  v19 = *(_QWORD *)(v17 + 40048) + v74;
  v71 = v19;
  v20 = *(VIDMM_PAGE_DIRECTORY **)v18;
  v21 = *(_DWORD **)(v19 + 424);
  v67 = v21;
  if ( !*(_QWORD *)v18 || (*(_DWORD *)v20 & 8) != 0 )
  {
    v16 = *(_QWORD *)(v19 + 48LL * *(unsigned int *)(v19 + 412) + 96);
    v22 = (((v15 - 1) & *(_QWORD *)(v19 + 48LL * *(unsigned int *)(v19 + 412) + 88)) >> v16) + 1;
    v65 = *(_DWORD *)(v18 + 16);
    if ( v22 > v65 || !v20 )
    {
      v36 = *(unsigned int *)(v18 + 20);
      v64 = *(_DWORD *)(v18 + 20);
      if ( v67[4] == 2 )
      {
        *(_DWORD *)(v18 + 16) = v22;
        v37 = *((_QWORD *)this + 8);
        v69.NumberOfPte = v22;
        v69.PhysicalAdapterIndex = v13;
        RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v37 + 16), &v69);
        v19 = v71;
        v13 = v62;
        v36 = v64;
        *(_DWORD *)(v18 + 20) = RootPageTableSize;
        *(_DWORD *)(v18 + 16) = v69.NumberOfPte;
      }
      if ( *(_DWORD *)(v18 + 16) < v22 || *(_DWORD *)(v18 + 20) < (unsigned int)v36 )
      {
        v44 = WdLogNewEntry5_WdAssertion(v36, v15, v19, v13);
        *(_QWORD *)(v44 + 24) = *(unsigned int *)(v18 + 16);
        WdLogEvent5_WdAssertion(v44);
        v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45, v47, v48);
        v49[3] = 270LL;
        v49[4] = 48LL;
        v49[5] = this;
        v49[6] = 0LL;
        v49[7] = 0LL;
        WdLogEvent5_WdCriticalError(v49);
        v19 = v71;
        LODWORD(v13) = v62;
      }
      PageDirectory = CreatePageDirectory(this, v13, *(_DWORD *)(v19 + 412));
      *(_QWORD *)v18 = PageDirectory;
      if ( !PageDirectory )
      {
        v50 = WdLogNewEntry5_WdAssertion(v16, v40, v19, v41);
        *(_QWORD *)(v50 + 24) = 2270LL;
        WdLogEvent5_WdAssertion(v50);
        *(_DWORD *)(v18 + 16) = v65;
        *(_DWORD *)(v18 + 20) = v64;
        result = 3221225495LL;
        *(_QWORD *)v18 = v20;
        return result;
      }
      if ( v20 )
      {
        VIDMM_PROCESS::SuspendResumeProcess(
          *((VIDMM_PROCESS **)this + 9),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 24LL) + 184LL),
          1);
        v51 = *(_DWORD *)(v18 + 16);
        *(_DWORD *)(v18 + 16) = v65;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v20, this, 0LL, v52);
        *(_DWORD *)(v18 + 16) = v51;
        v53 = VIDMM_GLOBAL::RecommitGpuVirtualAddresses(*((VIDMM_GLOBAL **)this + 8), this);
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v62, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 8), v62);
        VIDMM_PROCESS::SuspendResumeProcess(
          *((VIDMM_PROCESS **)this + 9),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 24LL) + 184LL),
          0);
        if ( v53 < 0 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v16, v54, v19, v55);
          *(_QWORD *)(v56 + 24) = 2316LL;
          WdLogEvent5_WdAssertion(v56);
          return (unsigned int)v53;
        }
      }
    }
    v21 = v67;
  }
  v61 = 0;
  if ( *((struct _KTHREAD **)this + 6) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 40));
    v61 = 1;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    Template_pqxx(v16, &CommitVirtualAddressStart, v19, v66, v14, v63, v68);
  memset(v75, 0, sizeof(v75));
  v23 = v75[0] | 1LL;
  v75[2] = a2;
  v75[0] |= 1uLL;
  if ( a4 != -2 )
  {
    if ( a4 == -3 )
    {
      v24 = 1;
      LOBYTE(v75[6]) = 1;
    }
    else
    {
      if ( a4 != -1 )
      {
        v24 = !(_WORD)v63
           && (v68 & 0xF) == 0
           && a4
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 3712LL)
                                    + 8LL
                                    * (unsigned int)(a4
                                                   + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40048LL) + v74 + 4)
                                                   - 1))
                        + 368LL) == 0x10000;
        v25 = *((_DWORD *)a2 + 16) & 0xF;
        LOBYTE(v75[6]) = v24;
        if ( (_BYTE)v25 == 3 )
        {
          v27 = *((_QWORD *)a2 + 7);
        }
        else
        {
          VidMmAlloc = VIDMM_MAPPED_VA_RANGE::GetVidMmAlloc(a2);
          if ( !VidMmAlloc )
            goto LABEL_28;
          v27 = **(_QWORD **)VidMmAlloc;
        }
        if ( v27 )
        {
          v28 = *(_DWORD *)(v27 + 32);
          if ( !v28 || (_WORD)v28 )
          {
            v24 = 0;
            LOBYTE(v75[6]) = 0;
          }
        }
LABEL_28:
        v75[2] = a2;
        v29 = v23 & 0xFFFFFFFFFFFE041FuLL | (32 * (a4 & 0x1F | ((unsigned __int64)(v70 & 0x3F) << 6)));
        v75[0] = v29;
        if ( (*v21 & 0x10) != 0 )
        {
          if ( v14 == 1 )
          {
            if ( (**(_DWORD **)(*(_QWORD *)*v66 + 472LL) & 4) == 0 )
              goto LABEL_31;
LABEL_52:
            v29 |= 4uLL;
            v75[0] = v29;
            goto LABEL_31;
          }
          if ( v14 == 2 )
            goto LABEL_52;
          if ( v14 != 3 )
          {
            if ( v14 == 4 )
            {
              v29 |= 4uLL;
              v75[0] = v29;
            }
            goto LABEL_31;
          }
          if ( (*v66[59] & 4) != 0 )
            goto LABEL_52;
        }
LABEL_31:
        v30 = *((_QWORD *)a2 + 11);
        if ( (v30 & 1) == 0 && (*(_BYTE *)v21 & 1) != 0 )
        {
          v29 |= 8uLL;
          v75[0] = v29;
        }
        if ( (v30 & 2) == 0 && (*v21 & 2) != 0 )
          v75[0] = v29 | 0x10;
        goto LABEL_35;
      }
      v24 = v75[6];
    }
LABEL_35:
    v31 = v63;
    goto LABEL_36;
  }
  v75[0] = v23 | 2;
  v57 = !(_WORD)v63 && (v68 & 0xF) == 0 && v21[3];
  LOBYTE(v75[6]) = v57;
  VidMmGlobalAlloc = VIDMM_MAPPED_VA_RANGE::GetVidMmGlobalAlloc(a2);
  if ( VidMmGlobalAlloc )
  {
    v59 = *((_DWORD *)VidMmGlobalAlloc + 8);
    if ( !v59 || (_WORD)v59 )
    {
      v24 = 0;
      LOBYTE(v75[6]) = 0;
    }
  }
LABEL_36:
  v75[5] = __PAIR64__(a4, v14);
  v75[4] = v66;
  v75[3] = v72;
  if ( (*v21 & 0x80u) == 0 )
    goto LABEL_38;
  BYTE1(v75[6]) = 1;
  if ( !a9 )
    goto LABEL_38;
  v33 = VIDMM_PAGE_DIRECTORY::UncommitVirtualAddressRange(
          *(VIDMM_PAGE_DIRECTORY **)v18,
          (__int64)this,
          v31,
          v68,
          a8,
          2 - (unsigned int)(v24 != 0));
  if ( v33 >= 0 )
  {
    v31 = v63;
LABEL_38:
    v33 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
            *(VIDMM_PAGE_DIRECTORY **)v18,
            this,
            (const struct COMMIT_VA_STATE *)v75,
            v73,
            v31,
            v68,
            a5,
            0,
            a8);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      Template_p(v32, &CommitVirtualAddressEnd, v34, v66);
    if ( a7 )
      CVirtualAddressAllocator::FlushGpuVaTlb(this, v62, v63, v63 + (v68 << 12));
    if ( BYTE2(v75[6]) )
    {
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 8), v62);
      VIDMM_PROCESS::SuspendResumeProcess(
        *((VIDMM_PROCESS **)this + 9),
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 24LL) + 184LL),
        0);
    }
    goto LABEL_43;
  }
  v60 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v60 + 24) = 2465LL;
  WdLogEvent5_WdError(v60);
LABEL_43:
  if ( v33 < 0 )
    *((_DWORD *)a2 + 16) |= 0x800u;
  else
    *((_DWORD *)a2 + 16) |= 0x400u;
  if ( v61 )
  {
    *((_QWORD *)this + 6) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v33;
}
