/*
 * XREFs of SdbReadBinaryTag @ 0x1403B618C
 * Callers:
 *     SdbGetDatabaseID @ 0x1403B61F8 (SdbGetDatabaseID.c)
 *     SdbpGetExeEntryFlags @ 0x14054D86C (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x14067D534 (SdbReadEntryInformation.c)
 *     SdbpGetMatchingTextAttributes @ 0x14067E794 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x14067EE48 (SdbReadGUIDTag.c)
 * Callees:
 *     SdbpReadTagData @ 0x1403B65CC (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
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
