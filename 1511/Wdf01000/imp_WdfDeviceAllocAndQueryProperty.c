/*
 * XREFs of imp_WdfDeviceAllocAndQueryProperty @ 0x1C002DF70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C002E058 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfDeviceAllocAndQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int32 DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  WDFMEMORY__ **v9; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  __int64 result; // rax
  unsigned __int16 v12; // r9
  _WDF_OBJECT_ATTRIBUTES *v13; // rdi
  int Property; // eax
  unsigned int v15; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice);
  v9 = PropertyMemory;
  m_Globals = pDevice->m_Globals;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *PropertyMemory = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( m_Globals->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, m_Globals->Tag);
    v13 = PropertyMemoryAttributes;
    result = FxValidateObjectAttributes(m_Globals, PropertyMemoryAttributes, 0, v12);
    if ( (int)result >= 0 )
    {
      if ( pDevice->m_Legacy )
      {
        v15 = -1073741808;
        WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x20u, WPP_FxDeviceApi_cpp_Traceguids, Device, -1073741808);
      }
      else
      {
        Property = FxDevice::_AllocAndQueryProperty(
                     m_Globals,
                     0LL,
                     pDevice,
                     0LL,
                     (DEVICE_REGISTRY_PROPERTY)DeviceProperty,
                     PoolType,
                     v13,
                     v9);
        v15 = Property;
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_qdd(m_Globals, 5u, 0x12u, 0x21u, WPP_FxDeviceApi_cpp_Traceguids, Device, DeviceProperty, Property);
      }
      return v15;
    }
  }
  return result;
}
