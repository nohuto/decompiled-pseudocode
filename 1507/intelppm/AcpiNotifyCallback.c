/*
 * XREFs of AcpiNotifyCallback @ 0x1C0004650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AcpiNotifyCallback(PDEVICE_OBJECT *a1, int a2)
{
  struct _IO_WORKITEM *WorkItem; // rax
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  IO_WORKITEM_ROUTINE *v8; // rdx

  WorkItem = IoAllocateWorkItem(*a1);
  if ( WorkItem )
  {
    v4 = a2 - 8;
    if ( v4 )
    {
      v5 = v4 - 120;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 != 1 )
            {
              IoFreeWorkItem(WorkItem);
              return;
            }
            v8 = AcpiCPCNotifyWorker;
          }
          else
          {
            v8 = (IO_WORKITEM_ROUTINE *)&AcpiTStateNotifyWorker;
          }
        }
        else
        {
          v8 = (IO_WORKITEM_ROUTINE *)&AcpiCStateNotifyWorker;
        }
      }
      else
      {
        v8 = (IO_WORKITEM_ROUTINE *)&AcpiPStateNotifyWorker;
      }
    }
    else
    {
      v8 = AcpiOSCNotifyWorker;
    }
    IoQueueWorkItem(WorkItem, v8, CriticalWorkQueue, WorkItem);
  }
}
