/*
 * XREFs of ?_DeferredDispatchDpcThunk@FxIoQueue@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0097B90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 */

void __fastcall FxIoQueue::_DeferredDispatchDpcThunk(
        _KDPC *Dpc,
        FxIoQueue *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_Globals = DeferredContext->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0x67u, (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink);
  FxIoQueue::DeferredDispatchRequestsFromDpc(
    DeferredContext,
    (__int64)DeferredContext,
    (unsigned __int8)SystemArgument1);
}
