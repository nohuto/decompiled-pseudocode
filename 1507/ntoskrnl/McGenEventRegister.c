/*
 * XREFs of McGenEventRegister @ 0x1401703BC
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x14066E590 (FsRtlpHeatRegisterVolume.c)
 *     PiUEventInit @ 0x1407C01DC (PiUEventInit.c)
 *     PnpDiagInitialize @ 0x1407E8214 (PnpDiagInitialize.c)
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
