/*
 * XREFs of SdbpReadStringRef @ 0x140573DFC
 * Callers:
 *     SdbGetStringTagPtr @ 0x140573D10 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1405069B4 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+20h] [rbp-18h]
  int TagFromTagID; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, &v7, 4u) )
      return v7;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadStringRef", 522, (unsigned int)"Error reading data");
  }
  else
  {
    TagFromTagID = (unsigned __int16)SdbGetTagFromTagID(a1, a2);
    v5 = a2;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadStringRef",
      517,
      (unsigned int)"TagID 0x%08X, Tag %04X not STRINGREF type",
      v5,
      TagFromTagID);
  }
  return 0LL;
}
