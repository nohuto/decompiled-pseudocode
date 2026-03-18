/*
 * XREFs of IoGetInitialStack @ 0x1406741B0
 * Callers:
 *     VerifierIoGetInitialStack @ 0x140741F88 (VerifierIoGetInitialStack.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
