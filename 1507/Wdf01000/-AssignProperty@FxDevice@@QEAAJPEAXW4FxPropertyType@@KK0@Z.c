/*
 * XREFs of ?AssignProperty@FxDevice@@QEAAJPEAXW4FxPropertyType@@KK0@Z @ 0x1C0075C50
 * Callers:
 *     imp_WdfDeviceAssignProperty @ 0x1C00709A0 (imp_WdfDeviceAssignProperty.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxDevice::AssignProperty(
        FxDevice *this,
        void *PropertyData,
        FxPropertyType Type,
        DEVPROPTYPE BufferLength,
        ULONG PropertyBuffer,
        void *PropertyData_0)
{
  const void *v6; // rbx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  unsigned int v9; // esi
  NTSTATUS v10; // eax

  v6 = 0LL;
  if ( this->m_PdoKnown && (m_DeviceObject = this->m_PhysicalDevice.FxDeviceBase::m_DeviceObject) != 0LL )
  {
    v10 = IoSetDevicePropertyData(
            m_DeviceObject,
            *((const DEVPROPKEY **)PropertyData + 1),
            *((_DWORD *)PropertyData + 4),
            *((_DWORD *)PropertyData + 5),
            BufferLength,
            PropertyBuffer,
            PropertyData_0);
    v9 = v10;
    if ( v10 < 0 )
    {
      if ( this->m_ObjectSize )
        v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x16u, WPP_FxDeviceKm_cpp_Traceguids, v6, v10);
    }
  }
  else
  {
    if ( this->m_ObjectSize )
      v6 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v9 = -1073741436;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x12u, 0x15u, WPP_FxDeviceKm_cpp_Traceguids, v6, -1073741436);
  }
  return v9;
}
