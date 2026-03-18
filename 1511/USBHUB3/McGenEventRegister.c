/*
 * XREFs of McGenEventRegister @ 0x1C00011AC
 * Callers:
 *     UsbSleepStudy_Initialize @ 0x1C003307C (UsbSleepStudy_Initialize.c)
 *     DriverEntry @ 0x1C0073000 (DriverEntry.c)
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
