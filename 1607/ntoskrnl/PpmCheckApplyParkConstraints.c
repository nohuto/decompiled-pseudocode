/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x14014380C
 * Callers:
 *     PpmCheckInitProcessors @ 0x140569DD0 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x140569F90 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x14067662C (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406766F4 (PpmParkClearForcedMask.c)
 * Callees:
 *     <none>
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun();
}
