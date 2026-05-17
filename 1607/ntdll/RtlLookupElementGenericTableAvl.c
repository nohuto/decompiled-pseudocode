/*
 * XREFs of RtlLookupElementGenericTableAvl @ 0x180063AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlLookupElementGenericTableAvl(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rbx
  int v6; // eax

  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 44) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    do
    {
      v6 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(a1, a2, v5 + 32);
      if ( v6 )
      {
        if ( v6 != 1 )
          return v5 + 32;
        v5 = *(_QWORD *)(v5 + 16);
      }
      else
      {
        v5 = *(_QWORD *)(v5 + 8);
      }
    }
    while ( v5 );
  }
  return v2;
}
