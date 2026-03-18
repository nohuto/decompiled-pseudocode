/*
 * XREFs of ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C00599B4
 * Callers:
 *     ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C005C080 (-StartTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002A0F4 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     WPP_IFR_SF_dq @ 0x1C0059230 (WPP_IFR_SF_dq.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C005C400 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     WPP_IFR_SF_dqd @ 0x1C005CBE0 (WPP_IFR_SF_dqd.c)
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
  bool v10; // zf
  __int64 v11; // r11
  _DMA_ADAPTER *AdapterObject; // rcx
  _DMA_OPERATIONS *DmaOperations; // rax
  int v14; // eax
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
  v10 = FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3;
  AdapterObject = this->m_AdapterInfo->AdapterObject;
  DmaOperations = AdapterObject->DmaOperations;
  if ( v10 )
  {
    if ( MapRegistersReserved )
    {
      FxDmaPacketTransaction::_AdapterControl(*(_DEVICE_OBJECT **)(v11 + 168), 0LL, this->m_MapRegisterBase, this);
      _a3 = 0;
      goto LABEL_20;
    }
    v14 = DmaOperations->AllocateAdapterChannelEx(
            AdapterObject,
            *(_DEVICE_OBJECT **)(v11 + 168),
            this->m_TransferContext,
            this->m_MapRegistersNeeded,
            this->m_Flags,
            FxDmaPacketTransaction::_AdapterControl,
            this,
            0LL);
  }
  else
  {
    v14 = DmaOperations->AllocateAdapterChannel(
            AdapterObject,
            *(_DEVICE_OBJECT **)(v11 + 168),
            this->m_MapRegistersNeeded,
            FxDmaPacketTransaction::_AdapterControl,
            this);
  }
  _a3 = v14;
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
