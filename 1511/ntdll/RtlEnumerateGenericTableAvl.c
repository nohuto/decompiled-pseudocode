/*
 * XREFs of RtlEnumerateGenericTableAvl @ 0x18006BA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlEnumerateGenericTableAvl(__int64 a1, char a2)
{
  __int64 v2; // r8
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *j; // rax
  _QWORD *k; // rax
  _QWORD *i; // rax

  v2 = 0LL;
  if ( a2 )
    *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)(a1 + 44) )
  {
    v4 = *(_QWORD **)(a1 + 56);
    if ( !v4 )
    {
      v5 = *(_QWORD **)(a1 + 16);
      for ( i = (_QWORD *)v5[1]; i; i = (_QWORD *)i[1] )
        v5 = i;
LABEL_10:
      *(_QWORD *)(a1 + 56) = v5;
      return v5 + 4;
    }
    v5 = (_QWORD *)v4[2];
    if ( v5 )
    {
      for ( j = (_QWORD *)v5[1]; j; j = (_QWORD *)j[1] )
        v5 = j;
    }
    else
    {
      for ( k = (_QWORD *)*v4; (_QWORD *)k[2] == v4; k = (_QWORD *)*k )
        v4 = k;
      v5 = 0LL;
      if ( *(_QWORD **)(*v4 + 8LL) == v4 )
        v5 = (_QWORD *)*v4;
    }
    if ( v5 )
      goto LABEL_10;
  }
  return (_QWORD *)v2;
}
