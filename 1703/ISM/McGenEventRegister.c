/*
 * XREFs of McGenEventRegister @ 0x180001AA8
 * Callers:
 *     ??0OneCoreUAPInputHost@@IEAA@XZ @ 0x180003FCC (--0OneCoreUAPInputHost@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

ULONG McGenEventRegister()
{
  if ( Microsoft_OneCore_MinInputHandle )
    return 0;
  else
    return EventRegister(
             &MinInput,
             (PENABLECALLBACK)McGenControlCallbackV2,
             &MinInput_Context,
             &Microsoft_OneCore_MinInputHandle);
}
