/*
 * XREFs of imp_WdfUsbTargetDeviceQueryUsbCapability @ 0x1C00878A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?QueryUsbCapability@FxUsbDevice@@QEAAJPEBU_GUID@@KPEAXPEAK@Z @ 0x1C008E864 (-QueryUsbCapability@FxUsbDevice@@QEAAJPEBU_GUID@@KPEAXPEAK@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceQueryUsbCapability(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        const _GUID *CapabilityType,
        unsigned int CapabilityBufferLength,
        void *CapabilityBuffer,
        unsigned int *ResultLength)
{
  FxUsbDevice *v8; // rcx
  __int64 Offset; // r8
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
  if ( CapabilityBufferLength && !CapabilityBuffer )
    FxVerifierNullBugCheck(v8->m_Globals, retaddr);
  return FxUsbDevice::QueryUsbCapability(v8, CapabilityType, CapabilityBufferLength, CapabilityBuffer, ResultLength);
}
