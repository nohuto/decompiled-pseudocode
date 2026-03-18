/*
 * XREFs of ?_IrpCancelForDriver@FxIoQueue@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C000A350
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000BE58 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxIoQueue::_IrpCancelForDriver(
        FxIrpQueue *IrpQueue,
        _IRP *Irp,
        _IO_CSQ_IRP_CONTEXT *CsqContext,
        unsigned __int8 Irql)
{
  FxRequest *v4; // rbp
  FxIoQueue *p_Blink; // rbx
  signed __int32 RefCount; // r8d
  FxNonPagedObject *m_LockObject; // rcx
  FxVerifierLock *Blink; // rcx

  v4 = (FxRequest *)&CsqContext[-5];
  HIBYTE(CsqContext[3].Csq) = 1;
  p_Blink = (FxIoQueue *)&IrpQueue[-6].m_Queue.Blink;
  RefCount = _InterlockedIncrement((volatile signed __int32 *)&IrpQueue[-6].m_LockObject + 1);
  if ( SLOBYTE(IrpQueue[-6].m_RequestCount) < 0 )
    m_LockObject = IrpQueue[-7].m_LockObject;
  else
    m_LockObject = 0LL;
  if ( m_LockObject )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_LockObject,
      Irp,
      4653,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
      TagAddRef,
      RefCount);
  if ( SLOBYTE(p_Blink->m_ObjectFlags) < 0
    && (Blink = (FxVerifierLock *)p_Blink[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
  {
    FxVerifierLock::Unlock(Blink, Irql, RefCount);
  }
  else
  {
    KeReleaseSpinLock(&p_Blink->m_NPLock.m_Lock, Irql);
  }
  FxIoQueue::CancelForDriver(p_Blink, v4);
  p_Blink->Release(p_Blink, Irp, 4664, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
}
