/*
 * XREFs of SdbGetBinaryTagData @ 0x140703C2C
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x140703804 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x140577948 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x140577EF8 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, v2);
  SdbGetTagFromTagID(a1, v2);
  AslLogCallPrintf(1LL);
  return 0LL;
}
