/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x1406B0F7C
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x140548380 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140581580 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x1406281EC (IoGetEnvironmentVariableEx.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _MDL *v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  if ( *a4 )
  {
    result = ExLockUserBuffer(a3, *a4, a6, IoWriteAccess, &v16, &v15);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v16 = 0LL;
    v15 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, v16, (__int64)a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  if ( v15 )
    ExUnlockUserBuffer(v15);
  return EnvironmentVariable;
}
