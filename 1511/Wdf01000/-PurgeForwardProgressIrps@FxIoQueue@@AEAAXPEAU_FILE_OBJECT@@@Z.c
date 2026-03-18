/*
 * XREFs of ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C001E40C
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C000CB70 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000EC1C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001E238 (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C001E2C0 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 */

void __fastcall FxIoQueue::PurgeForwardProgressIrps(FxIoQueue *this, _FILE_OBJECT *FileObject)
{
  FxIoQueue *v2; // rcx
  _LIST_ENTRY cleanupList; // [rsp+20h] [rbp-18h] BYREF

  cleanupList.Blink = &cleanupList;
  cleanupList.Flink = &cleanupList;
  FxIoQueue::GetForwardProgressIrps(this, &cleanupList, FileObject);
  FxIoQueue::CancelIrps(v2, &cleanupList);
}
