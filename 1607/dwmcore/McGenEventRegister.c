/*
 * XREFs of McGenEventRegister @ 0x1800A9438
 * Callers:
 *     ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800A9220 (-RegisterDwmGuidWithEtw@@YAXXZ.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister()
{
  if ( Microsoft_Windows_Dwm_CoreHandle )
    return 0;
  else
    return EventRegister(
             &Microsoft_Windows_Dwm_Core_Provider,
             (PENABLECALLBACK)McGenControlCallbackV2,
             &Microsoft_Windows_Dwm_Core_Provider_Context,
             &Microsoft_Windows_Dwm_CoreHandle);
}
