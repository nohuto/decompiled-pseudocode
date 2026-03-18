/*
 * XREFs of SmpCacheStatsCopy @ 0x1405B5C4C
 * Callers:
 *     SmEtwEnableCallback @ 0x1405B5B3C (SmEtwEnableCallback.c)
 *     SmProcessGlobalCacheStatsRequest @ 0x1406D9604 (SmProcessGlobalCacheStatsRequest.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     StLcBucketsCombine @ 0x1400DA1D4 (StLcBucketsCombine.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400DA1F8 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall SmpCacheStatsCopy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  int *v7; // r9
  _OWORD *v8; // r8
  __int128 *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int128 v12; // xmm1
  unsigned int i; // ebx
  unsigned int v14; // ebp
  __int64 v15; // r15
  struct _EX_RUNDOWN_REF *v16; // rsi
  unsigned __int64 v17; // rtt
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rsi
  __int64 v21; // r9
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  unsigned __int64 v24; // rtt
  _BYTE *v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // rax
  _BYTE *v28; // rbx
  struct _EX_RUNDOWN_REF *v29; // rcx
  unsigned __int64 v30; // rtt
  int v31; // [rsp+28h] [rbp-670h] BYREF
  _BYTE v32[1464]; // [rsp+30h] [rbp-668h] BYREF
  _BYTE v33[72]; // [rsp+5E8h] [rbp-B0h] BYREF
  _BYTE v34[32]; // [rsp+630h] [rbp-68h] BYREF

  v6 = 0LL;
  memset((void *)a2, 0, 0x380uLL);
  v7 = (int *)a3;
  v8 = (_OWORD *)(a2 + 40);
  v9 = (__int128 *)(a3 + 160);
  v10 = 8LL;
  do
  {
    v11 = *v7++;
    *((_DWORD *)v8 - 10) = v11;
    *(v8 - 2) = *(v9 - 8);
    v12 = *v9++;
    *v8 = v12;
    v8 = (_OWORD *)((char *)v8 + 104);
    *(_OWORD *)((char *)v8 - 72) = v9[7];
    --v10;
  }
  while ( v10 );
  for ( i = 0; i < 0x20; ++i )
  {
    v14 = i | (32 * (*(_WORD *)(176LL * i + a1 + 24) & 0x7FF));
    v15 = 176LL * (i & 0x1F);
    v16 = (struct _EX_RUNDOWN_REF *)(v15 + a1);
    _m_prefetchw((const void *)(v15 + a1 + 8));
    v17 = *(_QWORD *)(v15 + a1 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v17 != _InterlockedCompareExchange64((volatile signed __int64 *)(v15 + a1 + 8), v17 + 2, v17)
      && !ExfAcquireRundownProtection(v16 + 1) )
    {
      goto LABEL_6;
    }
    if ( (*(_WORD *)(v15 + a1 + 24) & 0x7FF) != v14 >> 5 )
    {
      _m_prefetchw(&v16[1]);
      v24 = v16[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&v16[1], v24 - 2, v24) )
        ExfReleaseRundownProtection(v16 + 1);
LABEL_6:
      v18 = 0LL;
      goto LABEL_7;
    }
    v18 = *(_QWORD *)(v15 + a1);
LABEL_7:
    if ( v18 )
    {
      v34[v6] = i;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v20 = KeAbPreAcquire(a3 + 416, 0LL, 0LL, (__int64)v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 416), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a3 + 416), v20, a3 + 416, v21);
  if ( v20 )
    *(_BYTE *)(v20 + 26) |= 1u;
  *(_OWORD *)(a2 + 832) = *(_OWORD *)(a3 + 424);
  *(_OWORD *)(a2 + 848) = *(_OWORD *)(a3 + 440);
  *(_OWORD *)(a2 + 864) = *(_OWORD *)(a3 + 456);
  *(_OWORD *)(a2 + 880) = *(_OWORD *)(a3 + 472);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 416), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a3 + 416));
  KeAbPostRelease(a3 + 416);
  v22 = KeGetCurrentThread();
  v23 = v22->KernelApcDisable + 1;
  v22->KernelApcDisable = v23;
  if ( !v23
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
    && !v22->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( (_DWORD)v6 )
  {
    v25 = v34;
    v26 = (unsigned int)v6;
    do
    {
      v27 = *v25 & 0x1F;
      v31 = 1528;
      SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(*(_QWORD *)(176 * v27 + a1), 1LL, (__int64)v32, (__int64)&v31);
      StLcBucketsCombine((_DWORD *)(a2 + 832), (__int64)v33);
      ++v25;
      --v26;
    }
    while ( v26 );
    v28 = v34;
    do
    {
      v29 = (struct _EX_RUNDOWN_REF *)(176LL * (*v28 & 0x1F) + a1 + 8);
      _m_prefetchw(v29);
      v30 = v29->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v30 != _InterlockedCompareExchange64((volatile signed __int64 *)v29, v30 - 2, v30) )
        ExfReleaseRundownProtection(v29);
      ++v28;
      --v6;
    }
    while ( v6 );
  }
}
