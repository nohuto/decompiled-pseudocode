/*
 * XREFs of CcChangeBackingFileObject @ 0x1401276BC
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140127504 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReplaceObject @ 0x1400864A0 (ObFastReplaceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall CcChangeBackingFileObject(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  unsigned int v10; // ebx
  KIRQL v11; // al
  KIRQL v12; // r14
  __int64 v13; // rcx
  volatile __int64 *v14; // rcx
  _QWORD *v15; // rdi

  v6 = KeAbPreAcquire((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&CcChangeSharedCacheMapFileLock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&CcChangeSharedCacheMapFileLock, v6, (ULONG_PTR)&CcChangeSharedCacheMapFileLock, v7);
  v10 = 0;
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v11 = KeAcquireQueuedSpinLock(5uLL);
  v12 = v11;
  if ( a1 && a1[5] != a2[5] )
  {
    KeReleaseQueuedSpinLock(5uLL, v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v10 = -1073741584;
LABEL_21:
    KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
    return v10;
  }
  v13 = *(_QWORD *)(a2[5] + 8LL);
  if ( (*(_DWORD *)(v13 + 152) & 0x100000) != 0 )
  {
    KeReleaseQueuedSpinLock(5uLL, v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v10 = -1073741637;
    goto LABEL_21;
  }
  v14 = (volatile __int64 *)(v13 + 96);
  v15 = (_QWORD *)(*v14 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( a1 && v15 != a1 )
  {
    KeReleaseQueuedSpinLock(5uLL, v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    goto LABEL_21;
  }
  ObFastReplaceObject(v14, (__int64)a2);
  KeReleaseQueuedSpinLock(5uLL, v12);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  ObDereferenceObjectDeferDeleteWithTag(v15, 0x746C6644u);
  return 0LL;
}
