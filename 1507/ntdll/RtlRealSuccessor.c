/*
 * XREFs of RtlRealSuccessor @ 0x180061950
 * Callers:
 *     RtlEnumerateGenericTable @ 0x1800610E0 (RtlEnumerateGenericTable.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRealSuccessor(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 i; // rax
  _QWORD *j; // rcx

  v1 = a1;
  v2 = 0LL;
  v3 = a1[2];
  if ( v3 )
  {
    for ( i = *(_QWORD *)(v3 + 8); i; i = *(_QWORD *)(i + 8) )
      v3 = i;
    return (_QWORD *)v3;
  }
  else
  {
    for ( j = (_QWORD *)*v1; (_QWORD *)j[2] == v1; j = (_QWORD *)*j )
      v1 = j;
    if ( *(_QWORD **)(*v1 + 8LL) == v1 )
      return (_QWORD *)*v1;
    return (_QWORD *)v2;
  }
}
