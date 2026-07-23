/*
 * XREFs of PsIsThreadImpersonating @ 0x14054AE98
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsThreadImpersonating(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1728) & 8) != 0;
}
