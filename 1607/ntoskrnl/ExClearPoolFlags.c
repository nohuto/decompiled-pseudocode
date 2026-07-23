/*
 * XREFs of ExClearPoolFlags @ 0x140171F4C
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x140716718 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void ExClearPoolFlags()
{
  _InterlockedAnd(&ExpPoolFlags, 0xFFFFFDF9);
}
