/*
 * XREFs of SdbGetBinaryTagData @ 0x1406C4078
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x1406C3640 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     SdbpGetMappedTagData @ 0x140514168 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, unsigned int a2)
{
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, a2);
  SdbGetTagFromTagID(a1, a2);
  AslLogCallPrintf(1, (unsigned int)"SdbGetBinaryTagData", 820, (unsigned int)"TagID 0x%08X, Tag %04X not BINARY type");
  return 0LL;
}
