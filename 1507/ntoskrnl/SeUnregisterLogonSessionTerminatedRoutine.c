/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutine @ 0x1406D5F6C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeUnregisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  __int64 v1; // r9
  NTSTATUS v2; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rbp
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rdi
  PSE_LOGON_SESSION_TERMINATED_ROUTINE v10; // rdi
  PVOID *v11; // rcx
  signed __int32 v12; // eax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  signed __int32 v15; // eax
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax

  v2 = 0;
  if ( !CallbackRoutine )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeGetCurrentThread();
  v7 = KeAbPreAcquire((ULONG_PTR)&SepRmNotifyMutex, 0LL, 0LL, v1);
  v8 = _interlockedbittestandreset((volatile signed __int32 *)&SepRmNotifyMutex, 0);
  v9 = v7;
  if ( !v8 )
    ExpAcquireFastMutexContended((ULONG_PTR)&SepRmNotifyMutex, v7);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (PSE_LOGON_SESSION_TERMINATED_ROUTINE)SeFileSystemNotifyRoutinesHead;
  v11 = &SeFileSystemNotifyRoutinesHead;
  qword_14036A8E0 = (__int64)v6;
  if ( !SeFileSystemNotifyRoutinesHead )
    goto LABEL_18;
  do
  {
    if ( *((PSE_LOGON_SESSION_TERMINATED_ROUTINE *)v10 + 1) == CallbackRoutine )
      break;
    v11 = (PVOID *)v10;
    v10 = *(PSE_LOGON_SESSION_TERMINATED_ROUTINE *)v10;
  }
  while ( v10 );
  if ( v10 )
  {
    *v11 = *(PVOID *)v10;
    qword_14036A8E0 = 0LL;
    v12 = _InterlockedCompareExchange((volatile signed __int32 *)&SepRmNotifyMutex, 1, 0);
    if ( v12 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&SepRmNotifyMutex, v12);
    KeAbPostRelease((ULONG_PTR)&SepRmNotifyMutex);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
LABEL_18:
    qword_14036A8E0 = 0LL;
    v15 = _InterlockedCompareExchange((volatile signed __int32 *)&SepRmNotifyMutex, 1, 0);
    if ( v15 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&SepRmNotifyMutex, v15);
    KeAbPostRelease((ULONG_PTR)&SepRmNotifyMutex);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return -1073741275;
  }
  return v2;
}
