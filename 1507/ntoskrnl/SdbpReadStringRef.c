/*
 * XREFs of SdbpReadStringRef @ 0x1405ABBA4
 * Callers:
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpReadTagData @ 0x140577A6C (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140577EF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadStringRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x6000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v2, (__int64)&v5, 4u) )
      return v5;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v2);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
