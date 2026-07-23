/*
 * XREFs of SdbpGetIndex @ 0x140513E5C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140513CD0 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1406C50E8 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbGetTagDataSize @ 0x1404E6D04 (SdbGetTagDataSize.c)
 *     SdbpGetMappedTagData @ 0x140514168 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, unsigned int a2, unsigned int *a3)
{
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, a2) / 0xC;
    return SdbpGetMappedTagData(a1, a2);
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetIndex",
      1078,
      (unsigned int)"Index tagid 0x%lx is not referring to the index bits");
    return 0LL;
  }
}
