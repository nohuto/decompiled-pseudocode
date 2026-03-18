/*
 * XREFs of imp_WdfDeviceInitAssignName @ 0x1C002E4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000EF70 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceInitAssignName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceName)
{
  _FX_DRIVER_GLOBALS *v4; // rdi
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 v9; // r9
  FxString *v10; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v12; // [rsp+68h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v4 = DeviceInit->DriverGlobals;
  if ( DeviceInit->DriverGlobals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v4, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v12 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v4->Public.DriverName,
        (const char *)&v12,
        v4->Public.DriverName,
        (const char *)&v12);
      if ( v4->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return -1073741808;
    }
  }
  if ( DeviceName )
  {
    Length = DeviceName->Length;
    if ( (DeviceName->Length & 1) != 0 )
    {
      _a2 = Length;
      v9 = 13;
    }
    else
    {
      LOWORD(_a2) = DeviceName->MaximumLength;
      if ( (_a2 & 1) != 0 )
      {
        _a2 = (unsigned __int16)_a2;
        v9 = 14;
      }
      else
      {
        if ( !(_WORD)_a2 || DeviceName->Buffer )
        {
          if ( Length <= (unsigned __int16)_a2 )
            return WDFDEVICE_INIT::AssignName(DeviceInit, v4, DeviceName);
          WPP_IFR_SF_qddd(
            v4,
            Length,
            6u,
            0x10u,
            WPP_FxValidateFunctions_hpp_Traceguids_0,
            DeviceName,
            Length,
            (unsigned __int16)_a2,
            -1073741811);
          return -1073741811;
        }
        _a2 = (unsigned __int16)_a2;
        v9 = 15;
      }
    }
    WPP_IFR_SF_qdd(v4, 2u, 6u, v9, WPP_FxValidateFunctions_hpp_Traceguids_0, DeviceName, _a2, -1073741811);
    return -1073741811;
  }
  v10 = DeviceInit->DeviceName;
  if ( v10 )
  {
    v10->Release(v10, 0LL, 334, "minkernel\\wdf\\framework\\shared\\core\\fxdeviceinitapi.cpp");
    DeviceInit->DeviceName = 0LL;
  }
  if ( DeviceInit->InitType == FxDeviceInitTypePdo )
    DeviceInit->Characteristics |= 0x80u;
  return 0;
}
