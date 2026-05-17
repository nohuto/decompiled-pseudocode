/*
 * XREFs of RealPredecessor @ 0x180068CB8
 * Callers:
 *     RtlDeleteElementGenericTableAvlEx @ 0x180068990 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlGetElementGenericTableAvl @ 0x1800E3E30 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealPredecessor(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *j; // rax
  _QWORD *i; // rcx

  result = (_QWORD *)a1[1];
  if ( result )
  {
    for ( i = (_QWORD *)result[2]; i; i = (_QWORD *)i[2] )
      result = i;
  }
  else
  {
    for ( j = (_QWORD *)*a1; (_QWORD *)j[1] == a1; j = (_QWORD *)*j )
      a1 = j;
    result = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 16LL) != a1 || (_QWORD *)*result == result )
      return 0LL;
  }
  return result;
}
