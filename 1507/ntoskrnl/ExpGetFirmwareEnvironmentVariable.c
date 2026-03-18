/*
 * XREFs of ExpGetFirmwareEnvironmentVariable @ 0x1406F1A38
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x14058417C (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405C2A9C (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     IoGetEnvironmentVariableEx @ 0x140678A7C (IoGetEnvironmentVariableEx.c)
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
  struct _KTHREAD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int EnvironmentVariable; // ebx
  signed __int32 v15; // eax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  struct _MDL *v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  if ( *a4 )
  {
    result = ExLockUserBuffer(a3, *a4, a6, IoWriteAccess, &v19, &v18);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    v19 = 0LL;
    v18 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeGetCurrentThread();
  v12 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, (__int64)a4);
  v13 = v12;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  qword_140325228 = (__int64)v11;
  EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, v19, (__int64)a4, a5);
  qword_140325228 = 0LL;
  v15 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
  if ( v15 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v15);
  KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v18 )
    ExUnlockUserBuffer(v18);
  return EnvironmentVariable;
}
