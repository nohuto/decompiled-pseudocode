/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutineEx @ 0x140549818
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeRegisterLogonSessionTerminatedRoutineEx(__int64 a1)
{
  _QWORD *PoolWithTag; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( !a1 )
    return 3221225485LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)257, 0x10uLL, 0x53466553u);
  if ( !PoolWithTag )
    return 3221225626LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  *PoolWithTag = SeFileSystemNotifyRoutinesExHead;
  PoolWithTag[1] = a1;
  SeFileSystemNotifyRoutinesExHead = PoolWithTag;
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return 0LL;
}
