/*
 * XREFs of SetPointerMetaVisibility @ 0x1C003A54C
 * Callers:
 *     TransitionCursorSuppressionState @ 0x1C003A4A0 (TransitionCursorSuppressionState.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01DB6B8 (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     zzzEnableDwmPointerSupport @ 0x1C003E1F8 (zzzEnableDwmPointerSupport.c)
 */

__int64 __fastcall SetPointerMetaVisibility(HDEV a1, unsigned int a2)
{
  zzzEnableDwmPointerSupport(a2, 1LL);
  return GreInternalHidePointer(a1);
}
