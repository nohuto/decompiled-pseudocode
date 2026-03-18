/*
 * XREFs of Endpoint_ClearStallTransferCompletion @ 0x1C00171C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddqL @ 0x1C001C868 (WPP_RECORDER_SF_ddqL.c)
 *     ESM_AddEvent @ 0x1C00383C8 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ClearStallTransferCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  WPP_RECORDER_SF_ddqL(Context[10], (_DWORD)Irp, (_DWORD)Context, 63);
  ESM_AddEvent(Context + 34);
  return 3221225494LL;
}
