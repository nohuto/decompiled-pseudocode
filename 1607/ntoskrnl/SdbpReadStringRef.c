/*
 * XREFs of SdbpReadStringRef @ 0x14057433C
 * Callers:
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbpReadTagData @ 0x1404E9944 (SdbpReadTagData.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, unsigned int a2)
{
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, a2, &v5, 4u) )
      return v5;
    AslLogCallPrintf(1, (unsigned int)"SdbpReadStringRef", 522, (unsigned int)"Error reading data");
  }
  else
  {
    SdbGetTagFromTagID(a1, a2);
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpReadStringRef",
      517,
      (unsigned int)"TagID 0x%08X, Tag %04X not STRINGREF type");
  }
  return 0LL;
}
