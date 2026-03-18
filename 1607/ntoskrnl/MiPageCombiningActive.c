/*
 * XREFs of MiPageCombiningActive @ 0x14001D8D4
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1400BE73C (MiSignalLargePageRebuild.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(int *a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140326E04 != 0;
  if ( a1[1480] && (a1 != &MiSystemPartition || dword_140326E58) )
    return 1;
  return result;
}
