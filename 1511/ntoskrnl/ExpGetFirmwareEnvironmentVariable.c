/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x14066E12C
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x14050CD48 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x14054B5F0 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x1405FE10C (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpGetFirmwareEnvironmentVariable(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        KPROCESSOR_MODE a6)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariable; // ebx
  struct _MDL *v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  if ( *a4 )
  {
    result = ExLockUserBuffer(a3, *a4, a6, IoWriteAccess, &v13, &v12);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v13 = 0LL;
    v12 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, v13, (__int64)a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v12 )
    ExUnlockUserBuffer(v12);
  return EnvironmentVariable;
}
