/*
 * XREFs of PsIsSystemWideMitigationOptionSet @ 0x140584020
 * Callers:
 *     MiInitializeCfg @ 0x1407C84F4 (MiInitializeCfg.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsSystemWideMitigationOptionSet(char a1, __int64 a2)
{
  return (PspSystemMitigationOptions & (15LL << a1)) == (a2 | (1LL << (a1 + 2)));
}
