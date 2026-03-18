/*
 * XREFs of imp_WdfUsbTargetDeviceGetInterface @ 0x1C00874E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 */

WDFUSBINTERFACE__ *__fastcall imp_WdfUsbTargetDeviceGetInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        unsigned __int8 InterfaceIndex)
{
  FxUsbDevice *v5; // r10
  __int64 Offset; // rcx
  unsigned __int64 v7; // rax
  FxUsbDevice *pUsbDevice; // [rsp+58h] [rbp+10h] BYREF

  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v5 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxUsbDevice *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4610 )
  {
    pUsbDevice = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v5 = pUsbDevice;
  }
  if ( InterfaceIndex >= v5->m_NumInterfaces )
  {
    v7 = 0LL;
  }
  else
  {
    _mm_lfence();
    v7 = (unsigned __int64)pUsbDevice->m_Interfaces[InterfaceIndex];
  }
  if ( v7 )
  {
    if ( *(_WORD *)(v7 + 10) )
      return (WDFUSBINTERFACE__ *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_qdd(
      v5->m_Globals,
      2u,
      0xEu,
      0x20u,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      (const void *)UsbDevice,
      v5->m_NumInterfaces,
      InterfaceIndex);
    return 0LL;
  }
}
