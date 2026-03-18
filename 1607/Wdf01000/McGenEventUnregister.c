/*
 * XREFs of McGenEventUnregister @ 0x1C0071968
 * Callers:
 *     FxLibraryCommonDecommission @ 0x1C0071668 (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventUnregister(unsigned __int64 *RegHandle)
{
  NTSTATUS result; // eax

  if ( !WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext )
    return 0;
  result = EtwUnregister((REGHANDLE)WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext);
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext = 0LL;
  return result;
}
