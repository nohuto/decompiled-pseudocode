/*
 * XREFs of ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C002FFD4
 * Callers:
 *     imp_WdfDmaEnablerCreate @ 0x1C0030700 (imp_WdfDmaEnablerCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0018048 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C002FD3C (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     WPP_IFR_SF_DDd @ 0x1C0064788 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C00649A8 (WPP_IFR_SF_dd.c)
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C0066C04 (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 *     WPP_IFR_SF_dLd @ 0x1C0066C38 (WPP_IFR_SF_dLd.c)
 */

__int64 __fastcall FxDmaEnabler::Initialize(FxDmaEnabler *this, _WDF_DMA_ENABLER_CONFIG *Config, FxDeviceBase *Device)
{
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  FxDeviceBase_vtbl *v7; // rax
  unsigned int v8; // r12d
  int _a2; // eax
  __int64 v10; // r8
  const void *v11; // r9
  int v12; // edi
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
  unsigned __int16 v32; // r9
  FxDeviceBase_vtbl *v33; // rax
  char v34; // dl
  _FX_DRIVER_GLOBALS *v35; // r10
  const void *v36; // rbx
  unsigned __int16 v37; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  int v39; // [rsp+38h] [rbp-48h]
  _DEVICE_DESCRIPTION deviceDescription; // [rsp+40h] [rbp-40h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+B0h] [rbp+30h]
  unsigned int globalsa; // [rsp+B0h] [rbp+30h]

  p_m_Globals = &this->m_Globals;
  globals = this->m_Globals;
  memset(&deviceDescription, 0, sizeof(deviceDescription));
  v7 = Device->FxNonPagedObject::FxObject::__vftable;
  v8 = 2;
  deviceDescription.Version = 2;
  _a2 = v7->AllocateDmaEnablerList(Device);
  v11 = 0LL;
  v12 = _a2;
  if ( _a2 < 0 )
  {
    if ( Device->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(globals, 2u, 0xFu, 0xAu, WPP_FxDmaEnabler_cpp_Traceguids, _a1, _a2);
    return (unsigned int)v12;
  }
  LOBYTE(v10) = 1;
  this->m_DeviceBase = Device;
  Profile = Config->Profile;
  *((_BYTE *)this + 380) |= 4u;
  v14 = *((_BYTE *)this + 380);
  this->m_Profile = Profile;
  deviceDescription.Master = 1;
  LOBYTE(globalsa) = 1;
  deviceDescription.Dma32BitAddresses = 1;
  deviceDescription.InterfaceType = PCIBus;
  v15 = Profile - 1;
  if ( !v15 )
  {
    deviceDescription.ScatterGather = 0;
    goto LABEL_44;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v34 = v14 | 8;
    goto LABEL_40;
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
LABEL_40:
    deviceDescription.ScatterGather = 1;
    *((_BYTE *)this + 380) = v34;
LABEL_44:
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
  LOBYTE(_a2) = 0;
  deviceDescription.Dma64BitAddresses = 0;
  globalsa = _a2;
  v8 = 3;
  deviceDescription.Dma32BitAddresses = 0;
  v33 = Device->FxNonPagedObject::FxObject::__vftable;
  v22 = 0;
  deviceDescription.Version = 3;
  *(_WORD *)&deviceDescription.Master = 0;
  v33->SetDeviceTelemetryInfoFlags(Device, (FxDeviceInfoFlags)v31);
  v10 = globalsa;
  v11 = 0LL;
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
          deviceDescription.DmaAddressWidth = (_BYTE)globalsa != 0 ? 32 : 24;
      }
      if ( (Config->Flags & 2) == 0 )
        goto LABEL_19;
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(*p_m_Globals, AddressWidthOverride, 0x13u) )
      {
        if ( v8 == 3 )
        {
          *((_BYTE *)this + 380) |= 0x40u;
LABEL_19:
          v25 = (*((_BYTE *)this + 380) & 4) == 0;
          m_DeviceBase = this->m_DeviceBase;
          this->m_FDO = m_DeviceBase->m_DeviceObject.m_DeviceObject;
          this->m_PDO = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
          if ( v25 || (v12 = FxDmaEnabler::ConfigureBusMasterAdapters(this, &deviceDescription, Config), v12 >= 0) )
          {
            v27 = this->m_DeviceBase;
            this->m_EvtDmaEnablerFill.m_Method = Config->EvtDmaEnablerFill;
            this->m_EvtDmaEnablerFlush.m_Method = Config->EvtDmaEnablerFlush;
            this->m_EvtDmaEnablerEnable.m_Method = Config->EvtDmaEnablerEnable;
            this->m_EvtDmaEnablerDisable.m_Method = Config->EvtDmaEnablerDisable;
            this->m_EvtDmaEnablerSelfManagedIoStart.m_Method = Config->EvtDmaEnablerSelfManagedIoStart;
            this->m_EvtDmaEnablerSelfManagedIoStop.m_Method = Config->EvtDmaEnablerSelfManagedIoStop;
            ((void (__fastcall *)(FxDeviceBase *, FxDmaEnabler *, __int64, const void *))v27->AddDmaEnabler)(
              v27,
              this,
              v10,
              v11);
            *((_BYTE *)this + 380) |= 1u;
            if ( (*((_BYTE *)this + 380) & 4) != 0 )
              this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, DeviceInfoDmaBusMaster);
            return 0;
          }
          else
          {
            FxDmaEnabler::ReleaseResources(this);
          }
          return (unsigned int)v12;
        }
        if ( this->m_ObjectSize <= (unsigned __int16)v11 )
          v36 = v11;
        else
          v36 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v37 = 16;
      }
      else
      {
        if ( this->m_ObjectSize <= (unsigned __int16)v11 )
          v36 = v11;
        else
          v36 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v37 = 17;
      }
      WPP_IFR_SF_qd(v35, 2u, 0xFu, v37, WPP_FxDmaEnabler_cpp_Traceguids, v36, -1073741811);
      goto LABEL_34;
    }
    WPP_IFR_SF_DDd(
      *p_m_Globals,
      AddressWidthOverride,
      0xFu,
      0xFu,
      WPP_FxDmaEnabler_cpp_Traceguids,
      WdmDmaVersionOverride,
      v8,
      -1073741811);
