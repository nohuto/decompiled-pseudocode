/*
 * XREFs of SdbpReadTagData @ 0x1404E9944
 * Callers:
 *     SdbReadBinaryTag @ 0x140495F50 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404CCBB0 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x1404E98D8 (SdbReadWORDTag.c)
 *     SdbReadQWORDTag @ 0x140574150 (SdbReadQWORDTag.c)
 *     SdbpReadStringRef @ 0x14057433C (SdbpReadStringRef.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1404E3A0C (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x1404E6D04 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1404E7050 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize > a4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 331, (unsigned int)"Buffer too small. Avail: %d, Need: %d");
  }
  else
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, a2);
    if ( (unsigned int)SdbpReadMappedData(a1, a2 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 338, (unsigned int)"Error reading tag data");
  }
  return 0LL;
}
