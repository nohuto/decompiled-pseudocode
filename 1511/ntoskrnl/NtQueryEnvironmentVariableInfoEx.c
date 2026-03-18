/*
 * XREFs of NtQueryEnvironmentVariableInfoEx @ 0x140671F80
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IoQueryEnvironmentVariableInfoEx @ 0x1405FE1A8 (IoQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall NtQueryEnvironmentVariableInfoEx(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariableInfo; // ebx

  if ( dword_1402D6390 != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariableInfo = IoQueryEnvironmentVariableInfoEx(a1, a2, a3, a4);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return EnvironmentVariableInfo;
}
