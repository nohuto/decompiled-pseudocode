/*
 * XREFs of ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C006AAEC
 * Callers:
 *     imp_WdfFdoInitQueryPropertyEx @ 0x1C00640E0 (imp_WdfFdoInitQueryPropertyEx.c)
 *     imp_WdfDeviceQueryPropertyEx @ 0x1C0067600 (imp_WdfDeviceQueryPropertyEx.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C006B670 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001ADB4 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x1C0024880 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 */

__int64 __fastcall FxDevice::_QueryPropertyEx(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        void *PropertyData,
        unsigned int BufferLength,
        ULONG PropertyBuffer,
        PVOID ResultLength,
        unsigned int *PropertyType,
        unsigned int *DriverGlobals_0)
{
  unsigned int *v9; // r14
  unsigned int *v10; // r15
  __int64 result; // rax
  _DEVICE_OBJECT *PhysicalDevice; // rcx
  unsigned int DevicePropertyData; // ebx
  const void *v18; // rbx

  v9 = PropertyType;
  v10 = DriverGlobals_0;
  BufferLength = 0;
  *PropertyType = 0;
  *v10 = 0;
  result = FxDevice::_ValidateOpenKeyParams(DriverGlobals, DeviceInit, Device);
  if ( (int)result < 0 )
    return result;
  if ( DeviceInit )
  {
    PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
  }
  else
  {
    PhysicalDevice = FxDevice::GetSafePhysicalDevice(Device);
    if ( !PhysicalDevice )
    {
      if ( Device->m_ObjectSize )
        v18 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v18 = 0LL;
      WPP_IFR_SF_qd(DriverGlobals, 2u, 0x12u, 0x18u, WPP_FxDeviceKm_cpp_Traceguids, v18, -1073741436);
      return 3221225860LL;
    }
  }
  DevicePropertyData = IoGetDevicePropertyData(
                         PhysicalDevice,
                         *((const DEVPROPKEY **)PropertyData + 1),
                         *((_DWORD *)PropertyData + 4),
                         0,
                         PropertyBuffer,
                         ResultLength,
                         &BufferLength,
                         (PDEVPROPTYPE)&PropertyType);
  if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741789 )
  {
    *v9 = BufferLength;
    *v10 = (unsigned int)PropertyType;
  }
  else
  {
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, 0x19u, WPP_FxDeviceKm_cpp_Traceguids, DevicePropertyData);
  }
  return DevicePropertyData;
}
