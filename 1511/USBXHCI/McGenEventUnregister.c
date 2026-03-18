/*
 * XREFs of McGenEventUnregister @ 0x1C00207F4
 * Callers:
 *     DriverCleanup @ 0x1C0050930 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !WPP_MAIN_CB.Dpc.SystemArgument2 )
    return 0;
  result = EtwUnregister((REGHANDLE)WPP_MAIN_CB.Dpc.SystemArgument2);
  WPP_MAIN_CB.Dpc.SystemArgument2 = 0LL;
  return result;
}
