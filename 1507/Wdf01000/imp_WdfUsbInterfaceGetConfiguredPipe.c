/*
 * XREFs of imp_WdfUsbInterfaceGetConfiguredPipe @ 0x1C0088620
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C008F7B4 (-GetConfiguredPipe@FxUsbInterface@@QEAAPEAUWDFUSBPIPE__@@EPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

WDFUSBPIPE__ *__fastcall imp_WdfUsbInterfaceGetConfiguredPipe(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbInterface,
        unsigned __int8 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  FxUsbInterface *v6; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxUsbInterface *pUsbInterface; // [rsp+40h] [rbp-18h] BYREF

  if ( !UsbInterface )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1204uLL);
  v6 = (FxUsbInterface *)(~UsbInterface & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbInterface & 1) != 0 )
  {
    Offset = LOWORD(v6->__vftable);
    v6 = (FxUsbInterface *)((char *)v6 - Offset);
  }
  if ( v6->m_Type == 4612 )
  {
    pUsbInterface = v6;
  }
  else
  {
    FxObjectHandleGetPtrQI(v6, (void **)&pUsbInterface, (void *)UsbInterface, 0x1204u, Offset);
    v6 = pUsbInterface;
  }
  m_Globals = v6->m_Globals;
  if ( !PipeInfo || PipeInfo->Size == 20 )
    return FxUsbInterface::GetConfiguredPipe(v6, PipeIndex, PipeInfo);
  WPP_IFR_SF_DDd(
    m_Globals,
    UsbInterface,
    0xEu,
    0xEu,
    WPP_FxUsbInterfaceAPI_cpp_Traceguids,
    PipeInfo->Size,
    20,
    -1073741820);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return 0LL;
}
