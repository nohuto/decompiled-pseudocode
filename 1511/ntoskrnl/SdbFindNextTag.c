/*
 * XREFs of SdbFindNextTag @ 0x1403B6644
 * Callers:
 *     SdbpScanIndexes @ 0x1403B6308 (SdbpScanIndexes.c)
 *     KsepDbGetDriverShims @ 0x1403B70C8 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x1404FA314 (KsepDbCacheReadDevice.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     SdbGetNextChild @ 0x140441C58 (SdbGetNextChild.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbFindNextTag(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int v6; // ebx
  __int16 TagFromTagID; // r14
  unsigned int NextChild; // eax

  v4 = a3;
  v6 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, a3);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v4);
      v4 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild) == TagFromTagID )
        return v4;
    }
    return v6;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbFindNextTag", 94, (unsigned int)"Invalid tagid 0x%lx");
    return 0LL;
  }
}
