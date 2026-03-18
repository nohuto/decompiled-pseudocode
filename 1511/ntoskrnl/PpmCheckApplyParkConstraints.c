/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x140138DF0
 * Callers:
 *     PpmCheckInitProcessors @ 0x140536E6C (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140537218 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x14063DEB8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14063DF80 (PpmParkClearForcedMask.c)
 * Callees:
 *     <none>
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun(4);
}
