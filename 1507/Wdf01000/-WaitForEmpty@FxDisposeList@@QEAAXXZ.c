/*
 * XREFs of ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0009884
 * Callers:
 *     ?Dispose@FxDriver@@UEAAEXZ @ 0x1C0010B20 (-Dispose@FxDriver@@UEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C0072D70 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C0076668 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C00769A0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C009A6D0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?DrainListLocked@FxDisposeList@@AEAAXPEAE@Z @ 0x1C0077AB4 (-DrainListLocked@FxDisposeList@@AEAAXPEAE@Z.c)
 */

void __fastcall FxDisposeList::WaitForEmpty(FxDisposeList *this, __int64 a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // r8
  char v5; // di
  FxVerifierLock *m_WorkItemThread; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v5 = 1;
  if ( this->m_WorkItemThread == KeGetCurrentThread() )
  {
    FxDisposeList::DrainListLocked(this, &irql);
    v5 = 0;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_WorkItemThread = (FxVerifierLock *)this[-1].m_WorkItemThread) != 0LL )
    FxVerifierLock::Unlock(m_WorkItemThread, irql, v4);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  if ( v5 )
    FxCREvent::EnterCRAndWaitAndLeave(&this->m_SystemWorkItem->m_WorkItemCompleted);
}
