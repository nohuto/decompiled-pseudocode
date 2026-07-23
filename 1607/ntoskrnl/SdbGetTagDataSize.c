/*
 * XREFs of SdbGetTagDataSize @ 0x1404E6D04
 * Callers:
 *     SdbpGetNextTagId @ 0x1404E6DB0 (SdbpGetNextTagId.c)
 *     SdbpReadTagData @ 0x1404E9944 (SdbpReadTagData.c)
 *     SdbpGetIndex @ 0x140513E5C (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14051409C (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x140574398 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x140652BEC (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x1406C1B14 (SdbQueryDataExTagID.c)
 *     SdbpGetMatchingTextAttributes @ 0x1406C3424 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x1406C3640 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbpReadMappedData @ 0x1404E3A0C (SdbpReadMappedData.c)
 *     SdbGetTagFromTagID @ 0x1404E41E0 (SdbGetTagFromTagID.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
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
