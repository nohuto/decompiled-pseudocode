/*
 * XREFs of IoUnregisterFsRegistrationChange @ 0x1406745A4
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rcx
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax
  __int64 *v8; // rdx
  __int64 **v9; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  for ( i = (__int64 *)IopFsNotifyChangeQueueHead; i != &IopFsNotifyChangeQueueHead; i = (__int64 *)*i )
  {
    if ( (PDRIVER_OBJECT)i[2] == DriverObject && (PDRIVER_FS_NOTIFICATION)i[3] == DriverNotificationRoutine )
    {
      v8 = (__int64 *)*i;
      v9 = (__int64 **)i[1];
      if ( *(__int64 **)(*i + 8) != i || *v9 != i )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = (__int64)v9;
      ExFreePoolWithTag(i, 0);
      break;
    }
  }
  ExReleaseResourceLite(&IopDatabaseResource);
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  ObfDereferenceObject(DriverObject);
}
