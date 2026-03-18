/*
 * XREFs of HvlQueryProcessorTopology @ 0x1401AEB14
 * Callers:
 *     <none>
 * Callees:
 *     sub_1401AF268 @ 0x1401AF268 (sub_1401AF268.c)
 */

__int64 __fastcall HvlQueryProcessorTopology(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _DWORD *v6; // r9
  _DWORD *v7; // r10
  _WORD *v8; // r11

  if ( (HvlpFlags & 4) == 0 )
    return 3221225506LL;
  if ( (unsigned int)a1 >= 0x200 )
    return 3221225485LL;
  v5 = sub_1401AF268(a1, a2, a3, a4);
  if ( !v5 )
    return 3221225485LL;
  if ( v8 )
    *v8 = *(_WORD *)(v5 + 12);
  if ( v7 )
    *v7 = *(_DWORD *)(v5 + 16);
  if ( v6 )
    *v6 = *(_DWORD *)(v5 + 20);
  return 0LL;
}
