/*
 * XREFs of SdbpReadTagData @ 0x140577A6C
 * Callers:
 *     SdbReadBinaryTag @ 0x1405745EC (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1405778E0 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x140577A00 (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x1405ABBA4 (SdbpReadStringRef.c)
 *     SdbReadQWORDTag @ 0x1405C6BBC (SdbReadQWORDTag.c)
 * Callees:
 *     SdbpGetTagHeadSize @ 0x140577D4C (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140577E14 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x140577F28 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize > a4 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 331, (unsigned int)"Buffer too small. Avail: %d, Need: %d");
  }
  else
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, v6);
    if ( (unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 338, (unsigned int)"Error reading tag data");
  }
  return 0LL;
}
