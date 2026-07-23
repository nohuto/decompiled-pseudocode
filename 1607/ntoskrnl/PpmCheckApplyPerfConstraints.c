/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x140544D3C
 * Callers:
 *     PpmRegisterPerfCap @ 0x140204E54 (PpmRegisterPerfCap.c)
 *     PpmPerfReApplyStates @ 0x140531D54 (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomains @ 0x140544CD4 (PpmPerfUpdateDomains.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x14066DEC0 (PpmUpdatePerfStates.c)
 * Callees:
 *     <none>
 */

__int64 PpmCheckApplyPerfConstraints()
{
  return PpmCheckCustomRun();
}
