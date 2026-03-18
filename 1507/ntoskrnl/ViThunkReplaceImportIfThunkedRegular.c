/*
 * XREFs of ViThunkReplaceImportIfThunkedRegular @ 0x140745540
 * Callers:
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x140744F10 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140745374 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x14020E664 (MmReplaceImportEntry.c)
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
