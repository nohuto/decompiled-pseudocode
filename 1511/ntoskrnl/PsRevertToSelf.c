/*
 * XREFs of PsRevertToSelf @ 0x140640D88
 * Callers:
 *     VerifierPsRevertToSelf @ 0x1406C0C3C (VerifierPsRevertToSelf.c)
 * Callees:
 *     <none>
 */

void PsRevertToSelf(void)
{
  PsRevertThreadToSelf(KeGetCurrentThread());
}
