/*
 * XREFs of MouseClassWWPowerUpComplete @ 0x1C0004A10
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassLogError @ 0x1C0004504 (MouseClassLogError.c)
 *     WPP_RECORDER_SF_q @ 0x1C0005094 (WPP_RECORDER_SF_q.c)
 */

void __fastcall MouseClassWWPowerUpComplete(
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

  if ( BYTE1(Context[10].Common.RemoveEvent.Header.WaitListHead.Blink) )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x20uLL, 0x43756F4Du);
    if ( !PoolWithTag )
    {
LABEL_5:
      WPP_RECORDER_SF_q(WPP_GLOBAL_Control->DeviceExtension, v5, v7, 84);
      MouseClassLogError(*(void **)&Context->Common.Removed, -2147155954, 1, -1073741670, 0, 0LL, 0);
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
      IoQueueWorkItem(v10, MouseClassCreateWaitWakeIrpWorker, DelayedWorkQueue, PoolWithTag);
    }
  }
}
