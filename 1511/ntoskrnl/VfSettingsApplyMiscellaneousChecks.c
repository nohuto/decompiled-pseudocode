/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x1406C7D74
 * Callers:
 *     VfInitVerifierComponents @ 0x1406B6B50 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x1406C7D8C (VfSettingsCheckForChanges.c)
 * Callees:
 *     <none>
 */

void __fastcall VfSettingsApplyMiscellaneousChecks(__int16 a1)
{
  if ( (a1 & 0x800) != 0 )
    ExSetPoolFlags(0x406u);
  else
    ExClearPoolFlags();
}
