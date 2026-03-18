/*
 * XREFs of imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber @ 0x1C00895B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfUsbTargetDeviceRetrieveCurrentFrameNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        unsigned int *CurrentFrameNumber)
{
  FxUsbDevice *v4; // rcx
  __int64 Offset; // r8
  int (__fastcall *m_QueryBusTime)(void *, unsigned int *); // rax
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+48h] [rbp+10h] BYREF

  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v4 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  Offset = 0LL;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxUsbDevice *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4610 )
  {
    pUsbDevice = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v4 = pUsbDevice;
  }
  if ( !CurrentFrameNumber )
    FxVerifierNullBugCheck(v4->m_Globals, retaddr);
  m_QueryBusTime = v4->m_QueryBusTime;
  if ( m_QueryBusTime )
    return ((__int64 (__fastcall *)(void *, unsigned int *, __int64))m_QueryBusTime)(
             v4->m_BusInterfaceContext,
             CurrentFrameNumber,
             Offset);
  else
    return 3221225473LL;
}
