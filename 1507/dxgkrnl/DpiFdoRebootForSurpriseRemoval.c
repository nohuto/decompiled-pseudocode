/*
 * XREFs of DpiFdoRebootForSurpriseRemoval @ 0x1C0168370
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00BBD90 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleDevicePower @ 0x1C00BC6D0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoRebootForSurpriseRemoval(struct _DEVICE_OBJECT *a1, unsigned int a2)
{
  unsigned int *DeviceExtension; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdi
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rax

  DeviceExtension = (unsigned int *)a1->DeviceExtension;
  v3 = 0;
  byte_1C0046C5A = 1;
  v4 = a2;
  WorkItem = IoAllocateWorkItem(a1);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, DpiFdoRebootWorkItem, DelayedWorkQueue, (PVOID)(unsigned int)v4);
  }
  else
  {
    v3 = -1073741670;
    v7 = (_QWORD *)WdLogNewEntry5_WdLowResource(v6);
    v7[3] = DpiFdoRebootForSurpriseRemoval;
    v7[4] = IoAllocateWorkItem;
    v7[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v7);
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v9, v8, v10);
    v11[3] = 275LL;
    v11[4] = 25LL;
    v11[5] = v4;
    v11[6] = DeviceExtension[257];
    v11[7] = DeviceExtension[258];
    WdLogEvent5_WdCriticalError(v11);
  }
  return v3;
}
