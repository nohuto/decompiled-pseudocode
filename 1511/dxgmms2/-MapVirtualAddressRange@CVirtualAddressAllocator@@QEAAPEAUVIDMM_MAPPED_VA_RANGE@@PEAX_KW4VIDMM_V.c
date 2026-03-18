/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C003BE68 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C003CB54 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0045DC8 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0051730 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0060494 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0066F14 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0067308 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C007D678 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0015194 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 *     Template_ppqxxx @ 0x1C001DF30 (Template_ppqxxx.c)
 *     Template_pqxx @ 0x1C001DFE4 (Template_pqxx.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0040A80 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0040FD0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00411F0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005EFB0 (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005FCA0 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        void **a13)
{
  struct _RTL_BALANCED_NODE **v13; // rbp
  __int64 v14; // rsi
  struct _RTL_AVL_TREE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  VIDMM_MAPPED_VA_RANGE *v19; // r14
  unsigned __int64 v20; // r12
  char v21; // r15
  int VirtualAddressRange; // eax
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  struct _RTL_BALANCED_NODE *v25; // rdi
  struct _RTL_BALANCED_NODE *v26; // rbx
  struct _RTL_BALANCED_NODE *v27; // rax
  __int64 v28; // r8
  char v29; // al
  unsigned int v30; // eax
  PVOID v31; // rax
  VIDMM_MAPPED_VA_RANGE *v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // ecx
  __int64 v35; // rcx
  __int64 *v36; // rdi
  __int64 **v37; // rcx
  __int64 *v38; // rax
  unsigned __int64 v40; // rbx
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  int v46; // r9d
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rax
  struct VIDMM_MAPPED_VA_RANGE *v58; // [rsp+50h] [rbp+50h]
  unsigned __int64 v59; // [rsp+58h] [rbp+58h]
  _BYTE v60[96]; // [rsp+C0h] [rbp+C0h] BYREF
  int v63; // [rsp+148h] [rbp+148h]

  v63 = a4;
  v13 = (struct _RTL_BALANCED_NODE **)((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL);
  v14 = a1 + 40;
  *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = a1 + 40;
  if ( a1 != -40 && *(struct _KTHREAD **)(a1 + 48) == KeGetCurrentThread() )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v45 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v45);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v14, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v46 = *(_DWORD *)(v14 + 16);
      if ( v46 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v17, &EventBlockThread, v18, v46);
    }
    ExAcquirePushLockExclusiveEx(v14, 0LL);
  }
  v19 = 0LL;
  v20 = a6;
  v21 = 0;
  *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
  *(_DWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 2;
  *v13 = 0LL;
  if ( a6 )
  {
    v25 = *(struct _RTL_BALANCED_NODE **)(a1 + 32);
    v40 = a6 + a5;
    *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a6;
    while ( v25 )
    {
      v41 = CompareVadAddressInsideAvl(v13 + 1, v25);
      if ( v41 < 0 )
      {
        v25 = v25->Children[0];
      }
      else
      {
        if ( v41 <= 0 )
        {
          v44 = LODWORD(v25[3].Children[0]);
          v23 = (unsigned __int64)v25[1].Children[1];
          if ( (v44 & 0x1000) != 0 )
            v23 -= 4096LL;
          if ( v23 < v40 )
          {
            v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v23);
            v48[3] = *(_QWORD *)(((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            v48[4] = v40;
            v48[5] = v25;
            WdLogEvent5_WdWarning(v48);
          }
          else
          {
            *v13 = v25;
            if ( (((unsigned __int8)a10 ^ (unsigned __int8)(v44 >> 7)) & 0x10) == 0 )
              goto LABEL_18;
            v47 = WdLogNewEntry5_WdAssertion(v23, v16, v42, v43);
            *(_QWORD *)(v47 + 24) = 1295LL;
            WdLogEvent5_WdAssertion(v47);
          }
          goto LABEL_31;
        }
        v25 = v25->Children[1];
      }
    }
  }
  VirtualAddressRange = CVirtualAddressAllocator::AllocateVirtualAddressRange(
                          (CVirtualAddressAllocator *)a1,
                          v16,
                          a5,
                          a6,
                          a7,
                          a8,
                          a9,
                          (struct VIDMM_VAD **)((unsigned __int64)v60 & 0xFFFFFFFFFFFFFFC0uLL),
                          1u);
  v25 = *v13;
  if ( VirtualAddressRange < 0 )
    goto LABEL_18;
  v26 = *(struct _RTL_BALANCED_NODE **)(a1 + 32);
  LOBYTE(v24) = 0;
  if ( !v26 )
    goto LABEL_12;
  while ( (int)CompareVadRangeAvl(v25, v26) >= 0 )
  {
    v27 = v26->Children[1];
    if ( !v27 )
    {
      LOBYTE(v24) = 1;
      goto LABEL_12;
    }
LABEL_10:
    v26 = v27;
  }
  v27 = v26->Children[0];
  if ( v26->Children[0] )
    goto LABEL_10;
  LOBYTE(v24) = 0;
LABEL_12:
  RtlAvlInsertNodeEx(a1 + 32, v26, v24, v25);
  v23 = (__int64)v25[3].Children[0] & 0xFFFFFFF0 | 2;
  LODWORD(v25[3].Children[0]) = v23;
  v29 = a10;
  if ( (a10 & 0x10) != 0 )
  {
    LODWORD(v23) = v23 | 0x800;
    LODWORD(v25[3].Children[0]) = v23;
    v29 = a10;
  }
  if ( (v29 & 8) != 0 || (v29 & 4) != 0 )
    v30 = (__int64)v25[3].Children[0] & 0xFFFFFFF0 | 2;
  else
    v30 = (__int64)v25[3].Children[0] & 0xFFFFFFF0 | 3;
  LODWORD(v25[3].Children[0]) = v30;
  v21 = 1;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v58) = v25[3].Children[0];
    Template_pqxx(v23, &CreateGpuVirtualAddressRange, v28, a1, v58, v25[1].Children[0], v25[1].Children[1]);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v59) = v63;
      Template_ppqxxx(
        v23,
        &UpdateGpuVirtualAddressRangeMapping,
        v49,
        a1,
        a2,
        v59,
        0LL,
        v25[1].Children[0],
        v25[1].Children[1]);
    }
  }
