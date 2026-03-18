/*
 * XREFs of ViThunkReplaceImportIfThunkedRegular @ 0x1406C3CA0
 * Callers:
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1406C3670 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkReplaceAllThunkedImports @ 0x1406C3AD4 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x1401CF09C (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportIfThunkedRegular(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a2 )
  {
    while ( *a1 != a2[2] )
    {
      a2 += 5;
      if ( !*a2 )
        return result;
    }
    MmReplaceImportEntry((ULONG_PTR)a1, a2[1]);
    return 1LL;
  }
  return result;
}
