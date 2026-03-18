/*
 * XREFs of ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C0009624
 * Callers:
 *     imp_WdfDmaEnablerCreate @ 0x1C0008B20 (imp_WdfDmaEnablerCreate.c)
 * Callees:
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C00093BC (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C0064F40 (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     WPP_IFR_SF_dLd @ 0x1C0064F88 (WPP_IFR_SF_dLd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 */

__int64 __fastcall FxDmaEnabler::Initialize(FxDmaEnabler *this, _WDF_DMA_ENABLER_CONFIG *Config, FxDeviceBase *Device)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  FxDeviceBase_vtbl *v7; // rax
  unsigned int v8; // r15d
  int _a2; // eax
  unsigned int v10; // r8d
  int v11; // edi
  unsigned __int8 v12; // r12
  _WDF_DMA_PROFILE Profile; // ecx
  char v14; // dl
  __int32 v15; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  char v21; // dl
  unsigned __int8 v22; // di
  unsigned int AddressWidthOverride; // edx
  unsigned int WdmDmaVersionOverride; // eax
  bool v25; // zf
  FxDeviceBase *m_DeviceBase; // rcx
  FxDeviceBase *v27; // rcx
  const void *_a1; // rsi
  int v30; // ecx
  __int64 v31; // rdx
  FxDeviceBase_vtbl *v32; // rax
  void (__fastcall *SetDeviceTelemetryInfoFlags)(FxDeviceBase *, FxDeviceInfoFlags); // rax
  char v34; // dl
  unsigned __int16 v35; // r9
  _FX_DRIVER_GLOBALS *v36; // rax
  __int64 v37; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  int globals; // [rsp+38h] [rbp-48h]
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+40h] [rbp-40h] BYREF
  int v41; // [rsp+B0h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  memset(&deviceDescription, 0, sizeof(deviceDescription));
  v7 = Device->FxNonPagedObject::FxObject::__vftable;
  v8 = 2;
  deviceDescription.Version = 2;
  _a2 = v7->AllocateDmaEnablerList(Device);
  v11 = _a2;
  if ( _a2 < 0 )
  {
    if ( Device->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0xAu, WPP_FxDmaEnabler_cpp_Traceguids, _a1, _a2);
    return (unsigned int)v11;
  }
  this->m_DeviceBase = Device;
  v12 = 1;
  Profile = Config->Profile;
  *((_BYTE *)this + 380) |= 4u;
  v14 = *((_BYTE *)this + 380);
  this->m_Profile = Profile;
  deviceDescription.Master = 1;
  deviceDescription.Dma32BitAddresses = 1;
  deviceDescription.InterfaceType = PCIBus;
  v15 = Profile - 1;
  if ( !v15 )
  {
    deviceDescription.ScatterGather = 0;
    goto LABEL_40;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v34 = v14 | 8;
    goto LABEL_36;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v22 = 1;
    deviceDescription.ScatterGather = 0;
    deviceDescription.Dma64BitAddresses = 1;
    goto LABEL_10;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v21 = v14 | 8;
    goto LABEL_9;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v34 = v14 | 0x18;
LABEL_36:
    deviceDescription.ScatterGather = 1;
    *((_BYTE *)this + 380) = v34;
LABEL_40:
    v22 = 0;
    deviceDescription.Dma64BitAddresses = 0;
    goto LABEL_10;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v21 = v14 | 0x18;
LABEL_9:
    v22 = 1;
    *((_BYTE *)this + 380) = v21;
    deviceDescription.Dma64BitAddresses = 1;
    deviceDescription.ScatterGather = 1;
    goto LABEL_10;
  }
  v30 = v20 - 1;
  if ( v30 )
  {
    if ( v30 != 1 )
      return 3221225485LL;
    *((_BYTE *)this + 380) = v14 & 0xEB | 0x10;
    v31 = 128LL;
  }
  else
  {
    *((_BYTE *)this + 380) = v14 & 0xFB;
    v31 = 64LL;
  }
  v32 = Device->FxNonPagedObject::FxObject::__vftable;
  v8 = 3;
  deviceDescription.Version = 3;
  deviceDescription.Dma64BitAddresses = 0;
  v22 = 0;
  deviceDescription.Dma32BitAddresses = 0;
  v12 = 0;
  SetDeviceTelemetryInfoFlags = v32->SetDeviceTelemetryInfoFlags;
  *(_WORD *)&deviceDescription.Master = 0;
  SetDeviceTelemetryInfoFlags(Device, (FxDeviceInfoFlags)v31);
