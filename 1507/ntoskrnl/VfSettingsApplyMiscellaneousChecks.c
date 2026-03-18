/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x14074A778
 * Callers:
 *     VfInitVerifierComponents @ 0x140736E40 (VfInitVerifierComponents.c)
 *     VfSettingsCheckForChanges @ 0x14074A790 (VfSettingsCheckForChanges.c)
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
