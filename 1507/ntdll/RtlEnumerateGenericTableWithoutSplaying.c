/*
 * XREFs of RtlEnumerateGenericTableWithoutSplaying @ 0x180061B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlEnumerateGenericTableWithoutSplaying(_QWORD *a1, _QWORD **a2)
{
  _QWORD *v2; // r8
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *i; // rax
  _QWORD *j; // rax
  _QWORD *k; // rax

  v2 = (_QWORD *)*a1;
  v4 = 0LL;
  if ( v2 )
  {
    v5 = *a2;
    if ( v5 )
    {
      v2 = (_QWORD *)v5[2];
      if ( v2 )
      {
        for ( i = (_QWORD *)v2[1]; i; i = (_QWORD *)i[1] )
          v2 = i;
      }
      else
      {
        for ( j = (_QWORD *)*v5; (_QWORD *)j[2] == v5; j = (_QWORD *)*j )
          v5 = j;
        v2 = 0LL;
        if ( *(_QWORD **)(*v5 + 8LL) == v5 )
          v2 = (_QWORD *)*v5;
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
  return 0LL;
}
