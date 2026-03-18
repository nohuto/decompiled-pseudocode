/*
 * XREFs of ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C00750D0
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C0004430 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxRequest::PostProcessCompletionForDriverRequest(
        FxRequest *this,
        FxRequestCompletionState State,
        FxIoQueue *Queue)
{
  unsigned __int8 v4; // r8
  unsigned __int16 v5; // r9
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  if ( State == FxRequestCompletionStateQueue )
  {
    FxNonPagedObject::Lock(Queue, &PreviousIrql, (unsigned __int8)Queue);
    --Queue->m_TwoPhaseCompletions;
    --Queue->m_DriverIoCount;
    if ( Queue->m_Dispatching )
    {
      if ( SLOBYTE(Queue->m_ObjectFlags) < 0 && (Blink = Queue[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
        FxVerifierLock::Unlock((FxVerifierLock *)Blink, PreviousIrql, v4);
      else
        KeReleaseSpinLock(&Queue->m_NPLock.m_Lock, PreviousIrql);
    }
    else
    {
      FxIoQueue::DispatchEvents(Queue, PreviousIrql, 0LL, v5);
    }
  }
}
