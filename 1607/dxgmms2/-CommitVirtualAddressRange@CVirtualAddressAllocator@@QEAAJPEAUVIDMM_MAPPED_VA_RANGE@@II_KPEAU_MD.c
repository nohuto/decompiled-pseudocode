/*
 * XREFs of ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0048A50
 * Callers:
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C00452DC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004CCB0 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C004EFA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006A5FC (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C006D2A8 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C006F124 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     CommitVirtualAddressRangesInList @ 0x1C00885A4 (CommitVirtualAddressRangesInList.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008B8AC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C008CAE8 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C0099070 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C000F72C (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C000F7E0 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C000F908 (-DdiGetRootPageTableSize@ADAPTER_RENDER@@QEAA_KPEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0012BAC (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 *     Template_pqxx @ 0x1C001FB3C (Template_pqxx.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0049128 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C004FC2C (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C00676D0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006A5FC (-RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C0090AF0 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::CommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        unsigned __int8 a7,
        struct VIDMM_ALLOC **a8)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi
  UINT v13; // r10d
  int v14; // r15d
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // r9
  VIDMM_PAGE_DIRECTORY *v19; // rdx
  _DWORD *v20; // r13
  UINT v21; // edi
  __int64 v22; // r11
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  __int64 **VidMmAllocFromOwner; // rax
  int v28; // eax
  struct _MDL *v29; // r10
  unsigned __int64 v30; // rdx
  __int64 v31; // r8
  bool v32; // zf
  unsigned __int64 v33; // r8
  __int64 v34; // r12
  __int64 v35; // rcx
  int v36; // edi
  __int64 v37; // r8
  unsigned int v39; // eax
  __int64 v40; // rax
  int RootPageTableSize; // eax
  struct VIDMM_PAGE_DIRECTORY *PageDirectory; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  _QWORD *v51; // rax
  __int64 v52; // rax
  int v53; // edi
  VIDMM_PAGE_DIRECTORY *v54; // rcx
  struct VIDMM_ALLOC **v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 VidMmGlobalAllocFromOwner; // rax
  int v59; // eax
  int v60; // eax
  char v61; // [rsp+58h] [rbp-B0h]
  unsigned int v62; // [rsp+5Ch] [rbp-ACh]
  UINT v63; // [rsp+60h] [rbp-A8h]
  int v64; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v65; // [rsp+68h] [rbp-A0h]
  unsigned int v66; // [rsp+78h] [rbp-90h]
  _DXGKARG_GETROOTPAGETABLESIZE v67; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v68; // [rsp+88h] [rbp-80h]
  int v69; // [rsp+90h] [rbp-78h]
  VIDMM_PAGE_DIRECTORY *v70; // [rsp+98h] [rbp-70h]
  __int64 v71; // [rsp+A0h] [rbp-68h]
  __int64 v72; // [rsp+A8h] [rbp-60h]
  struct VIDMM_ALLOC **v73; // [rsp+B0h] [rbp-58h]
  __int64 v74; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v75; // [rsp+C0h] [rbp-48h]
  _QWORD v76[10]; // [rsp+C8h] [rbp-40h] BYREF

  v73 = a8;
  v69 = a3;
  *a8 = 0LL;
  v11 = *((_QWORD *)a2 + 12);
  v12 = (*((_QWORD *)a2 + 13) - v11) >> 12;
  v13 = (*((_DWORD *)a2 + 16) >> 4) & 0x3F;
  v65 = v11;
  v11 >>= 12;
  v14 = (int)(*((_DWORD *)a2 + 16) << 28) >> 28;
  v72 = *((_QWORD *)a2 + 7);
  v15 = *((_QWORD *)a2 + 9);
  v16 = v11 + v12;
  v62 = v13;
  v68 = v12;
  v75 = v15;
  if ( v11 + v12 <= v11 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v15, a2);
    *(_QWORD *)(v44 + 24) = 3065LL;
    WdLogEvent5_WdAssertion(v44);
    return 3221225485LL;
  }
  else if ( v16 > *(_QWORD *)this >> 12 )
  {
    v45 = WdLogNewEntry5_WdAssertion(v15, a2);
    *(_QWORD *)(v45 + 24) = 3070LL;
    WdLogEvent5_WdAssertion(v45);
    return 3221225485LL;
  }
  else
  {
    if ( (*((_BYTE *)a2 + 88) & 4) != 0 )
      a4 = -2;
    v17 = *((_QWORD *)this + 12) + 32LL * v13;
    v18 = 456LL * v13 + *(_QWORD *)(*((_QWORD *)this + 8) + 40136LL);
    v74 = 456LL * v13;
    v71 = v18;
    v19 = *(VIDMM_PAGE_DIRECTORY **)v17;
    v70 = v19;
    v20 = *(_DWORD **)(v18 + 424);
    if ( v19 && (*(_DWORD *)v19 & 8) == 0 )
    {
LABEL_10:
      v61 = 0;
      if ( *((struct _KTHREAD **)this + 6) != KeGetCurrentThread() )
      {
        DXGPUSHLOCK::AcquireExclusive((CVirtualAddressAllocator *)((char *)this + 40));
        v61 = 1;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
        Template_pqxx(v15, &CommitVirtualAddressStart, v16, v72, v14, v65, v12);
      memset(v76, 0, 0x48uLL);
      v22 = *((_QWORD *)a2 + 15);
      if ( v22 )
      {
        v76[3] = (a5 + *((_QWORD *)a2 + 14) - *((_QWORD *)a2 + 9)) >> 12;
        v76[8] = v22;
      }
      v23 = *((_QWORD *)a2 + 10);
      v24 = v76[0] | 1LL;
      v76[2] = v23;
      v76[0] |= 1uLL;
      if ( a4 == -2 )
      {
        v76[0] = v24 | 2;
        if ( (_WORD)v65 || (v12 & 0xF) != 0 || (v32 = v20[3] == 0, LOBYTE(v76[7]) = 1, v32) )
          LOBYTE(v76[7]) = 0;
        VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(
                                      (int)(*((_DWORD *)a2 + 16) << 28) >> 28,
                                      *((_QWORD *)a2 + 7));
        if ( VidMmGlobalAllocFromOwner )
        {
          v59 = *(_DWORD *)(VidMmGlobalAllocFromOwner + 32);
          if ( !v59 || (_WORD)v59 )
            LOBYTE(v76[7]) = 0;
        }
      }
      else
      {
        if ( a4 == -3 )
        {
          LOBYTE(v76[7]) = 1;
        }
        else if ( a4 != -1 )
        {
          v25 = *((_QWORD *)a2 + 7);
          v26 = (int)(*((_DWORD *)a2 + 16) << 28) >> 28;
          if ( v26 != 3 )
          {
            VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v26, *((_QWORD *)a2 + 7));
            if ( VidMmAllocFromOwner )
              v25 = **VidMmAllocFromOwner;
            else
              v25 = 0LL;
          }
          if ( !(_WORD)v65 && v20[3] && (v22 & 0xF) == 0 && !(unsigned __int16)*((_DWORD *)a2 + 28) )
          {
            if ( a4 )
            {
              if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 3712LL)
                                         + 8LL
                                         * (unsigned int)(a4
                                                        + *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40136LL)
                                                                    + v74
                                                                    + 4)
                                                        - 1))
                             + 368LL) == 0x10000
                && (v12 & 0xF) == 0
                && (unsigned __int16)a5 == 0LL )
              {
                LOBYTE(v76[7]) = 1;
              }
              if ( v25 )
              {
                v28 = *(_DWORD *)(v25 + 32);
                if ( !v28 || (_WORD)v28 )
                  LOBYTE(v76[7]) = 0;
              }
            }
            else if ( !(_WORD)a5 && (*((_DWORD *)this + 30) & 4) == 0 && v25 && (*(_DWORD *)(v25 + 80) & 0x100) != 0 )
            {
              LOBYTE(v76[7]) = 1;
            }
          }
          v76[2] = v23;
          v29 = a6;
          v30 = v24 & 0xFFFFFFFFFFFE041FuLL | (32 * (a4 & 0x1F | ((unsigned __int64)(v69 & 0x3F) << 6)));
          v76[0] = v30;
          if ( a6
            || (*v20 & 0x40) == 0
            || v25 && (**(_DWORD **)(v25 + 504) & 0x80u) != 0
            || (v60 = *((_DWORD *)this + 30), BYTE3(v76[7]) = 1, (v60 & 4) != 0) )
          {
            BYTE3(v76[7]) = 0;
          }
          if ( (*v20 & 0x10) != 0 && (v14 == 2 || v25 && (**(_DWORD **)(v25 + 504) & 4) != 0) )
          {
            v30 |= 4uLL;
            v76[0] = v30;
          }
          v31 = *((_QWORD *)a2 + 11);
          if ( (v31 & 1) == 0 && (*(_BYTE *)v20 & 1) != 0 )
          {
            v30 |= 8uLL;
            v76[0] = v30;
          }
          v32 = (v31 & 2) == 0;
          v33 = v65;
          if ( v32 && (*v20 & 2) != 0 )
            v76[0] = v30 | 0x10;
          goto LABEL_43;
        }
        v33 = v65;
      }
      v29 = a6;
LABEL_43:
      HIDWORD(v76[6]) = a4;
      v34 = v72;
      v76[5] = v72;
      v76[4] = v29;
      LODWORD(v76[6]) = v14;
      if ( (*v20 & 0x80u) != 0 )
        *(_WORD *)((char *)&v76[7] + 1) = 257;
      v36 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)v17,
              this,
              (const struct COMMIT_VA_STATE *)v76,
              v75,
              v33,
              v12,
              a5,
              0,
              v73);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
        Template_p(v35, &CommitVirtualAddressEnd, v37, v34);
      if ( a7 )
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v62, v65, v65 + (v68 << 12));
      if ( BYTE4(v76[7]) )
      {
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 8), v62);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 9),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 24LL) + 200LL),
          0);
      }
      if ( v36 < 0 )
        *((_DWORD *)a2 + 16) |= 0x800u;
      else
        *((_DWORD *)a2 + 16) |= 0x400u;
      if ( v61 )
      {
        *((_QWORD *)this + 6) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
        KeLeaveCriticalRegion();
      }
      return (unsigned int)v36;
    }
    v15 = *(_QWORD *)(v18 + 48LL * *(unsigned int *)(v18 + 412) + 96);
    v21 = (((v16 - 1) & *(_QWORD *)(v18 + 48LL * *(unsigned int *)(v18 + 412) + 88)) >> v15) + 1;
    v63 = *(_DWORD *)(v17 + 16);
    if ( v21 <= v63 && v19 )
    {
LABEL_9:
      v12 = v68;
      goto LABEL_10;
    }
    v39 = *(_DWORD *)(v17 + 20);
    v66 = v39;
    if ( v20[4] == 2 )
    {
      *(_DWORD *)(v17 + 16) = v21;
      v67 = 0LL;
      v40 = *((_QWORD *)this + 8);
      v67.NumberOfPte = v21;
      v67.PhysicalAdapterIndex = v13;
      RootPageTableSize = ADAPTER_RENDER::DdiGetRootPageTableSize(*(ADAPTER_RENDER **)(v40 + 16), &v67);
      v18 = v71;
      v13 = v62;
      *(_DWORD *)(v17 + 20) = RootPageTableSize;
      *(_DWORD *)(v17 + 16) = v67.NumberOfPte;
      v39 = v66;
    }
    if ( *(_DWORD *)(v17 + 16) < v21 || *(_DWORD *)(v17 + 20) < v39 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v15, v19);
      *(_QWORD *)(v46 + 24) = *(unsigned int *)(v17 + 16);
      WdLogEvent5_WdAssertion(v46);
      v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47, v49, v50);
      v51[3] = 270LL;
      v51[4] = 48LL;
      v51[5] = this;
      v51[6] = 0LL;
      v51[7] = 0LL;
      WdLogEvent5_WdCriticalError(v51);
      v18 = v71;
      v13 = v62;
    }
    PageDirectory = CreatePageDirectory(this, v13, *(_DWORD *)(v18 + 412));
    *(_QWORD *)v17 = PageDirectory;
    if ( PageDirectory )
    {
      if ( v70 )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 9),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 24LL) + 200LL),
          1);
        v53 = *(_DWORD *)(v17 + 16);
        v54 = v70;
        *(_DWORD *)(v17 + 16) = v63;
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v54, this, 0LL);
        v55 = v73;
        *(_DWORD *)(v17 + 16) = v53;
        v64 = CVirtualAddressAllocator::RecommitVirtualAddressRanges(this, 1LL << v62, v55);
        CVirtualAddressAllocator::FlushGpuVaTlb(this, v62, 0LL, 0LL);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(*((VIDMM_GLOBAL **)this + 8), v62);
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
          *((VIDMM_PROCESS **)this + 9),
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 24LL) + 200LL),
          0);
        v36 = v64;
        if ( v64 < 0 )
        {
          v57 = WdLogNewEntry5_WdAssertion(v15, v56);
          *(_QWORD *)(v57 + 24) = 3160LL;
          WdLogEvent5_WdAssertion(v57);
          return (unsigned int)v36;
        }
      }
      goto LABEL_9;
    }
    v52 = WdLogNewEntry5_WdAssertion(v15, v43);
    *(_QWORD *)(v52 + 24) = 3114LL;
    WdLogEvent5_WdAssertion(v52);
    *(_QWORD *)v17 = v70;
    *(_DWORD *)(v17 + 16) = v63;
    *(_DWORD *)(v17 + 20) = v66;
    return 3221225495LL;
  }
}
