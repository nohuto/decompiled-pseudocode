/*
 * XREFs of KseShimDatabaseClose @ 0x1403B71B0
 * Callers:
 *     KsepDbGetDriverShims @ 0x1403B70C8 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x1404FA314 (KsepDbCacheReadDevice.c)
 *     KsepDbGetShimInfo @ 0x14061D424 (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x140756FC0 (KseInitialize.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlAssert @ 0x1401F912C (RtlAssert.c)
 *     KsepShimDbUnmapFromMemory @ 0x1403B5DE0 (KsepShimDbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x14053D4B4 (KseShimDatabaseBootRelease.c)
 */

__int64 __fastcall KseShimDatabaseClose(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  int v7; // eax
  __int64 v8; // rcx
  char v9; // al

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&KsepShimDbLock, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v3, (ULONG_PTR)&KsepShimDbLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( a1 != KsepShimDbHandle )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v9 = KsepDebugFlag;
    KsepHistoryErrors[2 * v8 + 1] = -1073740768;
    KsepHistoryErrors[2 * v8] = 590203;
    if ( (v9 & 4) != 0 )
      RtlAssert("DbHandle == KsepShimDbHandle", "minkernel\\ntos\\kshim\\ksesdb.c", 0x17Bu, 0LL);
  }
  if ( KsepShimDbDuringBoot )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return KseShimDatabaseBootRelease();
  }
  else
  {
    if ( KsepShimDbHandle )
    {
      v7 = KsepShimDbRefCount;
      if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v7 == 1) )
      {
        KsepShimDbUnmapFromMemory();
        KsepShimDbHandle = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
