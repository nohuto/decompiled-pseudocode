/*
 * XREFs of SdbReadBinaryTag @ 0x1405745EC
 * Callers:
 *     SdbGetDatabaseID @ 0x14057727C (SdbGetDatabaseID.c)
 *     SdbpGetExeEntryFlags @ 0x1405C4FAC (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x1407023A0 (SdbReadEntryInformation.c)
 *     SdbpGetMatchingTextAttributes @ 0x1407035E8 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x140703C9C (SdbReadGUIDTag.c)
 * Callees:
 *     SdbpReadTagData @ 0x140577A6C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140577EF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
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
