/*
 * XREFs of imp_WdfWmiInstanceCreate @ 0x1C002B250
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001D70 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqqd @ 0x1C0010A2C (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_ @ 0x1C00211D8 (WPP_IFR_SF_.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C002B4F0 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C002B960 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C0062054 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C00621EC (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006F418 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

int __fastcall imp_WdfWmiInstanceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_WMI_INSTANCE_CONFIG *InstanceConfig,
        _WDF_OBJECT_ATTRIBUTES *InstanceAttributes,
        WDFWMIINSTANCE__ **Instance)
{
  const void *v5; // r14
  _FX_DRIVER_GLOBALS *v6; // rbp
  WDFWMIPROVIDER__ *Provider; // rdx
  FxDevice *v11; // rcx
  __int64 v12; // rdx
  FxPowerPolicyOwnerSettings *m_Owner; // rsi
  int result; // eax
  int v15; // eax
  unsigned __int8 v16; // r8
  FxWmiInstanceExternal *v17; // r13
  int v18; // esi
  FxWmiProvider *v19; // rbx
  FxWmiIrpHandler *m_Parent; // rcx
  KIRQL v21; // r15
  unsigned __int8 updated; // bp
  _LIST_ENTRY *p_m_ListEntry; // rdx
  int v24; // r8d
  _LIST_ENTRY *Blink; // rcx
  FxWmiIrpHandler *v26; // rdx
  _WDF_WMI_PROVIDER_CONFIG *ProviderConfig; // rax
  unsigned __int64 v28; // rax
  FxVerifierLock *v29; // rcx
  FxDevice *pDevice; // [rsp+50h] [rbp-38h] BYREF
  WDFWMIPROVIDER__ *hProvider[6]; // [rsp+58h] [rbp-30h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxWmiInstanceExternal *pInstance; // [rsp+90h] [rbp+8h] BYREF
  FxWmiProvider *pProvider; // [rsp+A0h] [rbp+18h] BYREF

  v5 = 0LL;
  v6 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16];
  pInstance = 0LL;
  if ( !InstanceConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  if ( InstanceConfig->Size != 64 )
  {
    WPP_IFR_SF_DDd(
      v6,
      (unsigned __int8)Device,
      0x12u,
      0xBu,
      WPP_FxWmiAPI_cpp_Traceguids,
      InstanceConfig->Size,
      64,
      -1073741820);
    return -1073741820;
  }
  Provider = InstanceConfig->Provider;
  if ( Provider )
  {
    ProviderConfig = InstanceConfig->ProviderConfig;
    if ( ProviderConfig )
    {
      WPP_IFR_SF_qqqd(
        v6,
        2u,
        0x12u,
        0xDu,
        WPP_FxWmiAPI_cpp_Traceguids,
        InstanceConfig,
        Provider,
        ProviderConfig,
        -1073741811);
      return -1073741811;
    }
  }
  else if ( !InstanceConfig->ProviderConfig )
  {
    WPP_IFR_SF_qd(v6, 2u, 0x12u, 0xCu, WPP_FxWmiAPI_cpp_Traceguids, InstanceConfig, -1073741811);
    return -1073741811;
  }
  if ( Provider )
  {
    FxObjectHandleGetPtr(v6, (unsigned __int64)Provider, 0x1004u, (void **)&pProvider);
    goto LABEL_15;
  }
  hProvider[0] = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker(v6, WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  v11 = (FxDevice *)(~(unsigned __int64)Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v12) = 0;
  if ( ((unsigned __int8)Device & 1) != 0 )
  {
    v12 = LOWORD(v11->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v11 = (FxDevice *)((char *)v11 - v12);
  }
  if ( v11->m_Type == 4098 )
  {
    pDevice = v11;
  }
  else
  {
    FxObjectHandleGetPtrQI(v11, (void **)&pDevice, Device, 0x1002u, v12);
    v11 = pDevice;
  }
  m_Owner = v11->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( m_Owner
    && (RtlCompareMemory(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_ENABLE, 0x10uLL) == 16
     && m_Owner->m_IdleSettings.WmiInstance
     || RtlCompareMemory(&InstanceConfig->ProviderConfig->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE, 0x10uLL) == 16
     && m_Owner->m_WakeSettings.WmiInstance) )
  {
    WPP_IFR_SF_(v6, 2u, 0x12u, 0xEu, WPP_FxWmiAPI_cpp_Traceguids);
    return -1073741055;
  }
  result = FxWmiProvider::_Create(v6, Device, 0LL, InstanceConfig->ProviderConfig, hProvider, &pProvider);
  if ( result >= 0 )
  {
LABEL_15:
    v15 = FxWmiInstanceExternal::_Create(
            pProvider->m_Globals,
            pProvider,
            InstanceConfig,
            InstanceAttributes,
            (WDFWMIINSTANCE__ **)hProvider,
            &pInstance);
    v17 = pInstance;
    v18 = v15;
    if ( v15 < 0 )
      goto LABEL_53;
    if ( !InstanceConfig->Register )
    {
LABEL_30:
      if ( v18 >= 0 )
      {
        if ( Instance )
          *Instance = (WDFWMIINSTANCE__ *)hProvider[0];
        return v18;
      }
LABEL_53:
      if ( v17 )
        FxObject::DeleteFromFailedCreate(v17);
      if ( InstanceConfig->ProviderConfig )
        FxObject::DeleteFromFailedCreate(pProvider);
      return v18;
    }
    v19 = pProvider;
    if ( (pProvider->m_Flags & 4) != 0 )
    {
      if ( pProvider->m_ObjectSize )
        v28 = (unsigned __int64)pProvider ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v28 = 0LL;
      v17 = pInstance;
      if ( pInstance->m_ObjectSize )
        v5 = (const void *)((unsigned __int64)pInstance ^ 0xFFFFFFFFFFFFFFF8uLL);
      v18 = -1073741808;
      WPP_IFR_SF_qid(pProvider->m_Globals, 2u, 0x12u, 0x12u, WPP_FxWmiProvider_cpp_Traceguids, v5, v28, -1073741808);
      goto LABEL_53;
    }
    m_Parent = pProvider->m_Parent;
    if ( SLOBYTE(m_Parent->m_ObjectFlags) < 0 && *(_QWORD *)&m_Parent[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized )
    {
      FxVerifierLock::Lock(
        *(FxVerifierLock **)&m_Parent[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized,
        (unsigned __int8 *)&pInstance,
        v16);
      v21 = (unsigned __int8)pInstance;
    }
    else
    {
      v21 = KeAcquireSpinLockRaiseToDpc(&m_Parent->m_NPLock.m_Lock);
    }
    updated = 0;
    p_m_ListEntry = &v17->m_ListEntry;
    if ( p_m_ListEntry->Flink != p_m_ListEntry )
    {
      if ( v17->m_ObjectSize )
        v5 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v18 = -1073741808;
      WPP_IFR_SF_qd(v19->m_Globals, 2u, 0x12u, 0x10u, WPP_FxWmiProvider_cpp_Traceguids, v5, -1073741808);
      goto LABEL_26;
    }
    v24 = v19->m_Parent->m_RegisteredState - 1;
    if ( v19->m_Parent->m_RegisteredState == WmiRegistered )
    {
      updated = 1;
    }
    else if ( v19->m_Parent->m_RegisteredState == WmiCleanedUp )
    {
      if ( v17->m_ObjectSize )
        v5 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v18 = -1073741436;
      WPP_IFR_SF_qd(v19->m_Globals, 4u, 0x12u, 0x11u, WPP_FxWmiProvider_cpp_Traceguids, v5, -1073741436);
      goto LABEL_26;
    }
    Blink = v19->m_InstanceListHead.Blink;
    p_m_ListEntry->Flink = &v19->m_InstanceListHead;
    v17->m_ListEntry.Blink = Blink;
    if ( Blink->Flink != &v19->m_InstanceListHead )
      __fastfail(3u);
    Blink->Flink = p_m_ListEntry;
    v18 = 0;
    v19->m_InstanceListHead.Blink = p_m_ListEntry;
    ++v19->m_NumInstances;
    v19->m_RemoveGuid = 0;
    if ( updated )
      updated = FxWmiIrpHandler::DeferUpdateLocked(v19->m_Parent, v21);
LABEL_26:
    v26 = v19->m_Parent;
    if ( SLOBYTE(v26->m_ObjectFlags) < 0
      && (v29 = *(FxVerifierLock **)&v26[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v29, v21, v24);
    }
    else
    {
      KeReleaseSpinLock(&v26->m_NPLock.m_Lock, v21);
    }
    if ( updated )
      FxWmiIrpHandler::UpdateGuids(v19->m_Parent);
    goto LABEL_30;
  }
  return result;
}
