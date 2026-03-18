/*
 * XREFs of SdbGetBinaryTagData @ 0x14067EDD8
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x14067E9B0 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x1403B79DC (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
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
