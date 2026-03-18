/*
 * XREFs of RegisterLPK @ 0x1C005F4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterLPK(__int64 a1, __int64 a2)
{
  *(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2) + 712) = a1;
  return 1LL;
}
