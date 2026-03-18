/*
 * XREFs of ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400F8004
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     StLcBucketsCombine @ 0x1400F8248 (StLcBucketsCombine.c)
 *     ?SmStGetStoreStats@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z @ 0x1400F826C (-SmStGetStoreStats@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_ST_STATS_LEVEL@@PEAU_ST_STATS@@PEAK@Z.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmpStoreMgrCallback(__int64 a1, __int64 a2, int a3)
{
  char *PoolWithTag; // rax
  char *v6; // r14
  __int64 CurrentThread; // rcx
  struct _KTHREAD *v8; // rdi
  unsigned int AbEntrySummary; // edx
  __int64 v10; // rcx
  __int64 v11; // rbp
  int v12; // eax
  __int16 v13; // ax
  struct _KPROCESS *Process; // rax
  unsigned __int64 v16; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v18; // [rsp+70h] [rbp+18h] BYREF
  int v19; // [rsp+78h] [rbp+20h]

  if ( a3 != 2 )
    return 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x5F8uLL, 0x62536D73u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v18 = 1528;
  SMKM_STORE<SM_TRAITS>::SmStGetStoreStats(a2, 1LL, PoolWithTag, &v18);
  CurrentThread = (__int64)KeGetCurrentThread();
  --*(_WORD *)(CurrentThread + 484);
  if ( KiAbEnabled )
  {
    v8 = KeGetCurrentThread();
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      KeBugCheckEx(0x192u, (ULONG_PTR)v8, (ULONG_PTR)&qword_1403054E8, KeGetCurrentIrql(), 0LL);
    --v8->SpecialApcDisable;
    if ( !v8->AbEntrySummary )
    {
      if ( !v8->AbOrphanedEntrySummary )
      {
        v11 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(v8, &qword_1403054E8);
        goto LABEL_28;
      }
      AbOrphanedEntrySummary = v8->AbOrphanedEntrySummary;
      v8->AbOrphanedEntrySummary = 0;
      v8->AbEntrySummary |= AbOrphanedEntrySummary;
    }
    AbEntrySummary = v8->AbEntrySummary;
    _BitScanForward((unsigned int *)&v10, AbEntrySummary);
    v19 = v10;
    v8->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    CurrentThread = 96 * v10;
    v11 = (__int64)v8->LockEntries + CurrentThread;
    if ( v11 )
    {
      if ( (unsigned __int64)&qword_1403054E8 < 0xFFFFF90000000000uLL
        || (unsigned __int64)&qword_1403054E8 >= 0xFFFFF98000000000uLL
        || (Process = v8->ApcState.Process, (v16 = Process[1].ActiveProcessors.Bitmap[2]) == 0)
        || Process == PsInitialSystemProcess )
      {
        v12 = -1;
      }
      else
      {
        v12 = *(_DWORD *)(v16 + 8);
      }
      *(_DWORD *)(v11 + 40) = v12;
      CurrentThread = 0x7FFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v11 + 32) = (unsigned __int64)&qword_1403054E8 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_11:
      v13 = v8->SpecialApcDisable + 1;
      v8->SpecialApcDisable = v13;
      if ( !v13 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v8->ApcState.ApcListHead[0].Flink != &v8->152 )
        KiCheckForKernelApcDelivery(CurrentThread);
      goto LABEL_14;
    }
LABEL_28:
    _interlockedbittestandset((volatile signed __int32 *)&v8->116 + 1, 0xFu);
    goto LABEL_11;
  }
  v11 = 0LL;
LABEL_14:
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1403054E8, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_1403054E8, v11, (ULONG_PTR)&qword_1403054E8);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  StLcBucketsCombine(&unk_1403054F0, v6 + 1464);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403054E8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403054E8);
  KeAbPostRelease((ULONG_PTR)&qword_1403054E8);
  KeLeaveCriticalRegion();
  ExFreePoolWithTag(v6, 0);
  return 0LL;
}
