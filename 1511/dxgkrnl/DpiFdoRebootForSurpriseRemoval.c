/*
 * XREFs of DpiFdoRebootForSurpriseRemoval @ 0x1C016CAA0
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C00C9E50 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleDevicePower @ 0x1C00CA970 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoRebootForSurpriseRemoval(struct _DEVICE_OBJECT *a1, unsigned int a2)
{
  unsigned int *DeviceExtension; // rsi
  unsigned int v3; // ebx
  __int64 v4; // rdi
  struct _IO_WORKITEM *WorkItem; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax

  DeviceExtension = (unsigned int *)a1->DeviceExtension;
  v3 = 0;
  byte_1C0046CDA = 1;
  v4 = a2;
  WorkItem = IoAllocateWorkItem(a1);
  if ( WorkItem )
  {
    IoQueueWorkItemEx(WorkItem, DpiFdoRebootWorkItem, DelayedWorkQueue, (PVOID)(unsigned int)v4);
  }
  else
  {
    v3 = -1073741670;
    v10 = (_QWORD *)WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    v10[3] = DpiFdoRebootForSurpriseRemoval;
    v10[4] = IoAllocateWorkItem;
    v10[5] = -1073741670LL;
    WdLogEvent5_WdLowResource(v10);
    v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11, v13);
    v14[3] = 275LL;
    v14[4] = 25LL;
    v14[5] = v4;
    v14[6] = DeviceExtension[265];
    v14[7] = DeviceExtension[266];
    WdLogEvent5_WdCriticalError(v14);
  }
  return v3;
}
