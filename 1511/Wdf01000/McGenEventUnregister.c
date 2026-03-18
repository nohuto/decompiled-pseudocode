/*
 * XREFs of McGenEventUnregister @ 0x1C0062F58
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C0062C54 (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventUnregister(unsigned __int64 *RegHandle)
{
  NTSTATUS result; // eax

  if ( !WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink )
    return 0;
  result = EtwUnregister((REGHANDLE)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink);
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink = 0LL;
  return result;
}
