/*
 * XREFs of SdbReadWORDTag @ 0x140506948
 * Callers:
 *     SdbpScanIndexes @ 0x140505A0C (SdbpScanIndexes.c)
 *     SdbpCheckForMatch @ 0x140573228 (SdbpCheckForMatch.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1405069B4 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, unsigned int a2, unsigned __int16 a3)
{
  int v6; // eax
  unsigned __int16 v7; // cx
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  unsigned __int16 v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = a3;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x3000 )
  {
    v6 = SdbpReadTagData(a1, a2, &v10, 2LL);
    v7 = v10;
    if ( !v6 )
      return a3;
    return v7;
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbReadWORDTag",
      122,
      (unsigned int)"TagID 0x%X, Tag 0x%X not of the expected type",
      a2,
      TagFromTagID);
    return a3;
  }
}
