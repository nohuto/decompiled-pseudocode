/*
 * XREFs of CmpAddToDelayedDeref @ 0x1403E3B3C
 * Callers:
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     CmpCancelSubordinatePost @ 0x1403E3B68 (CmpCancelSubordinatePost.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CmpAddToDelayedDeref(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // r8

  result = *(_QWORD **)(a1 + 48);
  if ( result )
  {
    v3 = *(_QWORD **)(a2 + 8);
    if ( *v3 != a2 )
      __fastfail(3u);
    *result = a2;
    result[1] = v3;
    *v3 = result;
    *(_QWORD *)(a2 + 8) = result;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
