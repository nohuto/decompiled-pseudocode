/*
 * XREFs of ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0030C3C
 * Callers:
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0025208 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00108C0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C001C300 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     FxIsEqualGuid @ 0x1C002F130 (FxIsEqualGuid.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C0030BD0 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1C0030E24 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 *     ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x1C00311F0 (--0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVF.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C0031250 (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C0031360 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C00708B4 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C0070A18 (-RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C0070A4C (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

__int64 __fastcall FxWmiIrpHandler::AddPowerPolicyProviderAndInstance(
        FxWmiIrpHandler *this,
        _WDF_WMI_PROVIDER_CONFIG *ProviderConfig,
        FxWmiInstanceInternalCallbacks *InstanceCallbacks,
        FxWmiInstanceInternal **Instance)
{
  char v5; // r12
  char v6; // r15
  unsigned __int8 updated; // bp
  FxWmiInstance *v8; // r14
  _LIST_ENTRY **ProviderLocked; // rax
  FxWmiProvider *v12; // rdi
  FxWmiProvider *v13; // rax
  unsigned __int8 v14; // r8
  FxWmiProvider *v15; // rax
  int v16; // ebx
  FxWmiInstanceInternal *v17; // rax
  FxWmiInstance *v18; // rax
  const _GUID *v20; // rbx
  unsigned __int8 irql[72]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int8 update; // [rsp+98h] [rbp+10h] BYREF
  FxWmiInstanceInternalCallbacks *Callbacks; // [rsp+A0h] [rbp+18h]

  Callbacks = InstanceCallbacks;
  update = 0;
  v5 = 0;
  v6 = 0;
  updated = 0;
  v8 = 0LL;
  FxNonPagedObject::Lock(this, irql, (unsigned __int8)InstanceCallbacks);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(this, &ProviderConfig->Guid);
  v12 = (FxWmiProvider *)ProviderLocked;
  if ( ProviderLocked )
  {
    if ( !*((_DWORD *)ProviderLocked + 38) )
      goto LABEL_8;
    v20 = (const _GUID *)(ProviderLocked + 21);
    if ( !FxIsEqualGuid((const _GUID *)(ProviderLocked + 21), &GUID_POWER_DEVICE_ENABLE)
      && !FxIsEqualGuid(v20, &GUID_POWER_DEVICE_WAKE_ENABLE) )
    {
      goto LABEL_8;
    }
    WPP_IFR_SF_(this->m_Globals, 2u, 0xDu, 0xDu, WPP_FxWmiIrpHandler_cpp_Traceguids);
    v16 = -1073741055;
  }
  else
  {
    v13 = (FxWmiProvider *)FxObjectHandleAlloc(
                             this->m_Globals,
                             ExDefaultNonPagedPoolType,
                             0xD8uLL,
                             0,
                             0LL,
                             0,
                             FxObjectTypeExternal);
    if ( v13 )
    {
      FxWmiProvider::FxWmiProvider(v13, this->m_Globals, ProviderConfig, this->m_Device);
      v12 = v15;
    }
    else
    {
      v12 = 0LL;
    }
    if ( !v12 )
    {
      v16 = -1073741670;
      goto LABEL_19;
    }
    v5 = 1;
    v16 = FxWmiIrpHandler::AddProviderLocked(this, v12, irql[0], 0LL);
    if ( v16 < 0 )
      goto LABEL_19;
    v6 = 1;
    v16 = FxObject::AssignParentObject(v12, this->m_DeviceBase);
    if ( v16 < 0 )
    {
LABEL_32:
      FxWmiIrpHandler::RemoveProviderLocked(this, v12);
      goto LABEL_19;
    }
  }
  if ( v16 < 0 )
    goto LABEL_31;
LABEL_8:
  v17 = (FxWmiInstanceInternal *)FxObjectHandleAlloc(
                                   this->m_Globals,
                                   ExDefaultNonPagedPoolType,
                                   0xB0uLL,
                                   0,
                                   0LL,
                                   0,
                                   FxObjectTypeExternal);
  if ( v17 )
  {
    FxWmiInstanceInternal::FxWmiInstanceInternal(v17, this->m_Globals, Callbacks, v12);
    v8 = v18;
  }
  if ( v8 )
    v16 = FxObject::AssignParentObject(v8, v12);
  else
    v16 = -1073741670;
  if ( v16 < 0 )
  {
LABEL_31:
    if ( !v6 )
      goto LABEL_19;
    goto LABEL_32;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)Instance, (signed __int64)v8, 0LL) )
    v16 = -1073741771;
  if ( v16 < 0 || (v16 = FxWmiProvider::AddInstanceLocked(v12, v8, 0, &update, AddInstanceToHead), v16 < 0) )
  {
    updated = update;
    goto LABEL_31;
  }
  updated = update;
  if ( update )
    updated = FxWmiIrpHandler::DeferUpdateLocked(this, irql[0]);
LABEL_19:
  FxNonPagedObject::Unlock(this, irql[0], v14);
  if ( v16 < 0 )
  {
    if ( v8 )
      v8->DeleteObject(v8);
    if ( v5 )
      v12->DeleteObject(v12);
  }
  else if ( updated )
  {
    FxWmiIrpHandler::UpdateGuids(this);
  }
  return (unsigned int)v16;
}
