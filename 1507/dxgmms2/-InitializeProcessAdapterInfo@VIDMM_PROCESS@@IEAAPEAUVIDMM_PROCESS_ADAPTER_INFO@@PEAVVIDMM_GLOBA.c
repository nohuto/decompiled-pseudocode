/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0036B28
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00364D8 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0003E94 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0005E90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x1C00060B4 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0006100 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C00330E4 (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C003820C (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C005F140 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0060960 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 */

struct VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS::InitializeProcessAdapterInfo(
        VIDMM_PROCESS *this,
        struct VIDMM_GLOBAL *a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbp
  VIDMM_PROCESS_ADAPTER_INFO *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  VIDMM_PROCESS_ADAPTER_INFO *v9; // rbx
  SIZE_T v10; // rax
  unsigned __int64 v11; // r14
  char *v12; // rax
  __int64 v13; // rcx
  char *v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rbp
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rsi
  PVOID PoolWithTag; // rax
  unsigned int i; // edx
  __int64 v21; // r10
  __int64 v22; // rcx
  _QWORD *v23; // r9
  __int64 v24; // r8
  __int64 v25; // rcx
  struct DXGPROCESS *Current; // rax
  int v27; // eax
  __int64 v28; // rdx
  char *v29; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  CVirtualAddressAllocator *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  char *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9

  v3 = *((unsigned int *)a2 + 926);
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(0x1C0uLL, 0x33316956u, a3, PagedPool);
  if ( v6 )
    v9 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v6);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    _InterlockedAdd(&dword_1C0027538, 1u);
    v31 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v31 + 24) = 542LL;
    WdLogEvent5_WdLowResource(v31);
    return 0LL;
  }
  *((_DWORD *)v9 + 3) = v3;
  v10 = 184 * v3;
  v11 = v3;
  if ( !is_mul_ok(v3, 0xB8uLL) )
    v10 = -1LL;
  v12 = (char *)operator new(v10, 0x34316956u, v8, PagedPool);
  v14 = v12;
  if ( v12 )
    `vector constructor iterator'(
      v12,
      184LL,
      v3,
      (void (__fastcall *)(char *))_VIDMM_PROCESS_COMMITMENT_INFO::_VIDMM_PROCESS_COMMITMENT_INFO);
  else
    v14 = 0LL;
  *((_QWORD *)v9 + 2) = v14;
  if ( !v14 )
  {
    _InterlockedAdd(&dword_1C002753C, 1u);
    v32 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v32 + 24) = 555LL;
    WdLogEvent5_WdLowResource(v32);
LABEL_38:
    operator delete(*((void **)v9 + 2));
    v33 = (CVirtualAddressAllocator *)*((_QWORD *)v9 + 54);
    if ( v33 )
      CVirtualAddressAllocator::DestroyVaAllocator(v33);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v9);
    return 0LL;
  }
  if ( (*((_BYTE *)a2 + 40552) & 1) != 0 && (*((_DWORD *)this + 12) & 2) == 0 )
  {
    v34 = operator new(0x80uLL, 0x4B677844u, PagedPool);
    if ( v34 )
    {
      *v34 = 0LL;
      v36 = (char *)(v34 + 13);
      v34[6] = 0LL;
      v34[5] = 0LL;
      *((_DWORD *)v34 + 14) = 64;
      v34[9] = 0LL;
      v34[10] = 0LL;
      v34[11] = 0LL;
      v34[14] = v34 + 13;
      v34[13] = v34 + 13;
      *((_DWORD *)v34 + 30) = 0;
    }
    else
    {
      v34 = 0LL;
    }
    *((_QWORD *)v9 + 54) = v34;
    if ( !v34 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
      *(_QWORD *)(v39 + 24) = 564LL;
LABEL_46:
      WdLogEvent5_WdAssertion(v39);
      goto LABEL_38;
    }
    if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                (CVirtualAddressAllocator *)v34,
                1LL << *((_DWORD *)a2 + 10136),
                1 << *((_DWORD *)a2 + 10137) << 12,
                a2,
                this) < 0 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
      *(_QWORD *)(v39 + 24) = 576LL;
      goto LABEL_46;
    }
  }
  if ( (_DWORD)v3 )
  {
    v15 = 0LL;
    v16 = 0LL;
    do
    {
      *(_QWORD *)(v15 + *((_QWORD *)v9 + 2)) = this;
      *(_DWORD *)(v15 + *((_QWORD *)v9 + 2) + 8) = 0;
      *(_QWORD *)(v15 + *((_QWORD *)v9 + 2) + 16) = 0LL;
      *(_DWORD *)(v15 + *((_QWORD *)v9 + 2) + 168) = *(_DWORD *)(v15 + *((_QWORD *)v9 + 2) + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(v15 + *((_QWORD *)v9 + 2) + 24) = 0LL;
      *(_QWORD *)(v15 + *((_QWORD *)v9 + 2) + 32) = 0LL;
      v17 = (_QWORD *)(v15 + *((_QWORD *)v9 + 2) + 40LL);
      v17[1] = v17;
      *v17 = v17;
      memset((void *)(v16 + *((_QWORD *)v9 + 2) + 56LL), 0, 0x70uLL);
      v16 += 184LL;
      v15 += 184LL;
      --v11;
    }
    while ( v11 );
  }
  v18 = *((unsigned int *)a2 + 1604);
  if ( (unsigned int)v18 > 1 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v18 < 0xF0 )
      goto LABEL_38;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 240 * v18, 0x4B677844u);
  }
  else
  {
    PoolWithTag = (char *)v9 + 56;
  }
  *((_QWORD *)v9 + 6) = PoolWithTag;
  *((_DWORD *)v9 + 74) = v18;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 240 * v18);
  if ( !*((_QWORD *)v9 + 6) )
    goto LABEL_38;
  for ( i = 0; i < *((_DWORD *)a2 + 1604); ++i )
  {
    v21 = 2LL;
    v22 = *((_QWORD *)v9 + 6) + 240LL * i;
    *(_QWORD *)(v22 + 16) = v9;
    v23 = (_QWORD *)(v22 + 24);
    v24 = 264LL * i + 48;
    do
    {
      v25 = *(_QWORD *)(v24 + *((_QWORD *)a2 + 5104));
      v24 += 8LL;
      *v23++ = v25;
      --v21;
    }
    while ( v21 );
  }
  if ( dword_1C00271B0 )
    *((_DWORD *)v9 + 96) = *((_DWORD *)v9 + 96) & 0xFFFFFFF8 | 6;
  else
    *((_DWORD *)v9 + 96) |= 7u;
  if ( (dword_1C00270E4 & 4) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() )
    {
      Current = DXGPROCESS::GetCurrent();
      v27 = (*(__int64 (**)(void))(*((_QWORD *)Current + 10) + 216LL))();
    }
    else
    {
      v27 = 0;
    }
    if ( v27 )
      *((_DWORD *)v9 + 99) = 1;
  }
  *(_QWORD *)v9 = a2;
  *((_DWORD *)v9 + 2) = 1;
  *((_QWORD *)v9 + 5) = this;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 40648));
  v28 = *((_QWORD *)a2 + 5086);
  v29 = (char *)v9 + 24;
  *((_QWORD *)v9 + 3) = v28;
  *((_QWORD *)v9 + 4) = (char *)a2 + 40688;
  if ( *(struct VIDMM_GLOBAL **)(v28 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 40688) )
    __fastfail(3u);
  *(_QWORD *)(v28 + 8) = v29;
  *((_QWORD *)a2 + 5086) = v29;
  *((_QWORD *)a2 + 5082) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 40648, 0LL);
  KeLeaveCriticalRegion();
  *((_DWORD *)v9 + 100) = 1;
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v9;
}
