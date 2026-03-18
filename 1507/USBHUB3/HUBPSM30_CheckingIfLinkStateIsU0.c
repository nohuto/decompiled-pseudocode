/*
 * XREFs of HUBPSM30_CheckingIfLinkStateIsU0 @ 0x1C000E1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIfLinkStateIsU0(__int64 a1)
{
  return (*(_WORD *)(*(_QWORD *)(a1 + 960) + 184LL) & 0x1E0u) < 0x60 ? 3089 : 3005;
}
