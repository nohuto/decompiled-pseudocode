/*
 * XREFs of ExClearPoolFlags @ 0x140166FFC
 * Callers:
 *     VfSettingsApplyMiscellaneousChecks @ 0x1406C7D74 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void ExClearPoolFlags()
{
  _InterlockedAnd(&ExpPoolFlags, 0xFFFFFBF9);
}
