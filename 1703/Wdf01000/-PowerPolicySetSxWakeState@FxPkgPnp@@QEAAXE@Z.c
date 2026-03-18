/*
 * XREFs of ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C002477C
 * Callers:
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0027F14 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?_SxWakeSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z @ 0x1C009C730 (-_SxWakeSetInstance@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KPEAX@Z.c)
 *     ?_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z @ 0x1C009C750 (-_SxWakeSetItem@FxPkgPnp@@KAJPEAVFxDevice@@PEAVFxWmiInstanceInternal@@KKPEAX@Z.c)
 * Callees:
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0025868 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0032B70 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?IsLockAcquired@FxWaitLockInternal@@SAEJ@Z @ 0x1C0032C68 (-IsLockAcquired@FxWaitLockInternal@@SAEJ@Z.c)
 */

void __fastcall FxPkgPnp::PowerPolicySetSxWakeState(FxPkgPnp *this, _FX_DRIVER_GLOBALS *State)
{
  FxWaitLockInternal *p_m_StateMachineLock; // rdi
  int v4; // eax
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
      p_m_StateMachineLock->m_OwningThread = 0LL;
      KeSetEvent(&p_m_StateMachineLock->m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
    }
  }
}
