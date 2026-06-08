/*
 * XREFs of AcpiNotifyCallback @ 0x1C0005C60
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
  struct _IO_WORKITEM *v7; // rcx
  int v8; // ebx
  int v9; // ebx
  IO_WORKITEM_ROUTINE *v10; // rdx

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
          v7 = WorkItem;
          v8 = v6 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 2 )
              {
                IoFreeWorkItem(WorkItem);
                return;
              }
              v10 = (IO_WORKITEM_ROUTINE *)AcpiCppcHighestNotifyWorker;
            }
            else
            {
              v10 = AcpiCppcGuaranteedNotifyWorker;
            }
          }
          else
          {
            v10 = (IO_WORKITEM_ROUTINE *)&AcpiTStateNotifyWorker;
          }
          goto LABEL_16;
        }
        v10 = (IO_WORKITEM_ROUTINE *)&AcpiCStateNotifyWorker;
      }
      else
      {
        v10 = (IO_WORKITEM_ROUTINE *)&AcpiPStateNotifyWorker;
      }
    }
    else
    {
      v10 = AcpiOSCNotifyWorker;
    }
    v7 = WorkItem;
LABEL_16:
    IoQueueWorkItem(v7, v10, CriticalWorkQueue, WorkItem);
  }
}
