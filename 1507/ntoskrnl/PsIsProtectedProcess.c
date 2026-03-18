/*
 * XREFs of PsIsProtectedProcess @ 0x140101A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PsIsProtectedProcess(__int64 a1)
{
  return (*(_BYTE *)(a1 + 1714) & 7) != 0;
}
