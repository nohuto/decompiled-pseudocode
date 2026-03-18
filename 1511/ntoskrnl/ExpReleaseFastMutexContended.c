/*
 * XREFs of ExpReleaseFastMutexContended @ 0x140020FFC
 * Callers:
 *     FsRtlReleaseEofLock @ 0x14001FAA0 (FsRtlReleaseEofLock.c)
 *     CcSetDirtyPinnedData @ 0x14001FFA0 (CcSetDirtyPinnedData.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     FsRtlReleaseHeaderMutex @ 0x140041EB0 (FsRtlReleaseHeaderMutex.c)
 *     CcCopyWriteEx @ 0x140077D10 (CcCopyWriteEx.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x1400D06C0 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     FsRtlAcquireEofLock @ 0x1400FFD60 (FsRtlAcquireEofLock.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     CmpAllocateKeyControlBlock @ 0x1403FA7E0 (CmpAllocateKeyControlBlock.c)
 *     CmpAddToDelayedClose @ 0x1403FB440 (CmpAddToDelayedClose.c)
 *     CmpDelayDerefKCBWorker @ 0x1403FB530 (CmpDelayDerefKCBWorker.c)
 *     CmpFreeKeyControlBlock @ 0x1403FCC40 (CmpFreeKeyControlBlock.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x14007CAE0 (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall ExpReleaseFastMutexContended(volatile signed __int32 *a1, signed __int32 a2)
{
  char v3; // cl
  signed __int32 v4; // r8d
  bool v5; // zf
  __int64 result; // rax
  char v7; // [rsp+40h] [rbp+8h] BYREF
  int Priority; // [rsp+48h] [rbp+10h] BYREF

  do
  {
    v3 = 0;
    v4 = a2 + 1;
    if ( (a2 & 2) == 0 )
    {
      v4 = a2 - 1;
      v3 = 1;
    }
    result = (unsigned int)_InterlockedCompareExchange(a1, v4, a2);
    v5 = a2 == (_DWORD)result;
    a2 = result;
  }
  while ( !v5 );
  if ( v3 )
  {
    Priority = KeGetCurrentThread()->Priority;
    return KeSetEventBoostPriorityEx((int)a1 + 24, (unsigned int)&v7, (unsigned int)&Priority, (_DWORD)a1, 1);
  }
  return result;
}
