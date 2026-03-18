/*
 * XREFs of FxGetDevicePropertyString @ 0x1C00727CC
 * Callers:
 *     LogDriverInfoStream @ 0x1C0072C70 (LogDriverInfoStream.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001ADB4 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 */

void __fastcall FxGetDevicePropertyString(FxDevice *Fdo, __int32 DeviceProperty, _UNICODE_STRING *PropertyString)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  DEVICE_REGISTRY_PROPERTY v6; // edx
  __int64 v7; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // rbp
  const void *_a1; // rcx
  NTSTATUS v10; // eax
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // dl
  _QWORD *v13; // r14
  NTSTATUS v14; // eax
  unsigned __int8 v15; // dl
  unsigned __int16 v16; // cx
  unsigned __int64 v17; // rdx
  void *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int length; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = Fdo->m_Globals;
  length = 0;
  *(_QWORD *)&PropertyString->Length = 0LL;
  PropertyString->Buffer = 0LL;
  SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(Fdo);
  if ( SafePhysicalDevice )
  {
    v10 = IoGetDeviceProperty(SafePhysicalDevice, v6, 0, 0LL, &length);
    if ( v10 == -1073741789 )
    {
      v13 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, 1u, length, m_Globals->Tag, retaddr);
      if ( v13 )
      {
        v14 = IoGetDeviceProperty(SafePhysicalDevice, (DEVICE_REGISTRY_PROPERTY)DeviceProperty, length, v13, &length);
        if ( v14 >= 0 )
        {
          v16 = length;
          PropertyString->Buffer = (unsigned __int16 *)v13;
          PropertyString->MaximumLength = v16;
          v17 = (unsigned __int16)(v16 - 2);
          PropertyString->Length = v17;
          *((_WORD *)v13 + (v17 >> 1)) = 0;
        }
        else
        {
          WPP_IFR_SF_DDd(m_Globals, v15, 0x12u, 0x14u, WPP_FxTelemetryKm_cpp_Traceguids, length, DeviceProperty, v14);
          FxPoolFree(v13);
        }
      }
      else
      {
        WPP_IFR_SF_DDd(
          m_Globals,
          v12,
          0x12u,
          0x13u,
          WPP_FxTelemetryKm_cpp_Traceguids,
          DeviceProperty,
          length,
          -1073741670);
      }
    }
    else
    {
      WPP_IFR_SF_DDd(m_Globals, v11, 0x12u, 0x12u, WPP_FxTelemetryKm_cpp_Traceguids, DeviceProperty, length, v10);
    }
  }
  else
  {
    if ( *(_WORD *)(v7 + 10) )
      _a1 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0x11u, WPP_FxTelemetryKm_cpp_Traceguids, _a1, -1073741808);
  }
}
