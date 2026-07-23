/*
 * XREFs of ViXdvSearchAndReplaceThunkArray @ 0x140705390
 * Callers:
 *     ViXdvSearchAllThunkArrays @ 0x14070532C (ViXdvSearchAllThunkArrays.c)
 * Callees:
 *     <none>
 */

char __fastcall ViXdvSearchAndReplaceThunkArray(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx

  while ( *(_DWORD *)(a1 + 32) != a3 || !*(_QWORD *)(a1 + 24) )
  {
    a1 += 40LL;
    if ( !*(_QWORD *)a1 )
      return 0;
  }
  v5 = *(_QWORD **)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 16);
  if ( *v5 != v6 )
    ++ViXdvThunksNotPristine;
  if ( v6 )
    ++ViXdvThunksBoundToXdv;
  else
    ++ViXdvThunksShared;
  *v5 = a4;
  return 1;
}
