/*
 * XREFs of TraceLoggingRegisterEx @ 0x1405BCF34
 * Callers:
 *     CmpRegisterTraceLoggingProvider @ 0x1405C2C64 (CmpRegisterTraceLoggingProvider.c)
 *     SeRmInitPhase1 @ 0x1407BC118 (SeRmInitPhase1.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 *     PopDiagInitialize @ 0x1407E37EC (PopDiagInitialize.c)
 *     HvlpIumInitializeTelemetry @ 0x1407F922C (HvlpIumInitializeTelemetry.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwRegister @ 0x14054C680 (EtwRegister.c)
 *     EtwSetInformation @ 0x14057E7C0 (EtwSetInformation.c)
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
