/*
 * XREFs of GetIoQueueList_ProcessQueueListEntry @ 0x1C0095028
 * Callers:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C000B100 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C005BDB8 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

void __fastcall GetIoQueueList_ProcessQueueListEntry(_LIST_ENTRY *QueueLE, _SINGLE_LIST_ENTRY *SListHead, void *a3)
{
  _LIST_ENTRY *Next; // rax
  unsigned int RefCount; // edx
  _LIST_ENTRY *Blink; // rcx

  if ( LODWORD(QueueLE[1].Flink) == 1 )
  {
    Next = (_LIST_ENTRY *)SListHead->Next;
    SListHead->Next = (_SINGLE_LIST_ENTRY *)&QueueLE[1].Blink;
    QueueLE[1].Blink = Next;
    RefCount = _InterlockedIncrement((volatile signed __int32 *)&QueueLE[-56].Flink + 1);
    if ( SLOBYTE(QueueLE[-55].Flink) >= 0 )
      Blink = 0LL;
    else
      Blink = QueueLE[-59].Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Blink,
        (void *)0x65776F70,
        1478,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
        TagAddRef,
        RefCount);
  }
}
