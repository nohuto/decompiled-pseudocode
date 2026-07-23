/*
 * XREFs of KseShimDatabaseOpen @ 0x140514914
 * Callers:
 *     KsepDbGetDriverShims @ 0x140513AA4 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x14053551C (KsepDbCacheReadDevice.c)
 *     KsepDbGetShimInfo @ 0x1406527FC (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KsepShimDbMapToMemory @ 0x140495B04 (KsepShimDbMapToMemory.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rdi
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&KsepShimDbLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v3, (ULONG_PTR)&KsepShimDbLock);
  if ( v5 )
    v5[26] |= 1u;
  if ( KsepShimDbDuringBoot )
  {
    if ( KsepShimDbHandle )
    {
      ++KsepShimDbRefCount;
      v6 = 0;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1403073D0);
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
      _InterlockedIncrement(&dword_1403073D8);
      goto LABEL_8;
    }
    v6 = KsepShimDbMapToMemory();
    if ( v6 >= 0 )
    {
      ++KsepShimDbRefCount;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_1403073D4);
      goto LABEL_8;
    }
    *a1 = 0LL;
    _InterlockedIncrement(&dword_1403073DC);
  }
  v6 = -1073741823;
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return (unsigned int)v6;
}
