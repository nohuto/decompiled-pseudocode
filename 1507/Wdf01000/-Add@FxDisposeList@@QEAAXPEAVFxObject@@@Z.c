/*
 * XREFs of ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C0077A28
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C0004430 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 *     ?Release@FxObject@@UEAAKPEAXJPEAD@Z @ 0x1C00048C0 (-Release@FxObject@@UEAAKPEAXJPEAD@Z.c)
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z @ 0x1C0012A20 (-Release@FxMemoryObject@@UEAAKPEAXJPEAD@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C007BAC4 (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C000A1B8 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxDisposeList::Add(FxDisposeList *this, FxObject *Object, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  FxVerifierLock *m_WorkItemThread; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  v5 = this->m_List.Next == 0LL;
  *this->m_ListEnd = &Object->m_DisposeSingleEntry;
  this->m_ListEnd = &Object->m_DisposeSingleEntry.Next;
  if ( v5 )
    FxSystemWorkItem::EnqueueWorker(this->m_SystemWorkItem, FxDisposeList::_WorkItemThunk, this, 0);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_WorkItemThread = (FxVerifierLock *)this[-1].m_WorkItemThread) != 0LL )
    FxVerifierLock::Unlock(m_WorkItemThread, irql, v5);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
}
