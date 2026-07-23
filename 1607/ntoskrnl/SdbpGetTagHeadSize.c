/*
 * XREFs of SdbpGetTagHeadSize @ 0x1404E7050
 * Callers:
 *     SdbpGetNextTagId @ 0x1404E6DB0 (SdbpGetNextTagId.c)
 *     SdbpReadTagData @ 0x1404E9944 (SdbpReadTagData.c)
 *     SdbpGetMappedTagData @ 0x140514168 (SdbpGetMappedTagData.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1404E3A0C (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
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
