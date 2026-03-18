/*
 * XREFs of ViThunkReplaceSharedExports @ 0x14074559C
 * Callers:
 *     ViThunkReplaceAllSharedExports @ 0x1407452F0 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x14020E664 (MmReplaceImportEntry.c)
 */

char __fastcall ViThunkReplaceSharedExports(ULONG_PTR *a1, unsigned int a2)
{
  ULONG_PTR *v2; // rbx
  __int64 v3; // rdi
  char result; // al

  if ( a1 )
  {
    v2 = a1;
    if ( a2 )
    {
      v3 = a2;
      do
      {
        if ( *v2 )
          result = MmReplaceImportEntry(*v2, v2[1]);
        v2 += 2;
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
