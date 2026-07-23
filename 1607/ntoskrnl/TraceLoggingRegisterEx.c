/*
 * XREFs of TraceLoggingRegisterEx @ 0x140546ED4
 * Callers:
 *     TlgRegisterAggregateProviderEx @ 0x140149B64 (TlgRegisterAggregateProviderEx.c)
 *     BapdRecordFirmwareBootStats @ 0x1403D316C (BapdRecordFirmwareBootStats.c)
 *     VRegSetup @ 0x140551B90 (VRegSetup.c)
 *     TtmInit @ 0x1405801D4 (TtmInit.c)
 *     CmpRegisterTraceLoggingProvider @ 0x1405814A4 (CmpRegisterTraceLoggingProvider.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 *     PopDiagInitialize @ 0x1407A91B0 (PopDiagInitialize.c)
 *     SeRmInitPhase1 @ 0x1407B2DB0 (SeRmInitPhase1.c)
 *     VslpIumInitializeTelemetry @ 0x1407BC73C (VslpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwSetInformation @ 0x140549024 (EtwSetInformation.c)
 *     EtwRegister @ 0x14054A484 (EtwRegister.c)
 */

TLG_STATUS __stdcall TraceLoggingRegisterEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  GUID v4; // xmm0
  TLG_STATUS v5; // edi
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v4 = (GUID)*((_OWORD *)hProvider->ProviderMetadataPtr - 1);
  hProvider->CallbackContext = pCallbackContext;
  hProvider->EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))pEnableCallback;
  ProviderId = v4;
  v5 = EtwRegister(&ProviderId, TlgEnableCallback, (PVOID)hProvider, &hProvider->RegHandle);
  if ( !v5 )
    EtwSetInformation(
      hProvider->RegHandle,
      EventProviderSetTraits,
      (PVOID)hProvider->ProviderMetadataPtr,
      *hProvider->ProviderMetadataPtr);
  return v5;
}
