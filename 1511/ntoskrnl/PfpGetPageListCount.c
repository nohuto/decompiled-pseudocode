/*
 * XREFs of PfpGetPageListCount @ 0x1404D99F8
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x1404D78A0 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchFilesTrickle @ 0x1404D95B0 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404D9904 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpVolumePrefetchMetadata @ 0x1404DC308 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1404DC6A4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x1404EAEF0 (PfpPrefetchPrivatePages.c)
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
