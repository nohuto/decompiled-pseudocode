/*
 * XREFs of imp_WdfFdoInitAllocAndQueryProperty @ 0x1C0025970
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C0025C18 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfFdoInitAllocAndQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        __int32 PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  WDFMEMORY__ **v9; // rsi
  _FX_DRIVER_GLOBALS *v10; // rbx
  _WDF_OBJECT_ATTRIBUTES *v11; // rbp
  int result; // eax
  unsigned __int8 CurrentIrql; // cl
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v15; // [rsp+68h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v9 = PropertyMemory;
  v10 = DeviceInit->DriverGlobals;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(v10, retaddr);
  *PropertyMemory = 0LL;
  if ( v10->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v10, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      v15 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v10->Public.DriverName,
        (const char *)&v15,
        v10->Public.DriverName,
        (const char *)&v15);
      if ( v10->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return -1073741808;
    }
    if ( FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType((_POOL_TYPE)PoolType, retaddr, v10->Tag);
  }
  v11 = PropertyMemoryAttributes;
  result = FxValidateObjectAttributes(v10, PropertyMemoryAttributes, 0, PoolType);
  if ( result < 0 )
    return result;
  if ( DeviceInit->InitType )
  {
    WPP_IFR_SF_d(v10, 2u, 0x12u, 0x2Au, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
    return -1073741808;
  }
  return FxDevice::_AllocAndQueryProperty(v10, DeviceInit, 0LL, 0LL, DeviceProperty, (_POOL_TYPE)PoolType, v11, v9);
}
