/*
 * XREFs of ExSetPoolFlags @ 0x140171A58
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1407031D4 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140703300 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140716718 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
