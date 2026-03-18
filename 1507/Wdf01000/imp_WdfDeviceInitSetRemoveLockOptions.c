/*
 * XREFs of imp_WdfDeviceInitSetRemoveLockOptions @ 0x1C006B9D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfDeviceInitSetRemoveLockOptions(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_REMOVE_LOCK_OPTIONS *RemoveLockOptions)
{
  char *v3; // rbx
  unsigned int Flags; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = &DriverGlobals[-8].DriverName[16];
  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( !RemoveLockOptions )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( RemoveLockOptions->Size == 8 )
  {
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
    }
    else
    {
      if ( DeviceInit->InitType != FxDeviceInitTypeControlDevice )
      {
        DeviceInit->RemoveLockOptionFlags = Flags;
        return;
      }
      WPP_IFR_SF_(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
        2u,
        6u,
        0x24u,
        WPP_FxDeviceInitApi_cpp_Traceguids);
    }
  }
  else
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
  }
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( v3[318] )
    DbgBreakPoint();
}
