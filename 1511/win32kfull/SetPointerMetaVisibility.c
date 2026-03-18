/*
 * XREFs of SetPointerMetaVisibility @ 0x1C0098764
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C00987A0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DBCBC (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C0096CD8 (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(HDEV a1, unsigned int a2)
{
  zzzEnableDwmPointerSupport(a2, 1);
  return GreInternalHidePointer(a1);
}
