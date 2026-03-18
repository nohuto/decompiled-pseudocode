/*
 * XREFs of RegisterLPK @ 0x1C00FE3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterLPK(__int64 a1)
{
  *(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 720) = a1;
  return 1LL;
}
