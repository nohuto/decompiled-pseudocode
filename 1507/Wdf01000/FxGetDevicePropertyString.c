/*
 * XREFs of FxGetDevicePropertyString @ 0x1C007FCB0
 * Callers:
 *     LogDriverInfoStream @ 0x1C0080164 (LogDriverInfoStream.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 */

void __fastcall FxGetDevicePropertyString(
        unsigned __int64 Fdo,
        __int32 DeviceProperty,
        _UNICODE_STRING *PropertyString)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  _DEVICE_OBJECT *v6; // rbx
  const void *_a1; // rcx
  NTSTATUS v8; // eax
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // dl
  _QWORD *v11; // r14
  NTSTATUS v12; // eax
  unsigned __int8 v13; // dl
  unsigned __int16 v14; // cx
  unsigned __int64 v15; // rdx
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int length; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_FX_DRIVER_GLOBALS **)(Fdo + 16);
  length = 0;
  *(_QWORD *)&PropertyString->Length = 0LL;
  PropertyString->Buffer = 0LL;
  if ( *(_BYTE *)(Fdo + 280) && (v6 = *(_DEVICE_OBJECT **)(Fdo + 160)) != 0LL )
  {
    v8 = IoGetDeviceProperty(v6, (DEVICE_REGISTRY_PROPERTY)DeviceProperty, 0, 0LL, &length);
    if ( v8 == -1073741789 )
    {
      v11 = FxPoolAllocator(v3, (_LIST_ENTRY *)&v3->FxPoolFrameworks, 1u, length, v3->Tag, retaddr);
      if ( v11 )
      {
        v12 = IoGetDeviceProperty(v6, (DEVICE_REGISTRY_PROPERTY)DeviceProperty, length, v11, &length);
        if ( v12 >= 0 )
        {
          v14 = length;
          PropertyString->Buffer = (unsigned __int16 *)v11;
          PropertyString->MaximumLength = v14;
          v15 = (unsigned __int16)(v14 - 2);
          PropertyString->Length = v15;
          *((_WORD *)v11 + (v15 >> 1)) = 0;
        }
        else
        {
          WPP_IFR_SF_DDd(v3, v13, 0x12u, 0x14u, WPP_FxTelemetryKm_cpp_Traceguids, length, DeviceProperty, v12);
          FxPoolFree(v11);
        }
      }
      else
      {
        WPP_IFR_SF_DDd(v3, v10, 0x12u, 0x13u, WPP_FxTelemetryKm_cpp_Traceguids, DeviceProperty, length, -1073741670);
      }
    }
    else
    {
      WPP_IFR_SF_DDd(v3, v9, 0x12u, 0x12u, WPP_FxTelemetryKm_cpp_Traceguids, DeviceProperty, length, v8);
    }
  }
  else
  {
    if ( *(_WORD *)(Fdo + 10) )
      _a1 = (const void *)(Fdo ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(v3, 2u, 0x12u, 0x11u, WPP_FxTelemetryKm_cpp_Traceguids, _a1, -1073741808);
  }
}
