/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x1406B2578
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x1406AFFFC (ExSetFirmwareEnvironmentVariable.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406B5AA8 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     IoSetEnvironmentVariableEx @ 0x140628318 (IoSetEnvironmentVariableEx.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  struct _MDL *v16; // [rsp+38h] [rbp-10h] BYREF

  if ( a4 )
  {
    ExLockUserBuffer(a3, a4, a6, IoReadAccess, &v15, &v16);
  }
  else
  {
    v15 = 0LL;
    v16 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  v10 = IoSetEnvironmentVariableEx(a1, a2, v15, a4, a5);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  if ( v16 )
    ExUnlockUserBuffer(v16);
  return v10;
}
