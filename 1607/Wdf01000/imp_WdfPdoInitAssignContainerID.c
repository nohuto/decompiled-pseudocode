/*
 * XREFs of imp_WdfPdoInitAssignContainerID @ 0x1C0072B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C0002388 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00023CC (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C0017008 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ??0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017018 (--0FxString@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfPdoInitAssignContainerID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *ContainerID)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  _FX_DRIVER_GLOBALS *v6; // rcx
  int result; // eax
  int _a1; // ebx
  unsigned __int16 v9; // r9
  FxString *v10; // rax
  FxString *v11; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v5 = DeviceInit->DriverGlobals;
  v6 = DeviceInit->DriverGlobals;
  if ( !ContainerID )
    FxVerifierNullBugCheck(v6, retaddr);
  result = FxVerifierCheckIrqlLevel(v6, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(v5, ContainerID);
    if ( result >= 0 )
    {
      if ( DeviceInit->InitType != FxDeviceInitTypePdo )
      {
        _a1 = -1073741808;
        v9 = 63;
LABEL_9:
        WPP_IFR_SF_d(v5, 2u, 0x12u, v9, WPP_FxDeviceInitApi_cpp_Traceguids, _a1);
        return _a1;
      }
      if ( !DeviceInit->Pdo.ContainerID )
      {
        v10 = (FxString *)FxObjectHandleAlloc(v5, ExDefaultNonPagedPoolType, 0x78uLL, 0, 0LL, 0, FxObjectTypeExternal);
        if ( v10 )
          FxString::FxString(v10, v5);
        else
          v11 = 0LL;
        DeviceInit->Pdo.ContainerID = v11;
        if ( !v11 )
        {
          _a1 = -1073741670;
          v9 = 64;
          goto LABEL_9;
        }
      }
      return FxString::Assign(DeviceInit->Pdo.ContainerID, ContainerID);
    }
  }
  return result;
}
