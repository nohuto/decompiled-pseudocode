/*
 * XREFs of McGenEventUnregister @ 0x1C001D068
 * Callers:
 *     DriverCleanup @ 0x1C0054710 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !WPP_MAIN_CB.Dpc.SystemArgument1 )
    return 0;
  result = EtwUnregister((REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument1);
  WPP_MAIN_CB.Dpc.SystemArgument1 = 0LL;
  return result;
}
