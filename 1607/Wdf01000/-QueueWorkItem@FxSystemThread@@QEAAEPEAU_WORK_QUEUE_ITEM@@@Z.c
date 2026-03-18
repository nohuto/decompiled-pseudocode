/*
 * XREFs of ?QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C009E424
 * Callers:
 *     ?_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C0098200 (-_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

char __fastcall FxSystemThread::QueueWorkItem(FxSystemThread *this, _WORK_QUEUE_ITEM *WorkItem, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  char v6; // di
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v6 = 0;
  if ( !this->m_Exit )
  {
    v6 = 1;
    Blink = this->m_WorkList.Blink;
    if ( Blink->Flink != &this->m_WorkList )
      __fastfail(3u);
    WorkItem->List.Blink = Blink;
    WorkItem->List.Flink = &this->m_WorkList;
    Blink->Flink = &WorkItem->List;
    this->m_WorkList.Blink = &WorkItem->List;
    KeSetEvent(&this->m_WorkEvent.m_Event, 0, 0);
  }
  FxNonPagedObject::Unlock(this, irql, v5);
  return v6;
}
