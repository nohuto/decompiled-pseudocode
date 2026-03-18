/*
 * XREFs of CommonBuffer_QueueWorkItem @ 0x1C001D460
 * Callers:
 *     CommonBuffer_AcquireBuffers @ 0x1C0009294 (CommonBuffer_AcquireBuffers.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C0009960 (CommonBuffer_AcquireBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CommonBuffer_QueueWorkItem(char *Context)
{
  char v2; // di
  struct _DEVICE_OBJECT *v3; // rax
  struct _IO_WORKITEM *WorkItem; // rsi

  v2 = 0;
  v3 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
                                  WdfDriverGlobals,
                                  **((_QWORD **)Context + 1));
  WorkItem = IoAllocateWorkItem(v3);
  if ( WorkItem )
  {
    KeClearEvent((PRKEVENT)(Context + 88));
    IoQueueWorkItemEx(WorkItem, CommonBuffer_WorkItem, CriticalWorkQueue, Context);
    return 1;
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*((_QWORD *)Context + 1) + 64LL),
      3u,
      7u,
      0x1Au,
      (__int64)&WPP_ea947e51f0cea3a28a50faeec413c0d5_Traceguids);
  }
  return v2;
}
