/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180073E80
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x180073E60 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     RealSuccessor @ 0x1800744E0 (RealSuccessor.c)
 */

__int64 __fastcall RtlEnumerateGenericTableWithoutSplayingAvl(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 i; // rcx
  __int64 v4; // r8
  __int64 *v6; // r9

  if ( *(_DWORD *)(a1 + 44) )
  {
    if ( *a2 )
    {
      v2 = RealSuccessor(*a2);
      if ( !v2 )
        return v4;
      *v6 = v2;
    }
    else
    {
      v2 = *(_QWORD *)(a1 + 16);
      for ( i = *(_QWORD *)(v2 + 8); i; i = *(_QWORD *)(i + 8) )
        v2 = i;
      *a2 = v2;
    }
    return v2 + 32;
  }
  return 0LL;
}
