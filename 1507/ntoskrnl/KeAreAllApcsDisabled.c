/*
 * XREFs of KeAreAllApcsDisabled @ 0x140110060
 * Callers:
 *     VerifierKeAreAllApcsDisabled @ 0x140742154 (VerifierKeAreAllApcsDisabled.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 */

BOOLEAN KeAreAllApcsDisabled(void)
{
  return KeGetCurrentThread()->SpecialApcDisable || !(unsigned __int8)KeAreInterruptsEnabled() || KeGetCurrentIrql();
}
