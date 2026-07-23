/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x140716718
 * Callers:
 *     VfInitVerifierComponents @ 0x140703330 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x140716730 (VfSettingsCheckForChanges.c)
 * Callees:
 *     <none>
 */

void __fastcall VfSettingsApplyMiscellaneousChecks(__int16 a1)
{
  if ( (a1 & 0x800) != 0 )
    ExSetPoolFlags(0x206u);
  else
    ExClearPoolFlags();
}
