/*
 * XREFs of ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A2A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxInterrupt::_InterruptDpcThunk(
        _KDPC *Dpc,
        FxInterrupt *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax

  m_SystemWorkItem = DeferredContext->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    FxSystemWorkItem::EnqueueWorker(
      m_SystemWorkItem,
      (void (__fastcall *)(void *))FxInterrupt::_InterruptWorkItemCallback,
      DeferredContext,
      0);
  }
  else
  {
    DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
    if ( DpcNotifyRoutine )
      DpcNotifyRoutine(&DeferredContext->m_EvtInterruptDpc, 8u, 2164260864u, 3938u, 2u);
    FxInterrupt::DpcHandler(DeferredContext, DeferredContext, SystemArgument1);
  }
}
