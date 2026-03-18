/*
 * XREFs of ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C001ECA0
 * Callers:
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C001EBC0 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C0030590 (imp_WdfFdoInitOpenRegistryKey.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F194 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F204 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x1C001F228 (-_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
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
  _DEVICE_OBJECT *PhysicalDevice; // r14
  _POOL_TYPE v13; // ebx
  ULONG Tag; // r15d
  unsigned __int64 ContextSize; // rax
  _LIST_ENTRY *Caller; // rax
  _QWORD *v17; // rax
  _FX_DRIVER_GLOBALS *v18; // rdx
  _QWORD *v19; // rbx
  __int64 v20; // rax
  int v21; // edi
  unsigned __int8 CurrentIrql; // al
  const void *v23; // rsi
  WDFKEY__ *keyHandle; // [rsp+40h] [rbp-38h] BYREF
  void *hKey; // [rsp+48h] [rbp-30h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+78h] [rbp+0h]

  hKey = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, KeyAttributes, 0, DeviceInstanceKeyType);
  if ( result < 0 )
    return result;
  if ( FxDriverGlobals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    LODWORD(keyHandle) = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      FxDriverGlobals->Public.DriverName,
      (const char *)&keyHandle,
      FxDriverGlobals->Public.DriverName,
      (const char *)&keyHandle);
    if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return -1073741808;
  }
  else
  {
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
        v23 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v23 = 0LL;
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDeviceKm_cpp_Traceguids, v23, -1073741436);
      return -1073741436;
    }
    v13 = ExDefaultNonPagedPoolType;
    Tag = FxDriverGlobals->Tag;
    ContextSize = FxGetContextSize(KeyAttributes);
    if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x80u, 0, ContextSize, (unsigned __int64 *)&keyHandle) < 0 )
      return -1073741670;
    if ( FxDriverGlobals->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v17 = FxPoolAllocator(
            FxDriverGlobals,
            (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
            v13,
            (SIZE_T)keyHandle,
            Tag,
            Caller);
    v19 = v17;
    if ( v17 )
    {
      if ( FxDriverGlobals->FxVerifierHandle )
      {
        memset(v17, 0, 0x20uLL);
        *((_DWORD *)v19 + 7) = 1146058822;
        v19 += 4;
      }
      FxContextHeaderInit((FxContextHeader *)v19 + 2, (FxObject *)v19, KeyAttributes);
    }
    if ( v19 )
    {
      v19[2] = FxDriverGlobals;
      *v19 = &FxObject::`vftable';
      *((_DWORD *)v19 + 2) = 8392710;
      v19[7] = 0LL;
      *((_BYTE *)v19 + 48) = 1;
      *((_DWORD *)v19 + 3) = 1;
      *((_DWORD *)v19 + 6) = 0x10000;
      v19[8] = 0LL;
      v19[5] = v19 + 4;
      v19[4] = v19 + 4;
      v19[10] = v19 + 9;
      v19[9] = v19 + 9;
      v20 = v19[2];
      v19[11] = 0LL;
      v19[12] = 0LL;
      if ( *(_BYTE *)(v20 + 316) )
        FxObject::Vf_VerifyConstruct((FxObject *)v19, v18, 0);
      *((_WORD *)v19 + 12) |= 0x11u;
      v19[13] = 0LL;
      *v19 = &FxRegKey::`vftable';
      v19[14] = 0LL;
      v19[15] = FxDriverGlobals;
      if ( Device )
        v19[12] = Device;
      v21 = FxObject::Commit((FxObject *)v19, KeyAttributes, (void **)&keyHandle, 0LL, 1u);
      if ( v21 < 0
        || (v21 = IoOpenDeviceRegistryKey(PhysicalDevice, DeviceInstanceKeyType, DesiredAccess, &hKey), v21 < 0) )
      {
        FxObject::DeleteFromFailedCreate((FxObject *)v19);
      }
      else
      {
        v19[14] = hKey;
        *Key = keyHandle;
      }
      return v21;
    }
    else
    {
      return -1073741670;
    }
  }
}
