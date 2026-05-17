/*
 * XREFs of RtlEnumerateGenericTable @ 0x1800610E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180061490 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x180061950 (RtlRealSuccessor.c)
 */

__int64 __fastcall RtlEnumerateGenericTable(__int64 *a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 i; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  v2 = *a1;
  v3 = 0LL;
  if ( !*a1 )
    return 0LL;
  if ( a2 )
  {
    for ( i = *(_QWORD *)(v2 + 8); i; i = *(_QWORD *)(i + 8) )
      v2 = i;
    v7 = v2;
  }
  else
  {
    v8 = RtlRealSuccessor(*a1);
    v2 = v8;
    if ( !v8 )
      return v3;
    v7 = v8;
  }
  *a1 = RtlSplay(v7);
  return v2 + 40;
}
