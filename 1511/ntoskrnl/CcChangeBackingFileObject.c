/*
 * XREFs of CcChangeBackingFileObject @ 0x1401431E4
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x1400DCFD4 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     ObFastReplaceObject @ 0x14000D374 (ObFastReplaceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 */

__int64 __fastcall CcChangeBackingFileObject(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  unsigned int v7; // ebx
  KIRQL v8; // al
  KIRQL v9; // bp
  __int64 v10; // rcx
  volatile __int64 *v11; // rcx
  _QWORD *v12; // rdi

  v4 = KeAbPreAcquire((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&CcChangeSharedCacheMapFileLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&CcChangeSharedCacheMapFileLock, v4, (ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  v7 = 0;
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v8 = KeAcquireQueuedSpinLock(5uLL);
  v9 = v8;
  if ( a1 && a1[5] != a2[5] )
  {
    KeReleaseQueuedSpinLock(5uLL, v8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v7 = -1073741584;
LABEL_22:
    KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
    return v7;
  }
  v10 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v10 )
    goto LABEL_20;
  if ( (*(_DWORD *)(v10 + 152) & 0x100000) != 0 )
  {
    KeReleaseQueuedSpinLock(5uLL, v8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v7 = -1073741637;
    goto LABEL_22;
  }
  v11 = (volatile __int64 *)(v10 + 96);
  v12 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( a1 )
  {
    if ( v12 != a1 )
    {
LABEL_20:
      KeReleaseQueuedSpinLock(5uLL, v8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
      goto LABEL_22;
    }
  }
  ObFastReplaceObject(v11, (__int64)a2);
  KeReleaseQueuedSpinLock(5uLL, v9);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  ObDereferenceObjectDeferDeleteWithTag(v12, 0x746C6644u);
  return 0LL;
}
