/*
 * XREFs of MiMapWsleHash @ 0x140102D80
 * Callers:
 *     MiUpdateWsleHash @ 0x140048D80 (MiUpdateWsleHash.c)
 *     MiConvertWsleHash @ 0x140102AC0 (MiConvertWsleHash.c)
 * Callees:
 *     MiMapNewWorkingSetPage @ 0x140102E50 (MiMapNewWorkingSetPage.c)
 */

_BOOL8 __fastcall MiMapWsleHash(__int64 a1, __int64 a2)
{
  return (unsigned int)MiMapNewWorkingSetPage(a1, a2, 0LL) != 0;
}
