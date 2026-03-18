/*
 * XREFs of ?_IrpCancelForQueue@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0097BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C009555C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 */

void __fastcall FxIoQueue::_IrpCancelForQueue(
        FxIrpQueue *IrpQueue,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *CsqContext,
        KIRQL Irql)
{
  FxRequest *v4; // rbp
  FxIoQueue *p_Blink; // rbx
  unsigned int RefCount; // r8d
  FxNonPagedObject *m_LockObject; // rcx

  v4 = (FxRequest *)&CsqContext[-5];
  p_Blink = (FxIoQueue *)&IrpQueue[-5].m_Queue.Blink;
  RefCount = _InterlockedIncrement((volatile signed __int32 *)&IrpQueue[-5].m_LockObject + 1);
  if ( SLOBYTE(IrpQueue[-5].m_RequestCount) >= 0 )
    m_LockObject = 0LL;
  else
    m_LockObject = IrpQueue[-6].m_LockObject;
  if ( m_LockObject )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_LockObject,
      Irp,
      4459,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
      TagAddRef,
      RefCount);
  FxIoQueue::CancelForQueue(p_Blink, v4, Irql);
  p_Blink->Release(p_Blink, Irp, 4471, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
}
