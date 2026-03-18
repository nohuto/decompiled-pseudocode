/*
 * XREFs of ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C00944B4
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAXPEA_KI@Z @ 0x1C0044B54 (-MapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C00452DC (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAUD3DDDI_MAPGPUVIRTUALADDRESS@@E@Z @ 0x1C004DF70 (-VidMmMapGpuVirtualAddressInternal@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_A.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0058CD8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C006D2A8 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C006F124 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x1C008CAE8 (-VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0046EB0 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1C00472A0 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1C00477A8 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00676B8 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_VAD_OWNER_TYPE@@PEAX_KU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@333_N@Z @ 0x1C00942A4 (-MapVadVaRange@CVirtualAddressAllocator@@AEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_VAD@@IW4VIDMM_.c)
 */

PSLIST_ENTRY __fastcall CVirtualAddressAllocator::MapVirtualAddressRange(
        unsigned __int64 a1,
        __int64 a2,
        struct _SLIST_ENTRY *a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned int a9,
        _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a10,
        struct _SLIST_ENTRY *a11,
        unsigned int a12,
        void **a13,
        char a14,
        char a15)
{
  struct _RTL_AVL_TREE *v16; // rdx
  struct _SLIST_ENTRY *v17; // r15
  PSLIST_ENTRY v18; // rbx
  PSLIST_ENTRY v19; // r14
  char v20; // r12
  struct VIDMM_VAD *v21; // rdi
  unsigned __int64 v22; // rsi
  int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 Value; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  int v30; // eax
  void **v31; // rsi
  PVOID v32; // rax
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  bool v36; // zf
  char v37; // cl
  PSLIST_ENTRY v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  char *v42; // rdi
  char **v43; // rdx
  char *v44; // rax
  _BYTE v46[96]; // [rsp+68h] [rbp-21h] BYREF
  struct VIDMM_VAD *v47; // [rsp+D8h] [rbp+4Fh] BYREF
  __int64 v48; // [rsp+E0h] [rbp+57h]
  struct _SLIST_ENTRY *v49; // [rsp+E8h] [rbp+5Fh]
  int v50; // [rsp+F0h] [rbp+67h]

  v50 = a4;
  v49 = a3;
  v48 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v46, (struct _KTHREAD **)(a1 + 40));
  v17 = (struct _SLIST_ENTRY *)a6;
  v18 = 0LL;
  v47 = 0LL;
  v19 = 0LL;
  v20 = 0;
  if ( !a6 )
    goto LABEL_15;
  v21 = *(struct VIDMM_VAD **)(a1 + 32);
  v22 = a6 + a5;
  if ( !v21 )
    goto LABEL_15;
  do
  {
    v23 = CompareVadAddressInsideAvl((struct _RTL_BALANCED_NODE **)&a6, (struct _RTL_BALANCED_NODE *)v21);
    if ( v23 >= 0 )
    {
      if ( v23 <= 0 )
        break;
      v21 = (struct VIDMM_VAD *)*((_QWORD *)v21 + 1);
    }
    else
    {
      v21 = *(struct VIDMM_VAD **)v21;
    }
  }
  while ( v21 );
  if ( v21 )
  {
    v24 = *((unsigned int *)v21 + 18);
    v25 = *((_QWORD *)v21 + 4);
    if ( (v24 & 0x1000) != 0 )
      v25 -= 4096LL;
    if ( v25 < v22 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v24);
      v29[3] = v17;
      v29[4] = v22;
      v29[5] = v21;
      WdLogEvent5_WdWarning(v29);
      goto LABEL_44;
    }
    Value = a10.Value;
    v27 = v24 >> 7;
    LOBYTE(v27) = *(_BYTE *)&a10.0 ^ v27;
    v47 = v21;
    if ( (v27 & 0x10) != 0 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v27, 4096LL);
      *(_QWORD *)(v28 + 24) = 1768LL;
      WdLogEvent5_WdAssertion(v28);
      goto LABEL_44;
    }
  }
  else
  {
LABEL_15:
    v30 = CVirtualAddressAllocator::AllocateVirtualAddressRange(
            a1,
            v16,
            a5,
            (unsigned __int64)v17,
            a7,
            a8,
            a9,
            &v47,
            1u);
    v21 = v47;
    if ( v30 >= 0 )
    {
      v20 = 1;
      CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange((CVirtualAddressAllocator *)a1, v47, a10);
    }
    Value = a10.Value;
  }
  if ( !v21 )
    goto LABEL_43;
  v31 = a13;
  if ( !a13 )
  {
LABEL_22:
    v34 = *((_DWORD *)v21 + 18) & 0xF;
    if ( (_DWORD)v34 == 3 && ((Value & 8) != 0 || (Value & 4) != 0) )
    {
      v35 = WdLogNewEntry5_WdWarning(v34);
      WdLogEvent5_WdWarning(v35);
      goto LABEL_33;
    }
    if ( !a15 || (v36 = (_DWORD)v34 == 2, v37 = 1, !v36) )
      v37 = 0;
    if ( v20 )
      v17 = (struct _SLIST_ENTRY *)*((_QWORD *)v21 + 3);
    v38 = CVirtualAddressAllocator::MapVadVaRange(
            (CVirtualAddressAllocator *)a1,
            v21,
            a12,
            v50,
            v48,
            v49,
            Value,
            a11,
            v17,
            a5,
            v37);
    v19 = v38;
    if ( !v38 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v40, v39);
      *(_QWORD *)(v41 + 24) = 1812LL;
      WdLogEvent5_WdAssertion(v41);
      goto LABEL_33;
    }
    if ( v31 )
    {
      v42 = (char *)v21 + 80;
      *((_QWORD *)*v31 + 2) = v38;
      v43 = (char **)*((_QWORD *)v42 + 1);
      v44 = (char *)*v31;
      if ( *v43 != v42 )
        __fastfail(3u);
      *(_QWORD *)v44 = v42;
      *((_QWORD *)v44 + 1) = v43;
      *v43 = v44;
      *((_QWORD *)v42 + 1) = v44;
    }
    if ( a14 )
      _InterlockedIncrement((volatile signed __int32 *)&v19[8]);
LABEL_43:
    v18 = v19;
    goto LABEL_44;
  }
  v32 = operator new(0x18uLL, 0x39346956u, PagedPool);
  *v31 = v32;
  if ( v32 )
  {
    Value = a10.Value;
    goto LABEL_22;
  }
LABEL_33:
  if ( v20 )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)a1, v21, v33);
  if ( v31 )
  {
    operator delete(*v31);
    *v31 = 0LL;
  }
LABEL_44:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
  return v18;
}
