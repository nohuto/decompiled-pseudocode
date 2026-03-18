/*
 * XREFs of ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0094160
 * Callers:
 *     <none>
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0013D74 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z @ 0x1C001ABDC (-WaitForSignal@_FX_DRIVER_GLOBALS@@QEAAXPEAVMxEvent@@PEBDPEAXKK@Z.c)
 *     ?FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z @ 0x1C00956D8 (-FreeAllReservedRequests@FxIoQueue@@AEAAXE@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::Dispose(FxIoQueue *this)
{
  unsigned __int8 v2; // r8
  FxPkgIo *m_PkgIo; // rdi
  unsigned __int8 v4; // r8
  FxIoQueueNode *p_m_IoPkgListNode; // rax
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx
  unsigned __int8 v8; // dl
  unsigned __int16 v9; // r9
  void *v10; // r9
  unsigned __int8 v11; // dl
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rax
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  unsigned __int8 PreviousIrql; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF

  if ( (this->m_ObjectFlags & 8) != 0 )
  {
    FxIoQueue::QueuePurge(this, 1u, 1u, 0LL, 0LL);
    FxNonPagedObject::Lock(this, &irql, v2);
    m_PkgIo = this->m_PkgIo;
    this->m_Disposing = 1;
    FxNonPagedObject::Lock(m_PkgIo, &PreviousIrql, v4);
    p_m_IoPkgListNode = &this->m_IoPkgListNode;
    Flink = this->m_IoPkgListNode.m_ListEntry.Flink;
    Blink = this->m_IoPkgListNode.m_ListEntry.Blink;
    if ( (FxIoQueueNode *)Flink->Blink != &this->m_IoPkgListNode || (FxIoQueueNode *)Blink->Flink != p_m_IoPkgListNode )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    v8 = PreviousIrql;
    this->m_IoPkgListNode.m_ListEntry.Blink = &this->m_IoPkgListNode.m_ListEntry;
    p_m_IoPkgListNode->m_ListEntry.Flink = &p_m_IoPkgListNode->m_ListEntry;
    FxNonPagedObject::Unlock(m_PkgIo, v8, (unsigned __int8)Flink);
    FxIoQueue::DispatchEvents(this, irql, 0LL, v9);
    v10 = (void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v10 = 0LL;
    _FX_DRIVER_GLOBALS::WaitForSignal(
      this->m_Globals,
      &this->m_FinishDisposing,
      "waiting for the queue to be deleted, WDFQUEUE",
      v10,
      this->m_Globals->FxVerifierDbgWaitForSignalTimeoutInSec,
      1);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::FreeAllReservedRequests(this, v11);
    m_FwdProgContext = this->m_FwdProgContext;
    if ( m_FwdProgContext )
    {
      m_FwdProgContext->m_PendedReserveLock.m_DbgFlagIsInitialized = 0;
      FxPoolFree(&this->m_FwdProgContext->m_NumberOfReservedRequests);
      this->m_FwdProgContext = 0LL;
    }
    m_SystemWorkItem = this->m_SystemWorkItem;
    if ( m_SystemWorkItem )
    {
      m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
      this->m_SystemWorkItem = 0LL;
    }
    if ( this->m_DpcQueued )
      KeFlushQueuedDpcs();
  }
  return 1;
}
