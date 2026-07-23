/*
 * XREFs of PnpInitializeDeviceEvents @ 0x1407BBB2C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KiInitializeMutant @ 0x140087474 (KiInitializeMutant.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 PnpInitializeDeviceEvents()
{
  unsigned int v0; // ebx
  PVOID PoolWithTag; // rax
  __int64 v2; // rcx

  v0 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x4A706E50u);
  PnpDeviceEventList = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    KiInitializeMutant((__int64)PoolWithTag + 8, 0, 1);
    v2 = PnpDeviceEventList;
    *(_DWORD *)(PnpDeviceEventList + 64) = 1;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_DWORD *)(v2 + 80) = 0;
    *(_WORD *)(v2 + 88) = 1;
    *(_BYTE *)(v2 + 90) = 6;
    *(_DWORD *)(v2 + 92) = 0;
    *(_QWORD *)(v2 + 104) = v2 + 96;
    *(_QWORD *)(v2 + 96) = v2 + 96;
    *(_QWORD *)(v2 + 128) = v2 + 120;
    *(_QWORD *)(v2 + 120) = v2 + 120;
    *(_DWORD *)v2 = 259;
    PnpNotificationInProgressLock.Event.Header.WaitListHead.Blink = &PnpNotificationInProgressLock.Event.Header.WaitListHead;
    PnpNotificationInProgressLock.Event.Header.WaitListHead.Flink = &PnpNotificationInProgressLock.Event.Header.WaitListHead;
    PnpEventQueueEmpty.Header.WaitListHead.Blink = &PnpEventQueueEmpty.Header.WaitListHead;
    PnpEventQueueEmpty.Header.WaitListHead.Flink = &PnpEventQueueEmpty.Header.WaitListHead;
    PnpNotificationInProgressLock.Count = 1;
    PnpNotificationInProgressLock.Owner = 0LL;
    PnpNotificationInProgressLock.Contention = 0;
    LOWORD(PnpNotificationInProgressLock.Event.Header.Lock) = 1;
    PnpNotificationInProgressLock.Event.Header.Size = 6;
    PnpNotificationInProgressLock.Event.Header.SignalState = 0;
    LOWORD(PnpEventQueueEmpty.Header.Lock) = 0;
    PnpEventQueueEmpty.Header.Size = 6;
    PnpEventQueueEmpty.Header.SignalState = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
