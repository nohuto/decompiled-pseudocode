/*
 * XREFs of imp_WdfPdoInitAssignContainerID @ 0x1C006BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C000FED4 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C000FEE4 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfPdoInitAssignContainerID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *ContainerID)
{
  _FX_DRIVER_GLOBALS *v5; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int16 Length; // dx
  int _a2; // eax
  unsigned __int16 v10; // r9
  FxString *v11; // rax
  FxString *v12; // rax
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v5 = DeviceInit->DriverGlobals;
  if ( !ContainerID )
    FxVerifierNullBugCheck(v5, retaddr);
  if ( v5->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v5, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
      if ( v5->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return -1073741808;
    }
  }
  Length = ContainerID->Length;
  if ( (ContainerID->Length & 1) != 0 )
  {
    _a2 = Length;
    v10 = 13;
LABEL_12:
    WPP_IFR_SF_qdd(v5, 2u, 6u, v10, WPP_FxValidateFunctions_hpp_Traceguids_0, ContainerID, _a2, -1073741811);
    return -1073741811;
  }
  LOWORD(_a2) = ContainerID->MaximumLength;
  if ( (_a2 & 1) != 0 )
  {
    _a2 = (unsigned __int16)_a2;
    v10 = 14;
    goto LABEL_12;
  }
  if ( (_WORD)_a2 && !ContainerID->Buffer )
  {
    _a2 = (unsigned __int16)_a2;
    v10 = 15;
    goto LABEL_12;
  }
  if ( Length > (unsigned __int16)_a2 )
  {
    WPP_IFR_SF_qddd(
      v5,
      Length,
      6u,
      0x10u,
      WPP_FxValidateFunctions_hpp_Traceguids_0,
      ContainerID,
      Length,
      (unsigned __int16)_a2,
      -1073741811);
    return -1073741811;
  }
  if ( DeviceInit->InitType != FxDeviceInitTypePdo )
  {
    WPP_IFR_SF_d(v5, 2u, 0x12u, 0x3Fu, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
    return -1073741808;
  }
  if ( DeviceInit->Pdo.ContainerID )
    return FxString::Assign(DeviceInit->Pdo.ContainerID, ContainerID);
  v11 = (FxString *)FxObjectHandleAlloc(v5, ExDefaultNonPagedPoolType, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( v11 )
    FxString::FxString(v11, v5);
  else
    v12 = 0LL;
  DeviceInit->Pdo.ContainerID = v12;
  if ( v12 )
    return FxString::Assign(DeviceInit->Pdo.ContainerID, ContainerID);
  WPP_IFR_SF_d(v5, 2u, 0x12u, 0x40u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741670);
  return -1073741670;
}
