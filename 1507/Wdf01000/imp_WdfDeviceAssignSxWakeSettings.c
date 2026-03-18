/*
 * XREFs of imp_WdfDeviceAssignSxWakeSettings @ 0x1C002BDF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z @ 0x1C001AFB4 (-PowerPolicySetSxWakeSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS@@EE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceAssignSxWakeSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS *Settings)
{
  unsigned __int8 IndicateChildWakeOnParentWake; // di
  WDFDEVICE__ *_a1; // rsi
  FxDevice *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxPkgPnp *m_PkgPnp; // r11
  unsigned int Size; // ecx
  unsigned __int8 ArmForWakeIfChildrenAreArmedForWake; // r8
  int v12; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxDevice *pDevice; // [rsp+58h] [rbp+10h] BYREF

  IndicateChildWakeOnParentWake = 0;
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
  if ( !m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    v12 = -1073741808;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x11u, WPP_FxDeviceApi_cpp_Traceguids, _a1, -1073741808);
    return v12;
  }
  Size = Settings->Size;
  if ( ((Settings->Size - 16) & 0xFFFFFFFB) != 0 )
  {
    v12 = -1073741820;
    WPP_IFR_SF_DDd(m_Globals, Device, 0x12u, 0x12u, WPP_FxDeviceApi_cpp_Traceguids, 20, Size, -1073741820);
    return v12;
  }
  if ( (unsigned int)(Settings->DxState - 2) > 3
    || (unsigned int)(Settings->UserControlOfWakeSettings - 1) > 1
    || Settings->Enabled > (unsigned int)WdfUseDefault )
  {
    v12 = -1073741811;
    WPP_IFR_SF_d(m_Globals, 2u, 0x12u, 0x13u, WPP_FxDeviceApi_cpp_Traceguids, -1073741811);
    return v12;
  }
  if ( Size <= 0x10 )
    ArmForWakeIfChildrenAreArmedForWake = 0;
  else
    ArmForWakeIfChildrenAreArmedForWake = Settings->ArmForWakeIfChildrenAreArmedForWake;
  if ( Size > 0x10 )
    IndicateChildWakeOnParentWake = Settings->IndicateChildWakeOnParentWake;
  return FxPkgPnp::PowerPolicySetSxWakeSettings(
           m_PkgPnp,
           Settings,
           ArmForWakeIfChildrenAreArmedForWake,
           IndicateChildWakeOnParentWake);
}
