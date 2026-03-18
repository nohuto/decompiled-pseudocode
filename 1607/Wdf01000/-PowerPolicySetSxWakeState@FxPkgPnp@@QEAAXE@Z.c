/*
 * XREFs of ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C0025160
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C00286D0 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?_SxWakeSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1C00982A0 (-_SxWakeSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z.c)
 *     ?_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1C00982C0 (-_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z.c)
 * Callees:
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0026114 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CA28 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C002CA48 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C002EBAC (-IsLockAcquired@FxWaitLockInternal@@SAEJ@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicySetSxWakeState(FxPkgPnp *this, _FX_DRIVER_GLOBALS *State)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rdi
  int v4; // eax
  _FX_DRIVER_GLOBALS *v5; // rdx
  __int64 timeout; // [rsp+30h] [rbp+8h] BYREF

  this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Enabled = (_BYTE)State != 0;
  this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Dirty = 1;
  if ( !KeGetCurrentIrql() )
  {
    timeout = 0LL;
    p_m_StateMachineLock = &this->m_PowerPolicyMachine.m_StateMachineLock;
    v4 = FxWaitLockInternal::AcquireLock(&this->m_PowerPolicyMachine.m_StateMachineLock, State, &timeout);
    if ( FxWaitLockInternal::IsLockAcquired(v4) )
    {
      FxPkgPnp::SaveState(this, 1u);
      FxWaitLockInternal::ReleaseLock(p_m_StateMachineLock, v5);
    }
  }
}
