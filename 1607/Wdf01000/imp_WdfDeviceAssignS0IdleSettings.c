/*
 * XREFs of imp_WdfDeviceAssignS0IdleSettings @ 0x1C0035BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C002884C (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAssignS0IdleSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings)
{
  unsigned __int8 v5; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxPkgPnp *m_PkgPnp; // r8
  unsigned int Size; // ecx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // edx
  _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake; // eax
  unsigned __int16 v12; // r9
  int _a2; // ebx
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  m_Globals = pDevice->m_Globals;
  if ( !Settings )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  m_PkgPnp = pDevice->m_PkgPnp;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    Size = Settings->Size;
    if ( ((Settings->Size - 24) & 0xFFFFFFF3) != 0 || Size == 32 )
    {
      _a2 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, v5, 0x12u, 0xCu, WPP_FxDeviceApi_cpp_Traceguids, 36, Size, -1073741820);
      return _a2;
    }
    if ( (unsigned int)(Settings->DxState - 2) > 3
      || (IdleCaps = Settings->IdleCaps, (unsigned int)(IdleCaps - 1) > 2)
      || (unsigned int)(Settings->UserControlOfIdleSettings - 1) > 1
      || Settings->Enabled > (unsigned int)WdfUseDefault )
    {
      v15 = 13;
    }
    else
    {
      if ( Size <= 0x18 )
      {
LABEL_10:
        if ( Size <= 0x1C || Settings->IdleTimeoutType <= SystemManagedIdleTimeoutWithHint )
          return FxPkgPnp::PowerPolicySetS0IdleSettings(m_PkgPnp, (unsigned __int64)Settings);
        v12 = 16;
        _a2 = -1073741811;
        v14 = 18;
        goto LABEL_20;
      }
      PowerUpIdleDeviceOnSystemWake = Settings->PowerUpIdleDeviceOnSystemWake;
      if ( (unsigned int)PowerUpIdleDeviceOnSystemWake > WdfUseDefault )
      {
        v15 = 14;
      }
      else
      {
        if ( IdleCaps == IdleCannotWakeFromS0 || PowerUpIdleDeviceOnSystemWake == WdfUseDefault )
          goto LABEL_10;
        v15 = 15;
      }
    }
    _a2 = -1073741811;
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v15, WPP_FxDeviceApi_cpp_Traceguids, -1073741811);
    return _a2;
  }
  v12 = 11;
  _a2 = -1073741808;
  v14 = 12;
LABEL_20:
  WPP_IFR_SF_qd(m_Globals, 2u, v14, v12, WPP_FxDeviceApi_cpp_Traceguids, Device, _a2);
  return _a2;
}
