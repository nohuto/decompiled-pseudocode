/*
 * XREFs of McGenEventRegister @ 0x180003CFC
 * Callers:
 *     DllMain @ 0x180003D9C (DllMain.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister()
{
  if ( Microsoft_Windows_Immersive_ShellHandle )
    return 0;
  else
    return EventRegister(
             &MICROSOFT_TWINUI_PUBLISHER,
             (PENABLECALLBACK)McGenControlCallbackV2,
             &MICROSOFT_TWINUI_PUBLISHER_Context,
             &Microsoft_Windows_Immersive_ShellHandle);
}
