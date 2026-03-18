/*
 * XREFs of ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C00749CC
 * Callers:
 *     FxIoTargetSendIo @ 0x1C0081CD4 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00828D0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0085C80 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C0086400 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C00865B0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0086AB0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceQueryString @ 0x1C0087EA0 (imp_WdfUsbTargetDeviceQueryString.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0088530 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0089EE8 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 * Callees:
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qDd @ 0x1C00700CC (WPP_IFR_SF_qDd.c)
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
