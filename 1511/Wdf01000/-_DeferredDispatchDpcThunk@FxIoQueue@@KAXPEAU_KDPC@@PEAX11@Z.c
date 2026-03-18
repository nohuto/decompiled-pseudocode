/*
 * XREFs of ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0083200
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 */

void __fastcall FxIoQueue::_DeferredDispatchDpcThunk(
        _KDPC *Dpc,
        FxIoQueue *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v6; // dl
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // r8
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF

  m_Globals = DeferredContext->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0x67u, (const _GUID *)&FxObject::`vftable'.DebugExtension);
  FxNonPagedObject::Lock(DeferredContext, &PreviousIrql, (unsigned __int8)SystemArgument1);
  v6 = PreviousIrql;
  DeferredContext->m_RequeueDeferredDispatcher = 0;
  FxIoQueue::DispatchEvents(DeferredContext, v6, 0LL, v7);
  FxNonPagedObject::Lock(DeferredContext, &PreviousIrql, v8);
  if ( DeferredContext->m_Deleted || !DeferredContext->m_RequeueDeferredDispatcher )
  {
    DeferredContext->m_RequeueDeferredDispatcher = 0;
    DeferredContext->m_DpcQueued = 0;
  }
  else
  {
    KeInsertQueueDpc(&DeferredContext->m_Dpc, 0LL, 0LL);
  }
  FxNonPagedObject::Unlock(DeferredContext, PreviousIrql, v9);
}