LABEL_34:
    FxVerifierDbgBreakPoint(*p_m_Globals);
    return 3221225485LL;
  }
  if ( (*((_BYTE *)this + 380) & 4) == 0 )
  {
    v32 = 11;
LABEL_33:
    WPP_IFR_SF_dLd(*p_m_Globals, AddressWidthOverride, v10, v32, traceGuid, AddressWidthOverride, Config->Profile, v39);
    goto LABEL_34;
  }
  if ( !v22 && AddressWidthOverride > 0x20 )
  {
    v32 = 12;
    goto LABEL_33;
  }
  if ( FxLibraryGlobals.OsVersionInfo.dwMajorVersion > 6
    || FxLibraryGlobals.OsVersionInfo.dwMajorVersion == 6 && FxLibraryGlobals.OsVersionInfo.dwMinorVersion >= 2 )
  {
    v8 = 3;
    deviceDescription.DmaAddressWidth = Config->AddressWidthOverride;
    deviceDescription.Version = 3;
    goto LABEL_11;
  }
  v10 = (unsigned __int8)v10;
  if ( AddressWidthOverride < 0x40 )
    v22 = 0;
  deviceDescription.Dma64BitAddresses = v22;
  if ( AddressWidthOverride < 0x20 )
    v10 = 0LL;
  LOBYTE(globalsa) = v10;
  deviceDescription.Dma32BitAddresses = v10;
  if ( AddressWidthOverride >= 0x18 )
  {
    if ( ((AddressWidthOverride - 32) & 0xFFFFFFDF) != 0 )
    {
      WPP_IFR_SF_dd(
        *p_m_Globals,
        3u,
        0xFu,
        0xEu,
        WPP_FxDmaEnabler_cpp_Traceguids,
        AddressWidthOverride,
        (_BYTE)v10 != 0 ? 32 : 24);
      v11 = 0LL;
    }
    goto LABEL_11;
  }
  WPP_IFR_SF_(*p_m_Globals, 2u, 0xFu, 0xDu, WPP_FxDmaEnabler_cpp_Traceguids);
  return 3221225473LL;
}
