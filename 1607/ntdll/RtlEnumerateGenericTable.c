/*
 * XREFs of RtlEnumerateGenericTable @ 0x180063200
 * Callers:
 *     <none>
 * Callees:
 *     RtlSplay @ 0x180063510 (RtlSplay.c)
 *     RtlRealSuccessor @ 0x180063A80 (RtlRealSuccessor.c)
 */

__int64 __fastcall RtlEnumerateGenericTable(__int64 *a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 i; // rax
  __int64 v6; // rcx
  __int64 v8; // rax

  v2 = *a1;
  v3 = 0LL;
  if ( *a1 )
  {
    if ( a2 )
    {
      for ( i = *(_QWORD *)(v2 + 8); i; i = *(_QWORD *)(i + 8) )
        v2 = i;
      v6 = v2;
    }
    else
    {
      v8 = RtlRealSuccessor(*a1);
      v2 = v8;
      if ( !v8 )
        return v3;
      v6 = v8;
    }
    *a1 = RtlSplay(v6);
    return v2 + 40;
  }
  return 0LL;
}
