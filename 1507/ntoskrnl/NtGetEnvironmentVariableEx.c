/*
 * XREFs of NtGetEnvironmentVariableEx @ 0x1406F5584
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     IoGetEnvironmentVariableEx @ 0x140678A7C (IoGetEnvironmentVariableEx.c)
 */

__int64 __fastcall NtGetEnvironmentVariableEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int EnvironmentVariable; // ebx
  signed __int32 v15; // eax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax

  if ( dword_1403254D0 != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeGetCurrentThread();
  v12 = KeAbPreAcquire((ULONG_PTR)&ExpEnvironmentLock, 0LL, 0LL, a4);
  v13 = v12;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&ExpEnvironmentLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&ExpEnvironmentLock, v12);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  qword_140325228 = (__int64)v11;
  EnvironmentVariable = IoGetEnvironmentVariableEx(a1, a2, a3, a4, a5);
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
  return EnvironmentVariable;
}
