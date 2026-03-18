/*
 * XREFs of SdbpGetIndex @ 0x140484AD4
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140484948 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C4FB0 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x140484DE0 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x140503D74 (SdbGetTagDataSize.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, unsigned int a2, unsigned int *a3)
{
  int v7; // [rsp+20h] [rbp-18h]

  if ( (unsigned __int16)SdbGetTagFromTagID() == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, a2) / 0xC;
    return SdbpGetMappedTagData(a1, a2);
  }
  else
  {
    v7 = a2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetIndex",
      1078,
      (unsigned int)"Index tagid 0x%lx is not referring to the index bits",
      v7);
    return 0LL;
  }
}
