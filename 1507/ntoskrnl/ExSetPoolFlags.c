/*
 * XREFs of ExSetPoolFlags @ 0x140195F20
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140736CF8 (VfInitSystemNoRebootNeeded.c)
 *     VfInitVerifierComponents @ 0x140736E40 (VfInitVerifierComponents.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x14074A778 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
