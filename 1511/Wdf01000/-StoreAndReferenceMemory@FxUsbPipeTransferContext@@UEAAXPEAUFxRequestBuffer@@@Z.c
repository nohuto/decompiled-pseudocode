/*
 * XREFs of ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0035210
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C0001E60 (-AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z.c)
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C00323C8 (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

void __fastcall FxUsbPipeTransferContext::StoreAndReferenceMemory(
        FxUsbPipeTransferContext *this,
        FxRequestBuffer *Buffer)
{
  _MDL *m_PartialMdl; // rcx

  memset(this->m_Urb, 0, sizeof(_URB_BULK_OR_INTERRUPT_TRANSFER));
  this->m_Urb->Hdr.Function = 9;
  this->m_Urb->Hdr.Length = 128;
  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
  FxRequestBuffer::AssignValues(
    Buffer,
    &this->m_Urb->TransferBuffer,
    &this->m_Urb->TransferBufferMDL,
    &this->m_Urb->TransferBufferLength);
  m_PartialMdl = this->m_PartialMdl;
  if ( m_PartialMdl )
    this->m_Urb->TransferBufferMDL = m_PartialMdl;
}
