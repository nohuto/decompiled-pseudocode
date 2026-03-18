/*
 * XREFs of IoRegisterFsRegistrationChangeMountAware @ 0x14058FA68
 * Callers:
 *     IoRegisterFsRegistrationChange @ 0x140674238 (IoRegisterFsRegistrationChange.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopGetFsRegistrationInProgress @ 0x1401F69A4 (IopGetFsRegistrationInProgress.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopNotifyAlreadyRegisteredFileSystems @ 0x14058FC18 (IopNotifyAlreadyRegisteredFileSystems.c)
 *     FsRtlSetDriverBacking @ 0x14058FE24 (FsRtlSetDriverBacking.c)
 */

NTSTATUS __stdcall IoRegisterFsRegistrationChangeMountAware(
        PDRIVER_OBJECT DriverObject,
        PDRIVER_FS_NOTIFICATION DriverNotificationRoutine,
        BOOLEAN SynchronizeWithMounts)
{
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rcx
  __int16 v9; // ax
  __int64 *PoolWithTag; // rax
  __int64 **v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax

  result = FsRtlSetDriverBacking(DriverObject, 1LL);
  if ( result < 0 )
    return result;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !SynchronizeWithMounts )
    goto LABEL_22;
  if ( ExAcquireResourceExclusiveLite(&IopDatabaseResource, 0) )
  {
LABEL_4:
    if ( (__int64 *)IopFsNotifyChangeQueueHead != &IopFsNotifyChangeQueueHead
      && *(PDRIVER_OBJECT *)(qword_14034B878 + 16) == DriverObject
      && *(PDRIVER_FS_NOTIFICATION *)(qword_14034B878 + 24) == DriverNotificationRoutine )
    {
      ExReleaseResourceLite(&IopDatabaseResource);
      v8 = KeGetCurrentThread();
      v9 = v8->KernelApcDisable + 1;
      v8->KernelApcDisable = v9;
      if ( !v9
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
        && !v8->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return -1073741768;
    }
    else
    {
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)257, 0x20uLL, 0x73466F49u);
      if ( PoolWithTag )
      {
        PoolWithTag[2] = (__int64)DriverObject;
        PoolWithTag[3] = (__int64)DriverNotificationRoutine;
        v11 = (__int64 **)qword_14034B878;
        *PoolWithTag = (__int64)&IopFsNotifyChangeQueueHead;
        PoolWithTag[1] = (__int64)v11;
        if ( *v11 != &IopFsNotifyChangeQueueHead )
          __fastfail(3u);
        *v11 = PoolWithTag;
        qword_14034B878 = (__int64)PoolWithTag;
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
        LOBYTE(v12) = 1;
        IopNotifyAlreadyRegisteredFileSystems(&IopCdRomFileSystemQueueHead, DriverNotificationRoutine, v12);
        LOBYTE(v13) = 1;
        IopNotifyAlreadyRegisteredFileSystems(&IopDiskFileSystemQueueHead, DriverNotificationRoutine, v13);
        LOBYTE(v14) = 1;
        IopNotifyAlreadyRegisteredFileSystems(&IopTapeFileSystemQueueHead, DriverNotificationRoutine, v14);
        ExReleaseResourceLite(&IopDatabaseResource);
        v15 = KeGetCurrentThread();
        v16 = v15->KernelApcDisable + 1;
        v15->KernelApcDisable = v16;
        if ( !v16
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
          && !v15->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        ObfReferenceObject(DriverObject);
        return 0;
      }
      else
      {
        ExReleaseResourceLite(&IopDatabaseResource);
        v19 = KeGetCurrentThread();
        v20 = v19->KernelApcDisable + 1;
        v19->KernelApcDisable = v20;
        if ( !v20
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
          && !v19->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return -1073741670;
      }
    }
  }
  if ( !IopGetFsRegistrationInProgress() )
  {
LABEL_22:
    ExAcquireResourceExclusiveLite(&IopDatabaseResource, 1u);
    goto LABEL_4;
  }
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return -1073741267;
}
