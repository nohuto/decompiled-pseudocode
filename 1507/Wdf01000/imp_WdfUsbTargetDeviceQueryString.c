/*
 * XREFs of imp_WdfUsbTargetDeviceQueryString @ 0x1C0087670
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qDd @ 0x1C005D990 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C008DF8C (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 */

int __fastcall imp_WdfUsbTargetDeviceQueryString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int16 *String,
        unsigned __int16 *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  FxUsbDevice *v10; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned int Flags; // edx
  FxUsbDevice *pUsbDevice; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( !UsbDevice )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1202uLL);
  v10 = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (UsbDevice & 1) != 0 )
  {
    Offset = LOWORD(v10->__vftable);
    v10 = (FxUsbDevice *)((char *)v10 - Offset);
  }
  if ( v10->m_Type == 4610 )
  {
    pUsbDevice = v10;
  }
  else
  {
    FxObjectHandleGetPtrQI(v10, (void **)&pUsbDevice, (void *)UsbDevice, 0x1202u, Offset);
    v10 = pUsbDevice;
  }
  m_Globals = v10->m_Globals;
  if ( !NumCharacters )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( !m_Globals->FxVerifierOn || (CurrentIrql = KeGetCurrentIrql()) == 0 )
  {
    if ( RequestOptions )
    {
      if ( RequestOptions->Size != 16 )
      {
        WPP_IFR_SF_qdd(
          m_Globals,
          2u,
          6u,
          0xAu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          16,
          RequestOptions->Size);
        return -1073741820;
      }
      Flags = RequestOptions->Flags;
      if ( (Flags & 0xFFFFFFF0) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xBu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          Flags,
          0xFu);
        return -1073741811;
      }
      if ( (Flags & 0xFFFFFFF7) != 0 && (Flags & 8) != 0 )
      {
        WPP_IFR_SF_qDd(
          m_Globals,
          Flags,
          6u,
          0xCu,
          WPP_FxRequestValidateFunctions_hpp_Traceguids,
          RequestOptions,
          8u,
          Flags);
        return -1073741811;
      }
    }
    return FxUsbDevice::GetString(v10, String, NumCharacters, StringIndex, LangID, Request, RequestOptions);
  }
  WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return -1073741808;
}
