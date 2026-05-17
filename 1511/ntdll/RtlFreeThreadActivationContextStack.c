/*
 * XREFs of RtlFreeThreadActivationContextStack @ 0x180075FB0
 * Callers:
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 * Callees:
 *     RtlFreeActivationContextStack @ 0x180075FF0 (RtlFreeActivationContextStack.c)
 */

struct _TEB *RtlFreeThreadActivationContextStack()
{
  struct _TEB *result; // rax

  RtlFreeActivationContextStack(NtCurrentTeb()->ActivationContextStackPointer);
  result = NtCurrentTeb();
  result->ActivationContextStackPointer = 0LL;
  return result;
}
