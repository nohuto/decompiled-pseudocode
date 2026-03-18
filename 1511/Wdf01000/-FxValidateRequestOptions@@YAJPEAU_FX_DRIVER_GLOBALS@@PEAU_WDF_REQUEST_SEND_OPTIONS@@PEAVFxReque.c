/*
 * XREFs of ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C0064ADC
 * Callers:
 *     FxIoTargetSendIo @ 0x1C0073D34 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0074930 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x1C0078A20 (imp_WdfUsbTargetDeviceQueryString.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00790B0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0079990 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0079BA0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C007A320 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C007A4D0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0080698 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     WPP_IFR_SF_qdd @ 0x1C006063C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00635D8 (WPP_IFR_SF_qDd.c)
 */

__int64 __fastcall FxValidateRequestOptions(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        FxRequestBase *a3)
{
  unsigned int Flags; // r8d

  if ( Options )
  {
    if ( Options->Size != 16 )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xAu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        Options,
        16,
        Options->Size);
      return 3221225476LL;
    }
    Flags = Options->Flags;
    if ( (Flags & 0xFFFFFFF0) != 0 )
    {
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        (unsigned __int8)Options,
        6u,
        0xBu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        Options,
        Flags,
        0xFu);
      return 3221225485LL;
    }
    if ( (Flags & 0xFFFFFFF7) != 0 && (Flags & 8) != 0 )
    {
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        (unsigned __int8)Options,
        6u,
        0xCu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        Options,
        8u,
        Flags);
      return 3221225485LL;
    }
  }
  return 0LL;
}
