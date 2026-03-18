/*
 * XREFs of PpmCheckApplyPerfConstraints @ 0x14058430C
 * Callers:
 *     PpmRegisterPerfCap @ 0x14023A7B8 (PpmRegisterPerfCap.c)
 *     PpmPerfReApplyStates @ 0x140566064 (PpmPerfReApplyStates.c)
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 *     PpmPerfUpdateDomains @ 0x1405B0DCC (PpmPerfUpdateDomains.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmCheckApplyPerfConstraints(char a1)
{
  PpmCheckCustomRun((a1 != 0) + 1);
}
