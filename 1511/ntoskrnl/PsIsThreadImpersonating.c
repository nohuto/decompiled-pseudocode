/*
 * XREFs of PsIsThreadImpersonating @ 0x140510420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsThreadImpersonating(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1724) & 8) != 0;
}
