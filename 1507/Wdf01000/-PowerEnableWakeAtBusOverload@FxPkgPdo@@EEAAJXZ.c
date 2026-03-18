/*
 * XREFs of ?PowerEnableWakeAtBusOverload@FxPkgPdo@@EEAAJXZ @ 0x1C00110B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPdo::PowerEnableWakeAtBusOverload(FxPkgPdo *this)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, _SYSTEM_POWER_STATE); // rax
  int v5; // edx
  FxDeviceBase *v6; // rax
  __int64 v7; // rcx

  m_DeviceBase = this->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = this->m_DeviceEnableWakeAtBus.m_Method;
  if ( m_Method )
    v5 = m_Method((WDFDEVICE__ *)v3, (_SYSTEM_POWER_STATE)this->m_SystemPowerState);
  else
    v5 = 0;
  if ( v5 >= 0 )
  {
    v6 = this->m_DeviceBase;
    this->m_EnableWakeAtBusInvoked = 1;
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v6[1].m_ObjectFlags + 648LL) + 880LL);
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 520));
  }
  return (unsigned int)v5;
}
