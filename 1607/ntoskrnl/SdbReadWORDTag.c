/*
 * XREFs of SdbReadWORDTag @ 0x1404E98D8
 * Callers:
 *     SdbpScanIndexes @ 0x1404E899C (SdbpScanIndexes.c)
 *     SdbpCheckForMatch @ 0x140573768 (SdbpCheckForMatch.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1404E9944 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  int v6; // eax
  unsigned __int16 v7; // cx
  unsigned __int16 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    v6 = SdbpReadTagData(a1, a2, &v9, 2LL);
    v7 = v9;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadWORDTag",
      122,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type");
    return a3;
  }
}
