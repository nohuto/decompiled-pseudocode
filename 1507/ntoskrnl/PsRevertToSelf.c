/*
 * XREFs of PsRevertToSelf @ 0x1406C31F8
 * Callers:
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     VerifierPsRevertToSelf @ 0x14074247C (VerifierPsRevertToSelf.c)
 * Callees:
 *     <none>
 */

void PsRevertToSelf(void)
{
  PsRevertThreadToSelf(KeGetCurrentThread());
}
