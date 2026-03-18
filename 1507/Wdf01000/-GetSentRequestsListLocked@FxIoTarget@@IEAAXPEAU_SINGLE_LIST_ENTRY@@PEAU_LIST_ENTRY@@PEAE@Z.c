/*
 * XREFs of ?GetSentRequestsListLocked@FxIoTarget@@IEAAXPEAU_SINGLE_LIST_ENTRY@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C0083AA0
 * Callers:
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C008391C (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 *     ?GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0083B40 (-GotoPurgeState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_PURGE_IO_ACTION@@PEAU_LIST_ENTRY@@PEAU_SINGLE_.c)
 *     ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0083D30 (-GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTR.c)
 *     ?GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0083F00 (-GotoStopState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxIoTarget::GetSentRequestsListLocked(
        FxIoTarget *this,
        _SINGLE_LIST_ENTRY *RequestListHead,
        _LIST_ENTRY *SendList,
        bool *AddedToList)
{
  _LIST_ENTRY *Blink; // rbx
  unsigned int RefCount; // ecx
  FxTagTracker *v8; // rax

  Blink = SendList->Blink;
  for ( *AddedToList = SendList->Flink != SendList; Blink != SendList; Blink = Blink->Blink )
  {
    RefCount = _InterlockedIncrement((volatile signed __int32 *)&Blink[-7].Flink + 1);
    if ( SLOBYTE(Blink[-6].Flink) >= 0 )
      v8 = 0LL;
    else
      v8 = (FxTagTracker *)Blink[-10].Blink;
    if ( v8 )
      FxTagTracker::UpdateTagHistory(
        v8,
        (void *)0x6C636E43,
        608,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        RefCount);
    Blink[1].Blink = (_LIST_ENTRY *)RequestListHead->Next;
    RequestListHead->Next = (_SINGLE_LIST_ENTRY *)&Blink[1].Blink;
  }
}
