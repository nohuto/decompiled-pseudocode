/*
 * XREFs of imp_WdfUsbInterfaceGetNumConfiguredPipes @ 0x1C0088A70
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int8 __fastcall imp_WdfUsbInterfaceGetNumConfiguredPipes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbInterface)
{
  __int64 Offset; // r8
  FxUsbInterface *v3; // rcx
  FxUsbInterface *pUsbInterface; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !UsbInterface )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1204uLL);
  v3 = (FxUsbInterface *)(~UsbInterface & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (UsbInterface & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxUsbInterface *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4612 )
  {
    pUsbInterface = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pUsbInterface, (void *)UsbInterface, 0x1204u, Offset);
    v3 = pUsbInterface;
  }
  return v3->m_NumberOfConfiguredPipes;
}
