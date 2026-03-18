/*
 * XREFs of ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C002480C
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C002808C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?_S0IdleSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1C009C6D0 (-_S0IdleSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z.c)
 *     ?_S0IdleSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1C009C6F0 (-_S0IdleSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::PowerPolicySetS0IdleState(FxPkgPnp *this, unsigned __int8 State)
{
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled = State != 0;
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Dirty = 1;
  FxPkgPnp::PowerPolicyProcessEvent(this, PwrPolS0IdlePolicyChanged, State != 0);
}
