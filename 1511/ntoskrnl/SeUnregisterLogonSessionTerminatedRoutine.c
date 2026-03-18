/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutine @ 0x14065412C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeUnregisterLogonSessionTerminatedRoutine(PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine)
{
  NTSTATUS v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  PSE_LOGON_SESSION_TERMINATED_ROUTINE v5; // rbx
  PVOID *v6; // rdx

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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
LABEL_8:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741275;
  }
  return v1;
}
