/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x18006C1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlEnumerateGenericTableWithoutSplaying(_QWORD *a1, _QWORD **a2)
{
  _QWORD *v2; // r8
  __int64 v4; // rcx
  _QWORD *v6; // rdx
  _QWORD *k; // rax
  _QWORD *i; // rax
  _QWORD *j; // rax

  v2 = (_QWORD *)*a1;
  v4 = 0LL;
  if ( !v2 )
    return 0LL;
  v6 = *a2;
  if ( v6 )
  {
    v2 = (_QWORD *)v6[2];
    if ( v2 )
    {
      for ( i = (_QWORD *)v2[1]; i; i = (_QWORD *)i[1] )
        v2 = i;
    }
    else
    {
      for ( j = (_QWORD *)*v6; (_QWORD *)j[2] == v6; j = (_QWORD *)*j )
        v6 = j;
      v2 = 0LL;
      if ( *(_QWORD **)(*v6 + 8LL) == v6 )
        v2 = (_QWORD *)*v6;
    }
    if ( !v2 )
      return (_QWORD *)v4;
  }
  else
  {
    for ( k = (_QWORD *)v2[1]; k; k = (_QWORD *)k[1] )
      v2 = k;
  }
  *a2 = v2;
  return v2 + 5;
}
