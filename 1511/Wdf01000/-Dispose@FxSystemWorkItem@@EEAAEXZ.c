/*
 * XREFs of ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x1C00293E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C0019D48 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ @ 0x1C002930C (-DecrementWorkItemQueued@FxSystemWorkItem@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxSystemWorkItem::Dispose(FxSystemWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v4 = irql;
  this->m_RunningDown = 1;
  FxNonPagedObject::Unlock(this, v4, v5);
  FxSystemWorkItem::DecrementWorkItemQueued(this);
  FxCREvent::EnterCRAndWaitAndLeave(&this->m_RemoveEvent);
  return 1;
}
