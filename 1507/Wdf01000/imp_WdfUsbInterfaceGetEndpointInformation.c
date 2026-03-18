/*
 * XREFs of imp_WdfUsbInterfaceGetEndpointInformation @ 0x1C00888B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C008F8CC (-GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 */

void __fastcall imp_WdfUsbInterfaceGetEndpointInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbInterface,
        unsigned __int8 SettingIndex,
        unsigned __int8 EndpointIndex,
        _WDF_USB_PIPE_INFORMATION *EndpointInfo)
{
  FxUsbInterface *v7; // rcx
  __int64 Offset; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxUsbInterface *pUsbInterface; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( !UsbInterface )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1204uLL);
  v7 = (FxUsbInterface *)(~UsbInterface & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbInterface & 1) != 0 )
  {
    Offset = LOWORD(v7->__vftable);
    v7 = (FxUsbInterface *)((char *)v7 - Offset);
  }
  if ( v7->m_Type == 4612 )
  {
    pUsbInterface = v7;
  }
  else
  {
    FxObjectHandleGetPtrQI(v7, (void **)&pUsbInterface, (void *)UsbInterface, 0x1204u, Offset);
    v7 = pUsbInterface;
  }
  m_Globals = v7->m_Globals;
  if ( !EndpointInfo )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( EndpointInfo->Size == 20 )
  {
    FxUsbInterface::GetEndpointInformation(v7, SettingIndex, EndpointIndex, EndpointInfo);
  }
  else
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      UsbInterface,
      0xEu,
      0xDu,
      WPP_FxUsbInterfaceAPI_cpp_Traceguids,
      EndpointInfo->Size,
      20,
      -1073741820);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
