/*
 * XREFs of ExpReleaseFastMutexContended @ 0x14000CA8C
 * Callers:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     CcPinFileData @ 0x140031DE0 (CcPinFileData.c)
 *     CcSetDirtyPinnedData @ 0x14006F270 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F660 (CcSetDirtyInMask.c)
 *     FsRtlCheckOplockEx @ 0x14007A080 (FsRtlCheckOplockEx.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140092F70 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     FsRtlAcquireEofLock @ 0x1400C6C30 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x1400C6E40 (FsRtlReleaseEofLock.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400C73E0 (FsRtlReleaseHeaderMutex.c)
 *     CcUnpinFileDataEx @ 0x1400CF860 (CcUnpinFileDataEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpDelayDerefKCBWorker @ 0x140401510 (CmpDelayDerefKCBWorker.c)
 *     CmpAllocateKeyControlBlock @ 0x140437410 (CmpAllocateKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x1404375A0 (CmpFreeKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140437B40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x14000CAE8 (KeSetEventBoostPriorityEx.c)
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
