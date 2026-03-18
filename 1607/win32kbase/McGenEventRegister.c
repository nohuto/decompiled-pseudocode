/*
 * XREFs of McGenEventRegister @ 0x1C0052774
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( Microsoft_Windows_Win32kHandle )
    return 0;
  else
    return EtwRegister(
             &W32kControlGuid,
             McGenControlCallbackV2,
             &W32kControlGuid_Context,
             &Microsoft_Windows_Win32kHandle);
}
