/*
 * XREFs of ?_Create@FxIoTargetRemote@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDeviceBase@@PEAPEAV1@@Z @ 0x1C0020C1C
 * Callers:
 *     imp_WdfIoTargetCreate @ 0x1C0020B30 (imp_WdfIoTargetCreate.c)
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x1C00069AC (WPP_IFR_SF_qqqd.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001F9E0 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ??0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0020E38 (--0FxIoTargetRemote@@IEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxIoTargetRemote::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxDeviceBase *Device,
        FxIoTargetRemote **Target)
{
  FxIoTargetRemote *v8; // rax
  FxIoTargetRemote *v9; // rax
  FxIoTargetRemote *v10; // rdi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 ParentObject; // r8
  FxObject *v15; // rcx
  __int64 v16; // rdx
  FxDeviceBase *v17; // rax
  const void *v18; // rax
  const void *_a3; // rbx
  FxObject *pParent; // [rsp+88h] [rbp+10h] BYREF
  void *hTarget; // [rsp+98h] [rbp+20h] BYREF

  *Target = 0LL;
  if ( Attributes && (ParentObject = (unsigned __int64)Attributes->ParentObject) != 0 )
  {
    v15 = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
    LOWORD(v16) = 0;
    if ( (ParentObject & 1) != 0 )
    {
      v16 = LOWORD(v15->__vftable);
      v15 = (FxObject *)((char *)v15 - v16);
    }
    if ( v15->m_Type == 4096 )
    {
      pParent = v15;
    }
    else
    {
      FxObjectHandleGetPtrQI(v15, (void **)&pParent, (void *)ParentObject, 0x1000u, v16);
      v15 = pParent;
    }
    v17 = FxDeviceBase::_SearchForDevice((unsigned __int64)v15, 0LL);
    if ( !v17 )
    {
      WPP_IFR_SF_qd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xAu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        -1073741808);
      return 3221225488LL;
    }
    if ( v17 != Device )
    {
      if ( Device->m_ObjectSize )
        _a3 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a3 = 0LL;
      if ( v17->m_ObjectSize )
        v18 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v18 = 0LL;
      WPP_IFR_SF_qqqd(
        FxDriverGlobals,
        2u,
        0xEu,
        0xBu,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        Attributes->ParentObject,
        v18,
        _a3,
        -1073741808);
      return 3221225488LL;
    }
  }
  else
  {
    pParent = Device;
  }
  v8 = (FxIoTargetRemote *)FxObjectHandleAlloc(
                             FxDriverGlobals,
                             ExDefaultNonPagedPoolType,
                             0x1F8uLL,
                             0,
                             Attributes,
                             0,
                             FxObjectTypeExternal);
  if ( v8 )
  {
    FxIoTargetRemote::FxIoTargetRemote(v8, FxDriverGlobals);
    v10 = v9;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v10->m_Driver = Device->m_Driver;
    v10->m_DeviceBase = Device;
    v10->m_InStackDevice = Device->m_DeviceObject.m_DeviceObject;
    Device->AddIoTarget(Device, v10);
    v11 = FxObject::Commit(v10, Attributes, &hTarget, pParent, 1u);
    v12 = v11;
    if ( v11 < 0 )
    {
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, 0xDu, WPP_FxIoTargetRemote_cpp_Traceguids, v11);
      FxObject::DeleteFromFailedCreate(v10);
    }
    else
    {
      *Target = v10;
    }
  }
  else
  {
    v12 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xEu, 0xCu, WPP_FxIoTargetRemote_cpp_Traceguids, -1073741670);
  }
  return v12;
}
