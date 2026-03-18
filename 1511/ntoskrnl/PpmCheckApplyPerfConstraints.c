/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14050CF58
 * Callers:
 *     PpmRegisterPerfCap @ 0x1401EC570 (PpmRegisterPerfCap.c)
 *     PpmPerfReApplyStates @ 0x1404F8CB0 (PpmPerfReApplyStates.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmPerfUpdateDomains @ 0x140537610 (PpmPerfUpdateDomains.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  return PpmCheckCustomRun((unsigned int)(a1 != 0) + 1);
}
