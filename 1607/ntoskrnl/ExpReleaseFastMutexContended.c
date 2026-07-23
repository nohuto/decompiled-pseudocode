/*
 * XREFs of ExpReleaseFastMutexContended @ 0x14000C60C
 * Callers:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcSetDirtyPinnedData @ 0x14006EDF0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140092770 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     FsRtlAcquireEofLock @ 0x1400C4AD0 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x1400C4CE0 (FsRtlReleaseEofLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400C5280 (FsRtlReleaseHeaderMutex.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpDelayDerefKCBWorker @ 0x1404003D0 (CmpDelayDerefKCBWorker.c)
 *     CmpAllocateKeyControlBlock @ 0x1404362E0 (CmpAllocateKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x140436470 (CmpFreeKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140436A10 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x14000C668 (KeSetEventBoostPriorityEx.c)
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
