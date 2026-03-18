/*
 * XREFs of ?FreeMapRegistersAndAdapter@FxDmaPacketTransaction@@MEAAXXZ @ 0x1C005A5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_dq @ 0x1C0059230 (WPP_IFR_SF_dq.c)
 *     WPP_IFR_SF_dqq @ 0x1C005CD2C (WPP_IFR_SF_dqq.c)
 */

void __fastcall FxDmaPacketTransaction::FreeMapRegistersAndAdapter(FxDmaPacketTransaction *this)
{
  void *id; // rsi
  const void *_a2; // rbx
  _FX_DRIVER_GLOBALS *v4; // rcx
  KIRQL v5; // al
  unsigned int v6; // r8d
  unsigned __int16 v7; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  KIRQL v9; // bp
  const void *v10; // rcx
  __int64 m_MapRegistersReserved; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  id = this->m_MapRegisterBase;
  _a2 = 0LL;
  if ( id )
  {
    v5 = KfRaiseIrql(2u);
    m_Globals = this->m_Globals;
    v9 = v5;
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v10 = 0LL;
      WPP_IFR_SF_dqq(m_Globals, (unsigned __int8)m_Globals, v6, v7, traceGuid, this->m_MapRegistersNeeded, v10, id);
    }
    m_MapRegistersReserved = this->m_MapRegistersReserved;
    if ( !(_DWORD)m_MapRegistersReserved )
      m_MapRegistersReserved = this->m_MapRegistersNeeded;
    this->m_AdapterInfo->AdapterObject->DmaOperations->FreeMapRegisters(
      this->m_AdapterInfo->AdapterObject,
      id,
      m_MapRegistersReserved);
    KeLowerIrql(v9);
  }
  else
  {
    v4 = this->m_Globals;
    if ( v4->FxVerifierOn && v4->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_dq(v4, 5u, 0xFu, 0x11u, WPP_FxDmaTransaction_hpp_Traceguids, this->m_MapRegistersNeeded, _a2);
    }
  }
}
