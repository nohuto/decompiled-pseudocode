/*
 * XREFs of ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C0079E50
 * Callers:
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x1C0072730 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x1C0073230 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0014B44 (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C007929C (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 */

__int64 __fastcall FxDevice::_AllocAndQueryPropertyEx(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        void *PropertyData,
        unsigned int PoolType,
        _POOL_TYPE PropertyMemoryAttributes,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemory,
        WDFMEMORY__ **PropertyType,
        unsigned int *DriverGlobals_0)
{
  int _a1; // eax
  unsigned int v13; // edi
  unsigned __int16 v14; // r9
  void **v16; // r14
  unsigned int *v17; // rbp
  unsigned __int64 v18; // rsi
  _POOL_TYPE v19; // r8d
  _WDF_OBJECT_ATTRIBUTES *v20; // rdx
  FxMemoryObject *v21; // rdi
  IFxMemory *v22; // r15
  void *ResultLength; // rax
  int v24; // eax
  unsigned int v25; // r12d
  int v26; // eax
  unsigned int v27; // esi
  unsigned int traceGuid; // [rsp+20h] [rbp-68h]
  unsigned int traceGuida; // [rsp+20h] [rbp-68h]
  unsigned int propType; // [rsp+50h] [rbp-38h] BYREF
  FxMemoryObject *pMemory; // [rsp+58h] [rbp-30h] BYREF

  _a1 = FxDevice::_QueryPropertyEx(
          DriverGlobals,
          DeviceInit,
          Device,
          PropertyData,
          traceGuid,
          0,
          0LL,
          &PoolType,
          &propType);
  v13 = _a1;
  if ( _a1 != -1073741789 )
  {
    v14 = 19;
LABEL_3:
    WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, v14, WPP_FxDevice_cpp_Traceguids, _a1);
    return v13;
  }
  v16 = (void **)PropertyType;
  v17 = DriverGlobals_0;
  v18 = PoolType;
  v19 = PropertyMemoryAttributes;
  v20 = PropertyMemory;
  *PropertyType = 0LL;
  *v17 = 0;
  _a1 = FxMemoryObject::_Create(DriverGlobals, v20, v19, DriverGlobals->Tag, v18, &pMemory);
  v13 = _a1;
  if ( _a1 < 0 )
  {
    v14 = 20;
    goto LABEL_3;
  }
  v21 = pMemory;
  v22 = &pMemory->IFxMemory;
  ResultLength = (void *)pMemory->GetBuffer(&pMemory->IFxMemory);
  v24 = FxDevice::_QueryPropertyEx(
          DriverGlobals,
          DeviceInit,
          Device,
          PropertyData,
          traceGuida,
          v18,
          ResultLength,
          &PoolType,
          &propType);
  v25 = v24;
  if ( v24 >= 0 )
  {
    v26 = FxObject::Commit(v21, PropertyMemory, v16, 0LL, 1u);
    v27 = v26;
    if ( v26 >= 0 )
    {
      *v16 = v22->GetHandle(v22);
      *v17 = propType;
    }
    else
    {
      WPP_IFR_SF_d(DriverGlobals, 2u, 0xCu, 0x16u, WPP_FxDevice_cpp_Traceguids, v26);
      v21->DeleteObject(v21);
    }
    return v27;
  }
  else
  {
    WPP_IFR_SF_dd(DriverGlobals, 2u, 0xCu, 0x15u, WPP_FxDevice_cpp_Traceguids, v18, v24);
    v21->DeleteObject(v21);
    return v25;
  }
}
