/*
 * XREFs of CmpAddToDelayedDeref @ 0x14049AD3C
 * Callers:
 *     CmpPostNotify @ 0x14049AAF4 (CmpPostNotify.c)
 *     CmpCancelSubordinatePost @ 0x14049AD68 (CmpCancelSubordinatePost.c)
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
    *result = a2;
    result[1] = v3;
    if ( *v3 != a2 )
      __fastfail(3u);
    *v3 = result;
    *(_QWORD *)(a2 + 8) = result;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
