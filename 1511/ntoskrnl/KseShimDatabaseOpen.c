/*
 * XREFs of KseShimDatabaseOpen @ 0x1403B8594
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
 *     KsepShimDbMapToMemory @ 0x1403B5C58 (KsepShimDbMapToMemory.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  int v6; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&KsepShimDbLock, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v3, (ULONG_PTR)&KsepShimDbLock);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( KsepShimDbDuringBoot )
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v6 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1402E22D0);
      goto LABEL_8;
    }
    *a1 = 0LL;
  }
  else
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v6 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1402E22D8);
      goto LABEL_8;
    }
    v6 = KsepShimDbMapToMemory();
    if ( v6 >= 0 )
    {
      ++KsepShimDbRefCount;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1402E22D4);
      goto LABEL_8;
    }
    *a1 = 0LL;
    _InterlockedIncrement(&dword_1402E22DC);
  }
  v6 = -1073741823;
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v6;
}
