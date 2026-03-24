/*
 * XREFs of KeyboardClassWWPowerUpComplete @ 0x1C0004E10
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassLogError @ 0x1C0004904 (KeyboardClassLogError.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005404 (WPP_RECORDER_SF_q.c)
 */

void __fastcall KeyboardClassWWPowerUpComplete(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _IO_REMOVE_LOCK *Context)
{
  int v5; // edx
  _QWORD *PoolWithTag; // rbx
  int v7; // r8d
  PIO_WORKITEM WorkItem; // rax
  NTSTATUS v9; // eax
  struct _IO_WORKITEM *v10; // rcx

  if ( Context[11].Common.RemoveEvent.Header.Size )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x4364624Bu);
    if ( !PoolWithTag )
    {
LABEL_5:
      WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v5, v7, 89);
      KeyboardClassLogError(*(void **)&Context->Common.Removed, -2147155954, 2, -1073741670, 0, 0LL, 0);
      return;
    }
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)&Context->Common.Removed);
    PoolWithTag[2] = WorkItem;
    if ( !WorkItem )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      goto LABEL_5;
    }
    *PoolWithTag = 0LL;
    PoolWithTag[1] = Context;
    v9 = IoAcquireRemoveLockEx(Context + 1, PoolWithTag, &File, 1u, 0x20u);
    v10 = (struct _IO_WORKITEM *)PoolWithTag[2];
    if ( v9 < 0 )
    {
      IoFreeWorkItem(v10);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      IoQueueWorkItem(v10, KeyboardClassCreateWaitWakeIrpWorker, DelayedWorkQueue, PoolWithTag);
    }
  }
}
