/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1402113B8
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140495E58 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1404960E4 (EtwpDisableKernelTrace.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
