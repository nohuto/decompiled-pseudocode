/*
 * XREFs of McGenEventRegister @ 0x1C00016E8
 * Callers:
 *     DeviceCreate @ 0x1C0001B40 (DeviceCreate.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( ExBusAudHandle )
    return 0;
  else
    return EtwRegister(&EXBUSAUD_PROVIDER, McGenControlCallbackV2, &EXBUSAUD_PROVIDER_Context, &ExBusAudHandle);
}
