/*
 * XREFs of imp_WdfUsbInterfaceGetNumEndpoints @ 0x1C0088AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int8 __fastcall imp_WdfUsbInterfaceGetNumEndpoints(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbInterface,
        unsigned __int8 SettingIndex)
{
  char v3; // bl
  FxUsbInterface *v5; // rcx
  __int64 Offset; // r8
  FxUsbInterface *pUsbInterface; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( !UsbInterface )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1204uLL);
  v5 = (FxUsbInterface *)(~UsbInterface & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbInterface & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxUsbInterface *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4612 )
  {
    pUsbInterface = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pUsbInterface, (void *)UsbInterface, 0x1204u, Offset);
    v5 = pUsbInterface;
  }
  if ( SettingIndex < v5->m_NumSettings )
  {
    _mm_lfence();
    return pUsbInterface->m_Settings[SettingIndex].InterfaceDescriptor->bNumEndpoints;
  }
  return v3;
}
