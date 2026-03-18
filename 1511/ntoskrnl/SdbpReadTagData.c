/*
 * XREFs of SdbpReadTagData @ 0x1403B65CC
 * Callers:
 *     SdbReadBinaryTag @ 0x1403B618C (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1403B62A0 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x1403B6560 (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x140536088 (SdbpReadStringRef.c)
 *     SdbReadQWORDTag @ 0x14054ED94 (SdbReadQWORDTag.c)
 * Callees:
 *     SdbpReadMappedData @ 0x14043EFA8 (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x14043FBFC (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x140440D88 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  TagDataSize = SdbGetTagDataSize();
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
