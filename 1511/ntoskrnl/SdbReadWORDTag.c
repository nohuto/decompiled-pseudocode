/*
 * XREFs of SdbReadWORDTag @ 0x1403B6560
 * Callers:
 *     SdbpScanIndexes @ 0x1403B6308 (SdbpScanIndexes.c)
 *     SdbpCheckForMatch @ 0x140535248 (SdbpCheckForMatch.c)
 * Callees:
 *     SdbpReadTagData @ 0x1403B65CC (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    v6 = SdbpReadTagData(a1, v4, &v9, 2LL);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadWORDTag",
      122,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
