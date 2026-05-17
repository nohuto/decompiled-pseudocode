/*
 * XREFs of RtlFreeThreadActivationContextStack @ 0x180077830
 * Callers:
 *     LdrShutdownThread @ 0x180015E50 (LdrShutdownThread.c)
 * Callees:
 *     RtlFreeActivationContextStack @ 0x180077870 (RtlFreeActivationContextStack.c)
 */

struct _TEB *RtlFreeThreadActivationContextStack()
{
  struct _TEB *result; // rax

  RtlFreeActivationContextStack(NtCurrentTeb()->ActivationContextStackPointer);
  result = NtCurrentTeb();
  result->ActivationContextStackPointer = 0LL;
  return result;
}
