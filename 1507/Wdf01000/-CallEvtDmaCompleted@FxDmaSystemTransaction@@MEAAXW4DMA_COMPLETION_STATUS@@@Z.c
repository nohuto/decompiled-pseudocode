/*
 * XREFs of ?CallEvtDmaCompleted@FxDmaSystemTransaction@@MEAAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C0060910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxDmaSystemTransaction::CallEvtDmaCompleted(FxDmaSystemTransaction *this, DMA_COMPLETION_STATUS Status)
{
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  void (__fastcall *Method)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, DMA_COMPLETION_STATUS); // r10

  m_DeviceBase = this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v4 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v4 = 0LL;
  if ( this->m_ObjectSize )
    v5 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v5 = 0LL;
  Method = this->m_TransferCompleteFunction.Method;
  if ( Method )
    Method((WDFDMATRANSACTION__ *)v5, (WDFDEVICE__ *)v4, this->m_TransferCompleteContext, this->m_DmaDirection, Status);
}
