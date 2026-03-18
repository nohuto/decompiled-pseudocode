/*
 * XREFs of SeRegisterLogonSessionTerminatedRoutine @ 0x1405C0910
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall SeRegisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  _QWORD *PoolWithTag; // rdi
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  signed __int32 v7; // eax
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax

  if ( !CallbackRoutine )
    return -1073741811;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)257, 0x10uLL, 0x53466553u);
  if ( !PoolWithTag )
    return -1073741670;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&SepRmNotifyMutex, 0LL, 0LL, v3);
  v6 = v5;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&SepRmNotifyMutex, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&SepRmNotifyMutex, v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  *PoolWithTag = SeFileSystemNotifyRoutinesHead;
  PoolWithTag[1] = CallbackRoutine;
  SeFileSystemNotifyRoutinesHead = PoolWithTag;
  qword_14036A8E0 = 0LL;
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)&SepRmNotifyMutex, 1, 0);
  if ( v7 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&SepRmNotifyMutex, v7);
  KeAbPostRelease((ULONG_PTR)&SepRmNotifyMutex);
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0;
}
