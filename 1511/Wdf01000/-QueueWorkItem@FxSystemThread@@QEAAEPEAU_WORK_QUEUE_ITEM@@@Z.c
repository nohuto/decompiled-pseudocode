/*
 * XREFs of ?QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C0090194
 * Callers:
 *     ?_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C0089AC0 (-_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

char __fastcall FxSystemThread::QueueWorkItem(FxSystemThread *this, _WORK_QUEUE_ITEM *WorkItem, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  char v6; // si
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v6 = 0;
  if ( !this->m_Exit )
  {
    v6 = 1;
    Blink = this->m_WorkList.Blink;
    WorkItem->List.Flink = &this->m_WorkList;
    WorkItem->List.Blink = Blink;
    if ( Blink->Flink != &this->m_WorkList )
      __fastfail(3u);
    Blink->Flink = &WorkItem->List;
    this->m_WorkList.Blink = &WorkItem->List;
    KeSetEvent(&this->m_WorkEvent.m_Event, 0, 0);
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  return v6;
}
