/*
 * XREFs of imp_WdfUsbTargetDeviceCyclePortSynchronously @ 0x1C0088F70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C008C380 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 */

int __fastcall imp_WdfUsbTargetDeviceCyclePortSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice)
{
  FxUsbDevice *v2; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  FxUsbDevice *pUsbDevice; // [rsp+60h] [rbp+18h] BYREF

  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v2 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxUsbDevice *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4610 )
  {
    pUsbDevice = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v2 = pUsbDevice;
  }
  m_Globals = v2->m_Globals;
  if ( !m_Globals->FxVerifierOn )
    return FxUsbDevice::CyclePort(v2);
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return FxUsbDevice::CyclePort(v2);
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return -1073741808;
}