LABEL_10:
  this->m_MaximumLength = Config->MaximumLength;
  AddressWidthOverride = Config->AddressWidthOverride;
  if ( !AddressWidthOverride )
  {
LABEL_11:
    WdmDmaVersionOverride = Config->WdmDmaVersionOverride;
    if ( !WdmDmaVersionOverride )
      goto LABEL_14;
    if ( WdmDmaVersionOverride >= v8 )
    {
      v8 = Config->WdmDmaVersionOverride;
      deviceDescription.Version = v8;
LABEL_14:
      if ( v8 >= 3 && !deviceDescription.DmaAddressWidth )
      {
        if ( v22 )
          deviceDescription.DmaAddressWidth = 64;
        else
          deviceDescription.DmaAddressWidth = v12 != 0 ? 32 : 24;
      }
      v25 = (*((_BYTE *)this + 380) & 4) == 0;
      m_DeviceBase = this->m_DeviceBase;
      this->m_FDO = m_DeviceBase->m_DeviceObject.m_DeviceObject;
      this->m_PDO = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
      if ( v25 || (v11 = FxDmaEnabler::ConfigureBusMasterAdapters(this, &deviceDescription, Config), v11 >= 0) )
      {
        v27 = this->m_DeviceBase;
        this->m_EvtDmaEnablerFill.m_Method = Config->EvtDmaEnablerFill;
        this->m_EvtDmaEnablerFlush.m_Method = Config->EvtDmaEnablerFlush;
        this->m_EvtDmaEnablerEnable.m_Method = Config->EvtDmaEnablerEnable;
        this->m_EvtDmaEnablerDisable.m_Method = Config->EvtDmaEnablerDisable;
        this->m_EvtDmaEnablerSelfManagedIoStart.m_Method = Config->EvtDmaEnablerSelfManagedIoStart;
        this->m_EvtDmaEnablerSelfManagedIoStop.m_Method = Config->EvtDmaEnablerSelfManagedIoStop;
        v27->AddDmaEnabler(v27, this);
        *((_BYTE *)this + 380) |= 1u;
        if ( (*((_BYTE *)this + 380) & 4) != 0 )
          this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, DeviceInfoDmaBusMaster);
        return 0;
      }
      else
      {
        FxDmaEnabler::ReleaseResources(this);
      }
      return (unsigned int)v11;
    }
    WPP_IFR_SF_DDd(
      this->m_Globals,
      AddressWidthOverride,
      0xFu,
      0xFu,
      WPP_FxDmaEnabler_cpp_Traceguids,
      WdmDmaVersionOverride,
      v8,
      -1073741811);
    goto LABEL_46;
  }
  if ( (*((_BYTE *)this + 380) & 4) == 0 )
  {
    v35 = 11;
LABEL_44:
    WPP_IFR_SF_dLd(
      this->m_Globals,
      AddressWidthOverride,
      v10,
      v35,
      traceGuid,
      AddressWidthOverride,
      Config->Profile,
      globals);
LABEL_46:
    v36 = this->m_Globals;
    v41 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      v36->Public.DriverName,
      (const char *)&v41,
      v36->Public.DriverName,
      (const char *)&v41);
    if ( *(_BYTE *)(v37 + 318) )
      DbgBreakPoint();
    return 3221225485LL;
  }
  if ( !v22 && AddressWidthOverride > 0x20 )
  {
    v35 = 12;
    goto LABEL_44;
  }
  if ( FxLibraryGlobals.OsVersionInfo.dwMajorVersion > 6
    || FxLibraryGlobals.OsVersionInfo.dwMajorVersion == 6 && FxLibraryGlobals.OsVersionInfo.dwMinorVersion >= 2 )
  {
    v8 = 3;
    deviceDescription.DmaAddressWidth = Config->AddressWidthOverride;
    deviceDescription.Version = 3;
    goto LABEL_11;
  }
  if ( AddressWidthOverride < 0x40 )
    v22 = 0;
  deviceDescription.Dma64BitAddresses = v22;
  if ( AddressWidthOverride < 0x20 )
    v12 = 0;
  deviceDescription.Dma32BitAddresses = v12;
  if ( AddressWidthOverride >= 0x18 )
  {
    if ( ((AddressWidthOverride - 32) & 0xFFFFFFDF) != 0 )
      WPP_IFR_SF_dd(
        this->m_Globals,
        3u,
        0xFu,
        0xEu,
        WPP_FxDmaEnabler_cpp_Traceguids,
        AddressWidthOverride,
        v12 != 0 ? 32 : 24);
    goto LABEL_11;
  }
  WPP_IFR_SF_(this->m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaEnabler_cpp_Traceguids);
  return 3221225473LL;
}
