/*
 * XREFs of imp_WdfUsbTargetDeviceRetrieveInformation @ 0x1C0087BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceRetrieveInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        _WDF_USB_DEVICE_INFORMATION *Information)
{
  FxUsbDevice *v4; // rcx
  __int64 Offset; // r8
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+58h] [rbp+10h] BYREF

  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v4 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxUsbDevice *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4610 )
  {
    pUsbDevice = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v4 = pUsbDevice;
  }
  if ( !Information )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  if ( Information->Size == 20 )
  {
    Information->Traits = v4->m_Traits;
    Information->HcdPortCapabilities = v4->m_HcdPortCapabilities;
    Information->UsbdVersionInformation = v4->m_UsbdVersionInformation;
    return 0LL;
  }
  else
  {
    WPP_IFR_SF_DDd(
      v4->m_Globals,
      Information->Size,
      0xEu,
      0xBu,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      Information->Size,
      20,
      -1073741820);
    return 3221225476LL;
  }
}
