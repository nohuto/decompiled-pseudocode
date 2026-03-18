/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x14016791C
 * Callers:
 *     PpmCheckInitProcessors @ 0x1405AFF04 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x1406BE7BC (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406BE884 (PpmParkClearForcedMask.c)
 * Callees:
 *     <none>
 */

void PpmCheckApplyParkConstraints()
{
  PpmCheckCustomRun(4);
}
