/*
 * XREFs of imp_WdfDeviceQueryProperty @ 0x1C002DE90
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C002E184 (-_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJEC.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int32 DeviceProperty,
        unsigned int BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength)
{
  unsigned int *v9; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  void *v11; // rdi
  __int64 result; // rax
  int Property; // eax
  unsigned int v14; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  v9 = ResultLength;
  m_Globals = pDevice->m_Globals;
  if ( !ResultLength )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v11 = PropertyBuffer;
  if ( BufferLength && !PropertyBuffer )
    FxVerifierNullBugCheck(pDevice->m_Globals, retaddr);
  result = FxVerifierCheckIrqlLevel(pDevice->m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( pDevice->m_Legacy )
    {
      v14 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x1Eu, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741808);
    }
    else
    {
      Property = FxDevice::_QueryProperty(
                   m_Globals,
                   0LL,
                   pDevice,
                   0LL,
                   (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
                   BufferLength,
                   v11,
                   v9);
      v14 = Property;
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x1Fu, WPP_FxDeviceApi_cpp_Traceguids, Device, DeviceProperty, Property);
    }
    return v14;
  }
  return result;
}
