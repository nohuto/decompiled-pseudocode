/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00418A8
 * Callers:
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0041540 (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C0069650 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C00914FC (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001390 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0010124 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0010168 (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     Template_pppxxxp @ 0x1C001F638 (Template_pppxxxp.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C004042C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C004CFC8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C00553A0 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0055C30 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005655C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C005907C (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0059120 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C005C6D0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C006D680 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1C00944B4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0094AA4 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AddDmaBufferToPool(
        VIDMM_DMA_POOL *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rax
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rdi
  int v15; // eax
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
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rax
  struct _VIDSCH_SYNC_OBJECT **v29; // r12
  VIDMM_GLOBAL *v30; // rcx
  __int64 v31; // rax
  SIZE_T v32; // rax
  PVOID v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  SIZE_T v36; // rax
  PVOID v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r12
  SIZE_T v40; // rax
  PVOID v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // eax
  PVOID v44; // rax
  __int64 v45; // rcx
  PVOID v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // r12
  unsigned int v49; // r9d
  _QWORD *v50; // r8
  __int64 v51; // rbx
  char **v52; // rax
  __int64 v53; // rdx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbx
  int v55; // r8d
  __int64 v56; // r10
  __int64 v57; // r11
  struct VIDMM_ALLOC *v58; // rdx
  VIDMM_MAPPED_VA_RANGE *v59; // rax
  VIDMM_MAPPED_VA_RANGE *v60; // r12
  struct VIDMM_ALLOC *v61; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v62; // r8
  void *v63; // rcx
  struct _ERESOURCE *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  struct VIDMM_ALLOC **v69; // [rsp+38h] [rbp-69h]
  struct VIDMM_VAD_PENDING_OPERATION *v70; // [rsp+40h] [rbp-61h]
  unsigned int v71; // [rsp+70h] [rbp-31h]
  int v72; // [rsp+78h] [rbp-29h]
  unsigned __int64 v73; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v74; // [rsp+A0h] [rbp-1h] BYREF
  struct _VIDMM_MULTI_ALLOC *v75; // [rsp+A8h] [rbp+7h] BYREF
  unsigned __int64 v76; // [rsp+B0h] [rbp+Fh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v77; // [rsp+B8h] [rbp+17h] BYREF
  __int64 v78; // [rsp+C0h] [rbp+1Fh]
  unsigned __int8 v79; // [rsp+108h] [rbp+67h] BYREF
  unsigned __int64 v80; // [rsp+110h] [rbp+6Fh]
  unsigned int v81; // [rsp+120h] [rbp+7Fh]

  v81 = a4;
  v80 = a2;
  v4 = (unsigned int)a3;
  v5 = a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( *((_DWORD *)this + 23) > VIDMM_DMA_POOL::_NbDmaBufferLimitCompareWatermark )
  {
    v7 = *((_QWORD *)this + 2);
    if ( !v7
      || (v8 = *(_QWORD *)(v7 + 24), *(_DWORD *)(v8 + 304) != 2)
      && !(*(unsigned int (**)(void))(*(_QWORD *)(*(_QWORD *)(v8 + 40) + 72LL) + 216LL))() )
    {
      if ( VIDMM_DMA_POOL::_TotalDmaBufferBytes > VIDMM_DMA_POOL::_MaxDmaBufferBytes
        || VIDMM_DMA_POOL::_TotalAllocationListBytes > VIDMM_DMA_POOL::_MaxAllocationListBytes
        || VIDMM_DMA_POOL::_TotalPatchLocationListBytes > VIDMM_DMA_POOL::_MaxPatchLocationListBytes )
      {
        _InterlockedAdd(&dword_1C0035618, 1u);
        v9 = WdLogNewEntry5_WdLowResource(this);
        *(_QWORD *)(v9 + 24) = 1099LL;
LABEL_11:
        WdLogEvent5_WdLowResource(v9);
        return 3221225495LL;
      }
    }
  }
  if ( (*((_BYTE *)this + 32) & 1) == 0 && !(_DWORD)v4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v11 + 24) = 1110LL;
    WdLogEvent5_WdAssertion(v11);
    return 3221225485LL;
  }
  v12 = (char *)operator new(0xB8uLL, 0x32326956u, (POOL_TYPE)512);
  v14 = v12;
  if ( !v12 )
  {
    _InterlockedAdd(&dword_1C0035580, 1u);
    v9 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v9 + 24) = 1122LL;
    goto LABEL_11;
  }
  memset(v12, 0, 0xB8uLL);
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
    v15 = ((((unsigned __int8)~*(_BYTE *)(456LL * *((unsigned int *)this + 2)
                                        + *(_QWORD *)(*(_QWORD *)this + 40136LL)
                                        + 420) >> 2) & 1) << 15) | 0x10000040;
  else
    v15 = ((*(_BYTE *)(*((_QWORD *)this + 3) + 350LL) == 0) << 15) | 0x48;
  v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 300LL);
  if ( (v16 & 8) != 0 || (v16 & 0x10) != 0 )
    v15 |= 4u;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    *(VIDMM_GLOBAL **)this,
                    *((struct VIDMM_DEVICE **)this + 2),
                    *((_DWORD *)this + 2),
                    v5,
                    v5,
                    0,
                    *((_DWORD *)this + 9),
                    0,
                    0,
                    (struct _DXGK_ALLOCATIONINFOFLAGS)v15,
                    0LL,
                    0LL,
                    0LL,
                    0xA0000000,
                    0,
                    0LL,
                    (struct _VIDMM_GLOBAL_ALLOC **)v14 + 7);
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
                      &v79);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C003558C, 1u);
      v22 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v22 + 24) = 1203LL;
      WdLogEvent5_WdLowResource(v22);
