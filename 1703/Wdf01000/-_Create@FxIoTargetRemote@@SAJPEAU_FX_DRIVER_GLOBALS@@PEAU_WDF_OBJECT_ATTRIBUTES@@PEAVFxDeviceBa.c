/*
 * XREFs of ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C002F0E8
 * Callers:
 *     imp_WdfIoTargetCreate @ 0x1C002F270 (imp_WdfIoTargetCreate.c)
 * Callees:
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0001D80 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0001DA8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00135B4 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001C424 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E6A8 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxIoTargetRemote::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDeviceBase *Device,
        FxIoTargetRemote **Target)
{
  _POOL_TYPE v8; // edi
  ULONG Tag; // r15d
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  _QWORD *v12; // rax
  FxIoTargetRemote *v13; // rax
  FxIoTargetRemote *v14; // rax
  FxIoTargetRemote *v15; // rdi
  int v16; // eax
  unsigned int v17; // esi
  void *ParentObject; // rdx
  FxDeviceBase *v20; // rax
  FxDeviceBase *v21; // rcx
  unsigned int v22; // edi
  unsigned __int16 m_ObjectSize; // ax
  const void *_a3; // rsi
  bool v25; // zf
  unsigned __int16 v26; // ax
  const void *_a2; // rcx
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxObject *pParent; // [rsp+88h] [rbp+10h] BYREF
  void *hTarget; // [rsp+98h] [rbp+20h] BYREF

  *Target = 0LL;
  if ( Attributes && (ParentObject = Attributes->ParentObject) != 0LL )
  {
    FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)ParentObject, 0x1000u, (void **)&pParent);
    v20 = FxDeviceBase::_SearchForDevice((unsigned __int64)pParent, 0LL);
    v21 = v20;
    if ( !v20 )
    {
      v22 = -1073741808;
      WPP_IFR_SF_qd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xAu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        -1073741808);
      return v22;
    }
    if ( v20 != Device )
    {
      m_ObjectSize = Device->m_ObjectSize;
      _a3 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      v22 = -1073741808;
      v25 = m_ObjectSize == 0;
      v26 = v21->m_ObjectSize;
      if ( v25 )
        _a3 = 0LL;
      _a2 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v26 )
        _a2 = 0LL;
      WPP_IFR_SF_qqqd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xBu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        _a2,
        _a3,
        -1073741808);
      return v22;
    }
  }
  else
  {
    pParent = Device;
  }
  v8 = ExDefaultNonPagedPoolType;
  Tag = FxDriverGlobals->Tag;
  ContextSize = FxGetContextSize(Attributes);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x1F8u, 0, ContextSize, (unsigned __int64 *)&hTarget) < 0 )
    goto LABEL_24;
  Caller = retaddr;
  if ( !FxDriverGlobals->FxPoolTrackingOn )
    Caller = 0LL;
  v12 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v8, (unsigned __int64)hTarget, Tag, Caller);
  if ( v12
    && (v13 = (FxIoTargetRemote *)FxObjectAndHandleHeaderInit(
                                    FxDriverGlobals,
                                    v12,
                                    0x200u,
                                    Attributes,
                                    FxObjectTypeExternal)) != 0LL )
  {
    FxIoTargetRemote::FxIoTargetRemote(v13, FxDriverGlobals);
    v15 = v14;
  }
  else
  {
LABEL_24:
    v15 = 0LL;
  }
  if ( !v15 )
  {
    v22 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, 0xCu, WPP_FxIoTargetRemote_cpp_Traceguids, -1073741670);
    return v22;
  }
  v15->m_Driver = Device->m_Driver;
  v15->m_DeviceBase = Device;
  v15->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
  Device->AddIoTarget(Device, v15);
  v16 = FxObject::Commit(v15, (_FX_DRIVER_GLOBALS *)Attributes, &hTarget, pParent, 1u);
  v17 = v16;
  if ( v16 < 0 )
  {
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, 0xDu, WPP_FxIoTargetRemote_cpp_Traceguids, v16);
    FxObject::DeleteFromFailedCreate(v15);
  }
  else
  {
    *Target = v15;
  }
  return v17;
}
