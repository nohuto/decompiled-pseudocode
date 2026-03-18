/*
 * XREFs of McGenEventRegister @ 0x1C000AEA0
 * Callers:
 *     DriverEntry @ 0x1C00505D0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return 0;
  else
    return EtwRegister(
             &MS_USBXHCI_ETW_PROVIDER,
             McGenControlCallbackV2,
             &MS_USBXHCI_ETW_PROVIDER_Context,
             (PREGHANDLE)&WPP_MAIN_CB.Dpc.SystemArgument1);
}
