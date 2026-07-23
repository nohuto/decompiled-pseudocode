/*
 * XREFs of CcChangeBackingFileObject @ 0x1401B12D0
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x1401333C4 (FsRtlChangeBackingFileObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ObFastReplaceObject @ 0x1400CADF4 (ObFastReplaceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall CcChangeBackingFileObject(_QWORD *a1, _QWORD *a2)
{
  _BYTE *v4; // rax
  signed __int8 v5; // cf
  _BYTE *v6; // rdi
  unsigned int v7; // ebx
  KIRQL v8; // al
  KIRQL v9; // bp
  __int64 v10; // rcx
  volatile __int64 *v11; // rcx
  _QWORD *v12; // rdi

  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CcChangeSharedCacheMapFileLock, 0LL, 0);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&CcChangeSharedCacheMapFileLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&CcChangeSharedCacheMapFileLock, v4, (ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  v7 = 0;
  if ( v6 )
    v6[26] |= 1u;
  v8 = KeAcquireQueuedSpinLock(5uLL);
  v9 = v8;
  if ( a1 && a1[5] != a2[5] )
  {
    KeReleaseQueuedSpinLock(5uLL, v8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v7 = -1073741584;
LABEL_19:
    KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
    return v7;
  }
  v10 = *(_QWORD *)(a2[5] + 8LL);
  if ( !v10 )
    goto LABEL_17;
  if ( (*(_DWORD *)(v10 + 152) & 0x100000) != 0 )
  {
    KeReleaseQueuedSpinLock(5uLL, v8);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
    v7 = -1073741637;
    goto LABEL_19;
  }
  v11 = (volatile __int64 *)(v10 + 96);
  v12 = (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( a1 )
  {
    if ( v12 != a1 )
    {
LABEL_17:
      KeReleaseQueuedSpinLock(5uLL, v8);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock);
      goto LABEL_19;
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
