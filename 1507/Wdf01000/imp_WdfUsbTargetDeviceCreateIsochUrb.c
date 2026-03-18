/*
 * XREFs of imp_WdfUsbTargetDeviceCreateIsochUrb @ 0x1C0086C20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1C008BEA8 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 */

int __fastcall imp_WdfUsbTargetDeviceCreateIsochUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned int NumberOfIsochPackets,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  FxUsbDevice *v8; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+48h] [rbp+10h] BYREF

  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v8 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = LOWORD(v8->__vftable);
    v8 = (FxUsbDevice *)((char *)v8 - Offset);
  }
  if ( v8->m_Type == 4610 )
  {
    pUsbDevice = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v8 = pUsbDevice;
  }
  m_Globals = v8->m_Globals;
  if ( !UrbMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( v8->m_USBDHandle )
    return FxUsbDevice::CreateIsochUrb(v8, Attributes, NumberOfIsochPackets, UrbMemory, Urb);
  WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x1Fu, WPP_FxUsbDeviceAPI_cpp_Traceguids, -1073741436);
  return -1073741436;
}
