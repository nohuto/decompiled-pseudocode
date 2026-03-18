/*
 * XREFs of ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x1C0036E70
 * Callers:
 *     imp_WdfFdoInitOpenRegistryKey @ 0x1C0036CD0 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x1C0036D80 (imp_WdfDeviceOpenRegistryKey.c)
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00030C8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C000C608 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxDevice::_OpenKey(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned __int64 Device,
        ULONG DeviceInstanceKeyType,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  __int64 result; // rax
  _DEVICE_OBJECT *PhysicalDevice; // r15
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v14; // ebx
  ULONG Tag; // r14d
  void *Caller; // rax
  FxObject *v17; // rax
  FxObject *v18; // rbx
  int v19; // edi
  unsigned __int16 v20; // ax
  const void *v21; // rsi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v23; // rax
  unsigned __int64 ContextSize; // r8
  void *hKey; // [rsp+40h] [rbp-38h] BYREF
  WDFKEY__ *keyHandle[6]; // [rsp+48h] [rbp-30h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  hKey = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, KeyAttributes, 0, DeviceInstanceKeyType);
  if ( (int)result < 0 )
    return result;
  result = FxVerifierCheckIrqlLevel(FxDriverGlobals, 0);
  if ( (int)result < 0 )
    return result;
  if ( DeviceInit )
  {
    if ( !Device )
    {
      PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
LABEL_7:
      ContextSizeOverride = 0LL;
      v14 = ExDefaultNonPagedPoolType;
      Tag = FxDriverGlobals->Tag;
      if ( KeyAttributes )
      {
        ContextTypeInfo = KeyAttributes->ContextTypeInfo;
        if ( ContextTypeInfo )
        {
          ContextSizeOverride = KeyAttributes->ContextSizeOverride;
          if ( !ContextSizeOverride )
            ContextSizeOverride = ContextTypeInfo->ContextSize;
        }
      }
      if ( (int)FxCalculateObjectTotalSize2(
                  FxDriverGlobals,
                  0x80u,
                  0,
                  ContextSizeOverride,
                  (unsigned __int64 *)keyHandle) < 0 )
        return 3221225626LL;
      if ( FxDriverGlobals->FxPoolTrackingOn )
        Caller = retaddr;
      else
        Caller = 0LL;
      v17 = (FxObject *)FxPoolAllocator(
                          FxDriverGlobals,
                          &FxDriverGlobals->FxPoolFrameworks,
                          v14,
                          (unsigned __int64)keyHandle[0],
                          Tag,
                          Caller);
      v18 = v17;
      if ( v17 )
      {
        if ( FxDriverGlobals->FxVerifierHandle )
        {
          memset(v17, 0, 0x30uLL);
          LODWORD(v18->m_ChildListHead.Flink) = 1146058822;
          v18 = (FxObject *)((char *)v18 + 48);
        }
        memset(&v18[1].24, 0, 0x30uLL);
        *(_QWORD *)&v18[1].m_ObjectFlags = v18;
        if ( KeyAttributes )
        {
          v23 = KeyAttributes->ContextTypeInfo;
          if ( v23 )
          {
            ContextSize = KeyAttributes->ContextSizeOverride;
            if ( !ContextSize )
              ContextSize = v23->ContextSize;
            memset(&v18[1].m_ChildEntry, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          v18[1].m_SpinLock.m_Lock = (unsigned __int64)KeyAttributes->ContextTypeInfo;
        }
      }
      if ( !v18 )
        return 3221225626LL;
      *(_DWORD *)&v18->m_Type = 8392710;
      v18->__vftable = (FxObject_vtbl *)&FxObject::`vftable';
      v18->m_Globals = FxDriverGlobals;
      v18->m_SpinLock.m_Lock = 0LL;
      v18->m_SpinLock.m_DbgFlagIsInitialized = 1;
      FxObject::Construct(v18, 0LL);
      v18->m_ObjectFlags |= 0x11u;
      v18->__vftable = (FxObject_vtbl *)FxRegKey::`vftable';
      v18[1].__vftable = 0LL;
      *(_QWORD *)&v18[1].m_Type = 0LL;
      v18[1].m_Globals = FxDriverGlobals;
      if ( Device )
        v18->m_DeviceBase = (FxDeviceBase *)Device;
      v19 = FxObject::Commit(v18, (_FX_DRIVER_GLOBALS *)KeyAttributes, (void **)keyHandle, 0LL, 1u);
      if ( v19 < 0
        || (v19 = IoOpenDeviceRegistryKey(PhysicalDevice, DeviceInstanceKeyType, DesiredAccess, &hKey), v19 < 0) )
      {
        FxObject::DeleteFromFailedCreate(v18);
      }
      else
      {
        *(_QWORD *)&v18[1].m_Type = hKey;
        *Key = keyHandle[0];
      }
      return (unsigned int)v19;
    }
LABEL_29:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDevice_cpp_Traceguids, -1073741811);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return 3221225485LL;
  }
  if ( !Device )
    goto LABEL_29;
  if ( *(_BYTE *)(Device + 280) )
  {
    PhysicalDevice = *(_DEVICE_OBJECT **)(Device + 160);
    if ( PhysicalDevice )
      goto LABEL_7;
  }
  v20 = *(_WORD *)(Device + 10);
  v21 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v20 )
    v21 = 0LL;
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDeviceKm_cpp_Traceguids, v21, -1073741436);
  return 3221225860LL;
}
