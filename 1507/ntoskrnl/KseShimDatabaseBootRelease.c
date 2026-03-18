/*
 * XREFs of KseShimDatabaseBootRelease @ 0x1405B2648
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1401699B4 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x1405770FC (KseShimDatabaseClose.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x140578BDC (SdbReleaseDatabase.c)
 */

void __fastcall KseShimDatabaseBootRelease(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  int v10; // eax
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&KsepShimDbLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v9 = v5;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v5, (ULONG_PTR)&KsepShimDbLock, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( KsepShimDbDuringBoot )
  {
    v10 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v10 == 1) )
    {
      if ( KsepShimDbHandle )
      {
        SdbReleaseDatabase(KsepShimDbHandle, v6);
        KsepShimDbHandle = 0LL;
        KsepPoolFreePaged(KsepShimDbAddress);
        KsepShimDbAddress = 0LL;
      }
      KsepShimDbDuringBoot = 0;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
