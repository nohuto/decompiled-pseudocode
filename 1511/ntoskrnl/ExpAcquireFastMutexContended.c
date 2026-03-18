/*
 * XREFs of ExpAcquireFastMutexContended @ 0x1400209FC
 * Callers:
 *     FsRtlReleaseEofLock @ 0x14001FAA0 (FsRtlReleaseEofLock.c)
 *     CcSetDirtyPinnedData @ 0x14001FFA0 (CcSetDirtyPinnedData.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     FsRtlAcquireHeaderMutex @ 0x140042D20 (FsRtlAcquireHeaderMutex.c)
 *     KeAcquireGuardedMutex @ 0x140043570 (KeAcquireGuardedMutex.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140043680 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     CcCopyWriteEx @ 0x140077D10 (CcCopyWriteEx.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     FsRtlAcquireEofLock @ 0x1400FFD60 (FsRtlAcquireEofLock.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     CmpAllocateKeyControlBlock @ 0x1403FA7E0 (CmpAllocateKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 * Callees:
 *     KeAbPreWait @ 0x140020C90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v2; // ebp
  int v5; // esi
  __int64 result; // rax
  int v7; // ett
  int v8; // ett

  ++*(_DWORD *)(BugCheckParameter2 + 16);
  v2 = 1;
  v5 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)BugCheckParameter2;
  do
  {
    while ( (result & 1) == 0 )
    {
      v8 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, result + v5, result);
      if ( v8 == (_DWORD)result )
      {
        if ( a2 )
          KeAbPreWait(a2);
        KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)BugCheckParameter2);
        v2 = 3;
        v5 = 2;
        if ( a2 )
          a2 = KeAbPreAcquire(BugCheckParameter2);
        goto LABEL_2;
      }
    }
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)BugCheckParameter2,
                             v2 ^ result,
                             result);
  }
  while ( v7 != (_DWORD)result );
  return result;
}
