/*
 * XREFs of ?CallEvtDmaCompleted@FxDmaSystemTransaction@@MEAAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C006D7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxDmaSystemTransaction::CallEvtDmaCompleted(FxDmaSystemTransaction *this, DMA_COMPLETION_STATUS Status)
{
  unsigned __int16 m_ObjectSize; // r10
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // rdx
  bool v8; // zf
  void (__fastcall *Method)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, DMA_COMPLETION_STATUS); // rax
  unsigned __int64 v10; // rcx
  __int64 m_DmaDirection; // r9
  void *m_TransferCompleteContext; // r8
  DMA_COMPLETION_STATUS v13; // [rsp+20h] [rbp-18h]

  m_ObjectSize = this->m_ObjectSize;
  m_DeviceBase = this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase;
  v6 = m_DeviceBase->m_ObjectSize;
  v7 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  v8 = v6 == 0;
  Method = this->m_TransferCompleteFunction.Method;
  if ( v8 )
    v7 = 0LL;
  if ( Method )
  {
    v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v13 = Status;
    m_DmaDirection = (unsigned int)this->m_DmaDirection;
    m_TransferCompleteContext = this->m_TransferCompleteContext;
    if ( !m_ObjectSize )
      v10 = 0LL;
    Method(
      (WDFDMATRANSACTION__ *)v10,
      (WDFDEVICE__ *)v7,
      m_TransferCompleteContext,
      (_WDF_DMA_DIRECTION)m_DmaDirection,
      v13);
  }
}
