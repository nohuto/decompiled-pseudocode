/*
 * XREFs of RtlFreeThreadActivationContextStack @ 0x180077820
 * Callers:
 *     LdrShutdownThread @ 0x180015E40 (LdrShutdownThread.c)
 * Callees:
 *     RtlFreeActivationContextStack @ 0x180077860 (RtlFreeActivationContextStack.c)
 */

struct _TEB *RtlFreeThreadActivationContextStack()
{
  struct _TEB *result; // rax

  RtlFreeActivationContextStack(NtCurrentTeb()->ActivationContextStackPointer);
  result = NtCurrentTeb();
  result->ActivationContextStackPointer = 0LL;
  return result;
}
