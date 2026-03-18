/*
 * XREFs of ?NotifyHardwareContentProtectionTeardown@DXGADAPTER@@QEAAXI@Z @ 0x1C0019854
 * Callers:
 *     DxgkHardwareContentProtectionTeardownCB @ 0x1C001D1A0 (DxgkHardwareContentProtectionTeardownCB.c)
 * Callees:
 *     ?HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01267B0 (-HandleAdapterTeardownEvent@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 */

void __fastcall DXGADAPTER::NotifyHardwareContentProtectionTeardown(DXGADAPTER *this, int a2)
{
  _QWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  struct _DEVICE_OBJECT *v8; // rcx
  __int64 v9; // rcx
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v11; // rax

  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v7 + 24) = 2449LL;
LABEL_7:
    WdLogEvent5_WdLowResource(v7);
    return;
  }
  *PoolWithTag = this;
  *((_DWORD *)PoolWithTag + 2) = a2;
  *((_DWORD *)PoolWithTag + 3) = PsGetCurrentProcessSessionId();
  v6[2] = *(_QWORD *)((char *)this + 252);
  v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 22);
  if ( KeGetCurrentIrql() < 2u )
  {
    HandleAdapterTeardownEvent(v8, v6, 0LL);
    return;
  }
  WorkItem = IoAllocateWorkItem(v8);
  if ( !WorkItem )
  {
    v7 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v7 + 24) = 2470LL;
    goto LABEL_7;
  }
  v11 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v11 + 24) = 2474LL;
  WdLogEvent5_WdEvent(v11);
  IoQueueWorkItemEx(WorkItem, HandleAdapterTeardownEvent, DelayedWorkQueue, v6);
}
