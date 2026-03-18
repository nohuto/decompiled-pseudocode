/*
 * XREFs of ViXdvSearchAndReplaceThunkArrayOrderDependent @ 0x1406B931C
 * Callers:
 *     ViXdvSearchAllThunkArrays @ 0x1406B9270 (ViXdvSearchAllThunkArrays.c)
 * Callees:
 *     <none>
 */

char __fastcall ViXdvSearchAndReplaceThunkArrayOrderDependent(__int64 a1, int a2, __int64 a3)
{
  char **v3; // rax
  char *v5; // rcx
  char *v6; // rdx

  v3 = &VfOrderDependentThunks;
  while ( *((_DWORD *)v3 + 10) != a2 || !v3[4] )
  {
    v3 += 6;
    if ( !*v3 )
      return 0;
  }
  v5 = v3[4];
  v6 = v3[2];
  if ( *(char **)v5 != v6 )
    ++ViXdvThunksNotPristine;
  if ( v6 )
    ++ViXdvThunksBoundToXdv;
  else
    ++ViXdvThunksShared;
  *(_QWORD *)v5 = a3;
  return 1;
}
