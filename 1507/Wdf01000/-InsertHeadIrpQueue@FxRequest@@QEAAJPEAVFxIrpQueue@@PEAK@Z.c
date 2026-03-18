/*
 * XREFs of ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00074C4
 * Callers:
 *     ?ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z @ 0x1C000721C (-ProcessAcknowledgedRequests@FxIoQueue@@QEAAXPEAVFxRequest@@PEAE@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096948 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00978DC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z @ 0x1C002D714 (-InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00D0A50 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

int __fastcall FxRequest::InsertHeadIrpQueue(FxRequest *this, FxIrpQueue *IrpQueue, unsigned int *a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int result; // eax
  unsigned int RefCount; // ecx
  _LIST_ENTRY *Blink; // rax
  _IRP *m_Irp; // rdx
  int inserted; // edi
  FxRequest_vtbl *v11; // rcx
  unsigned int *v12; // [rsp+20h] [rbp-18h]

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    result = FxRequest::Vf_VerifyInsertIrpQueue(this, m_Globals, IrpQueue);
  else
    result = 0;
  if ( result >= 0 )
  {
    RefCount = _InterlockedIncrement(&this->m_Refcnt);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      Blink = this[-1].m_ForwardProgressList.Blink;
    else
      Blink = 0LL;
    if ( Blink )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)Blink,
        (void *)0x75657551,
        1942,
        "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
        TagAddRef,
        RefCount);
    m_Irp = this->m_Irp.m_Irp;
    this->m_IrpQueue = IrpQueue;
    inserted = FxIrpQueue::InsertIrpInQueue(IrpQueue, m_Irp, &this->m_CsqContext, 1u, v12);
    if ( inserted < 0 )
    {
      v11 = this->__vftable;
      this->m_IrpQueue = 0LL;
      v11->Release(this, (void *)1969583441, 1958, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    return inserted;
  }
  return result;
}
