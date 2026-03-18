/*
 * XREFs of imp_WdfDeviceAssignS0IdleSettings @ 0x1C002BCB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x1C001B130 (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAssignS0IdleSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS *Settings,
        unsigned __int16 a4)
{
  WDFDEVICE__ *_a1; // rdi
  FxDevice *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxPkgPnp *m_PkgPnp; // r8
  unsigned int Size; // ecx
  _WDF_POWER_POLICY_S0_IDLE_CAPABILITIES IdleCaps; // edx
  _WDF_TRI_STATE PowerUpIdleDeviceOnSystemWake; // eax
  unsigned __int16 v13; // r9
  int _a2; // ebx
  unsigned int v15; // r8d
  unsigned __int16 v16; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+58h] [rbp+10h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v6 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v6->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v6 = (FxDevice *)((char *)v6 - Device);
  }
  if ( v6->m_Type == 4098 )
  {
    pDevice = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pDevice, _a1, 0x1002u, Device);
    v6 = pDevice;
  }
  m_Globals = v6->m_Globals;
  if ( !Settings )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  m_PkgPnp = v6->m_PkgPnp;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    Size = Settings->Size;
    if ( ((Settings->Size - 24) & 0xFFFFFFF3) != 0 || Size == 32 )
    {
      _a2 = -1073741820;
      WPP_IFR_SF_DDd(m_Globals, Device, 0x12u, 0xCu, WPP_FxDeviceApi_cpp_Traceguids, 36, Size, -1073741820);
      return _a2;
    }
    if ( (unsigned int)(Settings->DxState - 2) > 3
      || (IdleCaps = Settings->IdleCaps, (unsigned int)(IdleCaps - 1) > 2)
      || (unsigned int)(Settings->UserControlOfIdleSettings - 1) > 1
      || Settings->Enabled > (unsigned int)WdfUseDefault )
    {
      v16 = 13;
      goto LABEL_29;
    }
    if ( Size > 0x18 )
    {
      PowerUpIdleDeviceOnSystemWake = Settings->PowerUpIdleDeviceOnSystemWake;
      if ( (unsigned int)PowerUpIdleDeviceOnSystemWake > WdfUseDefault )
      {
        v16 = 14;
        goto LABEL_29;
      }
      if ( IdleCaps != IdleCannotWakeFromS0 && PowerUpIdleDeviceOnSystemWake != WdfUseDefault )
      {
        v16 = 15;
LABEL_29:
        _a2 = -1073741811;
        WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v16, WPP_FxDeviceApi_cpp_Traceguids, -1073741811);
        return _a2;
      }
    }
    if ( Size <= 0x1C || Settings->IdleTimeoutType <= SystemManagedIdleTimeoutWithHint )
      return FxPkgPnp::PowerPolicySetS0IdleSettings(m_PkgPnp, Settings, (unsigned int)m_PkgPnp, a4);
    v13 = 16;
    _a2 = -1073741811;
    v15 = 18;
  }
  else
  {
    v13 = 11;
    _a2 = -1073741808;
    v15 = 12;
  }
  WPP_IFR_SF_qd(m_Globals, 2u, v15, v13, WPP_FxDeviceApi_cpp_Traceguids, _a1, _a2);
  return _a2;
}
