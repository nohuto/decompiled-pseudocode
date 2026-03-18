/*
 * XREFs of SetPointerMetaVisibility @ 0x1C009409C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C0093FF0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01D36BC (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C0094A9C (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(HDEV a1, unsigned int a2)
{
  zzzEnableDwmPointerSupport(a2, 1LL);
  return GreInternalHidePointer(a1);
}
