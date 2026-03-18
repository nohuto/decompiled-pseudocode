/*
 * XREFs of imp_WdfUsbTargetDeviceCreateUrb @ 0x1C0088E80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008C120 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceCreateUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  FxUsbDevice *v7; // rcx
  __int64 Offset; // r8
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+48h] [rbp+10h] BYREF

  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v7 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxUsbDevice *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4610 )
  {
    pUsbDevice = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v7 = pUsbDevice;
  }
  if ( !UrbMemory )
    FxVerifierNullBugCheck(v7->m_Globals, retaddr);
  if ( v7->m_USBDHandle )
    return FxUsbDevice::CreateUrb(v7, Attributes, UrbMemory, Urb);
  WPP_IFR_SF_d(v7->m_Globals, 2u, 0xEu, 0x11u, WPP_FxUsbDeviceApiKm_cpp_Traceguids, -1073741436);
  return -1073741436;
}
