/*
 * XREFs of SdbpGetTagHeadSize @ 0x140577D4C
 * Callers:
 *     SdbpGetMappedTagData @ 0x140577948 (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x140577A6C (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x140577D90 (SdbpGetNextTagId.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140577F28 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int16 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = 2;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v4, 2LL) )
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
