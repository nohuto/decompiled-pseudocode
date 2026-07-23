/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140202F74
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140001F48 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400B3380 (RtlFindNextForwardRunClearCapped.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1400E7A9C (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F6B00 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140110A14 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140110B74 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     SmArrayGrow @ 0x1401173D4 (SmArrayGrow.c)
 *     SmPerformStoreSwapOperation @ 0x14020A930 (SmPerformStoreSwapOperation.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r13d
  unsigned int *v4; // r12
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rsi
  int v10; // ebx
  __int64 v11; // rax
  int NextForwardRunClearCapped; // eax
  __int64 v13; // r9
  bool v14; // cf
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  unsigned int *v19; // rsi
  int v21; // [rsp+20h] [rbp-48h]
  PVOID v22; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+38h] [rbp-30h]
  __int64 v24; // [rsp+40h] [rbp-28h]
  __int64 v25; // [rsp+48h] [rbp-20h]
  PVOID v26; // [rsp+50h] [rbp-18h]
  __int64 v27; // [rsp+58h] [rbp-10h]
  unsigned int v28; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v29; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+58h]
  PVOID PoolWithTag; // [rsp+C8h] [rbp+60h]

  v1 = 0;
  v3 = 0;
  P = 0LL;
  v22 = 0LL;
  v4 = 0LL;
  PoolWithTag = 0LL;
  v5 = -1LL;
  v6 = 0LL;
  ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)a1);
  v9 = *(_QWORD **)(a1 + 5016);
  if ( (unsigned __int64)v9 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v10 = -1073700861;
  }
  else
  {
    if ( v9 != (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5016), -1LL, (signed __int64)v9) )
      return (unsigned int)-1073700861;
    if ( *v9 )
    {
      v5 = (__int64)v9;
      v10 = -1073741791;
      goto LABEL_28;
    }
    P = v9;
    v5 = 0LL;
    v3 = 1;
    StLockAcquireShared((struct VLOCK *)(a1 + 4488));
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(4 * *(_DWORD *)(a1 + 4676)), 0x77536D73u);
    if ( !PoolWithTag )
    {
      v10 = -1073741670;
LABEL_25:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
      KeAbPostRelease(a1 + 4488);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_28;
    }
    v29 = 0;
    v28 = 0;
LABEL_9:
    v11 = (__int64)(v9 + 1);
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v11, v1, 0xFFFFFFFF, &v28);
      if ( !NextForwardRunClearCapped )
        break;
      v1 = v28;
      v30 = v28 + NextForwardRunClearCapped;
      v14 = v28 < v28 + NextForwardRunClearCapped;
      v11 = (__int64)(v9 + 1);
      if ( v14 )
      {
        while ( 1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 4680) + 8LL * v1) & 0x7FFFFFFFFFFF0000LL) != 0 )
          {
            v24 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v1, 0, v13, 4u);
            if ( !(unsigned int)SmArrayGrow(v6, v15, &v29, (const void **)&v22) )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v1, v16, v13, v21, 2u);
              v10 = -1073741670;
              goto LABEL_18;
            }
            v17 = v22;
            v18 = 2LL * (unsigned int)v6;
            *((_DWORD *)PoolWithTag + v6) = v1;
            v6 = (unsigned int)(v6 + 1);
            v17[v18] = v24;
            v17[v18 + 1] = *(unsigned int *)(a1 + 4672);
          }
          v28 = ++v1;
          if ( v1 >= v30 )
            goto LABEL_9;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
    KeAbPostRelease(a1 + 4488);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    v3 = 0;
    if ( !(_DWORD)v6 )
    {
      v10 = -1073741607;
      goto LABEL_29;
    }
    v25 = 0LL;
    v26 = v22;
    v27 = (unsigned int)v6;
    v10 = SmPerformStoreSwapOperation(1LL);
    if ( v10 >= 0 )
    {
      v5 = (__int64)v9;
      *v9 = v25;
      v10 = 0;
      P = 0LL;
    }
LABEL_18:
    v4 = (unsigned int *)PoolWithTag;
  }
  if ( (_DWORD)v6 )
  {
    if ( !v3 )
    {
      v3 = 1;
      StLockAcquireShared((struct VLOCK *)(a1 + 4488));
    }
    v19 = v4;
    do
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *v19++, v7, v8, v21, 2u);
      --v6;
    }
    while ( v6 );
  }
  if ( v3 )
    goto LABEL_25;
LABEL_28:
  if ( v5 != -1 )
LABEL_29:
    _InterlockedExchange64((volatile __int64 *)(a1 + 5016), v5);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v10;
}
