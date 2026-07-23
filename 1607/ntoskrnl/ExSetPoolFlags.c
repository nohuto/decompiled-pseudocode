/*
 * XREFs of ExSetPoolFlags @ 0x140171F58
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140703204 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140703330 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140716718 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
