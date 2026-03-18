/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x1405447FC
 * Callers:
 *     PpmRegisterPerfCap @ 0x140205028 (PpmRegisterPerfCap.c)
 *     PpmPerfReApplyStates @ 0x140531814 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomains @ 0x140544794 (PpmPerfUpdateDomains.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x14066DDDC (PpmUpdatePerfStates.c)
 * Callees:
 *     <none>
 */

__int64 PpmCheckApplyPerfConstraints()
{
  return PpmCheckCustomRun();
}
