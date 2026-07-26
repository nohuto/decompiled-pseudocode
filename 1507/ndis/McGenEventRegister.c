/*
 * XREFs of McGenEventRegister @ 0x1C00119D4
 * Callers:
 *     DriverEntry @ 0x1C01023B0 (DriverEntry.c)
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
