/*
 * XREFs of ?QueueWorkItem@FxSystemThread@@QEAAEPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C00A66B8
 * Callers:
 *     ?_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z @ 0x1C009EE10 (-_PowerThreadEnqueue@FxPkgPnp@@CAXPEAXPEAU_WORK_QUEUE_ITEM@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

char __fastcall FxSystemThread::QueueWorkItem(FxSystemThread *this, _WORK_QUEUE_ITEM *WorkItem, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  char v6; // si
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *WorkerRoutine)(void *); // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_Exit )
  {
    v6 = 0;
  }
  else
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
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (WorkerRoutine = this[-1].m_Reaper.WorkerRoutine) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)WorkerRoutine, irql, v5);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  return v6;
}
