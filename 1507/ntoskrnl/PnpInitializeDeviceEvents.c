/*
 * XREFs of PnpInitializeDeviceEvents @ 0x1407E71F4
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400756B8 (KiInitializeMutant.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
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
    qword_140349368 = (__int64)&qword_140349360;
    qword_140349360 = (__int64)&qword_140349360;
    PnpEventQueueEmpty.Header.WaitListHead.Blink = &PnpEventQueueEmpty.Header.WaitListHead;
    PnpEventQueueEmpty.Header.WaitListHead.Flink = &PnpEventQueueEmpty.Header.WaitListHead;
    LODWORD(PnpNotificationInProgressLock) = 1;
    qword_140349348 = 0LL;
    dword_140349350 = 0;
    word_140349358 = 1;
    byte_14034935A = 6;
    dword_14034935C = 0;
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
