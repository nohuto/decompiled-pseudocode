/*
 * XREFs of ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x1C006A030
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C00671F0 (WPP_IFR_SF_qqq.c)
 */

char __fastcall FxDmaSystemTransaction::PreMapTransfer(FxDmaSystemTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  char v3; // di
  unsigned __int8 (__fastcall *_a1)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64); // rdx
  const void *_a3; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int8 (__fastcall *Method)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64); // rax

  m_Globals = this->m_Globals;
  v3 = 1;
  _a1 = this->m_ConfigureChannelFunction.Method;
  if ( _a1 )
  {
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a3 = 0LL;
      WPP_IFR_SF_qqq(
        m_Globals,
        5u,
        0xFu,
        0xBu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        _a1,
        this->m_ConfigureChannelContext,
        _a3);
    }
    m_DeviceBase = this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v7 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v7 = 0LL;
    if ( this->m_ObjectSize )
      v8 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v8 = 0LL;
    Method = this->m_ConfigureChannelFunction.Method;
    if ( Method )
      return Method(
               (WDFDMATRANSACTION__ *)v8,
               (WDFDEVICE__ *)v7,
               this->m_ConfigureChannelContext,
               this->m_CurrentFragmentMdl,
               this->m_CurrentFragmentOffset,
               this->m_CurrentFragmentLength);
  }
  return v3;
}
