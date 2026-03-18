/*
 * XREFs of ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0015568
 * Callers:
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C00146C8 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PowerPolStartingDecideS0Wake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00260C0 (-PowerPolStartingDecideS0Wake@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z @ 0x1C002FD20 (-_PowerStateCallback@FxPowerPolicyOwnerSettings@@KAXPEAX00@Z.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0084A4C (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     ?OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z @ 0x1C001BE98 (-OpenSettingsKey@FxDevice@@QEAAJPEAPEAXK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001E184 (WPP_IFR_SF_q.c)
 */

void __fastcall FxPkgPnp::SaveState(FxPkgPnp *this, unsigned __int8 UseCanSaveState)
{
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  _IRP *m_PendingDevicePowerIrp; // rax
  FxPowerPolicyOwnerSettings *v5; // rax
  FxPowerPolicyOwnerSettings *v6; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDeviceBase *m_DeviceBase; // rax
  const void *v9; // rax
  _UNICODE_STRING name; // [rsp+30h] [rbp-10h] BYREF
  int Data; // [rsp+50h] [rbp+10h] BYREF
  FxAutoRegKey hKey; // [rsp+60h] [rbp+20h] BYREF

  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  hKey.m_Key = 0LL;
  if ( m_Owner )
  {
    if ( UseCanSaveState && !m_Owner->m_CanSaveState )
    {
      m_Globals = this->m_Globals;
      if ( !m_Globals->FxVerboseOn )
        return;
      m_DeviceBase = this->m_DeviceBase;
      if ( m_DeviceBase->m_ObjectSize )
        v9 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v9 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x4Du, WPP_FxPkgPnp_cpp_Traceguids, v9);
      goto LABEL_6;
    }
    if ( !m_Owner->m_IdleSettings.Dirty && !m_Owner->m_WakeSettings.Dirty
      || !m_Owner->m_IdleSettings.Overridable && !m_Owner->m_WakeSettings.Overridable )
    {
LABEL_6:
      if ( hKey.m_Key )
        ZwClose(hKey.m_Key);
      return;
    }
    if ( !this->m_SpecialSupport[0]
      || (m_PendingDevicePowerIrp = this->m_PendingDevicePowerIrp) == 0LL
      || m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 1 )
    {
      if ( FxDevice::OpenSettingsKey(this->m_Device, &hKey.m_Key, 0x20000u) >= 0 )
      {
        v5 = this->m_PowerPolicyMachine.m_Owner;
        if ( v5->m_IdleSettings.Overridable && v5->m_IdleSettings.Dirty )
        {
          RtlInitUnicodeString(&name, L"IdleInWorkingState");
          Data = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
          ZwSetValueKey(hKey.m_Key, &name, 0, 4u, &Data, 4u);
          this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Dirty = 0;
        }
        v6 = this->m_PowerPolicyMachine.m_Owner;
        if ( v6->m_WakeSettings.Overridable && v6->m_WakeSettings.Dirty )
        {
          RtlInitUnicodeString(&name, L"WakeFromSleepState");
          Data = this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Enabled;
          ZwSetValueKey(hKey.m_Key, &name, 0, 4u, &Data, 4u);
          this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Dirty = 0;
        }
      }
      goto LABEL_6;
    }
  }
}
