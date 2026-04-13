/*
 * XREFs of sub_180015C50 @ 0x180015C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 */

_QWORD *__fastcall sub_180015C50(__int64 a1, _QWORD *a2)
{
  _WORD *v3; // rdx
  __int64 v4; // rax

  v3 = *(_WORD **)(a1 + 40);
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  if ( *v3 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
  }
  sub_180015E80(a2, v3);
  return a2;
}
