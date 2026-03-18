/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288
 * Callers:
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C00319FC (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00400F4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C004C4FC (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C0055894 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C0055F38 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0060034 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0060D6C (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@IIPEAU_VIDMM_GLOBAL_ALLOC@@_KI1PEAU_MDL@@PEAE1@Z @ 0x1C0060F88 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@IIPEAU_VIDMM_GLOBAL_.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     Template_ppqxxx @ 0x1C00106E0 (Template_ppqxxx.c)
 *     Template_pqxx @ 0x1C0010794 (Template_pqxx.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C005C988 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005E67C (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005E6AC (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005FC14 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333@Z @ 0x1C0061150 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 */

VIDMM_MAPPED_VA_RANGE *__fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        void **a13,
        char a14)
{
  unsigned __int64 v14; // rbp
  struct _RTL_AVL_TREE *v16; // rdx
  __int64 v17; // r12
  VIDMM_MAPPED_VA_RANGE *v18; // rbx
  VIDMM_MAPPED_VA_RANGE *v19; // r14
  char v20; // r13
  struct _RTL_BALANCED_NODE *v21; // rdi
  unsigned __int64 v22; // rsi
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rax
  int VirtualAddressRange; // eax
  struct _RTL_BALANCED_NODE *v32; // rsi
  struct _RTL_BALANCED_NODE *v33; // rax
  char v34; // al
  unsigned int v35; // eax
  PVOID v36; // rax
  __int64 v37; // rax
  VIDMM_MAPPED_VA_RANGE *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 *v44; // rdi
  __int64 **v45; // rdx
  __int64 *v46; // rax
  unsigned __int64 v48; // [rsp+50h] [rbp+50h]
  unsigned __int64 v49; // [rsp+58h] [rbp+58h]
  _BYTE v50[96]; // [rsp+C0h] [rbp+C0h] BYREF

  v14 = (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
    (struct DXGPUSHLOCK *const)(a1 + 5));
  v17 = a6;
  v18 = 0LL;
  *(_QWORD *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) = 0LL;
  v19 = 0LL;
  v20 = 0;
  if ( a6 )
  {
    v21 = (struct _RTL_BALANCED_NODE *)a1[4];
    v22 = a6 + a5;
    *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = a6;
    if ( v21 )
    {
      do
      {
        v23 = CompareVadAddressInsideAvl((struct _RTL_BALANCED_NODE **)(v14 + 8), v21);
        if ( v23 >= 0 )
        {
          if ( v23 <= 0 )
            break;
          v21 = v21->Children[1];
        }
        else
        {
          v21 = v21->Children[0];
        }
      }
      while ( v21 );
      if ( v21 )
      {
        v26 = LODWORD(v21[3].Children[0]);
        v27 = 4096LL;
        v28 = (unsigned __int64)v21[1].Children[1];
        if ( (v26 & 0x1000) != 0 )
          v28 -= 4096LL;
        if ( v28 < v22 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, 4096LL, v24);
          v30[3] = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          v30[4] = v22;
          v30[5] = v21;
          WdLogEvent5_WdWarning(v30);
        }
        else
        {
          *(_QWORD *)v14 = v21;
          if ( (((unsigned __int8)a10 ^ (unsigned __int8)(v26 >> 7)) & 0x10) == 0 )
            goto LABEL_32;
          v29 = WdLogNewEntry5_WdAssertion(v28, 4096LL, v24, v25);
          *(_QWORD *)(v29 + 24) = 1296LL;
          WdLogEvent5_WdAssertion(v29);
        }
        goto LABEL_54;
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
                          (struct VIDMM_VAD **)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL),
                          1u);
  v21 = *(struct _RTL_BALANCED_NODE **)v14;
  if ( VirtualAddressRange < 0 )
    goto LABEL_32;
  LOBYTE(v24) = 0;
  v32 = (struct _RTL_BALANCED_NODE *)a1[4];
  if ( !v32 )
    goto LABEL_23;
  while ( (int)CompareVadRangeAvl((char *)v21, v32) >= 0 )
  {
    v33 = v32->Children[1];
    if ( !v33 )
    {
      LOBYTE(v24) = 1;
      goto LABEL_23;
    }
LABEL_21:
    v32 = v33;
  }
  v33 = v32->Children[0];
  if ( v32->Children[0] )
    goto LABEL_21;
  LOBYTE(v24) = 0;
LABEL_23:
  RtlAvlInsertNodeEx(a1 + 4, v32, v24, v21);
  v27 = 4294967282LL;
  v28 = (__int64)v21[3].Children[0] & 0xFFFFFFF0 | 2;
  LODWORD(v21[3].Children[0]) = v28;
  v34 = a10;
  if ( (a10 & 0x10) != 0 )
  {
    LODWORD(v28) = v28 | 0x800;
    LODWORD(v21[3].Children[0]) = v28;
    v34 = a10;
  }
  if ( (v34 & 8) != 0 || (v34 & 4) != 0 )
    v35 = (__int64)v21[3].Children[0] & 0xFFFFFFF0 | 2;
  else
    v35 = (__int64)v21[3].Children[0] & 0xFFFFFFF0 | 3;
  LODWORD(v21[3].Children[0]) = v35;
  v20 = 1;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v48) = v21[3].Children[0];
    Template_pqxx(v28, &CreateGpuVirtualAddressRange, v24, a1, v48, v21[1].Children[0], v21[1].Children[1]);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v49) = a4;
      Template_ppqxxx(
        v28,
        &UpdateGpuVirtualAddressRangeMapping,
        v24,
        a1,
        a2,
        v49,
        0LL,
        v21[1].Children[0],
        v21[1].Children[1]);
    }
  }
LABEL_32:
  if ( !v21 )
    goto LABEL_53;
  if ( a13 && (v36 = operator new(0x18uLL, 0x39346956u, PagedPool), (*a13 = v36) == 0LL) )
  {
LABEL_43:
    if ( v20 )
      CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        (CVirtualAddressAllocator *)a1,
        (struct VIDMM_VAD *)v21,
        v24);
    if ( a13 )
    {
      operator delete(*a13);
      *a13 = 0LL;
    }
  }
  else
  {
    if ( ((__int64)v21[3].Children[0] & 0xF) == 3 && ((a10 & 8) != 0 || (a10 & 4) != 0) )
    {
      v37 = WdLogNewEntry5_WdWarning(v28, v27, v24);
      WdLogEvent5_WdWarning(v37);
      goto LABEL_43;
    }
    if ( v20 )
      v17 = (__int64)v21[1].Children[0];
    v38 = CVirtualAddressAllocator::MapVadVaRange(
            (struct _KTHREAD **)a1,
            (struct VIDMM_VAD *)v21,
            a12,
            a4,
            a2,
            a3,
            a10,
            a11,
            v17,
            a5);
    v19 = v38;
    if ( !v38 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
      *(_QWORD *)(v43 + 24) = 1339LL;
      WdLogEvent5_WdAssertion(v43);
      goto LABEL_43;
    }
    if ( a13 )
    {
      v44 = (__int64 *)&v21[3].Children[1];
      *((_QWORD *)*a13 + 2) = v38;
      v45 = (__int64 **)v44[1];
      v46 = (__int64 *)*a13;
      *v46 = (__int64)v44;
      v46[1] = (__int64)v45;
      if ( *v45 != v44 )
        __fastfail(3u);
      *v45 = v46;
      v44[1] = (__int64)v46;
    }
    if ( a14 )
      _InterlockedIncrement((volatile signed __int32 *)v19 + 28);
LABEL_53:
    v18 = v19;
  }
LABEL_54:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)(v14 + 16));
  return v18;
}