LABEL_18:
  if ( v25 )
  {
    if ( !a13 || (v31 = operator new(0x18uLL, 0x39346956u, PagedPool), (*a13 = v31) != 0LL) )
    {
      if ( ((__int64)v25[3].Children[0] & 0xF) == 3 && ((a10 & 8) != 0 || (a10 & 4) != 0) )
      {
        v50 = WdLogNewEntry5_WdWarning(v23);
        WdLogEvent5_WdWarning(v50);
      }
      else
      {
        if ( v21 )
          v20 = (unsigned __int64)v25[1].Children[0];
        v32 = (VIDMM_MAPPED_VA_RANGE *)operator new(0x78uLL, 0x39346956u, PagedPool);
        v19 = v32;
        if ( v32 )
        {
          *(_QWORD *)v32 = v25;
          *((_QWORD *)v32 + 7) = a2;
          v34 = *((_DWORD *)v32 + 16) & 0xFFFFE000 | v63 & 0xF | (16 * (a12 & 0x3F));
          *((_QWORD *)v32 + 9) = a3;
          *((_QWORD *)v32 + 10) = a11;
          *((_DWORD *)v32 + 16) = v34;
          *((_QWORD *)v32 + 11) = a10;
          *((_QWORD *)v32 + 12) = v20;
          *((_QWORD *)v32 + 13) = v20 + a5;
          *((_DWORD *)v32 + 28) = 1;
          *((_QWORD *)v32 + 1) = 0LL;
          *((_QWORD *)v32 + 2) = 0LL;
          *((_QWORD *)v32 + 3) = 0LL;
          *((_QWORD *)v32 + 4) = 0LL;
          *((_QWORD *)v32 + 5) = 0LL;
          *((_QWORD *)v32 + 6) = 0LL;
          if ( (int)CVirtualAddressAllocator::AddVaRangeToVadRangeList(
                      (CVirtualAddressAllocator *)a1,
                      (struct VIDMM_VAD *)v25,
                      a12,
                      0LL,
                      v32) >= 0 )
          {
            if ( a13 )
            {
              v36 = (__int64 *)&v25[3].Children[1];
              *((_QWORD *)*a13 + 2) = v19;
              v37 = (__int64 **)v36[1];
              v38 = (__int64 *)*a13;
              *v38 = (__int64)v36;
              v38[1] = (__int64)v37;
              if ( *v37 != v36 )
                __fastfail(3u);
              *v37 = v38;
              v36[1] = (__int64)v38;
            }
            goto LABEL_31;
          }
          v51 = WdLogNewEntry5_WdWarning(v35);
          WdLogEvent5_WdWarning(v51);
          VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v19);
        }
        else
        {
          _InterlockedIncrement(&dword_1C002F600);
          v56 = WdLogNewEntry5_WdLowResource(v33);
          *(_QWORD *)(v56 + 24) = 1797LL;
          WdLogEvent5_WdLowResource(v56);
          v25 = *v13;
        }
        v57 = WdLogNewEntry5_WdAssertion(v53, v52, v54, v55);
        *(_QWORD *)(v57 + 24) = 1338LL;
        WdLogEvent5_WdAssertion(v57);
      }
    }
    if ( v21 )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        (CVirtualAddressAllocator *)a1,
        (struct VIDMM_VAD *)v25);
    if ( a13 )
    {
      operator delete(*a13);
      *a13 = 0LL;
    }
    v19 = 0LL;
  }
LABEL_31:
  *(_QWORD *)(v14 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v14, 0LL);
  KeLeaveCriticalRegion();
  return v19;
}
