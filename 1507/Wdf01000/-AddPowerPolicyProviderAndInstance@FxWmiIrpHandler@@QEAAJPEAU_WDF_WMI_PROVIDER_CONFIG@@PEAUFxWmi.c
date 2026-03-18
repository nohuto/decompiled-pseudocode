/*
 * XREFs of ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0025330
 * Callers:
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C001929C (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0015E00 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C0024D2C (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C0024E5C (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x1C0024F34 (--0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVF.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1C0025024 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C00252C4 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C0069F44 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C006A0E4 (-RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C006A118 (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

__int64 __fastcall FxWmiIrpHandler::AddPowerPolicyProviderAndInstance(
        FxWmiIrpHandler *this,
        _WDF_WMI_PROVIDER_CONFIG *ProviderConfig,
        FxWmiInstanceInternalCallbacks *InstanceCallbacks,
        FxWmiInstanceInternal **Instance)
{
  char v5; // r15
  unsigned __int8 updated; // bp
  FxObject *v7; // r14
  _LIST_ENTRY **ProviderLocked; // rax
  FxWmiProvider *v12; // rsi
  FxWmiProvider *v13; // rax
  unsigned __int8 v14; // r8
  FxWmiProvider *v15; // rax
  int v16; // ebx
  FxWmiInstanceInternal *v17; // rax
  FxObject *v18; // rax
  const void *v20; // rbx
  FxVerifierLock *v21; // rcx
  unsigned __int8 update[72]; // [rsp+40h] [rbp-48h] BYREF
  char v23; // [rsp+90h] [rbp+8h]
  unsigned __int8 irql; // [rsp+98h] [rbp+10h] BYREF

  v23 = 0;
  v5 = 0;
  update[0] = 0;
  updated = 0;
  v7 = 0LL;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)InstanceCallbacks);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(this, &ProviderConfig->Guid);
  v12 = (FxWmiProvider *)ProviderLocked;
  if ( ProviderLocked )
  {
    if ( !*((_DWORD *)ProviderLocked + 38)
      || (v20 = ProviderLocked + 21, RtlCompareMemory(ProviderLocked + 21, &GUID_POWER_DEVICE_ENABLE, 0x10uLL) != 16)
      && RtlCompareMemory(v20, &GUID_POWER_DEVICE_WAKE_ENABLE, 0x10uLL) != 16 )
    {
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
        FxWmiInstanceInternal::FxWmiInstanceInternal(v17, this->m_Globals, InstanceCallbacks, v12);
        v7 = v18;
      }
      if ( v7 )
        v16 = FxObject::AssignParentObject(v7, v12);
      else
        v16 = -1073741670;
      if ( v16 >= 0 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)Instance, (signed __int64)v7, 0LL) )
          v16 = -1073741771;
        if ( v16 >= 0 )
        {
          v16 = FxWmiProvider::AddInstanceLocked(v12, (unsigned __int64)v7, 0, update, AddInstanceToHead);
          if ( v16 >= 0 )
          {
            updated = update[0];
            if ( update[0] )
              updated = FxWmiIrpHandler::DeferUpdateLocked(this, irql);
            goto LABEL_19;
          }
        }
        updated = update[0];
      }
LABEL_34:
      if ( !v5 )
      {
LABEL_19:
        v5 = v23;
        goto LABEL_20;
      }
LABEL_35:
      FxWmiIrpHandler::RemoveProviderLocked(this, v12);
      goto LABEL_19;
    }
    WPP_IFR_SF_(this->m_Globals, 2u, 0xDu, 0xDu, WPP_FxWmiIrpHandler_cpp_Traceguids);
    v16 = -1073741055;
LABEL_7:
    if ( v16 < 0 )
      goto LABEL_34;
    goto LABEL_8;
  }
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
    v5 = 0;
    goto LABEL_20;
  }
  v5 = 1;
  v23 = 1;
  v16 = FxWmiIrpHandler::AddProviderLocked(this, v12, irql, 0LL);
  if ( v16 >= 0 )
  {
    v16 = FxObject::AssignParentObject(v12, this->m_DeviceBase);
    if ( v16 < 0 )
      goto LABEL_35;
    goto LABEL_7;
  }
LABEL_20:
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v21 = *(FxVerifierLock **)&this[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v21, irql, v14);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( v16 < 0 )
  {
    if ( v7 )
      v7->DeleteObject(v7);
    if ( v5 )
      v12->DeleteObject(v12);
  }
  else if ( updated )
  {
    FxWmiIrpHandler::UpdateGuids(this);
  }
  return (unsigned int)v16;
}
