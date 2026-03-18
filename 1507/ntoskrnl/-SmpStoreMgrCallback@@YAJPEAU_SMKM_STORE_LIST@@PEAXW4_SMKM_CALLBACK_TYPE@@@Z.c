/*
 * XREFs of ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400DA0AC
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     StLcBucketsCombine @ 0x1400DA1D4 (StLcBucketsCombine.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400DA1F8 (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmpStoreMgrCallback(__int64 a1, __int64 a2, int a3)
{
  char *PoolWithTag; // rax
  char *v6; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v8; // r9
  __int64 v9; // rax
  signed __int8 v10; // cf
  __int64 v11; // rdi
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  int v14; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 == 2 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5F8uLL, 0x62536D73u);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      v14 = 1528;
      SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(a2, 1LL, PoolWithTag, &v14);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v9 = KeAbPreAcquire((ULONG_PTR)&qword_140353248, 0LL, 0LL, v8);
      v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140353248, 0LL);
      v11 = v9;
      if ( v10 )
        ExfAcquirePushLockExclusiveEx(&qword_140353248, v9, &qword_140353248);
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      StLcBucketsCombine(&unk_140353250, v6 + 1464);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140353248, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140353248);
      KeAbPostRelease((ULONG_PTR)&qword_140353248);
      v12 = KeGetCurrentThread();
      v13 = v12->KernelApcDisable + 1;
      v12->KernelApcDisable = v13;
      if ( !v13
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
        && !v12->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery(v12);
      }
      ExFreePoolWithTag(v6, 0);
    }
  }
  return 0LL;
}
