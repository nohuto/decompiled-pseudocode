/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0054758
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0054070 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00117CC (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0011CE8 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C0013DA4 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C004011C (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0041950 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C004222C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C0056714 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        VIDMM_PROCESS *this,
        struct VIDMM_GLOBAL *a2)
{
  unsigned __int64 v2; // rbp
  VIDMM_PROCESS_ADAPTER_INFO *v5; // rax
  __int64 v6; // rcx
  VIDMM_PROCESS_ADAPTER_INFO *v7; // rbx
  SIZE_T v8; // rax
  unsigned __int64 v9; // r14
  char *v10; // rax
  __int64 v11; // rcx
  char *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdx
  char *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rbp
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rsi
  PVOID PoolWithTag; // rax
  unsigned int i; // edx
  __int64 v28; // r10
  __int64 v29; // rcx
  _QWORD *v30; // r9
  __int64 v31; // r8
  __int64 v32; // rcx
  struct DXGPROCESS *Current; // rax
  int v34; // eax
  __int64 v35; // rdx
  char *v36; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  unsigned __int8 v42; // r9
  CVirtualAddressAllocator *v43; // rcx
  __int64 v44; // rax

  v2 = *((unsigned int *)a2 + 926);
  v5 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(0x1C0uLL, 0x33316956u, PagedPool);
  if ( v5 )
    v7 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v5);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    _InterlockedAdd(&dword_1C002F548, 1u);
    v38 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v38 + 24) = 542LL;
    WdLogEvent5_WdLowResource(v38);
    return 0LL;
  }
  *((_DWORD *)v7 + 3) = v2;
  v8 = 184 * v2;
  v9 = v2;
  if ( !is_mul_ok(v2, 0xB8uLL) )
    v8 = -1LL;
  v10 = (char *)operator new(v8, 0x34316956u, PagedPool);
  v12 = v10;
  if ( v10 )
    `vector constructor iterator'(
      v10,
      184LL,
      v2,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v12 = 0LL;
  *((_QWORD *)v7 + 2) = v12;
  if ( !v12 )
  {
    _InterlockedAdd(&dword_1C002F54C, 1u);
    v39 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v39 + 24) = 555LL;
    WdLogEvent5_WdLowResource(v39);
    goto LABEL_43;
  }
  if ( (*((_BYTE *)a2 + 40608) & 1) != 0 && (*((_DWORD *)this + 12) & 2) == 0 )
  {
    v13 = operator new(0x80uLL, 0x4B677844u, PagedPool);
    if ( v13 )
    {
      *v13 = 0LL;
      v15 = (char *)(v13 + 13);
      v13[6] = 0LL;
      v13[5] = 0LL;
      *((_DWORD *)v13 + 14) = 64;
      v13[9] = 0LL;
      v13[10] = 0LL;
      v13[11] = 0LL;
      v13[14] = v13 + 13;
      v13[13] = v13 + 13;
      *((_DWORD *)v13 + 30) = 0;
    }
    else
    {
      v13 = 0LL;
    }
    *((_QWORD *)v7 + 54) = v13;
    if ( v13 )
    {
      if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                  (CVirtualAddressAllocator *)v13,
                  1LL << *((_DWORD *)a2 + 10150),
                  *((_DWORD *)a2 + 10163),
                  a2,
                  this) >= 0 )
        goto LABEL_15;
      v44 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      *(_QWORD *)(v44 + 24) = 576LL;
    }
    else
    {
      v44 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
      *(_QWORD *)(v44 + 24) = 564LL;
    }
    WdLogEvent5_WdAssertion(v44);
    goto LABEL_43;
  }
LABEL_15:
  if ( (_DWORD)v2 )
  {
    v22 = 0LL;
    v23 = 0LL;
    do
    {
      *(_QWORD *)(v22 + *((_QWORD *)v7 + 2)) = this;
      *(_DWORD *)(v22 + *((_QWORD *)v7 + 2) + 8) = 0;
      *(_QWORD *)(v22 + *((_QWORD *)v7 + 2) + 16) = 0LL;
      *(_DWORD *)(v22 + *((_QWORD *)v7 + 2) + 168) = *(_DWORD *)(v22 + *((_QWORD *)v7 + 2) + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(v22 + *((_QWORD *)v7 + 2) + 24) = 0LL;
      *(_QWORD *)(v22 + *((_QWORD *)v7 + 2) + 32) = 0LL;
      v24 = (_QWORD *)(v22 + *((_QWORD *)v7 + 2) + 40LL);
      v24[1] = v24;
      *v24 = v24;
      memset((void *)(v23 + *((_QWORD *)v7 + 2) + 56LL), 0, 0x70uLL);
      v23 += 184LL;
      v22 += 184LL;
      --v9;
    }
    while ( v9 );
  }
  v25 = *((unsigned int *)a2 + 1604);
  if ( (unsigned int)v25 <= 1 )
  {
    PoolWithTag = (char *)v7 + 56;
    goto LABEL_20;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v25 < 0xF0 )
  {
LABEL_43:
    operator delete[](*((void **)v7 + 2));
    v43 = (CVirtualAddressAllocator *)*((_QWORD *)v7 + 54);
    if ( v43 )
      CVirtualAddressAllocator::DestroyVaAllocator(v43, v40, v41, v42);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v7);
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 240 * v25, 0x4B677844u);
LABEL_20:
  *((_QWORD *)v7 + 6) = PoolWithTag;
  *((_DWORD *)v7 + 74) = v25;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 240 * v25);
  if ( !*((_QWORD *)v7 + 6) )
    goto LABEL_43;
  for ( i = 0; i < *((_DWORD *)a2 + 1604); ++i )
  {
    v28 = 2LL;
    v29 = *((_QWORD *)v7 + 6) + 240LL * i;
    *(_QWORD *)(v29 + 16) = v7;
    v30 = (_QWORD *)(v29 + 24);
    v31 = 264LL * i + 48;
    do
    {
      v32 = *(_QWORD *)(v31 + *((_QWORD *)a2 + 5111));
      v31 += 8LL;
      *v30++ = v32;
      --v28;
    }
    while ( v28 );
  }
  if ( dword_1C002F1D0 )
    *((_DWORD *)v7 + 96) = *((_DWORD *)v7 + 96) & 0xFFFFFFF8 | 6;
  else
    *((_DWORD *)v7 + 96) |= 7u;
  if ( (dword_1C002F104 & 4) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() )
    {
      Current = DXGPROCESS::GetCurrent();
      v34 = (*(__int64 (**)(void))(*((_QWORD *)Current + 10) + 216LL))();
    }
    else
    {
      v34 = 0;
    }
    if ( v34 )
      *((_DWORD *)v7 + 99) = 1;
  }
  *(_QWORD *)v7 = a2;
  *((_DWORD *)v7 + 2) = 1;
  *((_QWORD *)v7 + 5) = this;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 40704));
  v35 = *((_QWORD *)a2 + 5093);
  v36 = (char *)v7 + 24;
  *((_QWORD *)v7 + 3) = v35;
  *((_QWORD *)v7 + 4) = (char *)a2 + 40744;
  if ( *(struct VIDMM_GLOBAL **)(v35 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 40744) )
    __fastfail(3u);
  *(_QWORD *)(v35 + 8) = v36;
  *((_QWORD *)a2 + 5093) = v36;
  *((_QWORD *)a2 + 5089) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 40704, 0LL);
  KeLeaveCriticalRegion();
  *((_DWORD *)v7 + 100) = 1;
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v7;
}
