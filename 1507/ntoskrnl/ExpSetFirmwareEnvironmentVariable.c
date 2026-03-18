/*
 * XREFs of ExpSetFirmwareEnvironmentVariable @ 0x1406F3230
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x1406F0AB4 (ExSetFirmwareEnvironmentVariable.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406F7144 (NtSetSystemEnvironmentValueEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     IoSetEnvironmentVariableEx @ 0x140678BA8 (IoSetEnvironmentVariableEx.c)
 */

__int64 __fastcall ExpSetFirmwareEnvironmentVariable(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        KPROCESSOR_MODE a6)
{
  int v6; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // ebx
  signed __int32 v14; // eax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  struct _MDL *v19; // [rsp+38h] [rbp-20h] BYREF

  v6 = a4;
  if ( (_DWORD)a4 )
  {
    ExLockUserBuffer(a3, a4, a6, IoReadAccess, &v18, &v19);
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = KeGetCurrentThread();
  v11 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, a4);
  v12 = v11;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  qword_140325228 = (__int64)v10;
  v13 = IoSetEnvironmentVariableEx(a1, a2, v18, v6, a5);
  qword_140325228 = 0LL;
  v14 = _InterlockedCompareExchange((volatile signed __int32 *)&ExpEnvironmentLock, 1, 0);
  if ( v14 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&ExpEnvironmentLock, v14);
  KeAbPostRelease((ULONG_PTR)&ExpEnvironmentLock);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v19 )
    ExUnlockUserBuffer(v19);
  return v13;
}
