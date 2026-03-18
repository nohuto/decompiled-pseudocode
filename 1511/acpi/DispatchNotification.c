/*
 * XREFs of DispatchNotification @ 0x1C003FA70
 * Callers:
 *     NotifyHandler @ 0x1C003FC90 (NotifyHandler.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C000BC9C (ExAllocateFromNPagedLookasideList.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0016A14 (ACPIInitReferenceDeviceExtension.c)
 */

__int64 __fastcall DispatchNotification(__int64 a1, int a2)
{
  unsigned int v4; // edi
  KIRQL v5; // al
  __int64 v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  char v10; // bl

  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&NotifyHandlerLock);
  v6 = *(_QWORD *)(a1 + 336);
  KeReleaseSpinLock(&NotifyHandlerLock, v5);
  if ( v6 )
  {
    v7 = ExAllocateFromNPagedLookasideList(&NotificationContextLookAsideList);
    v8 = v7;
    if ( v7 )
    {
      v7[1] = v7;
      *v7 = v7;
      *((_DWORD *)v7 + 4) = a2;
      KeWaitForSingleObject((PVOID)(a1 + 848), Executive, 0, 0, 0LL);
      v9 = *(_QWORD **)(a1 + 816);
      *v8 = a1 + 808;
      v8[1] = v9;
      if ( *v9 != a1 + 808 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(a1 + 816) = v8;
      v10 = *(_BYTE *)(a1 + 880);
      if ( !v10 )
        *(_BYTE *)(a1 + 880) = 1;
      KeSetEvent((PRKEVENT)(a1 + 848), 0, 0);
      if ( !v10 )
      {
        ACPIInitReferenceDeviceExtension(a1);
        ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(a1 + 872), DelayedWorkQueue);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v4;
}
