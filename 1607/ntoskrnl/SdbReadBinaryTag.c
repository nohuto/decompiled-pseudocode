/*
 * XREFs of SdbReadBinaryTag @ 0x1404954C0
 * Callers:
 *     SdbGetDatabaseID @ 0x140495418 (SdbGetDatabaseID.c)
 *     SdbpGetExeEntryFlags @ 0x140573320 (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x1406C1DB8 (SdbReadEntryInformation.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C32EC (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x1406C3FB0 (SdbReadGUIDTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1405069B4 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v9; // [rsp+20h] [rbp-18h]
  int TagFromTagID; // [rsp+28h] [rbp-10h]

  if ( (((__int64 (*)(void))SdbGetTagFromTagID)() & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 795, (unsigned int)"Error reading buffer");
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, a2);
    v9 = a2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadBinaryTag",
      790,
      (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type",
      v9,
      TagFromTagID);
  }
  return 0LL;
}
