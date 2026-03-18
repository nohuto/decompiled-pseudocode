/*
 * XREFs of ?FreeMapRegistersAndAdapter@FxDmaPacketTransaction@@MEAAXXZ @ 0x1C006ADC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_dq @ 0x1C0067EC4 (WPP_IFR_SF_dq.c)
 *     WPP_IFR_SF_dqq @ 0x1C006C268 (WPP_IFR_SF_dqq.c)
 */

void __fastcall FxDmaPacketTransaction::FreeMapRegistersAndAdapter(FxDmaPacketTransaction *this)
{
  void *id; // rdi
  _FX_DRIVER_GLOBALS *v3; // rcx
  const void *v4; // rdx
  KIRQL v5; // al
  unsigned __int16 v6; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  KIRQL v8; // si
  unsigned __int16 m_ObjectSize; // dx
  const void *flags; // r8
  __int64 m_MapRegistersReserved; // r8
  const _GUID *v12; // [rsp+20h] [rbp-28h]

  id = this->m_MapRegisterBase;
  if ( id )
  {
    v5 = KfRaiseIrql(2u);
    m_Globals = this->m_Globals;
    v8 = v5;
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      m_ObjectSize = this->m_ObjectSize;
      flags = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        flags = 0LL;
      WPP_IFR_SF_dqq(m_Globals, m_ObjectSize, (unsigned int)flags, v6, v12, this->m_MapRegistersNeeded, flags, id);
    }
    m_MapRegistersReserved = this->m_MapRegistersReserved;
    if ( !(_DWORD)m_MapRegistersReserved )
      m_MapRegistersReserved = this->m_MapRegistersNeeded;
    this->m_AdapterInfo->AdapterObject->DmaOperations->FreeMapRegisters(
      this->m_AdapterInfo->AdapterObject,
      id,
      m_MapRegistersReserved);
    KeLowerIrql(v8);
  }
  else
  {
    v3 = this->m_Globals;
    if ( v3->FxVerifierOn && v3->FxVerboseOn )
    {
      v4 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v4 = 0LL;
      WPP_IFR_SF_dq(v3, 5u, 0xFu, 0x11u, WPP_FxDmaTransactionPacket_hpp_Traceguids, this->m_MapRegistersNeeded, v4);
    }
  }
}
