/*
 * XREFs of ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C00605D0
 * Callers:
 *     ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C0062D00 (-StartTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_dq @ 0x1C005FB50 (WPP_IFR_SF_dq.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C00632C0 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     WPP_IFR_SF_dqd @ 0x1C0063BE8 (WPP_IFR_SF_dqd.c)
 */

__int64 __fastcall FxDmaPacketTransaction::AllocateAdapterChannel(
        FxDmaPacketTransaction *this,
        unsigned __int8 MapRegistersReserved)
{
  KIRQL v4; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v6; // rbx
  KIRQL v7; // bp
  const void *_a2; // rax
  unsigned __int16 v9; // r9
  FxDmaEnabler *m_DmaEnabler; // r11
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // rax
  int v13; // eax
  int _a3; // esi

  v4 = KfRaiseIrql(2u);
  m_Globals = this->m_Globals;
  v6 = 0LL;
  v7 = v4;
  if ( m_Globals->FxVerifierOn )
  {
    if ( MapRegistersReserved )
    {
      if ( !m_Globals->FxVerboseOn )
        goto LABEL_14;
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      v9 = 11;
    }
    else
    {
      if ( !m_Globals->FxVerboseOn )
        goto LABEL_14;
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      v9 = 10;
    }
    WPP_IFR_SF_dq(m_Globals, 5u, 0xFu, v9, WPP_FxDmaTransaction_hpp_Traceguids, this->m_MapRegistersNeeded, _a2);
  }
LABEL_14:
  m_DmaEnabler = this->m_DmaEnabler;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
  {
    if ( MapRegistersReserved )
    {
      FxDmaPacketTransaction::_AdapterControl(m_DmaEnabler->m_FDO, 0LL, this->m_MapRegisterBase, this);
      _a3 = 0;
      goto LABEL_20;
    }
    v13 = DmaOperations->AllocateAdapterChannelEx(
            AdapterObject,
            m_DmaEnabler->m_FDO,
            this->m_TransferContext,
            this->m_MapRegistersNeeded,
            this->m_Flags,
            FxDmaPacketTransaction::_AdapterControl,
            this,
            0LL);
  }
  else
  {
    v13 = DmaOperations->AllocateAdapterChannel(
            AdapterObject,
            m_DmaEnabler->m_FDO,
            this->m_MapRegistersNeeded,
            FxDmaPacketTransaction::_AdapterControl,
            this);
  }
  _a3 = v13;
LABEL_20:
  KeLowerIrql(v7);
  if ( _a3 < 0 )
  {
    if ( this->m_ObjectSize )
      v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_dqd(
      this->m_Globals,
      2u,
      0xFu,
      0xCu,
      WPP_FxDmaTransaction_hpp_Traceguids,
      this->m_MapRegistersNeeded,
      v6,
      _a3);
  }
  return (unsigned int)_a3;
}
