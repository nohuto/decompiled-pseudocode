/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x14066F738
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x14066D1A8 (ExSetFirmwareEnvironmentVariable.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140672C68 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x1400E718C (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x1404AC538 (ExLockUserBuffer.c)
 *     IoSetEnvironmentVariableEx @ 0x1405FE238 (IoSetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpSetFirmwareEnvironmentVariable(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        KPROCESSOR_MODE a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  struct _MDL *v13; // [rsp+38h] [rbp-10h] BYREF

  if ( a4 )
  {
    ExLockUserBuffer(a3, a4, a6, IoReadAccess, &v12, &v13);
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v10 = IoSetEnvironmentVariableEx(a1, a2, v12, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v13 )
    ExUnlockUserBuffer(v13);
  return v10;
}
