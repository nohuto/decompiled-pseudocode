/*
 * XREFs of ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00400F4
 * Callers:
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C0040A50 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z @ 0x1C0040B2C (-AcquireBuffer@VIDMM_DMA_POOL@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@EE@Z.c)
 *     ?ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z @ 0x1C005A4C4 (-ResizeBuffersInPool@VIDMM_DMA_POOL@@QEAAJ_KII@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00061B0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0006A74 (-AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     ?ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ @ 0x1C0006A98 (-ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     Template_pppxxxp @ 0x1C0010344 (Template_pppxxxp.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0030478 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C003096C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00341E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0034880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0035A78 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0039AA4 (-AllocatePagingBufferResources@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0040D6C (-LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAU_MDL@@PEA_KPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C004BFD8 (-CommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGING_QUE.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C004F3F0 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1C0061288 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0062E54 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_DMA_POOL::AddDmaBufferToPool(
        VIDMM_DMA_POOL *this,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
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
  struct VIDMM_ALLOC **v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rax
  struct VIDMM_ALLOC *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rax
  struct _VIDSCH_SYNC_OBJECT **v31; // r13
  VIDMM_GLOBAL *v32; // rcx
  __int64 v33; // rax
  SIZE_T v34; // rax
  PVOID v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  SIZE_T v38; // rax
  PVOID v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r13
  SIZE_T v42; // rax
  PVOID v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // eax
  PVOID v46; // rax
  __int64 v47; // rcx
  PVOID v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // r8
  __int64 v51; // rbx
  __int64 v52; // rdx
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rbx
  int v54; // r8d
  __int64 v55; // r10
  __int64 v56; // r11
  struct VIDMM_ALLOC *v57; // rdx
  VIDMM_MAPPED_VA_RANGE *v58; // rax
  VIDMM_MAPPED_VA_RANGE *v59; // r13
  struct VIDMM_ALLOC *v60; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v61; // r8
  void *v62; // rcx
  struct _ERESOURCE *v63; // rcx
  struct VIDMM_ALLOC **v64; // [rsp+38h] [rbp-69h]
  struct VIDMM_VAD_PENDING_OPERATION *v65; // [rsp+40h] [rbp-61h]
  int v66; // [rsp+70h] [rbp-31h]
  unsigned __int64 v67; // [rsp+98h] [rbp-9h] BYREF
  unsigned __int64 v68; // [rsp+A0h] [rbp-1h] BYREF
  struct _VIDMM_MULTI_ALLOC *v69; // [rsp+A8h] [rbp+7h] BYREF
  unsigned __int64 v70; // [rsp+B0h] [rbp+Fh] BYREF
  struct _VIDSCH_SYNC_OBJECT *v71[8]; // [rsp+B8h] [rbp+17h] BYREF
  unsigned __int8 v72; // [rsp+108h] [rbp+67h] BYREF
  unsigned __int64 v73; // [rsp+110h] [rbp+6Fh]
  unsigned int v74; // [rsp+120h] [rbp+7Fh]

  v74 = a4;
  v73 = a2;
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
        _InterlockedAdd(&dword_1C0027588, 1u);
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
    _InterlockedAdd(&dword_1C00274F0, 1u);
    v9 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v9 + 24) = 1119LL;
    goto LABEL_9;
  }
  memset(v12, 0, 0xB8uLL);
  if ( (*((_BYTE *)this + 32) & 1) != 0 )
    v15 = ((((unsigned __int8)~*(_BYTE *)(456LL * *((unsigned int *)this + 2)
                                        + *(_QWORD *)(*(_QWORD *)this + 39992LL)
                                        + 420) >> 2) & 1) << 15) | 0x10000040;
  else
    v15 = ((*(_BYTE *)(*((_QWORD *)this + 3) + 350LL) == 0) << 15) | 0x48;
  v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 284LL);
  if ( (v16 & 4) != 0 || (v16 & 8) != 0 )
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
                      *(DXGADAPTER ***)this,
                      *((struct VIDMM_PROCESS ***)this + 2),
                      *((struct _VIDMM_GLOBAL_ALLOC **)v14 + 7),
                      0LL,
                      0,
                      0LL,
                      (struct VIDMM_ALLOC **)v14 + 8,
                      &v72);
    if ( OneAllocation < 0 )
    {
      _InterlockedAdd(&dword_1C00274FC, 1u);
      v22 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v22 + 24) = 1200LL;
      WdLogEvent5_WdLowResource(v22);
LABEL_70:
      v5 = v73;
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
        v67 = 0LL;
        v68 = 0LL;
        v29 = 152 * v28;
        v30 = *((_QWORD *)v23 + 1);
        v69 = v23;
        v31 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(v30 + 64) + v29);
        OneAllocation = VIDMM_GLOBAL::MakeResident(
                          *(VIDMM_GLOBAL **)this,
                          (struct VIDMM_PAGING_QUEUE *)v31,
                          &v69,
                          1uLL,
                          3,
                          &v67,
                          &v68);
        if ( OneAllocation == 259 )
        {
          v32 = *(VIDMM_GLOBAL **)this;
          v71[0] = v31[11];
          v70 = v67;
          VIDMM_GLOBAL::WaitForFences(v32, v71, (char *)&v70, 1u, 0LL);
          OneAllocation = 0;
        }
      }
      if ( OneAllocation < 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v25, v24, v26, v27);
        *(_QWORD *)(v33 + 24) = *v20;
        WdLogEvent5_WdAssertion(v33);
        goto LABEL_70;
      }
    }
    if ( (_DWORD)v4 )
    {
      if ( (unsigned int)v4 <= 3 )
        v4 = 3LL;
      v34 = 8LL * (unsigned int)v4;
      if ( !is_mul_ok((unsigned int)v4, 8uLL) )
        v34 = -1LL;
      v35 = operator new[](v34, 0x33326956u, (POOL_TYPE)512);
      *((_QWORD *)v14 + 13) = v35;
      if ( !v35 )
      {
        _InterlockedAdd(&dword_1C002750C, 1u);
        v37 = WdLogNewEntry5_WdLowResource(v36);
        *(_QWORD *)(v37 + 24) = 1259LL;
LABEL_39:
        WdLogEvent5_WdLowResource(v37);
LABEL_40:
        OneAllocation = -1073741801;
        goto LABEL_70;
      }
      v38 = 24LL * (unsigned int)v4;
      if ( !is_mul_ok((unsigned int)v4, 0x18uLL) )
        v38 = -1LL;
      v39 = operator new[](v38, 0x34326956u, (POOL_TYPE)512);
      *((_QWORD *)v14 + 14) = v39;
      if ( !v39 )
      {
        _InterlockedAdd(&dword_1C0027504, 1u);
        v37 = WdLogNewEntry5_WdLowResource(v40);
        *(_QWORD *)(v37 + 24) = 1272LL;
        goto LABEL_39;
      }
      memset(v39, 0, 8 * ((unsigned int)v4 + 2 * v4));
    }
    v41 = v74;
    if ( v74 )
    {
      v42 = 24LL * v74;
      if ( !is_mul_ok(v74, 0x18uLL) )
        v42 = -1LL;
      v43 = operator new(v42, 0x35326956u, PagedPool);
      *((_QWORD *)v14 + 15) = v43;
      if ( !v43 )
      {
        _InterlockedAdd(&dword_1C0027508, 1u);
        v37 = WdLogNewEntry5_WdLowResource(v44);
        *(_QWORD *)(v37 + 24) = 1289LL;
        goto LABEL_39;
      }
      memset(v43, 0, 24 * v41);
      LODWORD(v41) = v74;
    }
    v45 = *((_DWORD *)this + 22);
    if ( v45 )
    {
      v46 = operator new[](v45, 0x32336956u, (POOL_TYPE)512);
      *((_QWORD *)v14 + 16) = v46;
      if ( !v46 )
      {
        _InterlockedAdd(&dword_1C0027568, 1u);
        v37 = WdLogNewEntry5_WdLowResource(v47);
        *(_QWORD *)(v37 + 24) = 1303LL;
        goto LABEL_39;
      }
      memset(v46, 0, *((unsigned int *)this + 22));
    }
    if ( (*((_BYTE *)this + 32) & 1) != 0 )
    {
      v48 = operator new(0x2000uLL, 0x37336956u, PagedPool);
      *((_QWORD *)v14 + 22) = v48;
      if ( !v48 )
      {
        _InterlockedAdd(&dword_1C0027510, 1u);
        v37 = WdLogNewEntry5_WdLowResource(v49);
        *(_QWORD *)(v37 + 24) = 1321LL;
        goto LABEL_39;
      }
      memset(v48, 0, 0x2000uLL);
      *((_DWORD *)v14 + 42) = 0;
      *((_DWORD *)v14 + 43) = 0;
    }
    *((_QWORD *)v14 + 20) = 0LL;
    *((_QWORD *)v14 + 5) = v73;
    *((_DWORD *)v14 + 12) = v4;
    *((_DWORD *)v14 + 13) = v41;
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
        LOBYTE(v66) = 1;
        v65 = *(struct VIDMM_VAD_PENDING_OPERATION **)(v55 + 1872);
        v64 = *(struct VIDMM_ALLOC ***)(v55 + 1864);
        v57 = *v20;
        v71[1] = (struct _VIDSCH_SYNC_OBJECT *)19;
        v58 = (VIDMM_MAPPED_VA_RANGE *)CVirtualAddressAllocator::MapVirtualAddressRange(
                                         VirtualAddressAllocator,
                                         v57,
                                         0LL,
                                         1LL,
                                         v56,
                                         0LL,
                                         v64,
                                         v65,
                                         4096,
                                         19LL,
                                         0LL,
                                         v54,
                                         0LL,
                                         v66);
        v59 = v58;
        if ( !v58 )
          goto LABEL_70;
        *((_QWORD *)v14 + 12) = *((_QWORD *)v58 + 12);
        OneAllocation = VIDMM_GLOBAL::CommitVirtualAddressRange(
                          *(VIDMM_GLOBAL **)this,
                          VirtualAddressAllocator,
                          (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)*v20 + 1) + 64LL)
                                                      + 152LL * *((unsigned int *)this + 2)),
                          v58,
                          KeGetCurrentThread() == *(struct _KTHREAD **)(**(_QWORD **)this + 8LL),
                          0LL,
                          0LL,
                          0LL);
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReferenceSafe(v59, VirtualAddressAllocator);
        if ( OneAllocation < 0 )
          goto LABEL_70;
      }
    }
    *((_DWORD *)this + 8) &= ~8u;
    *((_DWORD *)this + 32) += *((_DWORD *)v14 + 10);
    v50 = (_QWORD *)*((_QWORD *)this + 2);
    *((_DWORD *)this + 33) += 24 * *((_DWORD *)v14 + 12);
    *((_DWORD *)this + 34) += 24 * *((_DWORD *)v14 + 13);
    if ( v50 )
    {
      v51 = *(_QWORD *)(*(_QWORD *)(v50[1] + 16LL) + 8LL * *(unsigned int *)(*(_QWORD *)(*v50 + 24LL) + 184LL));
      VIDMM_PROCESS_ADAPTER_INFO::AcquireProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v51);
      *(_QWORD *)(v51 + 368) += *((_QWORD *)v14 + 5);
      ++*(_DWORD *)(v51 + 360);
      *(_DWORD *)(v51 + 376) += 24 * *((_DWORD *)v14 + 12);
      *(_DWORD *)(v51 + 380) += 24 * *((_DWORD *)v14 + 13);
      VIDMM_PROCESS_ADAPTER_INFO::ReleaseProcessAdapterInfoLock((VIDMM_PROCESS_ADAPTER_INFO *)v51);
    }
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalDmaBufferBytes, *((_QWORD *)v14 + 5));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalAllocationListBytes, 24LL * *((unsigned int *)v14 + 12));
    _InterlockedExchangeAdd64(&VIDMM_DMA_POOL::_TotalPatchLocationListBytes, 24LL * *((unsigned int *)v14 + 13));
    ++*((_DWORD *)this + 23);
    VIDMM_DMA_POOL::LockAllPoolForAddRemove(0);
    v52 = *((_QWORD *)this + 12);
    *(_QWORD *)v14 = v52;
    *((_QWORD *)v14 + 1) = (char *)this + 96;
    if ( *(VIDMM_DMA_POOL **)(v52 + 8) != (VIDMM_DMA_POOL *)((char *)this + 96) )
      __fastfail(3u);
    v63 = VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock;
    *(_QWORD *)(v52 + 8) = v14;
    *((_QWORD *)this + 12) = v14;
    ExReleaseResourceLite(v63);
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
  _InterlockedAdd(&dword_1C00274F8, 1u);
  v19 = WdLogNewEntry5_WdLowResource(v17);
  *(_QWORD *)(v19 + 24) = 1180LL;
  WdLogEvent5_WdLowResource(v19);
LABEL_71:
  operator delete(*((void **)v14 + 22));
  operator delete(*((void **)v14 + 16));
  operator delete(*((void **)v14 + 15));
  operator delete(*((void **)v14 + 14));
  operator delete(*((void **)v14 + 13));
  v60 = (struct VIDMM_ALLOC *)*((_QWORD *)v14 + 8);
  if ( v60 )
    VIDMM_GLOBAL::CloseOneAllocation(*(VIDMM_GLOBAL **)this, v60, 0LL, 0, 0, 0LL);
  v61 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)v14 + 7);
  if ( v61 )
    VIDMM_GLOBAL::DestroyOneAllocation(*(VIDMM_GLOBAL **)this, *((struct VIDMM_DEVICE **)this + 2), v61, 1);
  v62 = (void *)*((_QWORD *)v14 + 9);
  if ( v62 )
    MmFreeContiguousMemorySpecifyCache(v62, v5, *((MEMORY_CACHING_TYPE *)v14 + 20));
  operator delete(v14);
  return (unsigned int)OneAllocation;
}
