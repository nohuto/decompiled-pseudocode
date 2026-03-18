/*
 * XREFs of SdbpReadTagData @ 0x1405069B4
 * Callers:
 *     SdbReadBinaryTag @ 0x1404954C0 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x1404EA9AC (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x140506948 (SdbReadWORDTag.c)
 *     SdbReadQWORDTag @ 0x140573C10 (SdbReadQWORDTag.c)
 *     SdbpReadStringRef @ 0x140573DFC (SdbpReadStringRef.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140500A7C (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x140503D74 (SdbGetTagDataSize.c)
 *     SdbpGetTagHeadSize @ 0x1405040C0 (SdbpGetTagHeadSize.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  unsigned int TagDataSize; // eax
  unsigned int v9; // ebx
  int TagHeadSize; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  unsigned int v13; // [rsp+28h] [rbp-10h]

  TagDataSize = SdbGetTagDataSize(a1, a2);
  v9 = TagDataSize;
  if ( TagDataSize > a4 )
  {
    v13 = TagDataSize;
    v12 = a4;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadTagData",
      331,
      (unsigned int)"Buffer too small. Avail: %d, Need: %d",
      v12,
      v13);
  }
  else
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, a2);
    if ( (unsigned int)SdbpReadMappedData(a1, a2 + TagHeadSize, a3, v9) )
      return 1LL;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadTagData", 338, (unsigned int)"Error reading tag data");
  }
  return 0LL;
}
