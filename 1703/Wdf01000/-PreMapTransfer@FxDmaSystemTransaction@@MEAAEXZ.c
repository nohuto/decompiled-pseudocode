/*
 * XREFs of ?PreMapTransfer@FxDmaSystemTransaction@@MEAAEXZ @ 0x1C006D990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 */

char __fastcall FxDmaSystemTransaction::PreMapTransfer(FxDmaSystemTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  char v3; // di
  unsigned __int8 (__fastcall *Method)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64); // r8
  const void *v5; // rdx
  unsigned __int16 m_ObjectSize; // r11
  unsigned __int64 m_CurrentFragmentLength; // rcx
  unsigned __int64 m_CurrentFragmentOffset; // r10
  FxDeviceBase *m_DeviceBase; // rdx
  _MDL *m_CurrentFragmentMdl; // r9
  void *m_ConfigureChannelContext; // r8
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // rdx
  bool v14; // zf
  unsigned __int8 (__fastcall *v15)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _MDL *, unsigned __int64, unsigned __int64); // rax
  unsigned __int64 v16; // rbx

  m_Globals = this->m_Globals;
  v3 = 1;
  Method = this->m_ConfigureChannelFunction.Method;
  if ( Method )
  {
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      v5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v5 = 0LL;
      WPP_IFR_SF_qqq(
        m_Globals,
        5u,
        0xFu,
        0xBu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        Method,
        this->m_ConfigureChannelContext,
        v5);
    }
    m_ObjectSize = this->m_ObjectSize;
    m_CurrentFragmentLength = this->m_CurrentFragmentLength;
    m_CurrentFragmentOffset = this->m_CurrentFragmentOffset;
    m_DeviceBase = this->m_DmaEnabler->FxDmaPacketTransaction::FxDmaTransactionBase::m_DeviceBase;
    m_CurrentFragmentMdl = this->m_CurrentFragmentMdl;
    m_ConfigureChannelContext = this->m_ConfigureChannelContext;
    v12 = m_DeviceBase->m_ObjectSize;
    v13 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    v14 = v12 == 0;
    v15 = this->m_ConfigureChannelFunction.Method;
    if ( v14 )
      v13 = 0LL;
    if ( v15 )
    {
      v16 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !m_ObjectSize )
        v16 = 0LL;
      return v15(
               (WDFDMATRANSACTION__ *)v16,
               (WDFDEVICE__ *)v13,
               m_ConfigureChannelContext,
               m_CurrentFragmentMdl,
               m_CurrentFragmentOffset,
               m_CurrentFragmentLength);
    }
  }
  return v3;
}
