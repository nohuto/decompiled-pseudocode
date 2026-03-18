/*
 * XREFs of InitializeFeedbackData @ 0x1C0157500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _KEVENT *InitializeFeedbackData()
{
  struct _KEVENT *result; // rax

  result = (struct _KEVENT *)CreateKernelEvent(1LL, 0LL);
  Feedback::gpevtPointerCursorOperation = result;
  return result;
}
