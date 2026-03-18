/*
 * XREFs of DpiIndirectCbDisableRenderD3Requests @ 0x1C019B030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DpiIndirectCbDisableRenderD3Requests(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  _DWORD *DeviceExtension; // rax
  struct _IO_WORKITEM *WorkItem; // rdi
  __int64 v6; // rcx
  char *v7; // rbx
  __int64 v9; // rax

  if ( !a1 )
    return 3221225485LL;
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension
    || DeviceExtension[4] != 1953656900
    || DeviceExtension[5] != 2
    || !*((_BYTE *)DeviceExtension + 1143) )
  {
    return 3221225485LL;
  }
  WorkItem = IoAllocateWorkItem(a1);
  v7 = (char *)operator new(0xCuLL, 0x74727044u, PagedPool);
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    *((_DWORD *)v7 + 2) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  if ( WorkItem )
  {
    if ( v7 )
    {
      *(_DWORD *)v7 = a2;
      *(_QWORD *)(v7 + 4) = a3;
      IoQueueWorkItemEx(
        WorkItem,
        (PIO_WORKITEM_ROUTINE_EX)DpiIndirectCbDisableRenderD3RequestsWorker,
        DelayedWorkQueue,
        v7);
      return 0LL;
    }
    IoFreeWorkItem(WorkItem);
  }
  if ( v7 )
    operator delete(v7);
  v9 = WdLogNewEntry5_WdLowResource(v6);
  *(_QWORD *)(v9 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v9);
  return 3221225626LL;
}
