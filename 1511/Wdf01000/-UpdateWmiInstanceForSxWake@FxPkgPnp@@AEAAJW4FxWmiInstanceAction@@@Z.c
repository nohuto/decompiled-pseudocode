/*
 * XREFs of ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0014504
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0017C04 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 * Callees:
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0014770 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C002B084 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C00610E0 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 */

int __fastcall FxPkgPnp::UpdateWmiInstanceForSxWake(FxPkgPnp *this, FxWmiInstanceAction Action)
{
  int v3; // edx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  int result; // eax
  FxPowerPolicyOwnerSettings *v7; // rdi
  FxWmiInstanceInternal *v8; // rcx
  FxWmiInstanceInternalCallbacks cb; // [rsp+20h] [rbp-28h] BYREF

  v3 = Action - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      WmiInstance = m_Owner->m_WakeSettings.WmiInstance;
      if ( WmiInstance )
        FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_WakeSettings.WmiInstance);
    }
    return 0;
  }
  v7 = this->m_PowerPolicyMachine.m_Owner;
  v8 = v7->m_WakeSettings.WmiInstance;
  if ( v8 )
  {
    FxWmiProvider::AddInstance(v8->m_Provider, v7->m_WakeSettings.WmiInstance, 1u);
    return 0;
  }
  memset(&cb, 0, sizeof(cb));
  cb.SetInstance = FxPkgPnp::_SxWakeSetInstance;
  cb.QueryInstance = FxPkgPnp::_SxWakeQueryInstance;
  cb.SetItem = FxPkgPnp::_SxWakeSetItem;
  result = FxPkgPnp::RegisterPowerPolicyWmiInstance(
             this,
             &GUID_POWER_DEVICE_WAKE_ENABLE,
             &cb,
             &v7->m_WakeSettings.WmiInstance);
  if ( result >= 0 )
    return 0;
  return result;
}
