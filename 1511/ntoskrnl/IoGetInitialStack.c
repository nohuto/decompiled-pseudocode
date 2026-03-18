/*
 * XREFs of IoGetInitialStack @ 0x1405F9F24
 * Callers:
 *     VerifierIoGetInitialStack @ 0x1406C0794 (VerifierIoGetInitialStack.c)
 * Callees:
 *     <none>
 */

PVOID IoGetInitialStack(void)
{
  return KeGetCurrentThread()->InitialStack;
}
