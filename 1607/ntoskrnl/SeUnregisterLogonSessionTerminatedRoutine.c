/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutine @ 0x140693590
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeUnregisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  NTSTATUS v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  PSE_LOGON_SESSION_TERMINATED_ROUTINE v5; // rbx
  PVOID *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v1 = 0;
  if ( !CallbackRoutine )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  v5 = (PSE_LOGON_SESSION_TERMINATED_ROUTINE)SeFileSystemNotifyRoutinesHead;
  v6 = &SeFileSystemNotifyRoutinesHead;
  if ( !SeFileSystemNotifyRoutinesHead )
    goto LABEL_8;
  do
  {
    if ( *((PSE_LOGON_SESSION_TERMINATED_ROUTINE *)v5 + 1) == CallbackRoutine )
      break;
    v6 = (PVOID *)v5;
    v5 = *(PSE_LOGON_SESSION_TERMINATED_ROUTINE *)v5;
  }
  while ( v5 );
  if ( v5 )
  {
    *v6 = *(PVOID *)v5;
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
LABEL_8:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
    return -1073741275;
  }
  return v1;
}
