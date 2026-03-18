/*
 * XREFs of McGenEventUnregister @ 0x1C00170E0
 * Callers:
 *     DriverCleanup @ 0x1C004F8C0 (DriverCleanup.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall McGenEventUnregister(PREGHANDLE RegHandle)
{
  ULONG result; // eax

  if ( !WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink )
    return 0;
  result = EtwUnregister((REGHANDLE)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink);
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = 0LL;
  return result;
}
