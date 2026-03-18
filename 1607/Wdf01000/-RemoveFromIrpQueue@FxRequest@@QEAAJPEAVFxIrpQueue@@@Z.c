/*
 * XREFs of ?RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z @ 0x1C0012564
 * Callers:
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C001D17C (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0034CAC (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxRequest::RemoveFromIrpQueue(FxRequest *this, FxIrpQueue *IrpQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxRequest_vtbl *v4; // rax
  const void *_a1; // rax

  m_Globals = this->m_Globals;
  if ( !FxIrpQueue::RemoveIrpFromQueueByContext(IrpQueue, &this->m_CsqContext) )
    return 3221225760LL;
  if ( m_Globals->FxVerifierOn && !this->m_IrpQueue )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0x10u, 0x29u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  v4 = this->__vftable;
  this->m_IrpQueue = 0LL;
  v4->Release(this, (void *)1969583441, 2030, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  return 0LL;
}
