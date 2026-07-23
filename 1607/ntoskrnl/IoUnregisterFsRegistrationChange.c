/*
 * XREFs of IoUnregisterFsRegistrationChange @ 0x140623CFC
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __stdcall IoUnregisterFsRegistrationChange(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *i; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rdx
  __int64 **v10; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
  for ( i = (__int64 *)IopFsNotifyChangeQueueHead; i != &IopFsNotifyChangeQueueHead; i = (__int64 *)*i )
  {
    if ( (PDRIVER_OBJECT)i[2] == DriverObject && (PDRIVER_FS_NOTIFICATION)i[3] == DriverNotificationRoutine )
    {
      v9 = (__int64 *)*i;
      v10 = (__int64 **)i[1];
      if ( *(__int64 **)(*i + 8) != i || *v10 != i )
        __fastfail(3u);
      *v10 = v9;
      v9[1] = (__int64)v10;
      ExFreePoolWithTag(i, 0);
      break;
    }
  }
  ExReleaseResourceLite(&IopDatabaseResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  ObfDereferenceObject(DriverObject);
}
