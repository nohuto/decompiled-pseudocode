/*
 * XREFs of HvlQueryProcessorTopology @ 0x1401E5C90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401E65D4 @ 0x1401E65D4 (sub_1401E65D4.c)
 */

__int64 __fastcall HvlQueryProcessorTopology(__int64 a1)
{
  __int64 v2; // rax
  _DWORD *v3; // r9
  _DWORD *v4; // r10
  _WORD *v5; // r11

  if ( (HvlpFlags & 4) == 0 )
    return 3221225506LL;
  if ( (unsigned int)a1 >= 0x200 )
    return 3221225485LL;
  v2 = sub_1401E65D4(a1);
  if ( !v2 )
    return 3221225485LL;
  if ( v5 )
    *v5 = *(_WORD *)(v2 + 12);
  if ( v4 )
    *v4 = *(_DWORD *)(v2 + 16);
  if ( v3 )
    *v3 = *(_DWORD *)(v2 + 20);
  return 0LL;
}
