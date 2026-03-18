/*
 * XREFs of UsbhInitGlobal @ 0x1C00266B4
 * Callers:
 *     DriverEntry @ 0x1C00263A0 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C002A1C0 (memset.c)
 */

__int64 UsbhInitGlobal()
{
  __int64 result; // rax

  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x1B8uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  KeInitializeSpinLock(&SpinLock);
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, SynchronizationEvent, 1u);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  WPP_MAIN_CB.Dpc.DeferredContext = (void *)0x378425548LL;
  dword_1C00665D8 = 1734964085;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 1734964085;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1734964085;
  WPP_MAIN_CB.ActiveThreadCount = 1734964085;
  *(_DWORD *)(&WPP_MAIN_CB.Spare1 + 1) = 1734964085;
  LODWORD(WPP_MAIN_CB.Reserved) = 1734964085;
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 3) = 1734964085;
  dword_1C00665E0 = 1734964085;
  qword_1C0066620 = (__int64)&qword_1C0066618;
  qword_1C0066618 = (__int64)&qword_1C0066618;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  qword_1C0066668 = (__int64)&qword_1C0066660;
  qword_1C0066660 = (__int64)&qword_1C0066660;
  result = 2LL;
  *(&WPP_MAIN_CB.AlignmentRequirement + 1) = 2;
  WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 2;
  WPP_MAIN_CB.Dpc.SystemArgument2 = &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  WPP_MAIN_CB.Dpc.SystemArgument1 = 0LL;
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (_KDPC *)0x8000001F4LL;
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = (_LIST_ENTRY *)32;
  LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 1;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  *(unsigned __int64 *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4) = 10LL;
  HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = 300;
  dword_1C0066628 = 3;
  *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) = 2000;
  dword_1C0066638 = 1;
  dword_1C0066690 = 25;
  return result;
}
