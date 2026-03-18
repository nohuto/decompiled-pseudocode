/*
 * XREFs of ?PostProcessCompletionForDriverRequest@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0069E6C
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEAD@Z @ 0x1C00083C0 (-Release@FxRequest@@UEAAKPEAXJPEAD@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 */

void __fastcall FxRequest::PostProcessCompletionForDriverRequest(
        FxRequest *this,
        FxRequestCompletionState State,
        FxIoQueue *Queue)
{
  unsigned __int8 v4; // r8
  unsigned __int16 v5; // r9
  unsigned __int8 PreviousIrql; // [rsp+38h] [rbp+10h] BYREF

  if ( State == FxRequestCompletionStateQueue )
  {
    FxNonPagedObject::Lock(Queue, &PreviousIrql, (unsigned __int8)Queue);
    --Queue->m_TwoPhaseCompletions;
    --Queue->m_DriverIoCount;
    if ( Queue->m_Dispatching )
      FxNonPagedObject::Unlock(Queue, PreviousIrql, v4);
    else
      FxIoQueue::DispatchEvents(Queue, PreviousIrql, 0LL, v5);
  }
}
