/*
 * XREFs of PsIsProtectedProcessLight @ 0x14012C8DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcessLight(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1714) & 7) == 1;
}
