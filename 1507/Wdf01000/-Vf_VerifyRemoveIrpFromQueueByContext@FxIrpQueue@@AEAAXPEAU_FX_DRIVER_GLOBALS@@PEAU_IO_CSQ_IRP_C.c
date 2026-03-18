/*
 * XREFs of ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00D1698
 * Callers:
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0008454 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 */

void __fastcall FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(
        FxIrpQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_CSQ_IRP_CONTEXT *Context)
{
  _IO_CSQ *_a3; // rdx
  _IRP *_a1; // rax

  if ( FxDriverGlobals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)this, 0xBu)
     || FxDriverGlobals->FxVerifyDownlevel) )
  {
    _a1 = Context->Irp;
    if ( _a1 && (Context->Type != 1 || Context->Csq != _a3) )
    {
      WPP_IFR_SF_qqq(FxDriverGlobals, 2u, 0x10u, 0xAu, WPP_FxIrpQueue_cpp_Traceguids, _a1, Context, _a3);
      FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 5uLL, (ULONG_PTR)Context);
    }
  }
}
