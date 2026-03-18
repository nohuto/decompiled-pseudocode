/*
 * XREFs of McGenEventUnregister @ 0x1C0075544
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C00750AC (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventUnregister(unsigned __int64 *RegHandle)
{
  NTSTATUS result; // eax

  if ( !WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink )
    return 0;
  result = EtwUnregister((REGHANDLE)WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink);
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink = 0LL;
  return result;
}
