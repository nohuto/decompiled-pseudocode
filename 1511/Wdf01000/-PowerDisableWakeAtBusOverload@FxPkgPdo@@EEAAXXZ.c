/*
 * XREFs of ?PowerDisableWakeAtBusOverload@FxPkgPdo@@EEAAXXZ @ 0x1C000EFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPdo::PowerDisableWakeAtBusOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  __int64 v3; // rcx
  FxDeviceBase *v4; // rcx
  unsigned __int64 v5; // rcx
  void (__fastcall *m_Method)(WDFDEVICE__ *); // rax

  if ( this->m_EnableWakeAtBusInvoked )
  {
    m_DeviceBase = this->m_DeviceBase;
    this->m_EnableWakeAtBusInvoked = 0;
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 648LL) + 880LL);
    if ( v3 )
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 520));
    v4 = this->m_DeviceBase;
    if ( v4->m_ObjectSize )
      v5 = (unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v5 = 0LL;
    m_Method = this->m_DeviceDisableWakeAtBus.m_Method;
    if ( m_Method )
      m_Method((WDFDEVICE__ *)v5);
  }
}
