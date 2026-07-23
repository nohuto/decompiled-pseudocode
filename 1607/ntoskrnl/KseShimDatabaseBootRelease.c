/*
 * XREFs of KseShimDatabaseBootRelease @ 0x14056EC10
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1401457A8 (PnpCompleteSystemStartProcess.c)
 *     KseShimDatabaseClose @ 0x140513B88 (KseShimDatabaseClose.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     SdbReleaseDatabase @ 0x1404CEA90 (SdbReleaseDatabase.c)
 */

__int64 KseShimDatabaseBootRelease()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v1; // rax
  __int64 v2; // rdx
  signed __int8 v3; // cf
  _BYTE *v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&KsepShimDbLock, 0LL, 0);
  v3 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v4 = v1;
  if ( v3 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v1, (ULONG_PTR)&KsepShimDbLock);
  if ( v4 )
    v4[26] |= 1u;
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
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
}
