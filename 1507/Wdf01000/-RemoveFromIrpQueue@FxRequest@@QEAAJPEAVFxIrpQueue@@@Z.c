/*
 * XREFs of ?RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z @ 0x1C0007448
 * Callers:
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C000B620 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 * Callees:
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0008454 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxRequest::RemoveFromIrpQueue(FxRequest *this, FxIrpQueue *IrpQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxRequest_vtbl *v4; // rax
  const void *_a1; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

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
    v7 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v7,
      m_Globals->Public.DriverName,
      (const char *)&v7);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  v4 = this->__vftable;
  this->m_IrpQueue = 0LL;
  v4->Release(this, (void *)1969583441, 2022, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  return 0LL;
}
