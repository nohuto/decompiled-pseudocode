/*
 * XREFs of PsIsProtectedProcessLight @ 0x140092D9C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcessLight(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1722) & 7) == 1;
}
