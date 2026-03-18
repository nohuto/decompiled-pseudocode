/*
 * XREFs of imp_WdfUsbTargetDeviceCreateWithParameters @ 0x1C0086D20
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     FxUsbTargetDeviceCreate @ 0x1C0086364 (FxUsbTargetDeviceCreate.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceCreateWithParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_USB_DEVICE_CREATE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFUSBDEVICE__ **UsbDevice)
{
  FxDeviceBase *v7; // rcx
  __int64 Offset; // r8
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxDeviceBase *pDevice; // [rsp+58h] [rbp+10h] BYREF

  if ( !Device )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1030uLL);
  v7 = (FxDeviceBase *)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Device & 1) != 0 )
  {
    Offset = LOWORD(v7->FxNonPagedObject::FxObject::__vftable);
    v7 = (FxDeviceBase *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4144 )
  {
    pDevice = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pDevice, (void *)Device, 0x1030u, Offset);
    v7 = pDevice;
  }
  if ( !Config )
    FxVerifierNullBugCheck(v7->m_Globals, retaddr);
  if ( Config->Size == 8 )
    return FxUsbTargetDeviceCreate(v7->m_Globals, v7, Config->USBDClientContractVersion, Attributes, UsbDevice);
  WPP_IFR_SF_DDd(
    v7->m_Globals,
    Config->Size,
    0xEu,
    0xAu,
    WPP_FxUsbDeviceAPI_cpp_Traceguids,
    Config->Size,
    8,
    -1073741820);
  return 3221225476LL;
}
