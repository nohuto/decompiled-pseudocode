/*
 * XREFs of ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C0017C04
 * Callers:
 *     imp_WdfDeviceAssignSxWakeSettings @ 0x1C0010CA0 (imp_WdfDeviceAssignSxWakeSettings.c)
 * Callees:
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0014498 (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0014504 (-UpdateWmiInstanceForSxWake@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00145FC (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z @ 0x1C00146C8 (-PowerPolicySetSxWakeState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C00156E0 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     __security_check_cookie @ 0x1C0035B00 (__security_check_cookie.c)
 *     ?RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z @ 0x1C00610E0 (-RemoveInstance@FxWmiProvider@@QEAAXPEAVFxWmiInstance@@@Z.c)
 *     WPP_IFR_SF_DD @ 0x1C006663C (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_LLd @ 0x1C0089E80 (WPP_IFR_SF_LLd.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall FxPkgPnp::PowerPolicySetSxWakeSettings(
        FxPkgPnp *this,
        _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS *Settings,
        unsigned __int8 ArmForWakeIfChildrenAreArmedForWake,
        unsigned __int8 IndicateChildWakeOnParentWake)
{
  _WDF_TRI_STATE v4; // eax
  unsigned __int8 v8; // r12
  char v9; // r14
  unsigned __int8 Length; // di
  int result; // eax
  _DEVICE_POWER_STATE DxState; // esi
  signed int _a2; // eax
  _FX_DRIVER_GLOBALS *v14; // rdx
  unsigned int v15; // r8d
  _WDF_POWER_POLICY_SX_WAKE_USER_CONTROL UserControlOfWakeSettings; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // rax
  FxWmiInstanceInternal *WmiInstance; // rcx
  unsigned __int8 Length_high; // cl
  const _GUID *traceGuid; // [rsp+28h] [rbp-49h]
  int enabled; // [rsp+40h] [rbp-31h]
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-29h] BYREF
  _BYTE valueName_buffer[56]; // [rsp+58h] [rbp-19h] OVERLAPPED BYREF
  __int64 v24; // [rsp+90h] [rbp+1Fh]
  wchar_t v25; // [rsp+98h] [rbp+27h]

  v4 = Settings->Enabled;
  HIBYTE(valueName.Length) = ArmForWakeIfChildrenAreArmedForWake;
  v8 = 0;
  v9 = 1;
  if ( v4 == WdfTrue )
  {
    Length = 1;
    LOBYTE(valueName.Length) = 1;
  }
  else if ( v4 == WdfUseDefault )
  {
    Length = 1;
    LOBYTE(valueName.Length) = 1;
    if ( KeGetCurrentIrql() )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x36u, WPP_FxPkgPnp_cpp_Traceguids);
    }
    else
    {
      v25 = aWdfdefaultwake[28];
      *(_OWORD *)&valueName_buffer[8] = *(_OWORD *)L"WdfDefaultWakeFromSleepState";
      LODWORD(valueName.Buffer) = 3801144;
      *(_OWORD *)&valueName_buffer[24] = *(_OWORD *)L"ltWakeFromSleepState";
      *(_QWORD *)valueName_buffer = &valueName_buffer[8];
      *(_OWORD *)&valueName_buffer[40] = *(_OWORD *)L"omSleepState";
      v24 = *(_QWORD *)L"tate";
      FxPkgPnp::ReadRegistryS0Idle(this, (const _UNICODE_STRING *)&valueName.Buffer, (bool *)&valueName);
      Length = valueName.Length;
    }
  }
  else
  {
    Length = 0;
    LOBYTE(valueName.Length) = 0;
  }
  if ( this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Set )
    v9 = 0;
  if ( !this->m_CapsQueried && !KeGetCurrentIrql() )
  {
    result = FxPkgPnp::QueryForCapabilities(this);
    if ( result < 0 )
      return result;
  }
  DxState = Settings->DxState;
  _a2 = FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(this, this->m_SystemWake);
  if ( DxState != PowerDeviceMaximum )
  {
    if ( DxState <= _a2 )
      goto LABEL_11;
    WPP_IFR_SF_LLd(this->m_Globals, (unsigned __int8)v14, v15, 0x38u, traceGuid, DxState, _a2, enabled);
    return -1073741101;
  }
  v14 = (_FX_DRIVER_GLOBALS *)(unsigned int)(_a2 - 2);
  DxState = _a2;
  if ( (unsigned int)v14 > 2 )
  {
    WPP_IFR_SF_DD(this->m_Globals, _a2 - 2, 0xCu, 0x37u, WPP_FxPkgPnp_cpp_Traceguids, _a2, -1073741101);
    return -1073741101;
  }
LABEL_11:
  UserControlOfWakeSettings = Settings->UserControlOfWakeSettings;
  if ( UserControlOfWakeSettings == WakeAllowUserControl )
  {
    result = FxPkgPnp::UpdateWmiInstanceForSxWake(this, AddInstance);
    if ( result < 0 )
      return result;
    if ( Settings->Enabled == WdfUseDefault )
    {
      if ( !v9 || KeGetCurrentIrql() )
      {
        Length = this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Enabled;
      }
      else
      {
        *(_QWORD *)valueName_buffer = &valueName_buffer[8];
        wcscpy((wchar_t *)&valueName_buffer[8], L"WakeFromSleepState");
        LODWORD(valueName.Buffer) = 2490404;
        FxPkgPnp::ReadRegistryS0Idle(this, (const _UNICODE_STRING *)&valueName.Buffer, (bool *)&valueName);
        Length = valueName.Length;
      }
    }
    v8 = 1;
  }
  else if ( UserControlOfWakeSettings == WakeDoNotAllowUserControl )
  {
    m_Owner = this->m_PowerPolicyMachine.m_Owner;
    v8 = 0;
    WmiInstance = m_Owner->m_WakeSettings.WmiInstance;
    if ( WmiInstance )
      FxWmiProvider::RemoveInstance(WmiInstance->m_Provider, m_Owner->m_WakeSettings.WmiInstance);
  }
  if ( v9 )
  {
    Length_high = HIBYTE(valueName.Length);
    this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Set = 1;
    this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Overridable = v8;
    this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.ArmForWakeIfChildrenAreArmedForWake = Length_high;
    this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.IndicateChildWakeOnParentWake = IndicateChildWakeOnParentWake;
  }
  LOBYTE(v14) = Length;
  this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.DxState = DxState;
  FxPkgPnp::PowerPolicySetSxWakeState(this, v14);
  return 0;
}
