/*
 * XREFs of ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0091220
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0012130 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 */

void __fastcall FxIoQueue::_IrpCancelForQueue(
        FxIrpQueue *IrpQueue,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *CsqContext,
        unsigned __int8 Irql)
{
  FxIoQueue *p_Blink; // rsi

  p_Blink = (FxIoQueue *)&IrpQueue[-5].m_Queue.Blink;
  FxObject::AddRef(
    (FxObject *)&IrpQueue[-5].m_Queue.Blink,
    Irp,
    4481,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  FxIoQueue::CancelForQueue(p_Blink, (FxRequest *)&CsqContext[-5], Irql);
  p_Blink->Release(p_Blink, Irp, 4493, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
}
