/*
 * XREFs of ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0023840
 * Callers:
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0023780 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C0033E30 (imp_WdfFdoInitOpenRegistryKey.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0004D30 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C0009314 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023A5C (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0023F30 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x1C0024880 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

int __fastcall FxDevice::_OpenKey(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device,
        ULONG DeviceInstanceKeyType,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  int result; // eax
  _DEVICE_OBJECT *PhysicalDevice; // rbp
  _POOL_TYPE v13; // ebx
  ULONG Tag; // r15d
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  int v19; // edi
  const void *v20; // rdi
  void *hKey; // [rsp+40h] [rbp-28h] BYREF
  WDFKEY__ *keyHandle; // [rsp+48h] [rbp-20h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  hKey = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, KeyAttributes, 0, DeviceInstanceKeyType);
  if ( result < 0 )
    return result;
  result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
  if ( result < 0 )
    return result;
  result = FxDevice::_ValidateOpenKeyParams(FxDriverGlobals, DeviceInit, Device);
  if ( result < 0 )
    return result;
  if ( DeviceInit )
  {
    PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
  }
  else if ( !Device->m_PdoKnown || (PhysicalDevice = Device->m_PhysicalDevice.FxDeviceBase::m_DeviceObject) == 0LL )
  {
    if ( Device->m_ObjectSize )
      v20 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v20 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDeviceKm_cpp_Traceguids, v20, -1073741436);
    return -1073741436;
  }
  v13 = ExDefaultNonPagedPoolType;
  Tag = FxDriverGlobals->Tag;
  ContextSize = FxGetContextSize(KeyAttributes);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x80u, 0, ContextSize, (unsigned __int64 *)&keyHandle) < 0 )
    goto LABEL_30;
  Caller = retaddr;
  if ( !FxDriverGlobals->FxPoolTrackingOn )
    Caller = 0LL;
  v17 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v13, (SIZE_T)keyHandle, Tag, Caller);
  v18 = v17;
  if ( v17 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v17, 0, 0x20uLL);
      *((_DWORD *)v18 + 7) = 1146058822;
      v18 += 4;
    }
    FxContextHeaderInit((FxContextHeader *)v18 + 2, (FxObject *)v18, KeyAttributes);
  }
  if ( v18 )
  {
    *((_DWORD *)v18 + 2) = 8392710;
    *v18 = &FxObject::`vftable';
    v18[2] = FxDriverGlobals;
    v18[7] = 0LL;
    *((_BYTE *)v18 + 48) = 1;
    FxObject::Construct((FxObject *)v18, 0LL);
    *((_WORD *)v18 + 12) |= 0x11u;
    *v18 = &FxRegKey::`vftable';
    v18[13] = 0LL;
    v18[14] = 0LL;
    v18[15] = FxDriverGlobals;
  }
  else
  {
LABEL_30:
    v18 = 0LL;
  }
  if ( !v18 )
    return -1073741670;
  if ( Device )
    v18[12] = Device;
  v19 = FxObject::Commit((FxObject *)v18, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
  if ( v19 < 0 || (v19 = IoOpenDeviceRegistryKey(PhysicalDevice, DeviceInstanceKeyType, DesiredAccess, &hKey), v19 < 0) )
  {
    FxObject::DeleteFromFailedCreate((FxObject *)v18);
  }
  else
  {
    v18[14] = hKey;
    *Key = keyHandle;
  }
  return v19;
}
