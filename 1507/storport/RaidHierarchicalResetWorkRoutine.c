/*
 * XREFs of RaidHierarchicalResetWorkRoutine @ 0x1C0031EA0
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     StorLogIoError @ 0x1C0030764 (StorLogIoError.c)
 *     RaidUnitHierarchicalReset @ 0x1C0032BD0 (RaidUnitHierarchicalReset.c)
 */

void __fastcall RaidHierarchicalResetWorkRoutine(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  void *DeviceExtension; // rdi
  struct _IO_WORKITEM *v4; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 186, &LockHandle);
  v4 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 183);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v4 == Context )
  {
    StorLogIoError(*((_QWORD *)DeviceExtension + 3), *((_DWORD *)DeviceExtension + 22), -2147221375, 1);
    RaidUnitHierarchicalReset(DeviceExtension);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)DeviceExtension + 186, &LockHandle);
    if ( *((struct _IO_WORKITEM **)DeviceExtension + 183) == Context )
    {
      *((_QWORD *)DeviceExtension + 183) = 0LL;
      *((_DWORD *)DeviceExtension + 368) = 0;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  IoFreeWorkItem(Context);
  RaUnitReleaseRemoveLock((__int64)DeviceExtension);
}
