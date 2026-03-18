/*
 * XREFs of McGenEventRegister @ 0x1401340C8
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x1405F54F4 (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x140756188 (PnpDiagInitialize.c)
 *     PiUEventInit @ 0x140756CC8 (PiUEventInit.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( *RegHandle )
    return 0;
  else
    return EtwRegister(ProviderId, McGenControlCallbackV2, CallbackContext, RegHandle);
}
