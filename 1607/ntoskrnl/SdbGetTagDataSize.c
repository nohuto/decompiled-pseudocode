/*
 * XREFs of SdbGetTagDataSize @ 0x140503D74
 * Callers:
 *     SdbpGetIndex @ 0x140484AD4 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140484D14 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextTagId @ 0x140503E20 (SdbpGetNextTagId.c)
 *     SdbpReadTagData @ 0x1405069B4 (SdbpReadTagData.c)
 *     SdbpGetNextIndexedRecord @ 0x140573E58 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x140652B08 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1406C19DC (SdbQueryDataExTagID.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C32EC (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1406C3508 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbpReadMappedData @ 0x140500A7C (SdbpReadMappedData.c)
 *     SdbGetTagFromTagID @ 0x140501250 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, unsigned int a2)
{
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = SdbGetTagFromTagID(a1, a2) & 0xF000;
  switch ( v4 )
  {
    case 12288:
      result = 2LL;
      break;
    case 16384:
    case 24576:
      result = 4LL;
      break;
    case 20480:
      result = 8LL;
      break;
    case 4096:
      result = 0LL;
      break;
    case 8192:
      result = 1LL;
      break;
    default:
      v6 = 0;
      if ( !(unsigned int)SdbpReadMappedData(a1, a2 + 2, &v6, 4u) )
        AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 257, (unsigned int)"Error reading size data");
      result = v6;
      break;
  }
  if ( (unsigned int)result + a2 < (unsigned int)result || (unsigned int)result + a2 > *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 268, (unsigned int)"Error reading size data");
    return 0xFFFFFFFFLL;
  }
  return result;
}
