/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x140143D7C
 * Callers:
 *     PpmCheckInitProcessors @ 0x14056A310 (PpmCheckInitProcessors.c)
 *     PpmReapplyPerfPolicy @ 0x14056A4D0 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x140676710 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1406767D8 (PpmParkClearForcedMask.c)
 * Callees:
 *     <none>
 */

__int64 PpmCheckApplyParkConstraints()
{
  return PpmCheckCustomRun();
}
