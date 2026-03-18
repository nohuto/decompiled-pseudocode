/*
 * XREFs of ?FlushAndRundown@FxInterrupt@@AEAAXXZ @ 0x1C00A1E90
 * Callers:
 *     ?Dispose@FxInterrupt@@UEAAEXZ @ 0x1C00A1E80 (-Dispose@FxInterrupt@@UEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxInterrupt::FlushAndRundown(FxInterrupt *this)
{
  FxSystemWorkItem *m_SystemWorkItem; // rcx
  FxDeviceBase *m_DeviceBase; // rcx

  KeFlushQueuedDpcs();
  m_SystemWorkItem = this->m_SystemWorkItem;
  if ( m_SystemWorkItem )
  {
    m_SystemWorkItem->DeleteObject(m_SystemWorkItem);
    this->m_SystemWorkItem = 0LL;
  }
  if ( this->m_DisposeWaitLock )
  {
    this->m_WaitLock->DeleteObject(this->m_WaitLock);
    this->m_WaitLock = 0LL;
    this->m_DisposeWaitLock = 0;
  }
  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase )
  {
    this->m_DeviceBase = 0LL;
    m_DeviceBase->Release(
      m_DeviceBase,
      this,
      1675,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
  }
  this->Release(
    this,
    FxInterrupt::_InterruptThunk,
    1681,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
}
