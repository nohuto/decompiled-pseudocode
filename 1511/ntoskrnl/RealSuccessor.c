/*
 * XREFs of RealSuccessor @ 0x140090424
 * Callers:
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1400902B8 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlEnumerateGenericTableWithoutSplayingAvl @ 0x1400903C4 (RtlEnumerateGenericTableWithoutSplayingAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x1401F9A54 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealSuccessor(_QWORD *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *j; // rcx
  __int64 i; // rax

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
