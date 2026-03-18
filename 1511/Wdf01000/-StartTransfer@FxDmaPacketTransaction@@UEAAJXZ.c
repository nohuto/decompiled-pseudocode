/*
 * XREFs of ?StartTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C005C080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C002A0F4 (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z @ 0x1C00599B4 (-AllocateAdapterChannel@FxDmaPacketTransaction@@IEAAJE@Z.c)
 *     WPP_IFR_SF_qqxx @ 0x1C005D814 (WPP_IFR_SF_qqxx.c)
 */

__int64 __fastcall FxDmaPacketTransaction::StartTransfer(FxDmaPacketTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rsi
  unsigned __int8 v4; // dl
  unsigned int v5; // r8d
  __int64 v6; // rcx
  int v7; // ebp
  FxDmaEnabler *m_DmaEnabler; // rax
  const void *v9; // rax
  unsigned __int64 m_MaxFragmentLength; // rdx
  unsigned __int64 m_Remaining; // r8
  unsigned __int64 m_StartOffset; // r9
  bool v13; // zf
  unsigned __int8 v14; // dl
  __int16 v15; // cx
  int AdapterChannel; // eax
  __int64 v17; // rcx

  m_Globals = this->m_Globals;
  if ( this->m_ObjectSize )
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    if ( m_Globals->FxVerboseOn )
    {
      WPP_IFR_SF_q(m_Globals, 5u, 0xFu, 0x2Bu, WPP_FxDmaTransaction_cpp_Traceguids, _a1);
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qqxx(
          m_Globals,
          v4,
          v5,
          0x2Cu,
          WPP_FxDmaTransaction_cpp_Traceguids,
          _a1,
          this->m_StartMdl,
          this->m_StartOffset,
          this->m_TransactionLength);
    }
  }
  if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version == 3 )
    v7 = 0;
  else
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + 96) + 192LL), 1, 0) != 0
       ? 0xC0200204
       : 0;
  if ( v7 >= 0 )
  {
    m_MaxFragmentLength = this->m_MaxFragmentLength;
    m_Remaining = this->m_Remaining;
    m_StartOffset = this->m_StartOffset;
    this->m_CurrentFragmentOffset = m_StartOffset;
    if ( m_Remaining < m_MaxFragmentLength )
      m_MaxFragmentLength = m_Remaining;
    v13 = this->m_State == FxDmaTransactionStateReserved;
    this->m_CurrentFragmentLength = m_MaxFragmentLength;
    if ( v13 )
    {
      v14 = 0;
      this->m_MapRegistersNeeded = this->m_MapRegistersReserved;
    }
    else
    {
      if ( (*((_BYTE *)this->m_DmaEnabler + 380) & 4) != 0 )
      {
        if ( m_MaxFragmentLength == m_Remaining )
          v15 = m_StartOffset + LOWORD(this->m_CurrentFragmentMdl->StartVa) + this->m_CurrentFragmentMdl->ByteOffset;
        else
          v15 = 4095;
        this->m_MapRegistersNeeded = ((v15 & 0xFFF) + m_MaxFragmentLength + 4095) >> 12;
      }
      else
      {
        this->m_MapRegistersNeeded = this->m_AdapterInfo->NumberOfMapRegisters;
      }
      v14 = this->m_MapRegistersReserved != 0;
    }
    AdapterChannel = FxDmaPacketTransaction::AllocateAdapterChannel(this, v14);
    v7 = AdapterChannel;
    if ( AdapterChannel < 0 )
    {
      WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x2Eu, WPP_FxDmaTransaction_cpp_Traceguids, _a1, AdapterChannel);
      if ( FxDmaEnabler::GetDmaDescription(this->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
        _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(v17 + 96) + 192LL), 0);
    }
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x2Fu, WPP_FxDmaTransaction_cpp_Traceguids, _a1, v7);
  }
  else
  {
    m_DmaEnabler = this->m_DmaEnabler;
    if ( m_DmaEnabler->m_ObjectSize )
      v9 = (const void *)((unsigned __int64)m_DmaEnabler ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v9 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x2Du, WPP_FxDmaTransaction_cpp_Traceguids, v9, v7);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return (unsigned int)v7;
}
