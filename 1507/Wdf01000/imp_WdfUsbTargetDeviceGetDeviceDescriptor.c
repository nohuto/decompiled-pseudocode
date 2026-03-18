/*
 * XREFs of imp_WdfUsbTargetDeviceGetDeviceDescriptor @ 0x1C00873A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfUsbTargetDeviceGetDeviceDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        _USB_DEVICE_DESCRIPTOR *UsbDeviceDescriptor)
{
  unsigned __int16 *v4; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *v6; // rbx
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+68h] [rbp+20h] BYREF

  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v4 = (unsigned __int16 *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = *v4;
    v4 = (unsigned __int16 *)((char *)v4 - Offset);
  }
  if ( v4[4] == 4610 )
  {
    pUsbDevice = (FxUsbDevice *)v4;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v4, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v4 = (unsigned __int16 *)pUsbDevice;
  }
  v6 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v4 + 2);
  if ( !UsbDeviceDescriptor )
    FxVerifierNullBugCheck(*((_FX_DRIVER_GLOBALS **)v4 + 2), retaddr);
  if ( v6->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(v6, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( v6->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
  else
  {
    *(_OWORD *)&UsbDeviceDescriptor->bLength = *(_OWORD *)(v4 + 188);
    *(_WORD *)&UsbDeviceDescriptor->iSerialNumber = v4[196];
  }
}
