/*
 * XREFs of ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C0028730
 * Callers:
 *     ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C000F570 (-DpiAcpiPowerStateCallback@@YAXPEAX00@Z.c)
 *     ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x1C0028860 (-DpiAcpiEventCallback@@YAXPEAXK@Z.c)
 *     DpiAcpiDockEventCallback @ 0x1C016D1D0 (DpiAcpiDockEventCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiAcpiCallAcpiEventHandler(
        PDEVICE_OBJECT DeviceObject,
        enum _DXGK_EVENT_TYPE a2,
        unsigned int a3,
        void *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  _DWORD *PoolWithTag; // rax
  __int64 v10; // rcx
  void *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  struct _IO_WORKITEM *WorkItem; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rax

  v4 = 0;
  v5 = a3;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = a2;
    PoolWithTag[1] = v5;
    *((_QWORD *)PoolWithTag + 1) = a4;
    WorkItem = IoAllocateWorkItem(DeviceObject);
    if ( WorkItem )
    {
      v16 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v16 + 24) = DpiAcpiCallAcpiEventHandler;
      *(_QWORD *)(v16 + 32) = v5;
      WdLogEvent5_WdEvent(v16);
      IoQueueWorkItemEx(WorkItem, DpiAcpiHandleAcpiEvent, DelayedWorkQueue, v11);
    }
    else
    {
      v4 = -1073741670;
      v15 = (_QWORD *)WdLogNewEntry5_WdLowResource(v13);
      v15[3] = DpiAcpiCallAcpiEventHandler;
      v15[4] = IoAllocateWorkItem;
      v15[5] = -1073741670LL;
      WdLogEvent5_WdLowResource(v15);
      ExFreePoolWithTag(v11, 0);
    }
  }
  else
  {
    v4 = -1073741801;
    v12 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10);
    v12[3] = DpiAcpiCallAcpiEventHandler;
    v12[4] = ExAllocatePoolWithTag;
    v12[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v12);
  }
  return v4;
}
