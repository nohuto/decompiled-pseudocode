/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C0060494
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0052B30 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C00600F4 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00802DC (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011580 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0013374 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0014D18 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0014D3C (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_pppxxxp @ 0x1C001DC6C (Template_pppxxxp.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C003FBE0 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0044208 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C004D1F0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C004DF58 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E540 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0051AE0 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0051B80 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0053EA8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0060D6C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00679D0 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AddDmaBufferToPool(
        VIDMM_DMA_POOL *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rdi
  unsigned int v15; // eax
  int v16; // edx
  __int64 v17; // rcx
  int OneAllocation; // r14d
  __int64 v19; // rax
  struct VIDMM_ALLOC **v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rax
  struct VIDMM_ALLOC *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  struct _VIDSCH_SYNC_OBJECT **v29; // rbx
  VIDMM_GLOBAL *v30; // rcx
  __int64 v31; // rax
  SIZE_T v32; // rax
  PVOID v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  SIZE_T v36; // rax
  PVOID v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rbx
  SIZE_T v40; // rax
  PVOID v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // eax
  PVOID v44; // rax
  __int64 v45; // rcx
  PVOID v46; // rax
  __int64 v47; // rcx
  _QWORD *v48; // r8
  __int64 v49; // rbx
  __int64 v50; // rdx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbx
  unsigned int v52; // r8d
  __int64 v53; // r10
  unsigned __int64 v54; // r11
  struct VIDMM_ALLOC *v55; // rdx
  VIDMM_MAPPED_VA_RANGE *v56; // rax
  struct _KEVENT *v57; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v58; // r8
  void *v59; // rcx
  struct _ERESOURCE *v60; // rcx
  struct VIDMM_ALLOC **v61; // [rsp+38h] [rbp-69h]
  struct VIDMM_VAD_PENDING_OPERATION *v62; // [rsp+40h] [rbp-61h]
  unsigned __int64 v63; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v64; // [rsp+A0h] [rbp-1h] BYREF
  struct _VIDMM_MULTI_ALLOC *v65; // [rsp+A8h] [rbp+7h] BYREF
  unsigned __int64 v66; // [rsp+B0h] [rbp+Fh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v67[8]; // [rsp+B8h] [rbp+17h] BYREF
  unsigned __int8 v68; // [rsp+108h] [rbp+67h] BYREF
  unsigned __int64 v69; // [rsp+110h] [rbp+6Fh]
  unsigned int v70; // [rsp+120h] [rbp+7Fh]

  v70 = a4;
  v69 = a2;
  v4 = (unsigned int)a3;
  v5 = a2;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v7 = *((_QWORD *)this + 2);
    if ( !v7
      || (v8 = *(_QWORD *)(v7 + 24), *(_DWORD *)(v8 + 280) != 2)
      && !(*(unsigned int (**)(void))(*(_QWORD *)(*(_QWORD *)(v8 + 40) + 80LL) + 216LL))() )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C002F598, 1u);
        v9 = WdLogNewEntry5_WdLowResource(this);
        *(_QWORD *)(v9 + 24) = 1096LL;
LABEL_9:
        WdLogEvent5_WdLowResource(v9);
        return 3221225495LL;
      }
    }
  }
  if ( (*((_BYTE *)this + 32) & 1) == 0 && !(_DWORD)v4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 1107LL;
    WdLogEvent5_WdAssertion(v11);
    return 3221225485LL;
  }
  v12 = (char *)operator new(0xB8uLL, 0x32326956u, (POOL_TYPE)512);
  v14 = v12;
  if ( !v12 )
  {
    _InterlockedAdd(&dword_1C002F500, 1u);
    v9 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v9 + 24) = 1119LL;
    goto LABEL_9;
  }
  memset(v12, 0, 0xB8uLL);
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
    v15 = ((((unsigned __int8)~*(_BYTE *)(456LL * *((unsigned int *)this + 2)
                                        + *(_QWORD *)(*(_QWORD *)this + 40048LL)
                                        + 420) >> 2) & 1) << 15) | 0x10000040;
  else
    v15 = ((*(_BYTE *)(*((_QWORD *)this + 3) + 350LL) == 0) << 15) | 0x48;
  v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 284LL);
  if ( (v16 & 8) != 0 || (v16 & 0x10) != 0 )
    v15 |= 4u;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    *(_QWORD *)this,
                    *((_QWORD *)this + 2),
                    *((unsigned int *)this + 2),
                    v5,
                    v5,
                    0,
                    *((_DWORD *)this + 9),
                    0,
                    0,
                    v15,
                    0LL,
                    0LL,
                    0LL,
                    -1610612736,
                    0,
                    0LL,
                    (unsigned __int64 **)v14 + 7);
  if ( OneAllocation >= 0 )
  {
    v20 = (struct VIDMM_ALLOC **)(v14 + 64);
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(
                      *(VIDMM_GLOBAL **)this,
                      *((struct VIDMM_DEVICE **)this + 2),
                      *((struct _VIDMM_GLOBAL_ALLOC **)v14 + 7),
                      0LL,
                      0,
                      0LL,
                      (struct VIDMM_ALLOC **)v14 + 8,
                      &v68);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C002F50C, 1u);
      v22 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v22 + 24) = 1200LL;
      WdLogEvent5_WdLowResource(v22);
