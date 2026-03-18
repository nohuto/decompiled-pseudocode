/*
 * XREFs of SdbpGetTagHeadSize @ 0x1405040C0
 * Callers:
 *     SdbpGetMappedTagData @ 0x140484DE0 (SdbpGetMappedTagData.c)
 *     SdbpGetNextTagId @ 0x140503E20 (SdbpGetNextTagId.c)
 *     SdbpReadTagData @ 0x1405069B4 (SdbpReadTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140500A7C (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int16 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = 2;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v4, 2u) )
  {
    if ( (v4 & 0xF000u) >= 0x7000 )
      return 6;
    return v2;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpGetTagHeadSize", 73, (unsigned int)"Error reading tag");
    return 0LL;
  }
}