LABEL_72:
      v5 = v80;
      goto LABEL_73;
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
        v26 = *((unsigned int *)this + 2);
        v73 = 0LL;
        v74 = 0LL;
        v27 = 168 * v26;
        v28 = *((_QWORD *)v23 + 1);
        v75 = v23;
        v29 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v28 + 72) + v27);
        OneAllocation = VIDMM_GLOBAL::MakeResident(
                          *(VIDMM_GLOBAL **)this,
                          (struct VIDMM_PAGING_QUEUE *)v29,
                          &v75,
                          1uLL,
                          3,
                          &v73,
                          &v74);
        if ( OneAllocation == 259 )
        {
          v30 = *(VIDMM_GLOBAL **)this;
          v77 = v29[11];
          v76 = v73;
          VIDMM_GLOBAL::WaitForFences(v30, &v77, &v76, 1u, 0LL);
          OneAllocation = 0;
        }
      }
      if ( OneAllocation < 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v25, v24);
        *(_QWORD *)(v31 + 24) = *v20;
        WdLogEvent5_WdAssertion(v31);
        goto LABEL_72;
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
        _InterlockedAdd(&dword_1C003559C, 1u);
        v35 = WdLogNewEntry5_WdLowResource(v34);
        *(_QWORD *)(v35 + 24) = 1262LL;
LABEL_41:
        WdLogEvent5_WdLowResource(v35);
