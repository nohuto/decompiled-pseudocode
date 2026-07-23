/*
 * XREFs of SdbReadBinaryTag @ 0x140495F50
 * Callers:
 *     SdbGetDatabaseID @ 0x140495EA8 (SdbGetDatabaseID.c)
 *     SdbpGetExeEntryFlags @ 0x140573860 (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x1406C1EF0 (SdbReadEntryInformation.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C3424 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x1406C40E8 (SdbReadGUIDTag.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1404E9944 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  if ( (((__int64 (*)(void))SdbGetTagFromTagID)() & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 795, (unsigned int)"Error reading buffer");
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(1, (unsigned int)"SdbReadBinaryTag", 790, (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type");
  }
  return 0LL;
}
