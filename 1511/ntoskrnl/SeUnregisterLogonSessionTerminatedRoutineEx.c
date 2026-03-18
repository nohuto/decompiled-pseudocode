/*
 * XREFs of SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1406541F4
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeUnregisterLogonSessionTerminatedRoutineEx(PVOID a1)
{
  unsigned int v1; // edi
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rbx
  PVOID *v6; // rdx

  v1 = 0;
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  v5 = (PVOID *)SeFileSystemNotifyRoutinesExHead;
  v6 = &SeFileSystemNotifyRoutinesExHead;
  if ( !SeFileSystemNotifyRoutinesExHead )
    goto LABEL_8;
  do
  {
    if ( v5[1] == a1 )
      break;
    v6 = v5;
    v5 = (PVOID *)*v5;
  }
  while ( v5 );
  if ( v5 )
  {
    *v6 = *v5;
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
LABEL_8:
    ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741275;
  }
  return v1;
}
