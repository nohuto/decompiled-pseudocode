/*
 * XREFs of ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C005CD7C
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C005D228 (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C000F590 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F69C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000F76C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C000FC70 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0010148 (--_GVIDMM_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0047C90 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0048224 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005A00C (-RequestNewBudget@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 *     ??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C005D5A8 (--0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
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
  _QWORD *v15; // rax
  __int64 v16; // rdx
  char *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rbp
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rsi
  PVOID PoolWithTag; // rax
  unsigned int i; // edx
  __int64 v26; // r10
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // r9
  __int64 v31; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  CVirtualAddressAllocator *v39; // rcx
  __int64 v40; // rax

  v3 = *((unsigned int *)a2 + 926);
  v6 = (VIDMM_PROCESS_ADAPTER_INFO *)operator new(0x1E0uLL, 0x33316956u, a3, PagedPool);
  if ( v6 )
    v9 = VIDMM_PROCESS_ADAPTER_INFO::VIDMM_PROCESS_ADAPTER_INFO(v6);
  else
    v9 = 0LL;
  if ( !v9 )
  {
    _InterlockedAdd(&dword_1C00355C8, 1u);
    v37 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v37 + 24) = 566LL;
    WdLogEvent5_WdLowResource(v37);
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
    _InterlockedAdd(&dword_1C00355CC, 1u);
    v38 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v38 + 24) = 579LL;
    WdLogEvent5_WdLowResource(v38);
    goto LABEL_42;
  }
  if ( (*((_BYTE *)a2 + 40872) & 1) != 0 && (*((_DWORD *)this + 12) & 2) == 0 )
  {
    v15 = operator new(0x80uLL, 0x4B677844u, PagedPool);
    if ( v15 )
    {
      *v15 = 0LL;
      v17 = (char *)(v15 + 13);
      v15[6] = 0LL;
      v15[5] = 0LL;
      *((_DWORD *)v15 + 14) = 64;
      v15[9] = 0LL;
      v15[10] = 0LL;
      v15[11] = 0LL;
      v15[14] = v15 + 13;
      v15[13] = v15 + 13;
      *((_DWORD *)v15 + 30) = 0;
    }
    else
    {
      v15 = 0LL;
    }
    *((_QWORD *)v9 + 58) = v15;
    if ( v15 )
    {
      if ( (int)CVirtualAddressAllocator::InitializeVaAllocator(
                  (CVirtualAddressAllocator *)v15,
                  1LL << *((_DWORD *)a2 + 10216),
                  *((_DWORD *)a2 + 10229),
                  a2,
                  this) >= 0 )
        goto LABEL_15;
      v40 = WdLogNewEntry5_WdAssertion(v19, v18);
      *(_QWORD *)(v40 + 24) = 600LL;
    }
    else
    {
      v40 = WdLogNewEntry5_WdAssertion(v17, v16);
      *(_QWORD *)(v40 + 24) = 588LL;
    }
    WdLogEvent5_WdAssertion(v40);
    goto LABEL_42;
  }
LABEL_15:
  if ( (_DWORD)v3 )
  {
    v20 = 0LL;
    v21 = 0LL;
    do
    {
      *(_QWORD *)(v20 + *((_QWORD *)v9 + 2)) = this;
      *(_DWORD *)(v20 + *((_QWORD *)v9 + 2) + 8) = 0;
      *(_QWORD *)(v20 + *((_QWORD *)v9 + 2) + 16) = 0LL;
      *(_DWORD *)(v20 + *((_QWORD *)v9 + 2) + 168) = *(_DWORD *)(v20 + *((_QWORD *)v9 + 2) + 168) & 0xFFFFFFF8 | 1;
      *(_QWORD *)(v20 + *((_QWORD *)v9 + 2) + 24) = 0LL;
      *(_QWORD *)(v20 + *((_QWORD *)v9 + 2) + 32) = 0LL;
      v22 = (_QWORD *)(v20 + *((_QWORD *)v9 + 2) + 40LL);
      v22[1] = v22;
      *v22 = v22;
      memset((void *)(v21 + *((_QWORD *)v9 + 2) + 56LL), 0, 0x70uLL);
      v21 += 184LL;
      v20 += 184LL;
      --v11;
    }
    while ( v11 );
  }
  v23 = *((unsigned int *)a2 + 1604);
  if ( (unsigned int)v23 <= 1 )
  {
    PoolWithTag = (char *)v9 + 56;
    goto LABEL_20;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v23 < 0x108 )
  {
LABEL_42:
    operator delete[](*((void **)v9 + 2));
    v39 = (CVirtualAddressAllocator *)*((_QWORD *)v9 + 58);
    if ( v39 )
      CVirtualAddressAllocator::DestroyVaAllocator(v39);
    VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v9);
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 264 * v23, 0x4B677844u);
LABEL_20:
  *((_QWORD *)v9 + 6) = PoolWithTag;
  *((_DWORD *)v9 + 80) = v23;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 264 * v23);
  if ( !*((_QWORD *)v9 + 6) )
    goto LABEL_42;
  for ( i = 0; i < *((_DWORD *)a2 + 1604); ++i )
  {
    v26 = 2LL;
    v27 = 264LL * i;
    v28 = *((_QWORD *)v9 + 6);
    *(_QWORD *)(v27 + v28 + 16) = v9;
    v29 = v27 + 48;
    v30 = (_QWORD *)(v27 + v28 + 24);
    do
    {
      v31 = *(_QWORD *)(v29 + *((_QWORD *)a2 + 5150));
      v29 += 8LL;
      *v30++ = v31;
      --v26;
    }
    while ( v26 );
  }
  if ( dword_1C0035200 )
    *((_DWORD *)v9 + 108) = *((_DWORD *)v9 + 108) & 0xFFFFFFF8 | 6;
  else
    *((_DWORD *)v9 + 108) |= 7u;
  if ( (VIDMM_GLOBAL::_Config & 4) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() ? *((_BYTE *)DXGPROCESS::GetCurrent() + 290) : 0 )
      *((_DWORD *)v9 + 111) = 1;
  }
  *(_QWORD *)v9 = a2;
  *((_DWORD *)v9 + 2) = 1;
  *((_QWORD *)v9 + 5) = this;
  DXGPUSHLOCK::AcquireExclusive((struct VIDMM_GLOBAL *)((char *)a2 + 40968));
  v33 = (_QWORD *)((char *)a2 + 41008);
  v34 = *((_QWORD *)a2 + 5126);
  v35 = (_QWORD *)((char *)v9 + 24);
  if ( *(struct VIDMM_GLOBAL **)(v34 + 8) != (struct VIDMM_GLOBAL *)((char *)a2 + 41008) )
    __fastfail(3u);
  *v35 = v34;
  *((_QWORD *)v9 + 4) = v33;
  *(_QWORD *)(v34 + 8) = v35;
  *v33 = v35;
  *((_QWORD *)a2 + 5122) = 0LL;
  ExReleasePushLockExclusiveEx((char *)a2 + 40968, 0LL);
  KeLeaveCriticalRegion();
  VIDMM_GLOBAL::RequestNewBudget(a2, 1);
  return v9;
}
