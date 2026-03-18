/*
 * XREFs of Endpoint_ClearStallTransferCompletion @ 0x1C00208D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddqL @ 0x1C0025A10 (WPP_RECORDER_SF_ddqL.c)
 *     ESM_AddEvent @ 0x1C00393A8 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ClearStallTransferCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  WPP_RECORDER_SF_ddqL(Context[10], (_DWORD)Irp, (_DWORD)Context, 63);
  ESM_AddEvent(Context + 34);
  return 3221225494LL;
}
