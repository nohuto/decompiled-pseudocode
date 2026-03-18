/*
 * XREFs of ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0024FC8
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C002884C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0025208 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C00312D8 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C006F800 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 */

int __fastcall FxPkgPnp::UpdateWmiInstanceForS0Idle(FxPkgPnp *this, FxWmiInstanceAction Action)
{
  int v3; // edx
  FxPowerPolicyOwnerSettings *v4; // rdi
  FxWmiInstanceInternal *v5; // rcx
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  int result; // eax
  FxWmiInstanceInternalCallbacks cb; // [rsp+20h] [rbp-28h] BYREF

  v3 = Action - 1;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      m_Owner = this->m_PowerPolicyMachine.m_Owner;
      WmiInstance = m_Owner->m_IdleSettings.WmiInstance;
      if ( WmiInstance )
        FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_IdleSettings.WmiInstance);
    }
    return 0;
  }
  v4 = this->m_PowerPolicyMachine.m_Owner;
  v5 = v4->m_IdleSettings.WmiInstance;
  if ( v5 )
  {
    FxWmiProvider::AddInstance(v5->m_Provider, v4->m_IdleSettings.WmiInstance, 1u);
    return 0;
  }
  memset(&cb, 0, sizeof(cb));
  cb.SetInstance = FxPkgPnp::_S0IdleSetInstance;
  cb.QueryInstance = FxPkgPnp::_S0IdleQueryInstance;
  cb.SetItem = FxPkgPnp::_S0IdleSetItem;
  result = FxPkgPnp::RegisterPowerPolicyWmiInstance(
             this,
             &GUID_POWER_DEVICE_ENABLE,
             &cb,
             &v4->m_IdleSettings.WmiInstance);
  if ( result >= 0 )
    return 0;
  return result;
}
