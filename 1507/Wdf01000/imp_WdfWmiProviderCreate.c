/*
 * XREFs of imp_WdfWmiProviderCreate @ 0x1C00689A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0024720 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfWmiProviderCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_WMI_PROVIDER_CONFIG *WmiProviderConfig,
        _WDF_OBJECT_ATTRIBUTES *ProviderAttributes,
        WDFWMIPROVIDER__ **WmiProvider)
{
  unsigned __int64 v7; // rsi
  FxDevice *v9; // rcx
  WDFWMIPROVIDER__ **v10; // rbp
  FxPowerPolicyOwnerSettings *m_Owner; // rdi
  FxWmiProvider *pProvider; // [rsp+30h] [rbp-38h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxDevice *pDevice; // [rsp+78h] [rbp+10h] BYREF

  v7 = Device;
  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1002uLL);
  v9 = (FxDevice *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Device) = 0;
  if ( (v7 & 1) != 0 )
  {
    Device = LOWORD(v9->FxDeviceBase::FxNonPagedObject::FxObject::__vftable);
    v9 = (FxDevice *)((char *)v9 - Device);
  }
  if ( v9->m_Type == 4098 )
  {
    pDevice = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pDevice, (void *)v7, 0x1002u, Device);
    v9 = pDevice;
  }
  if ( !WmiProviderConfig )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  v10 = WmiProvider;
  if ( !WmiProvider )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
  m_Owner = v9->m_PkgPnp->m_PowerPolicyMachine.m_Owner;
  if ( !m_Owner
    || (RtlCompareMemory(&WmiProviderConfig->Guid, &GUID_POWER_DEVICE_ENABLE, 0x10uLL) != 16
     || !m_Owner->m_IdleSettings.WmiInstance)
    && (RtlCompareMemory(&WmiProviderConfig->Guid, &GUID_POWER_DEVICE_WAKE_ENABLE, 0x10uLL) != 16
     || !m_Owner->m_WakeSettings.WmiInstance) )
  {
    return FxWmiProvider::_Create(
             (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
             v7,
             ProviderAttributes,
             WmiProviderConfig,
             v10,
             &pProvider);
  }
  WPP_IFR_SF_((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], 2u, 0x12u, 0xAu, WPP_FxWmiAPI_cpp_Traceguids);
  return 3221226241LL;
}
