/*
 * XREFs of McGenEventRegister @ 0x1C0071938
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C00325EC (FxLibraryCommonRegisterClient.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventRegister(
        const _GUID *ProviderId,
        void (__fastcall *EnableCallback)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *),
        void *CallbackContext,
        unsigned __int64 *RegHandle)
{
  if ( WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext )
    return 0;
  else
    return EtwRegister(
             &KMDF_PERF_PROVIDER,
             (PETWENABLECALLBACK)McGenControlCallbackV2,
             &KMDF_PERF_PROVIDER_Context,
             (PREGHANDLE)&WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext);
}
