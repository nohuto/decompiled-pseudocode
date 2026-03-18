/*
 * XREFs of SmpCacheStatsCopy @ 0x140540650
 * Callers:
 *     SmEtwEnableCallback @ 0x14054053C (SmEtwEnableCallback.c)
 *     SmProcessGlobalCacheStatsRequest @ 0x140657330 (SmProcessGlobalCacheStatsRequest.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     StLcBucketsCombine @ 0x1400F8248 (StLcBucketsCombine.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400F826C (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

void __fastcall SmpCacheStatsCopy(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  int *v7; // r9
  _OWORD *v8; // r8
  __int128 *v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int128 v12; // xmm1
  unsigned int i; // edi
  unsigned int v14; // esi
  struct _EX_RUNDOWN_REF *v15; // r14
  struct _EX_RUNDOWN_REF v16; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rsi
  _BYTE *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  _BYTE *v22; // rdi
  int v23[4]; // [rsp+20h] [rbp-678h] BYREF
  _BYTE v24[1464]; // [rsp+30h] [rbp-668h] BYREF
  _BYTE v25[72]; // [rsp+5E8h] [rbp-B0h] BYREF
  _BYTE v26[32]; // [rsp+630h] [rbp-68h] BYREF

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
    v15 = (struct _EX_RUNDOWN_REF *)(a1 + 176LL * (i & 0x1F));
    if ( !ExAcquireRundownProtection(v15 + 1) )
      goto LABEL_5;
    if ( (v15[3].Count & 0x7FF) != v14 >> 5 )
    {
      ExReleaseRundownProtection_0(v15 + 1);
LABEL_5:
      v16.Count = 0LL;
      goto LABEL_6;
    }
    v16.Count = v15->Count;
LABEL_6:
    if ( v16.Count )
    {
      v26[v6] = i;
      v6 = (unsigned int)(v6 + 1);
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v18 = KeAbPreAcquire(a3 + 416, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 416), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((unsigned __int64 *)(a3 + 416), v18, a3 + 416);
  if ( v18 )
    *(_BYTE *)(v18 + 26) |= 1u;
  *(_OWORD *)(a2 + 832) = *(_OWORD *)(a3 + 424);
  *(_OWORD *)(a2 + 848) = *(_OWORD *)(a3 + 440);
  *(_OWORD *)(a2 + 864) = *(_OWORD *)(a3 + 456);
  *(_OWORD *)(a2 + 880) = *(_OWORD *)(a3 + 472);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 416), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a3 + 416));
  KeAbPostRelease(a3 + 416);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v6 )
  {
    v19 = v26;
    v20 = (unsigned int)v6;
    do
    {
      v21 = *v19 & 0x1F;
      v23[0] = 1528;
      SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(*(_QWORD *)(176 * v21 + a1), 1LL, (__int64)v24, (__int64)v23);
      StLcBucketsCombine((_DWORD *)(a2 + 832), (__int64)v25);
      ++v19;
      --v20;
    }
    while ( v20 );
    v22 = v26;
    do
    {
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(176LL * (*v22++ & 0x1F) + a1 + 8));
      --v6;
    }
    while ( v6 );
  }
}
