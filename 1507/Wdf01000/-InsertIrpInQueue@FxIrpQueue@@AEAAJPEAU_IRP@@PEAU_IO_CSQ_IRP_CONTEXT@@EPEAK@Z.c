/*
 * XREFs of ?InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z @ 0x1C002D714
 * Callers:
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00074C4 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00206C4 (-InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z @ 0x1C0084254 (-PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C002D644 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxIrpQueue::InsertIrpInQueue(
        FxIrpQueue *this,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *Context,
        unsigned __int8 InsertInHead)
{
  _LIST_ENTRY *p_ListEntry; // rax
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *Flink; // rdx
  __int64 v9; // r10
  __int64 v10; // r11
  FxIrp v11; // [rsp+38h] [rbp+10h] BYREF

  v11.m_Irp = Irp;
  if ( Context )
  {
    Irp->Tail.Overlay.DriverContext[3] = Context;
    Context->Irp = Irp;
    Context->Csq = (_IO_CSQ *)this;
    Context->Type = 1;
  }
  else
  {
    Irp->Tail.Overlay.DriverContext[3] = this;
  }
  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  if ( InsertInHead )
  {
    Flink = this->m_Queue.Flink;
    p_ListEntry->Flink = this->m_Queue.Flink;
    p_ListEntry->Blink = &this->m_Queue;
    if ( (FxIrpQueue *)Flink->Blink != this )
      __fastfail(3u);
    Flink->Blink = p_ListEntry;
    this->m_Queue.Flink = p_ListEntry;
  }
  else
  {
    Blink = this->m_Queue.Blink;
    p_ListEntry->Flink = &this->m_Queue;
    p_ListEntry->Blink = Blink;
    if ( (FxIrpQueue *)Blink->Flink != this )
      __fastfail(3u);
    Blink->Flink = p_ListEntry;
    this->m_Queue.Blink = p_ListEntry;
  }
  ++this->m_RequestCount;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
  if ( !Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    return 0LL;
  FxIrpQueue::RemoveIrpFromListEntry(this, &v11);
  if ( v10 )
    *(_QWORD *)(v10 + 8) = 0LL;
  *(_QWORD *)(v9 + 144) = 0LL;
  return 3221225760LL;
}
