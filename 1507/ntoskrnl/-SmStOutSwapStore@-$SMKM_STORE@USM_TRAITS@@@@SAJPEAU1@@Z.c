/*
 * XREFs of ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402521D8
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140131D5C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlFindNextForwardRunClearCapped @ 0x140063A80 (RtlFindNextForwardRunClearCapped.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DBB4C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     SmArrayGrow @ 0x140144D5C (SmArrayGrow.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1401476BC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140147B04 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmPerformStoreSwapOperation @ 0x140259E80 (SmPerformStoreSwapOperation.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(__int64 a1)
{
  int v2; // r14d
  unsigned int *PoolWithTag; // r13
  unsigned int v4; // r15d
  __int64 v5; // r12
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rsi
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rbx
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rax
  int NextForwardRunClearCapped; // eax
  __int64 v16; // r9
  bool v17; // cf
  __int64 v18; // rdx
  __int64 v19; // r8
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  struct _KTHREAD *v25; // rax
  __int64 v26; // rsi
  unsigned int *v27; // rsi
  __int64 v28; // r14
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  __int64 v32; // [rsp+20h] [rbp-48h]
  PVOID v33; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+38h] [rbp-30h]
  __int64 v35; // [rsp+40h] [rbp-28h]
  __int64 v36; // [rsp+48h] [rbp-20h]
  PVOID v37; // [rsp+50h] [rbp-18h]
  __int64 v38; // [rsp+58h] [rbp-10h]
  int v39; // [rsp+B0h] [rbp+48h]
  unsigned int v40; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v41; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v42; // [rsp+C8h] [rbp+60h]

  v2 = 0;
  v39 = 0;
  P = 0LL;
  PoolWithTag = 0LL;
  v33 = 0LL;
  v4 = 0;
  v5 = -1LL;
  ST_STORE<SM_TRAITS>::StDrainReadContextList((_SLIST_HEADER *)a1);
  v8 = *(_QWORD **)(a1 + 5016);
  if ( (unsigned __int64)v8 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v9 = -1073700861;
  }
  else
  {
    if ( v8 != (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5016), -1LL, (signed __int64)v8) )
      return (unsigned int)-1073700861;
    if ( *v8 )
    {
      v5 = (__int64)v8;
      v9 = -1073741791;
      goto LABEL_46;
    }
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    P = v8;
    v39 = 1;
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire(a1 + 4488, 0LL, 0LL, v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 4488), v11, a1 + 4488, v12);
    if ( v11 )
      *(_BYTE *)(v11 + 26) |= 1u;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                    NonPagedPoolNx,
                                    (unsigned int)(4 * *(_DWORD *)(a1 + 4676)),
                                    0x77536D73u);
    if ( !PoolWithTag )
    {
      v9 = -1073741670;
LABEL_41:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
      KeAbPostRelease(a1 + 4488);
      v29 = KeGetCurrentThread();
      v30 = v29->SpecialApcDisable + 1;
      v29->SpecialApcDisable = v30;
      if ( !v30 && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152 )
        KiCheckForKernelApcDelivery();
      goto LABEL_46;
    }
    v41 = 0;
    v13 = 0;
    v40 = 0;
LABEL_13:
    v14 = (__int64)(v8 + 1);
    while ( 1 )
    {
      NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v14, v13, 0xFFFFFFFF, &v40);
      if ( !NextForwardRunClearCapped )
        break;
      v13 = v40;
      v42 = v40 + NextForwardRunClearCapped;
      v17 = v40 < v40 + NextForwardRunClearCapped;
      v14 = (__int64)(v8 + 1);
      if ( v17 )
      {
        while ( 1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 4680) + 8LL * v13) & 0x7FFFFFFFFFFF0000LL) != 0 )
          {
            v35 = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v13, 0, v16, 4u);
            if ( !(unsigned int)SmArrayGrow(v4, v18, &v41, (const void **)&v33) )
            {
              SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, v13, v19, v16, v32, 2u);
              v2 = 1;
              v9 = -1073741670;
              goto LABEL_32;
            }
            v20 = v33;
            v21 = v35;
            PoolWithTag[v4] = v13;
            v22 = 2LL * v4++;
            v20[v22] = v21;
            v20[v22 + 1] = *(unsigned int *)(a1 + 4672);
          }
          v40 = ++v13;
          if ( v13 >= v42 )
            goto LABEL_13;
        }
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 4488));
    KeAbPostRelease(a1 + 4488);
    v23 = KeGetCurrentThread();
    v24 = v23->SpecialApcDisable + 1;
    v23->SpecialApcDisable = v24;
    if ( !v24 && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152 )
      KiCheckForKernelApcDelivery();
    v39 = 0;
    v2 = 0;
    if ( !v4 )
    {
      v9 = -1073741607;
LABEL_47:
      _InterlockedExchange64((volatile __int64 *)(a1 + 5016), v5);
      goto LABEL_48;
    }
    v36 = 0LL;
    v37 = v33;
    v38 = v4;
    v9 = SmPerformStoreSwapOperation(1LL);
    if ( v9 >= 0 )
    {
      v5 = (__int64)v8;
      *v8 = v36;
      v9 = 0;
      P = 0LL;
    }
  }
LABEL_32:
  if ( v4 )
  {
    if ( !v2 )
    {
      v25 = KeGetCurrentThread();
      v39 = 1;
      --v25->SpecialApcDisable;
      v26 = KeAbPreAcquire(a1 + 4488, 0LL, 0LL, v7);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 4488), 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)(a1 + 4488), v26, a1 + 4488, v7);
      if ( v26 )
        *(_BYTE *)(v26 + 26) |= 1u;
    }
    v27 = PoolWithTag;
    v28 = v4;
    do
    {
      SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, *v27++, v6, v7, v32, 2u);
      --v28;
    }
    while ( v28 );
  }
  if ( v39 )
    goto LABEL_41;
LABEL_46:
  if ( v5 != -1 )
    goto LABEL_47;
LABEL_48:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v33 )
    ExFreePoolWithTag(v33, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v9;
}
