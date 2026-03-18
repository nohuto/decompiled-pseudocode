/*
 * XREFs of MiPageCombiningActive @ 0x1400A98D0
 * Callers:
 *     MiSignalLargePageRebuild @ 0x1400133E0 (MiSignalLargePageRebuild.c)
 *     MiAbortCombineScan @ 0x1400A980C (MiAbortCombineScan.c)
 *     MiChangePageAttribute @ 0x1400AA634 (MiChangePageAttribute.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(int *a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_1402FEA44 != 0;
  if ( a1[1322] && (a1 != MiSystemPartition || dword_1402FEA98) )
    return 1;
  return result;
}
