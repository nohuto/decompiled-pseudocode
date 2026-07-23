/*
 * XREFs of KsepPatchImportTableEntry @ 0x1406534F8
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x140653388 (KsepPatchDriverImportsTable.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x1401E5DD4 (MmReplaceImportEntry.c)
 */

__int64 __fastcall KsepPatchImportTableEntry(_QWORD *a1, unsigned int a2, __int64 a3, ULONG_PTR a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  unsigned int v6; // eax

  v4 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 3221225485LL;
  v5 = a2 >> 3;
  v6 = 0;
  if ( v5 )
  {
    while ( *a1 != a3 )
    {
      ++v6;
      ++a1;
      if ( v6 >= v5 )
        return (unsigned int)-1073741275;
    }
    MmReplaceImportEntry((ULONG_PTR)a1, a4);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
