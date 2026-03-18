/*
 * XREFs of ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C007CD54
 * Callers:
 *     imp_WdfDeviceAssignProperty @ 0x1C0077190 (imp_WdfDeviceAssignProperty.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001EE80 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 */

__int64 __fastcall FxDevice::AssignProperty(
        FxDevice *this,
        void *PropertyData,
        FxPropertyType Type,
        unsigned int BufferLength,
        ULONG PropertyBuffer,
        PVOID Data)
{
  _DEVICE_OBJECT *SafePhysicalDevice; // rcx
  LCID v8; // r8d
  DEVPROPTYPE v9; // r9d
  const DEVPROPKEY *v10; // r10
  ULONG v11; // r11d
  unsigned __int16 v12; // r9
  unsigned int v13; // r8d
  const void *v14; // rdx
  NTSTATUS v15; // edi
  bool v16; // zf

  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this);
  if ( SafePhysicalDevice )
  {
    v15 = IoSetDevicePropertyData(SafePhysicalDevice, v10, v8, v11, v9, PropertyBuffer, Data);
    if ( v15 >= 0 )
      return (unsigned int)v15;
    v12 = 22;
    v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v16 = this->m_ObjectSize == 0;
    v13 = 12;
  }
  else
  {
    v12 = 21;
    v13 = 18;
    v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v15 = -1073741436;
    v16 = this->m_ObjectSize == 0;
  }
  if ( v16 )
    v14 = 0LL;
  WPP_IFR_SF_qd(this->m_Globals, 2u, v13, v12, WPP_FxDeviceKm_cpp_Traceguids, v14, v15);
  return (unsigned int)v15;
}
