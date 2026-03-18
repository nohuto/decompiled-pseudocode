/*
 * XREFs of KseShimDatabaseClose @ 0x1405770FC
 * Callers:
 *     KsepDbGetDriverShims @ 0x140577014 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x140578E70 (KsepDbCacheReadDevice.c)
 *     KsepDbGetShimInfo @ 0x14069C004 (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x1407C04D4 (KseInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlAssert @ 0x140248194 (RtlAssert.c)
 *     KsepShimDbUnmapFromMemory @ 0x140578CBC (KsepShimDbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x1405B2648 (KseShimDatabaseBootRelease.c)
 */

void __fastcall KseShimDatabaseClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  int v12; // eax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rcx
  char v16; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&KsepShimDbLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v6, (ULONG_PTR)&KsepShimDbLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( a1 != KsepShimDbHandle )
  {
    v15 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v16 = KsepDebugFlag;
    KsepHistoryErrors[2 * v15 + 1] = -1073740768;
    KsepHistoryErrors[2 * v15] = 590203;
    if ( (v16 & 4) != 0 )
      RtlAssert("DbHandle == KsepShimDbHandle", "minkernel\\ntos\\kshim\\ksesdb.c", 0x17Bu, 0LL);
  }
  if ( KsepShimDbDuringBoot )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    v10 = KeGetCurrentThread();
    v11 = v10->KernelApcDisable + 1;
    v10->KernelApcDisable = v11;
    if ( !v11
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
      && !v10->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    KseShimDatabaseBootRelease();
  }
  else
  {
    if ( KsepShimDbHandle )
    {
      v12 = KsepShimDbRefCount;
      if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v12 == 1) )
      {
        KsepShimDbUnmapFromMemory();
        KsepShimDbHandle = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
