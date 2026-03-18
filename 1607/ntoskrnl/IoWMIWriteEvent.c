/*
 * XREFs of IoWMIWriteEvent @ 0x14012F930
 * Callers:
 *     PpmFireWmiEvent @ 0x14020B330 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x14020B3B0 (PpmWmiFireIdleAccountingEvent.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x14008C0E0 (ExInterlockedInsertTailList.c)
 *     WmipDoFindRegEntryByProviderId @ 0x1400C48A4 (WmipDoFindRegEntryByProviderId.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwTraceEvent @ 0x14022528C (EtwTraceEvent.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoWMIWriteEvent(PVOID WnodeEventItem)
{
  NTSTATUS v1; // edi
  int v3; // ebx
  struct _LIST_ENTRY *PoolWithTag; // rbp
  int v5; // ebx
  _DWORD *RegEntryByProviderId; // rax
  KIRQL v7; // r9
  struct _LIST_ENTRY *v8; // rbx
  NTSTATUS result; // eax
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx

  v1 = 0;
  if ( !WmipServiceDeviceObject )
    return -1073741823;
  v3 = *((_DWORD *)WnodeEventItem + 11);
  if ( (v3 & 0x60000) != 0 )
  {
    v10 = *(_DWORD *)WnodeEventItem;
    v11 = v3 & 0x20000;
    v12 = *((unsigned __int16 *)WnodeEventItem + 4);
    if ( (unsigned int)v10 < 0x30 )
      return -1073741789;
    if ( v11 )
    {
      if ( (unsigned int)v10 > 0xFFFF )
        return -2147483643;
    }
    else if ( v10 < 0 )
    {
      return -2147483643;
    }
    result = EtwTraceEvent(v12, WnodeEventItem, 48LL, 3222536192LL, 0);
    if ( v11 )
      return result;
  }
  PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x77696D57u);
  if ( !PoolWithTag )
    return -1073741670;
  v5 = *((_DWORD *)WnodeEventItem + 1);
  KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(v5);
  v8 = (struct _LIST_ENTRY *)RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement(RegEntryByProviderId + 12);
  KeReleaseSpinLock(&WmipRegistrationSpinLock, v7);
  *((_DWORD *)WnodeEventItem + 10) = *((_DWORD *)WnodeEventItem + 2);
  PoolWithTag[1].Flink = v8;
  PoolWithTag[1].Blink = (struct _LIST_ENTRY *)WnodeEventItem;
  ExInterlockedInsertTailList(&WmipNPEvent, PoolWithTag, &WmipNPNotificationSpinlock);
  if ( _InterlockedIncrement(&WmipEventWorkItems) == 1 )
    ExQueueWorkItem(&WmipEventWorkQueueItem, DelayedWorkQueue);
  return v1;
}
