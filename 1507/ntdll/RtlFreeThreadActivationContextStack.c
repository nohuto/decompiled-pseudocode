/*
 * XREFs of RtlFreeThreadActivationContextStack @ 0x180063A00
 * Callers:
 *     LdrShutdownThread @ 0x180021810 (LdrShutdownThread.c)
 * Callees:
 *     RtlFreeActivationContextStack @ 0x180063A40 (RtlFreeActivationContextStack.c)
 */

struct _TEB *RtlFreeThreadActivationContextStack()
{
  struct _TEB *result; // rax

  RtlFreeActivationContextStack(NtCurrentTeb()->ActivationContextStackPointer);
  result = NtCurrentTeb();
  result->ActivationContextStackPointer = 0LL;
  return result;
}
