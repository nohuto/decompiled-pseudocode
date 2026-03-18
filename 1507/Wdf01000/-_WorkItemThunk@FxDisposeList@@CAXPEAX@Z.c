/*
 * XREFs of ?_WorkItemThunk@FxDisposeList@@CAXPEAX@Z @ 0x1C0077B50
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C0077AB4 (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 */

void __fastcall FxDisposeList::_WorkItemThunk(FxDisposeList *Parameter, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  FxVerifierLock *m_WorkItemThread; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(Parameter, &irql, a3);
  FxDisposeList::DrainListLocked(Parameter, &irql);
  if ( SLOBYTE(Parameter->m_ObjectFlags) < 0
    && (m_WorkItemThread = (FxVerifierLock *)Parameter[-1].m_WorkItemThread) != 0LL )
  {
    FxVerifierLock::Unlock(m_WorkItemThread, irql, v4);
  }
  else
  {
    KeReleaseSpinLock(&Parameter->m_NPLock.m_Lock, irql);
  }
}
