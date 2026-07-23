/*
 * XREFs of MiPageCombiningActive @ 0x14001D454
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1400BC5CC (MiSignalLargePageRebuild.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(int *a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140326E44 != 0;
  if ( a1[1480] && (a1 != &MiSystemPartition || dword_140326E98) )
    return 1;
  return result;
}
