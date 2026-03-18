/*
 * XREFs of ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C006A718
 * Callers:
 *     imp_WdfDeviceAssignProperty @ 0x1C0066DC0 (imp_WdfDeviceAssignProperty.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001ADB4 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

__int64 __fastcall FxDevice::AssignProperty(
        FxDevice *this,
        void *PropertyData,
        FxPropertyType Type,
        unsigned int BufferLength,
        ULONG PropertyBuffer,
        void *PropertyData_0)
{
  const void *v7; // rbx
  _DEVICE_OBJECT *SafePhysicalDevice; // rcx
  LCID v9; // r8d
  DEVPROPTYPE v10; // r9d
  const DEVPROPKEY *v11; // r10
  ULONG v12; // r11d
  unsigned int v13; // esi
  NTSTATUS v14; // eax

  v7 = 0LL;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( SafePhysicalDevice )
  {
    v14 = IoSetDevicePropertyData(SafePhysicalDevice, v11, v9, v12, v10, PropertyBuffer, PropertyData_0);
    v13 = v14;
    if ( v14 < 0 )
    {
      if ( this->m_ObjectSize )
        v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x16u, WPP_FxDeviceKm_cpp_Traceguids, v7, v14);
    }
  }
  else
  {
    if ( this->m_ObjectSize )
      v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v13 = -1073741436;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x12u, 0x15u, WPP_FxDeviceKm_cpp_Traceguids, v7, -1073741436);
  }
  return v13;
}
