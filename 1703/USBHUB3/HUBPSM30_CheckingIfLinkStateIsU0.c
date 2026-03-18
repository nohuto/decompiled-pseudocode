/*
 * XREFs of HUBPSM30_CheckingIfLinkStateIsU0 @ 0x1C000F420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIfLinkStateIsU0(__int64 a1)
{
  __int16 v1; // ax
  bool v2; // zf
  __int64 result; // rax

  v1 = *(_WORD *)(*(_QWORD *)(a1 + 960) + 184LL);
  if ( (v1 & 0x1E0u) < 0x40 )
    return 3089LL;
  v2 = (v1 & 0x1E0) == 64;
  result = 3005LL;
  if ( v2 )
    return 3089LL;
  return result;
}
