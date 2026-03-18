/*
 * XREFs of MiPageCombiningActive @ 0x1400E5B18
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140012694 (MiSignalLargePageRebuild.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_14034EF04 != 0;
  if ( *(_DWORD *)(a1 + 4928) && ((__int16 *)a1 != MiSystemPartition || dword_14034EF58) )
    return 1;
  return result;
}
