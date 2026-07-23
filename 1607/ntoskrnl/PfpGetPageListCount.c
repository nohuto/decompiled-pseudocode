/*
 * XREFs of PfpGetPageListCount @ 0x14042AAD8
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x1403E8FC4 (PfSnCheckActionsNeeded.c)
 *     PfpVolumePrefetchMetadata @ 0x1403EE924 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1403EECA0 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x14042A684 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042A9D8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPrefetchPrivatePages @ 0x14053392C (PfpPrefetchPrivatePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpGetPageListCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  while ( a2 <= a3 )
    result += *(_QWORD *)(a1 + 8LL * a2++);
  return result;
}
