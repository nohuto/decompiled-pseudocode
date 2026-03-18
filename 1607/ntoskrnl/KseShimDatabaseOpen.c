/*
 * XREFs of KseShimDatabaseOpen @ 0x14048558C
 * Callers:
 *     KsepDbGetDriverShims @ 0x14048471C (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x140534FDC (KsepDbCacheReadDevice.c)
 *     KsepDbGetShimInfo @ 0x140652718 (KsepDbGetShimInfo.c)
 *     KseInitialize @ 0x14079DAE8 (KseInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KsepShimDbMapToMemory @ 0x140495074 (KsepShimDbMapToMemory.c)
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
      _InterlockedIncrement(&dword_140307390);
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
      _InterlockedIncrement(&dword_140307398);
      goto LABEL_8;
    }
    v6 = KsepShimDbMapToMemory();
    if ( v6 >= 0 )
    {
      ++KsepShimDbRefCount;
      *a1 = KsepShimDbHandle;
      _InterlockedIncrement(&dword_140307394);
      goto LABEL_8;
    }
    *a1 = 0LL;
    _InterlockedIncrement(&dword_14030739C);
  }
  v6 = -1073741823;
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
  return (unsigned int)v6;
}
