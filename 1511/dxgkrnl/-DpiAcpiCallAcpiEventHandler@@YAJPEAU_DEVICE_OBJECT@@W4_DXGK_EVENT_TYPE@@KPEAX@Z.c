/*
 * XREFs of ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C00282F0
 * Callers:
 *     ?DpiAcpiPowerStateCallback@@YAXPEAX00@Z @ 0x1C00103A0 (-DpiAcpiPowerStateCallback@@YAXPEAX00@Z.c)
 *     ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x1C0028420 (-DpiAcpiEventCallback@@YAXPEAXK@Z.c)
 *     DpiAcpiDockEventCallback @ 0x1C01719E0 (DpiAcpiDockEventCallback.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _IO_WORKITEM *WorkItem; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 v22; // rax

  v4 = 0;
  v5 = a3;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74727044u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = a2;
    PoolWithTag[1] = v5;
    *((_QWORD *)PoolWithTag + 1) = a4;
    WorkItem = IoAllocateWorkItem(DeviceObject);
    if ( WorkItem )
    {
      v22 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v22 + 24) = DpiAcpiCallAcpiEventHandler;
      *(_QWORD *)(v22 + 32) = v5;
      WdLogEvent5_WdEvent(v22);
      IoQueueWorkItemEx(WorkItem, DpiAcpiHandleAcpiEvent, DelayedWorkQueue, v14);
    }
    else
    {
      v4 = -1073741670;
      v21 = (_QWORD *)WdLogNewEntry5_WdLowResource(v17, v16, v19, v20);
      v21[3] = DpiAcpiCallAcpiEventHandler;
      v21[4] = IoAllocateWorkItem;
      v21[5] = -1073741670LL;
      WdLogEvent5_WdLowResource(v21);
      ExFreePoolWithTag(v14, 0);
    }
  }
  else
  {
    v4 = -1073741801;
    v15 = (_QWORD *)WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    v15[3] = DpiAcpiCallAcpiEventHandler;
    v15[4] = ExAllocatePoolWithTag;
    v15[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v15);
  }
  return v4;
}
