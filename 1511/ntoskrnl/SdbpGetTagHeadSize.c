/*
 * XREFs of SdbpGetTagHeadSize @ 0x140440D88
 * Callers:
 *     SdbpReadTagData @ 0x1403B65CC (SdbpReadTagData.c)
 *     SdbpGetMappedTagData @ 0x1403B79DC (SdbpGetMappedTagData.c)
 *     SdbpGetNextTagId @ 0x14043FCA8 (SdbpGetNextTagId.c)
 * Callees:
 *     SdbpReadMappedData @ 0x14043EFA8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
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
