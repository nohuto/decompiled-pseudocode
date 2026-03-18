/*
 * XREFs of ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0024F1C
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C00286D0 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C002884C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0002304 (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C001F770 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     ??1FxAutoRegKey@@QEAA@XZ @ 0x1C0035958 (--1FxAutoRegKey@@QEAA@XZ.c)
 */

void __fastcall FxPkgPnp::ReadRegistryS0Idle(FxPkgPnp *this, _UNICODE_STRING *ValueName, bool *Enabled)
{
  FxDevice *m_Device; // rcx
  unsigned int value; // [rsp+30h] [rbp+8h] BYREF
  FxAutoRegKey hKey; // [rsp+48h] [rbp+20h] BYREF

  m_Device = this->m_Device;
  hKey.m_Key = 0LL;
  if ( (int)FxDevice::OpenSettingsKey(m_Device, &hKey.m_Key, 0x20000u) >= 0
    && (int)FxRegKey::_QueryULong(hKey.m_Key, ValueName, &value) >= 0 )
  {
    *Enabled = value != 0;
  }
  FxAutoRegKey::~FxAutoRegKey(&hKey);
}
