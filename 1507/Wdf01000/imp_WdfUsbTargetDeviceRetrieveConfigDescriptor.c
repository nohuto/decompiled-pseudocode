/*
 * XREFs of imp_WdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x1C0087A80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z @ 0x1C008C730 (-GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceRetrieveConfigDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        void *ConfigDescriptor,
        unsigned __int16 *ConfigDescriptorLength)
{
  FxUsbDevice *v6; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v6 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxUsbDevice *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 4610 )
  {
    pUsbDevice = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v6 = pUsbDevice;
  }
  m_Globals = v6->m_Globals;
  if ( !ConfigDescriptorLength )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  if ( !m_Globals->FxVerifierOn )
    return FxUsbDevice::GetConfigDescriptor(v6, ConfigDescriptor, ConfigDescriptorLength);
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    return FxUsbDevice::GetConfigDescriptor(v6, ConfigDescriptor, ConfigDescriptorLength);
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return -1073741808;
}
