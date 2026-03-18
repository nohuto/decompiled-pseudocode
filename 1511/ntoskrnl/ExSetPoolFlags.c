/*
 * XREFs of ExSetPoolFlags @ 0x140167008
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1406B6A08 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x1406B6B50 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x1406C7D74 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
