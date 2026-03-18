/*
 * XREFs of ?InsertTailIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C003547C
 * Callers:
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C000EF80 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x1C001D6D0 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 * Callees:
 *     ?InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z @ 0x1C0016D7C (-InsertIrpInQueue@FxIrpQueue@@AEAAJPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@EPEAK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00D40BC (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

int __fastcall FxRequest::InsertTailIrpQueue(FxRequest *this, FxIrpQueue *IrpQueue, unsigned int *a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  int result; // eax
  _IRP *m_Irp; // rdx
  int inserted; // edi
  __int64 v9; // r9
  FxRequest_vtbl *v10; // rcx

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    result = FxRequest::Vf_VerifyInsertIrpQueue(this, m_Globals, IrpQueue);
  else
    result = 0;
  if ( result >= 0 )
  {
    FxObject::AddRef(this, (void *)0x75657551, 1900, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    m_Irp = this->m_Irp.m_Irp;
    this->m_IrpQueue = IrpQueue;
    inserted = FxIrpQueue::InsertIrpInQueue(IrpQueue, m_Irp, &this->m_CsqContext, 0);
    if ( inserted < 0 )
    {
      v10 = this->__vftable;
      this->m_IrpQueue = (FxIrpQueue *)((__int64)this->m_IrpQueue & v9);
      v10->Release(this, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    return inserted;
  }
  return result;
}
