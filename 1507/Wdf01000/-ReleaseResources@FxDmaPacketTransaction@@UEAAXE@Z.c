/*
 * XREFs of ?ReleaseResources@FxDmaPacketTransaction@@UEAAXE@Z @ 0x1C0061EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxDmaPacketTransaction::ReleaseResources(FxDmaPacketTransaction *this, __int64 ForceRelease)
{
  FxDmaEnabler *m_DmaEnabler; // rcx

  if ( this->m_MapRegisterBaseSet && (!this->m_MapRegistersReserved || (_BYTE)ForceRelease) )
  {
    ((void (__fastcall *)(FxDmaPacketTransaction *, __int64))this->FreeMapRegistersAndAdapter)(this, ForceRelease);
    m_DmaEnabler = this->m_DmaEnabler;
    this->m_MapRegisterBaseSet = 0;
    if ( m_DmaEnabler->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
      _InterlockedExchange(&m_DmaEnabler->m_DeviceBase->m_DmaPacketTransactionStatus, 0);
    this->m_AdapterInfo = 0LL;
    this->m_MapRegistersReserved = 0;
  }
}
