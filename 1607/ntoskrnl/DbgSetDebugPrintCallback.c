/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1402111E4
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1404968E8 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x140496B74 (EtwpDisableKernelTrace.c)
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
