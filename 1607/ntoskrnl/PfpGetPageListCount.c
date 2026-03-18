/*
 * XREFs of PfpGetPageListCount @ 0x14042BC08
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x1403E7994 (PfSnCheckActionsNeeded.c)
 *     PfpVolumePrefetchMetadata @ 0x1403ED2F4 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1403ED670 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFilesTrickle @ 0x14042B7B4 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042BB08 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPrefetchPrivatePages @ 0x1405333EC (PfpPrefetchPrivatePages.c)
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
