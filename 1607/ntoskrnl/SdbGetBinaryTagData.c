/*
 * XREFs of SdbGetBinaryTagData @ 0x1406C3F40
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x1406C3508 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x140484DE0 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+20h] [rbp-18h]
  int TagFromTagID; // [rsp+28h] [rbp-10h]

  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, a2);
  TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, a2);
  v5 = a2;
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbGetBinaryTagData",
    820,
    (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type",
    v5,
    TagFromTagID);
  return 0LL;
}
