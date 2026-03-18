/*
 * XREFs of TraceLoggingRegisterEx @ 0x14052451C
 * Callers:
 *     CmpRegisterTraceLoggingProvider @ 0x14054B8BC (CmpRegisterTraceLoggingProvider.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     PopDiagInitialize @ 0x1407558FC (PopDiagInitialize.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     SeRmInitPhase1 @ 0x140762928 (SeRmInitPhase1.c)
 *     HvlpIumInitializeTelemetry @ 0x140782AA8 (HvlpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     EtwSetInformation @ 0x14050D180 (EtwSetInformation.c)
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