LABEL_42:
        OneAllocation = -1073741801;
        goto LABEL_72;
      }
      v36 = 24LL * (unsigned int)v4;
      if ( !is_mul_ok((unsigned int)v4, 0x18uLL) )
        v36 = -1LL;
      v37 = operator new[](v36, 0x34326956u, (POOL_TYPE)512);
      *((_QWORD *)v14 + 14) = v37;
      if ( !v37 )
      {
        _InterlockedAdd(&dword_1C0035594, 1u);
        v35 = WdLogNewEntry5_WdLowResource(v38);
        *(_QWORD *)(v35 + 24) = 1275LL;
        goto LABEL_41;
      }
      memset(v37, 0, 24 * v4);
    }
    if ( v81 )
    {
      v39 = v81;
      v40 = 24LL * v81;
      if ( !is_mul_ok(v81, 0x18uLL) )
        v40 = -1LL;
      v41 = operator new(v40, 0x35326956u, PagedPool);
      *((_QWORD *)v14 + 15) = v41;
      if ( !v41 )
      {
        _InterlockedAdd(&dword_1C0035598, 1u);
        v35 = WdLogNewEntry5_WdLowResource(v42);
        *(_QWORD *)(v35 + 24) = 1292LL;
        goto LABEL_41;
      }
      memset(v41, 0, 24 * v39);
    }
    v43 = *((_DWORD *)this + 22);
    if ( v43 )
    {
      v44 = operator new[](v43, 0x32336956u, (POOL_TYPE)512);
      *((_QWORD *)v14 + 16) = v44;
      if ( !v44 )
      {
        _InterlockedAdd(&dword_1C00355F8, 1u);
        v35 = WdLogNewEntry5_WdLowResource(v45);
        *(_QWORD *)(v35 + 24) = 1306LL;
        goto LABEL_41;
      }
      memset(v44, 0, *((unsigned int *)this + 22));
    }
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
    {
      v46 = operator new(0x2000uLL, 0x37336956u, PagedPool);
      *((_QWORD *)v14 + 22) = v46;
      if ( !v46 )
      {
        _InterlockedAdd(&dword_1C00355A0, 1u);
        v35 = WdLogNewEntry5_WdLowResource(v47);
        *(_QWORD *)(v35 + 24) = 1324LL;
        goto LABEL_41;
      }
      memset(v46, 0, 0x2000uLL);
      *((_DWORD *)v14 + 42) = 0;
      *((_DWORD *)v14 + 43) = 0;
    }
    *((_QWORD *)v14 + 20) = 0LL;
    v48 = v80;
    v49 = v81;
    *((_QWORD *)v14 + 5) = v80;
    *((_DWORD *)v14 + 12) = v4;
    *((_DWORD *)v14 + 13) = v49;
    *((_QWORD *)v14 + 17) = this;
    if ( (*((_DWORD *)this + 8) & 0x10) != 0 )
    {
      if ( *(_BYTE *)(*((_QWORD *)this + 3) + 351LL) )
      {
        *((_QWORD *)v14 + 12) = *((_QWORD *)*v20 + 20);
      }
      else
      {
        VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                    *(VIDMM_PROCESS **)(*((_QWORD *)this + 2) + 8LL),
                                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 200LL),
                                    *((_DWORD *)this + 2));
        if ( !VirtualAddressAllocator )
          goto LABEL_42;
        LOBYTE(v72) = 0;
        LOBYTE(v71) = 1;
        v70 = *(struct VIDMM_VAD_PENDING_OPERATION **)(v57 + 2016);
        v69 = *(struct VIDMM_ALLOC ***)(v57 + 2008);
        v58 = *v20;
        v78 = (*(_DWORD *)(v56 + 32) < 0x6000u) | 0x12LL;
        v59 = (VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                         VirtualAddressAllocator,
                                         v58,
                                         0LL,
                                         1LL,
                                         v48,
                                         0LL,
                                         v69,
                                         v70,
                                         4096,
                                         v78,
                                         0LL,
                                         v55,
                                         0LL,
                                         v71,
                                         v72);
        v60 = v59;
        if ( !v59 )
          goto LABEL_72;
        *((_QWORD *)v14 + 12) = *((_QWORD *)v59 + 12);
        OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                          *(VIDMM_GLOBAL **)this,
                          VirtualAddressAllocator,
                          (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)*v20 + 1) + 72LL)
                                                      + 168LL * *((unsigned int *)this + 2)),
                          v59,
                          KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                          0LL,
                          0LL,
                          0LL);
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v60, VirtualAddressAllocator);
        if ( OneAllocation < 0 )
          goto LABEL_72;
      }
    }
    *((_DWORD *)this + 8) &= ~8u;
    *((_DWORD *)this + 32) += *((_DWORD *)v14 + 10);
    v50 = (_QWORD *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 33) += 24 * *((_DWORD *)v14 + 12);
    *((_DWORD *)this + 34) += 24 * *((_DWORD *)v14 + 13);
    if ( v50 )
    {
      v51 = *(_QWORD *)(*(_QWORD *)(v50[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v50 + 24LL) + 200LL));
      VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v51);
      *(_QWORD *)(v51 + 416) += *((_QWORD *)v14 + 5);
      ++*(_DWORD *)(v51 + 408);
      *(_DWORD *)(v51 + 424) += 24 * *((_DWORD *)v14 + 12);
      *(_DWORD *)(v51 + 428) += 24 * *((_DWORD *)v14 + 13);
      VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v51);
    }
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, *((_QWORD *)v14 + 5));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * *((unsigned int *)v14 + 12));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * *((unsigned int *)v14 + 13));
    ++*((_DWORD *)this + 23);
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
    v52 = (char **)((char *)this + 96);
    v53 = *((_QWORD *)this + 12);
    if ( *(VIDMM_DMA_POOL **)(v53 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
      __fastfail(3u);
    v64 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
    *(_QWORD *)v14 = v53;
    *((_QWORD *)v14 + 1) = v52;
    *(_QWORD *)(v53 + 8) = v14;
    *v52 = v14;
    ExReleaseResourceLite(v64);
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v66, v65, v67, v68) + 24) = v14;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
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
  _InterlockedAdd(&dword_1C0035588, 1u);
  v19 = WdLogNewEntry5_WdLowResource(v17);
  *(_QWORD *)(v19 + 24) = 1183LL;
  WdLogEvent5_WdLowResource(v19);
LABEL_73:
  operator delete[](*((void **)v14 + 22));
  operator delete[](*((void **)v14 + 16));
  operator delete[](*((void **)v14 + 15));
  operator delete[](*((void **)v14 + 14));
  operator delete[](*((void **)v14 + 13));
  v61 = (struct VIDMM_ALLOC *)*((_QWORD *)v14 + 8);
  if ( v61 )
    VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v61, 0LL, 0, 0, 0LL);
  v62 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v14 + 7);
  if ( v62 )
    VIDMM_GLOBAL::DestroyOneAllocation(*(VIDMM_GLOBAL **)this, *((struct VIDMM_DEVICE **)this + 2), v62, 1);
  v63 = (void *)*((_QWORD *)v14 + 9);
  if ( v63 )
    MmFreeContiguousMemorySpecifyCache(v63, v5, *((MEMORY_CACHING_TYPE *)v14 + 20));
  operator delete(v14);
  return (unsigned int)OneAllocation;
}
