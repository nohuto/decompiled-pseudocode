/*
 * XREFs of ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C001B130
 * Callers:
 *     imp_WdfDeviceAssignS0IdleSettings @ 0x1C002BCB0 (imp_WdfDeviceAssignS0IdleSettings.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1C0018FBC (-ReadRegistryS0Idle@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z @ 0x1C0019068 (-UpdateWmiInstanceForS0Idle@FxPkgPnp@@AEAAJW4FxWmiInstanceAction@@@Z.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0019120 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z @ 0x1C0019270 (-PowerPolicySetS0IdleState@FxPkgPnp@@QEAAXE@Z.c)
 *     ?QueryForCapabilities@FxPkgPnp@@IEAAJXZ @ 0x1C001A150 (-QueryForCapabilities@FxPkgPnp@@IEAAJXZ.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     __security_check_cookie @ 0x1C0030D80 (__security_check_cookie.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_DD @ 0x1C00704A4 (WPP_IFR_SF_DD.c)
 *     WPP_IFR_SF_LLd @ 0x1C009F1D0 (WPP_IFR_SF_LLd.c)
 *     WPP_IFR_SF_sd @ 0x1C009F650 (WPP_IFR_SF_sd.c)
 *     ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x1C00A0088 (-InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ.c)
 *     ?UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00A18D4 (-UseSystemManagedIdleTimeout@IdleTimeoutManagement@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall FxPkgPnp::PowerPolicySetS0IdleSettings(
        FxPkgPnp *this,
        _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings,
        unsigned int a3,
        unsigned __int16 a4)
{
  _WDF_TRI_STATE v4; // eax
  _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *v6; // rsi
  unsigned __int8 v7; // r12
  char v8; // di
  int v9; // r14d
  bool v10; // r13
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // eax
  signed int _a2; // eax
  unsigned int IdleTimeout; // r15d
  _WDF_POWER_POLICY_S0_IDLE_USER_CONTROL UserControlOfIdleSettings; // eax
  int result; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // rcx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES v17; // eax
  int ExcludeD3Cold; // ecx
  void (__fastcall *SetD3ColdSupport)(void *, unsigned __int8); // rax
  int DxState; // eax
  int PowerUpIdleDeviceOnSystemWake; // ecx
  _FX_DRIVER_GLOBALS *v22; // rcx
  int inited; // eax
  int v24; // r15d
  const char *v25; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  __int64 v27; // rax
  unsigned __int16 v28; // r9
  __int64 i; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-89h]
  int globals; // [rsp+38h] [rbp-79h]
  int enabled; // [rsp+40h] [rbp-71h]
  _UNICODE_STRING valueName; // [rsp+48h] [rbp-69h] BYREF
  _BYTE *v34; // [rsp+58h] [rbp-59h]
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v36[96]; // [rsp+70h] [rbp-41h] OVERLAPPED BYREF
  wchar_t v37; // [rsp+D0h] [rbp+1Fh]

  v4 = Settings->Enabled;
  HIBYTE(valueName.Length) = 0;
  v6 = Settings;
  v7 = 0;
  v8 = 1;
  v9 = 4;
  if ( v4 == WdfTrue )
  {
    LOBYTE(valueName.Length) = 1;
  }
  else if ( v4 == WdfUseDefault )
  {
    LOBYTE(valueName.Length) = 1;
    if ( KeGetCurrentIrql() )
    {
      WPP_IFR_SF_(this->m_Globals, 3u, 0xCu, 0x2Du, WPP_FxPkgPnp_cpp_Traceguids);
    }
    else
    {
      v37 = aWdfdefaultidle[28];
      *(_OWORD *)&v36[40] = *(_OWORD *)L"WdfDefaultIdleInWorkingState";
      LODWORD(valueName.Buffer) = 3801144;
      *(_OWORD *)&v36[56] = *(_OWORD *)L"ltIdleInWorkingState";
      v34 = &v36[40];
      *(_OWORD *)&v36[72] = *(_OWORD *)L"WorkingState";
      *(_QWORD *)&v36[88] = *(_QWORD *)L"tate";
      FxPkgPnp::ReadRegistryS0Idle(this, (const _UNICODE_STRING *)&valueName.Buffer, (bool *)&valueName);
    }
  }
  else
  {
    LOBYTE(valueName.Length) = 0;
  }
  v10 = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set == 0;
  if ( !this->m_CapsQueried && !KeGetCurrentIrql() )
  {
    result = FxPkgPnp::QueryForCapabilities(this);
    if ( result < 0 )
      return result;
  }
  IdleCaps = v6->IdleCaps;
  if ( IdleCaps == IdleCannotWakeFromS0 )
  {
    DxState = v6->DxState;
    HIBYTE(valueName.Length) = 0;
    if ( DxState == 5 )
      DxState = 4;
    v9 = DxState;
    goto LABEL_11;
  }
  if ( (unsigned int)(IdleCaps - 2) > 1 )
    goto LABEL_11;
  v9 = v6->DxState;
  HIBYTE(valueName.Length) = 1;
  _a2 = FxPkgPnp::PowerPolicyGetDeviceDeepestDeviceWakeState(this, 1u);
  if ( v9 == 5 )
  {
    v9 = _a2;
    if ( (unsigned int)(_a2 - 2) > 2 )
    {
LABEL_62:
      WPP_IFR_SF_DD(
        this->m_Globals,
        (unsigned __int8)Settings,
        0xCu,
        0x2Eu,
        WPP_FxPkgPnp_cpp_Traceguids,
        _a2,
        -1073741101);
      return -1073741101;
    }
    if ( _a2 > 3 )
    {
      if ( v6->IdleCaps != IdleUsbSelectiveSuspend )
        goto LABEL_11;
      goto LABEL_62;
    }
    goto LABEL_56;
  }
  if ( v9 > _a2 )
  {
    WPP_IFR_SF_LLd(this->m_Globals, (unsigned __int8)Settings, a3, 0x2Fu, traceGuid, v9, _a2, enabled);
    return -1073741101;
  }
  if ( v9 <= 3 )
  {
LABEL_56:
    if ( v6->IdleCaps == IdleUsbSelectiveSuspend )
    {
      inited = FxPowerPolicyMachine::InitUsbSS(&this->m_PowerPolicyMachine);
      v24 = inited;
      if ( inited < 0 )
      {
        WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x31u, WPP_FxPkgPnp_cpp_Traceguids, inited);
        return v24;
      }
    }
    goto LABEL_11;
  }
  if ( v6->IdleCaps == IdleUsbSelectiveSuspend )
  {
    WPP_IFR_SF_DD(this->m_Globals, (unsigned __int8)Settings, 0xCu, 0x30u, WPP_FxPkgPnp_cpp_Traceguids, v9, -1073741101);
    return -1073741101;
  }
LABEL_11:
  IdleTimeout = v6->IdleTimeout;
  if ( !IdleTimeout )
    IdleTimeout = 5000;
  UserControlOfIdleSettings = v6->UserControlOfIdleSettings;
  if ( UserControlOfIdleSettings == IdleAllowUserControl )
  {
    result = FxPkgPnp::UpdateWmiInstanceForS0Idle(this, AddInstance);
    if ( result < 0 )
      return result;
    if ( v6->Enabled == WdfUseDefault )
    {
      if ( !v10 || KeGetCurrentIrql() )
      {
        LOBYTE(valueName.Length) = this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Enabled;
      }
      else
      {
        ValueName.Buffer = (unsigned __int16 *)v36;
        wcscpy((wchar_t *)v36, L"IdleInWorkingState");
        *(_DWORD *)&ValueName.Length = 2490404;
        FxPkgPnp::ReadRegistryS0Idle(this, &ValueName, (bool *)&valueName);
      }
    }
    v7 = 1;
  }
  else if ( UserControlOfIdleSettings == IdleDoNotAllowUserControl )
  {
    v7 = 0;
    FxPkgPnp::UpdateWmiInstanceForS0Idle(this, RemoveInstance);
  }
  if ( v10 )
  {
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Set = 1;
    this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.Overridable = v7;
  }
  if ( v6->Size > 0x1C )
  {
    if ( v10 )
    {
      if ( (unsigned int)(v6->IdleTimeoutType - 1) <= 1 )
      {
        result = IdleTimeoutManagement::UseSystemManagedIdleTimeout(
                   &this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
                   this->m_Globals);
        if ( result < 0 )
          return result;
      }
    }
    else if ( (unsigned int)(v6->IdleTimeoutType - 1) <= 1 != ((this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0)
           && FxLibraryGlobals.PoxRegisterDevice )
    {
      v25 = "should";
      if ( (this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) == 0 )
        v25 = "should not";
      WPP_IFR_SF_sd(this->m_Globals, (unsigned __int8)"should not", a3, a4, traceGuid, v25, globals);
      m_Globals = this->m_Globals;
      *(_DWORD *)(&valueName.MaximumLength + 1) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&valueName.MaximumLength + 2,
        m_Globals->Public.DriverName,
        (const char *)&valueName.MaximumLength + 2);
      if ( *(_BYTE *)(v27 + 318) )
        DbgBreakPoint();
      return -1073741808;
    }
  }
  if ( v6->IdleCaps == IdleCannotWakeFromS0 )
  {
    if ( v6->Size <= 0x18 )
      PowerUpIdleDeviceOnSystemWake = 2;
    else
      PowerUpIdleDeviceOnSystemWake = v6->PowerUpIdleDeviceOnSystemWake;
    if ( PowerUpIdleDeviceOnSystemWake )
    {
      if ( PowerUpIdleDeviceOnSystemWake != 1 )
        goto LABEL_23;
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 1;
      v22 = this->m_Globals;
      if ( !v22->FxVerboseOn )
        goto LABEL_23;
      v28 = 51;
    }
    else
    {
      this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.PowerUpIdleDeviceOnSystemWake = 0;
      v22 = this->m_Globals;
      if ( !v22->FxVerboseOn )
        goto LABEL_23;
      v28 = 52;
    }
    WPP_IFR_SF_(v22, 5u, 0xCu, v28, WPP_FxPkgPnp_cpp_Traceguids);
  }
LABEL_23:
  m_Owner = this->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner->m_IdleSettings.UsbSSCapabilityKnown )
  {
    v17 = v6->IdleCaps;
    if ( v17 == IdleUsbSelectiveSuspend )
    {
      for ( i = 0LL; i < 2; ++i )
        *(&this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.UsbSSCapable + i) = 1;
    }
    else if ( v17 == IdleCanWakeFromS0 )
    {
      m_Owner->m_IdleSettings.UsbSSCapabilityKnown = 1;
    }
  }
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.WakeFromS0Capable = HIBYTE(valueName.Length);
  this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState = v9;
  if ( (this->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
  {
    if ( v10 )
      this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)-1LL;
    if ( v6->IdleTimeoutType == SystemManagedIdleTimeoutWithHint )
      this->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_NextIdleTimeoutHint = IdleTimeout;
  }
  else
  {
    this->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine.m_PowerTimeout = (_LARGE_INTEGER)(-10000LL * IdleTimeout);
  }
  if ( v6->Size > 0x1C )
  {
    ExcludeD3Cold = v6->ExcludeD3Cold;
    if ( ExcludeD3Cold != 2 )
    {
      if ( ExcludeD3Cold )
      {
        if ( ExcludeD3Cold != 1 )
          WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x35u, WPP_FxPkgPnp_cpp_Traceguids, ExcludeD3Cold);
        v8 = 0;
      }
      SetD3ColdSupport = this->m_D3ColdInterface.SetD3ColdSupport;
      if ( SetD3ColdSupport )
      {
        LOBYTE(Settings) = v8;
        SetD3ColdSupport(this->m_D3ColdInterface.Context, (unsigned __int8)Settings);
      }
    }
  }
  FxPkgPnp::PowerPolicySetS0IdleState(this, valueName.Length);
  return 0;
}
