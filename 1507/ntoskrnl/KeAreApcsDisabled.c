/*
 * XREFs of KeAreApcsDisabled @ 0x1400D08A0
 * Callers:
 *     VerifierKeAreApcsDisabled @ 0x14074215C (VerifierKeAreApcsDisabled.c)
 * Callees:
 *     <none>
 */

BOOLEAN KeAreApcsDisabled(void)
{
  return KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
}
