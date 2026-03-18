/*
 * XREFs of imp_WdfDeviceWdmAssignPowerFrameworkSettings @ 0x1C006CD70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C009D05C (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 */

int __fastcall imp_WdfDeviceWdmAssignPowerFrameworkSettings(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_POWER_FRAMEWORK_SETTINGS *PowerFrameworkSettings)
{
  WDFDEVICE__ *_a1; // rdi
  FxDevice *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxPkgPnp *m_PkgPnp; // rcx
  int v8; // esi
  unsigned int _a4; // eax
  _PO_FX_COMPONENT_V1 *Component; // rax
  unsigned __int16 v12; // r9
  void *retaddr; // [rsp+68h] [rbp+18h]
  FxDevice *pDevice; // [rsp+88h] [rbp+38h] BYREF

  _a1 = (WDFDEVICE__ *)Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v5 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( ((unsigned __int8)_a1 & 1) != 0 )
  {
    Device = LOWORD(v5->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v5 = (FxDevice *)((char *)v5 - Device);
  }
  if ( v5->m_Type == 4098 )
  {
    pDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pDevice, _a1, 0x1002u, Device);
    v5 = pDevice;
  }
  m_Globals = v5->m_Globals;
  if ( !PowerFrameworkSettings )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  m_PkgPnp = v5->m_PkgPnp;
  if ( m_PkgPnp->m_PowerPolicyMachine.m_Owner )
  {
    _a4 = PowerFrameworkSettings->Size;
    if ( PowerFrameworkSettings->Size != 72 )
    {
      v8 = -1073741820;
      WPP_IFR_SF_qddd(m_Globals, Device, 0x12u, 0x1Eu, WPP_FxDeviceApiKm_cpp_Traceguids, _a1, 72, _a4, -1073741820);
      goto LABEL_12;
    }
    Component = PowerFrameworkSettings->Component;
    if ( Component )
    {
      if ( !Component->IdleStateCount )
      {
        v12 = 31;
LABEL_20:
        v8 = -1073741811;
        WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, v12, WPP_FxDeviceApiKm_cpp_Traceguids, _a1, -1073741811);
        goto LABEL_12;
      }
      if ( !Component->IdleStates )
      {
        v12 = 32;
        goto LABEL_20;
      }
    }
    return FxPkgPnp::AssignPowerFrameworkSettings(m_PkgPnp, PowerFrameworkSettings);
  }
  v8 = -1073741808;
  WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x1Du, WPP_FxDeviceApiKm_cpp_Traceguids, _a1, -1073741808);
LABEL_12:
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return v8;
}
