/*
 * XREFs of imp_WdfDeviceInitSetRemoveLockOptions @ 0x1C0063D70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00635D8 (WPP_IFR_SF_qDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetRemoveLockOptions(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_REMOVE_LOCK_OPTIONS *RemoveLockOptions)
{
  _FX_DRIVER_GLOBALS *v3; // rbx
  unsigned int Flags; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( !RemoveLockOptions )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( RemoveLockOptions->Size != 8 )
  {
    WPP_IFR_SF_qdd(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      2u,
      6u,
      0x22u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      RemoveLockOptions,
      8,
      RemoveLockOptions->Size);
LABEL_11:
    FxVerifierDbgBreakPoint(v3);
    return;
  }
  Flags = RemoveLockOptions->Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
  {
    WPP_IFR_SF_qDd(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      (unsigned __int8)DeviceInit,
      6u,
      0x23u,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      RemoveLockOptions,
      Flags,
      1u);
    goto LABEL_11;
  }
  if ( DeviceInit->InitType == FxDeviceInitTypeControlDevice )
  {
    WPP_IFR_SF_(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      2u,
      6u,
      0x24u,
      WPP_FxDeviceInitApi_cpp_Traceguids);
    goto LABEL_11;
  }
  DeviceInit->RemoveLockOptionFlags = Flags;
}
