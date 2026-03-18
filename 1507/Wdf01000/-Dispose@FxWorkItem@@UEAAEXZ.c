/*
 * XREFs of ?Dispose@FxWorkItem@@UEAAEXZ @ 0x1C001F470
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C000768C (-WaitForSignal@FxWorkItem@@AEAAXXZ.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

unsigned __int8 __fastcall FxWorkItem::Dispose(FxWorkItem *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  char m_ObjectFlags; // al
  FxObject *m_Object; // rcx
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  m_ObjectFlags = this->m_ObjectFlags;
  this->m_RunningDown = 1;
  if ( m_ObjectFlags < 0 && (Blink = this[-1].m_WorkItemCompleted.m_Event.m_Event.Header.WaitListHead.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)Blink, irql, v4);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( this->m_WorkItemThread != KeGetCurrentThread() )
    FxWorkItem::WaitForSignal(this);
  m_Object = this->m_Object;
  if ( m_Object )
  {
    this->m_Object = 0LL;
    m_Object->Release(m_Object, this, 469, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  }
  this->Release(this, this, 475, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  return 1;
}
