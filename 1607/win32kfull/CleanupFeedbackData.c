/*
 * XREFs of CleanupFeedbackData @ 0x1C0135B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CleanupFeedbackData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( Feedback::gpevtPointerCursorOperation )
  {
    result = Win32FreePool(Feedback::gpevtPointerCursorOperation, a2, a3);
    Feedback::gpevtPointerCursorOperation = 0LL;
  }
  return result;
}
