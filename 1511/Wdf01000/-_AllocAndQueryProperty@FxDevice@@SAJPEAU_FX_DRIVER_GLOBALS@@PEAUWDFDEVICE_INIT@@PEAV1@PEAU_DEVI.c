/*
 * XREFs of ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C002E058
 * Callers:
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x1C002DCA0 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x1C002DF70 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x1C0074ED0 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C002E184 (-_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJEC.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C002E204 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0059110 (WPP_IFR_SF_dd.c)
 */

__int64 __fastcall FxDevice::_AllocAndQueryProperty(
        _FX_DRIVER_GLOBALS *Globals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        _DEVICE_OBJECT *RemotePdo,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  FxMemoryObject *v15; // rsi
  void *PropertyBuffer; // rax
  int v17; // eax
  int v18; // eax
  unsigned int length; // [rsp+40h] [rbp-28h] BYREF
  FxMemoryObject *pMemory; // [rsp+48h] [rbp-20h] BYREF

  length = 0;
  v12 = FxDevice::_QueryProperty(Globals, DeviceInit, Device, RemotePdo, DeviceProperty, 0, 0LL, &length);
  v13 = v12;
  if ( v12 != -1073741789 )
  {
    WPP_IFR_SF_dd(Globals, 2u, 0x12u, 0xFu, WPP_FxDevice_cpp_Traceguids, DeviceProperty, v12);
    return v13;
  }
  v14 = FxMemoryObject::_Create(Globals, PropertyMemoryAttributes, PoolType, Globals->Tag, length, &pMemory);
  v13 = v14;
  if ( v14 < 0 )
  {
    WPP_IFR_SF_d(Globals, 2u, 0x12u, 0x10u, WPP_FxDevice_cpp_Traceguids, v14);
    return v13;
  }
  v15 = pMemory;
  PropertyBuffer = (void *)pMemory->GetBuffer(&pMemory->IFxMemory);
  v17 = FxDevice::_QueryProperty(
          Globals,
          DeviceInit,
          Device,
          RemotePdo,
          DeviceProperty,
          length,
          PropertyBuffer,
          &length);
  v13 = v17;
  if ( v17 < 0 )
  {
    WPP_IFR_SF_DDd(Globals, length, 0x12u, 0x11u, WPP_FxDevice_cpp_Traceguids, length, DeviceProperty, v17);
LABEL_10:
    v15->DeleteObject(v15);
    return v13;
  }
  v18 = FxObject::Commit(v15, PropertyMemoryAttributes, (void **)PropertyMemory, 0LL, 1u);
  v13 = v18;
  if ( v18 < 0 )
  {
    WPP_IFR_SF_d(Globals, 2u, 0x12u, 0x12u, WPP_FxDevice_cpp_Traceguids, v18);
    goto LABEL_10;
  }
  return v13;
}
