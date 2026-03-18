/*
 * XREFs of imp_WdfUsbInterfaceGetDescriptor @ 0x1C00887D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfUsbInterfaceGetDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbInterface,
        unsigned __int8 SettingIndex,
        _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor)
{
  FxUsbInterface *v6; // rcx
  __int64 Offset; // r8
  unsigned __int8 iInterface; // al
  _USB_INTERFACE_DESCRIPTOR *v9; // rax
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxUsbInterface *pUsbInterface; // [rsp+48h] [rbp+10h] BYREF

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
  if ( !InterfaceDescriptor )
    FxVerifierNullBugCheck(v6->m_Globals, retaddr);
  if ( SettingIndex < v6->m_NumSettings )
  {
    _mm_lfence();
    v9 = pUsbInterface->m_Settings[SettingIndex].InterfaceDescriptor;
    *(_QWORD *)&InterfaceDescriptor->bLength = *(_QWORD *)&v9->bLength;
    iInterface = v9->iInterface;
  }
  else
  {
    iInterface = 0;
    *(_QWORD *)&InterfaceDescriptor->bLength = 0LL;
  }
  InterfaceDescriptor->iInterface = iInterface;
}
