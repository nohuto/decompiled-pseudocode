/*
 * XREFs of ExClearPoolFlags @ 0x140195F14
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x14074A778 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void ExClearPoolFlags()
{
  _InterlockedAnd(&ExpPoolFlags, 0xFFFFFBF9);
}
