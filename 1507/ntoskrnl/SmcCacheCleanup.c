/*
 * XREFs of SmcCacheCleanup @ 0x1406DAEB8
 * Callers:
 *     SmcProcessCreateRequest @ 0x1406DA5E4 (SmcProcessCreateRequest.c)
 *     SmcCacheDelete @ 0x1406DAF34 (SmcCacheDelete.c)
 * Callees:
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     SmStoreDelete @ 0x1406DA214 (SmStoreDelete.c)
 *     SmKmFileInfoCleanup @ 0x1406DC94C (SmKmFileInfoCleanup.c)
 *     SmKmStoreFileDelete @ 0x1406DDE04 (SmKmStoreFileDelete.c)
 */

void __fastcall SmcCacheCleanup(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi

  v2 = a1 + 168;
  v3 = 16LL;
  do
  {
    if ( *(_DWORD *)v2 != -1 )
    {
      SmStoreDelete(*(_DWORD *)(v2 + 4) & 3, *(_DWORD *)v2);
      ExFreePoolEx(*(PPRIVILEGE_SET *)(v2 + 8));
    }
    v2 += 24LL;
    --v3;
  }
  while ( v3 );
  if ( *(_QWORD *)(a1 + 40) && *(_QWORD *)(a1 + 48) )
    SmKmStoreFileDelete(a1 + 40);
  SmKmFileInfoCleanup(a1 + 40);
  StEtaCleanup(a1 + 104);
}
