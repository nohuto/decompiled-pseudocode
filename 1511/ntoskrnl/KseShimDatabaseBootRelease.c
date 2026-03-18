/*
 * XREFs of KseShimDatabaseBootRelease @ 0x14053D4B4
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x14013C87C (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x1403B71B0 (KseShimDatabaseClose.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     SdbReleaseDatabase @ 0x1403B607C (SdbReleaseDatabase.c)
 */

__int64 KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  __int64 v2; // rdx
  signed __int8 v3; // cf
  __int64 v4; // rdi
  int v5; // eax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&KsepShimDbLock, 0LL, 0LL);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v4 = v1;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v1, (ULONG_PTR)&KsepShimDbLock);
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  if ( KsepShimDbDuringBoot )
  {
    v5 = KsepShimDbRefCount;
    if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v5 == 1) )
    {
      if ( KsepShimDbHandle )
      {
        SdbReleaseDatabase(KsepShimDbHandle, v2);
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
