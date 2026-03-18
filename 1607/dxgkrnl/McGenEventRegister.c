/*
 * XREFs of McGenEventRegister @ 0x1C0010BE8
 * Callers:
 *     DriverEntry @ 0x1C01B7018 (DriverEntry.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventRegister(
        LPCGUID ProviderId,
        PETWENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  if ( Microsoft_Windows_DxgKrnlHandle )
    return 0;
  else
    return EtwRegister(
             &DxgkControlGuid,
             McGenControlCallbackV2,
             &DxgkControlGuid_Context,
             &Microsoft_Windows_DxgKrnlHandle);
}
