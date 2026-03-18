/*
 * XREFs of IoRegisterFsRegistrationChangeMountAware @ 0x140522AA0
 * Callers:
 *     IoRegisterFsRegistrationChange @ 0x1405F9FAC (IoRegisterFsRegistrationChange.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopGetFsRegistrationInProgress @ 0x1401BB668 (IopGetFsRegistrationInProgress.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     IopNotifyAlreadyRegisteredFileSystems @ 0x140522C24 (IopNotifyAlreadyRegisteredFileSystems.c)
 *     FsRtlSetDriverBacking @ 0x140522E10 (FsRtlSetDriverBacking.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChangeMountAware(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine,
        BOOLEAN SynchronizeWithMounts)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx
  __int64 *PoolWithTag; // rax
  __int64 **v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8

  result = FsRtlSetDriverBacking(DriverObject, 1LL);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( SynchronizeWithMounts )
  {
    if ( ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
      goto LABEL_4;
    if ( IopGetFsRegistrationInProgress() )
    {
      v8 = -1073741267;
      goto LABEL_8;
    }
  }
  ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
LABEL_4:
  if ( (__int64 *)IopFsNotifyChangeQueueHead != &IopFsNotifyChangeQueueHead
    && *(PDRIVER_OBJECT *)(qword_1402FB3F8 + 16) == DriverObject
    && *(PDRIVER_FS_NOTIFICATION *)(qword_1402FB3F8 + 24) == DriverNotificationRoutine )
  {
    ExReleaseResourceLite(&IopDatabaseResource);
    v8 = -1073741768;
LABEL_8:
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v8;
  }
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)257, 0x20uLL, 0x73466F49u);
  if ( !PoolWithTag )
  {
    ExReleaseResourceLite(&IopDatabaseResource);
    v8 = -1073741670;
    goto LABEL_8;
  }
  PoolWithTag[2] = (__int64)DriverObject;
  PoolWithTag[3] = (__int64)DriverNotificationRoutine;
  v10 = (__int64 **)qword_1402FB3F8;
  *PoolWithTag = (__int64)&IopFsNotifyChangeQueueHead;
  PoolWithTag[1] = (__int64)v10;
  if ( *v10 != &IopFsNotifyChangeQueueHead )
    __fastfail(3u);
  *v10 = PoolWithTag;
  qword_1402FB3F8 = (__int64)PoolWithTag;
  if ( SynchronizeWithMounts == 1 )
  {
    while ( IopMountsInProgress )
    {
      ++IopMountCompletionWaiters;
      ExReleaseResourceLite(&IopDatabaseResource);
      KeWaitForSingleObject(&IopMountCompletionEvent, Executive, 0, 0, 0LL);
      ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
      if ( --IopMountCompletionWaiters )
      {
        if ( !IopMountsInProgress )
          break;
      }
      KeResetEvent(&IopMountCompletionEvent);
    }
  }
  IopNotifyAlreadyRegisteredFileSystems(&IopNetworkFileSystemQueueHead, DriverNotificationRoutine, 0LL);
  LOBYTE(v11) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopCdRomFileSystemQueueHead, DriverNotificationRoutine, v11);
  LOBYTE(v12) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopDiskFileSystemQueueHead, DriverNotificationRoutine, v12);
  LOBYTE(v13) = 1;
  IopNotifyAlreadyRegisteredFileSystems(&IopTapeFileSystemQueueHead, DriverNotificationRoutine, v13);
  ExReleaseResourceLite(&IopDatabaseResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ObfReferenceObject(DriverObject);
  return 0;
}