LABEL_70:
      v5 = v69;
      goto LABEL_71;
    }
    v23 = *v20;
    if ( (*((_DWORD *)*v20 + 7) & 3) == 0 )
    {
      if ( (*((_BYTE *)this + 32) & 1) != 0 )
      {
        VIDMM_GLOBAL::AllocatePagingBufferResources(*(VIDMM_GLOBAL **)this, *v20);
      }
      else
      {
        v28 = *((unsigned int *)this + 2);
        v63 = 0LL;
        v64 = 0LL;
        v65 = v23;
        v29 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)v23 + 1) + 64LL) + 160 * v28);
        OneAllocation = VIDMM_GLOBAL::MakeResident(
                          *(VIDMM_GLOBAL **)this,
                          (struct VIDMM_PAGING_QUEUE *)v29,
                          &v65,
                          1uLL,
                          3,
                          &v63,
                          &v64);
        if ( OneAllocation == 259 )
        {
          v30 = *(VIDMM_GLOBAL **)this;
          v67[0] = v29[11];
          v66 = v63;
          VIDMM_GLOBAL::WaitForFences(v30, v67, &v66, 1u, 0LL);
          OneAllocation = 0;
        }
      }
      if ( OneAllocation < 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        *(_QWORD *)(v31 + 24) = *v20;
        WdLogEvent5_WdAssertion(v31);
        goto LABEL_70;
      }
    }
    if ( (_DWORD)v4 )
    {
      if ( (unsigned int)v4 <= 3 )
        v4 = 3LL;
      v32 = 8LL * (unsigned int)v4;
      if ( !is_mul_ok((unsigned int)v4, 8uLL) )
        v32 = -1LL;
      v33 = operator new[](v32, 0x33326956u, (POOL_TYPE)512);
      *((_QWORD *)v14 + 13) = v33;
      if ( !v33 )
      {
        _InterlockedAdd(&dword_1C002F51C, 1u);
        v35 = WdLogNewEntry5_WdLowResource(v34);
        *(_QWORD *)(v35 + 24) = 1259LL;
LABEL_39:
        WdLogEvent5_WdLowResource(v35);
LABEL_40:
        OneAllocation = -1073741801;
        goto LABEL_70;
      }
      v36 = 24LL * (unsigned int)v4;
      if ( !is_mul_ok((unsigned int)v4, 0x18uLL) )
        v36 = -1LL;
      v37 = operator new[](v36, 0x34326956u, (POOL_TYPE)512);
      *((_QWORD *)v14 + 14) = v37;
      if ( !v37 )
      {
        _InterlockedAdd(&dword_1C002F514, 1u);
        v35 = WdLogNewEntry5_WdLowResource(v38);
        *(_QWORD *)(v35 + 24) = 1272LL;
        goto LABEL_39;
      }
      memset(v37, 0, 24 * v4);
    }
    v39 = v70;
    if ( v70 )
    {
      v40 = 24LL * v70;
      if ( !is_mul_ok(v70, 0x18uLL) )
        v40 = -1LL;
      v41 = operator new(v40, 0x35326956u, PagedPool);
      *((_QWORD *)v14 + 15) = v41;
      if ( !v41 )
      {
        _InterlockedAdd(&dword_1C002F518, 1u);
        v35 = WdLogNewEntry5_WdLowResource(v42);
        *(_QWORD *)(v35 + 24) = 1289LL;
        goto LABEL_39;
      }
      memset(v41, 0, 24 * v39);
      LODWORD(v39) = v70;
    }
    v43 = *((_DWORD *)this + 22);
    if ( v43 )
    {
      v44 = operator new[](v43, 0x32336956u, (POOL_TYPE)512);
      *((_QWORD *)v14 + 16) = v44;
      if ( !v44 )
      {
        _InterlockedAdd(&dword_1C002F578, 1u);
        v35 = WdLogNewEntry5_WdLowResource(v45);
        *(_QWORD *)(v35 + 24) = 1303LL;
        goto LABEL_39;
      }
      memset(v44, 0, *((unsigned int *)this + 22));
    }
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
    {
      v46 = operator new(0x2000uLL, 0x37336956u, PagedPool);
      *((_QWORD *)v14 + 22) = v46;
      if ( !v46 )
      {
        _InterlockedAdd(&dword_1C002F520, 1u);
        v35 = WdLogNewEntry5_WdLowResource(v47);
        *(_QWORD *)(v35 + 24) = 1321LL;
        goto LABEL_39;
      }
      memset(v46, 0, 0x2000uLL);
      *((_DWORD *)v14 + 42) = 0;
      *((_DWORD *)v14 + 43) = 0;
    }
    *((_QWORD *)v14 + 20) = 0LL;
    *((_QWORD *)v14 + 5) = v69;
    *((_DWORD *)v14 + 12) = v4;
    *((_DWORD *)v14 + 13) = v39;
    *((_QWORD *)v14 + 17) = this;
    if ( (*((_DWORD *)this + 8) & 0x10) != 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 3) + 351LL) )
      {
        *((_QWORD *)v14 + 12) = *((_QWORD *)*v20 + 18);
      }
      else
      {
        VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                    *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 184LL),
                                    *((_DWORD *)this + 2));
        if ( !VirtualAddressAllocator )
          goto LABEL_40;
        v62 = *(struct VIDMM_VAD_PENDING_OPERATION **)(v53 + 1880);
        v61 = *(struct VIDMM_ALLOC ***)(v53 + 1872);
        v55 = *v20;
        v67[1] = (struct _VIDSCH_SYNC_OBJECT *)19;
        v56 = CVirtualAddressAllocator::MapVirtualAddressRange(
                (__int64)VirtualAddressAllocator,
                (__int64)v55,
                0LL,
                1LL,
                v54,
                0LL,
                (unsigned __int64)v61,
                (unsigned __int64)v62,
                0x1000u,
                19LL,
                0LL,
                v52,
                0LL);
        if ( !v56 )
          goto LABEL_70;
        *((_QWORD *)v14 + 12) = *((_QWORD *)v56 + 12);
        OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                          *(VIDMM_GLOBAL **)this,
                          VirtualAddressAllocator,
                          (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)*v20 + 1) + 64LL)
                                                      + 160LL * *((unsigned int *)this + 2)),
                          v56,
                          KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                          0LL,
                          0LL,
                          0LL);
        if ( OneAllocation < 0 )
          goto LABEL_70;
      }
    }
    *((_DWORD *)this + 8) &= ~8u;
    *((_DWORD *)this + 32) += *((_DWORD *)v14 + 10);
    v48 = (_QWORD *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 33) += 24 * *((_DWORD *)v14 + 12);
    *((_DWORD *)this + 34) += 24 * *((_DWORD *)v14 + 13);
    if ( v48 )
    {
      v49 = *(_QWORD *)(*(_QWORD *)(v48[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v48 + 24LL) + 184LL));
      VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v49);
      *(_QWORD *)(v49 + 368) += *((_QWORD *)v14 + 5);
      ++*(_DWORD *)(v49 + 360);
      *(_DWORD *)(v49 + 376) += 24 * *((_DWORD *)v14 + 12);
      *(_DWORD *)(v49 + 380) += 24 * *((_DWORD *)v14 + 13);
      VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v49);
    }
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, *((_QWORD *)v14 + 5));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * *((unsigned int *)v14 + 12));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * *((unsigned int *)v14 + 13));
    ++*((_DWORD *)this + 23);
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
    v50 = *((_QWORD *)this + 12);
    *(_QWORD *)v14 = v50;
    *((_QWORD *)v14 + 1) = (char *)this + 96;
    if ( *(VIDMM_DMA_POOL **)(v50 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
      __fastfail(3u);
    v60 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
    *(_QWORD *)(v50 + 8) = v14;
    *((_QWORD *)this + 12) = v14;
    ExReleaseResourceLite(v60);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pppxxxp(
        *((unsigned int *)v14 + 13),
        *((unsigned int *)v14 + 12),
        *(_QWORD *)this,
        *((_QWORD *)this + 3),
        *(_QWORD *)(*(_QWORD *)this + 24LL),
        v14,
        *((_QWORD *)v14 + 5),
        *((unsigned int *)v14 + 12),
        *((unsigned int *)v14 + 13),
        *((_QWORD *)v14 + 7));
    return (unsigned int)OneAllocation;
  }
  _InterlockedAdd(&dword_1C002F508, 1u);
  v19 = WdLogNewEntry5_WdLowResource(v17);
  *(_QWORD *)(v19 + 24) = 1180LL;
  WdLogEvent5_WdLowResource(v19);
LABEL_71:
  operator delete[](*((void **)v14 + 22));
  operator delete[](*((void **)v14 + 16));
  operator delete[](*((void **)v14 + 15));
  operator delete[](*((void **)v14 + 14));
  operator delete[](*((void **)v14 + 13));
  v57 = (struct _KEVENT *)*((_QWORD *)v14 + 8);
  if ( v57 )
    VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v57, 0LL, 0, 0, 0LL);
  v58 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v14 + 7);
  if ( v58 )
    VIDMM_GLOBAL::DestroyOneAllocation(*(VIDMM_GLOBAL **)this, *((struct VIDMM_DEVICE **)this + 2), v58, 1);
  v59 = (void *)*((_QWORD *)v14 + 9);
  if ( v59 )
    MmFreeContiguousMemorySpecifyCache(v59, v5, *((MEMORY_CACHING_TYPE *)v14 + 20));
  operator delete(v14);
  return (unsigned int)OneAllocation;
}
