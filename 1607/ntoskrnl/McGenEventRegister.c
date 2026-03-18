/*
 * XREFs of McGenEventRegister @ 0x14013C3BC
 * Callers:
 *     FsRtlpHeatRegisterVolume @ 0x14061F89C (FsRtlpHeatRegisterVolume.c)
 *     PnpDiagInitialize @ 0x14079CC74 (PnpDiagInitialize.c)
 *     PiUEventInit @ 0x14079D7F0 (PiUEventInit.c)
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
