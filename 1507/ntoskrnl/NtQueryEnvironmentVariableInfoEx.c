/*
 * XREFs of NtQueryEnvironmentVariableInfoEx @ 0x1406F60A4
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     IoQueryEnvironmentVariableInfoEx @ 0x140678B18 (IoQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall NtQueryEnvironmentVariableInfoEx(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int EnvironmentVariableInfo; // ebx
  signed __int32 v14; // eax
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax

  if ( dword_1403254D0 != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
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
  EnvironmentVariableInfo = IoQueryEnvironmentVariableInfoEx(a1, a2, a3, a4);
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
  return EnvironmentVariableInfo;
}
