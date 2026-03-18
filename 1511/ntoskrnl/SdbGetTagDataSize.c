/*
 * XREFs of SdbGetTagDataSize @ 0x14043FBFC
 * Callers:
 *     SdbpReadTagData @ 0x1403B65CC (SdbpReadTagData.c)
 *     SdbpGetIndex @ 0x1403B7618 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x1403B7910 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextTagId @ 0x14043FCA8 (SdbpGetNextTagId.c)
 *     SdbpGetNextIndexedRecord @ 0x1405360E4 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x14061D890 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x14067D158 (SdbQueryDataExTagID.c)
 *     SdbpGetMatchingTextAttributes @ 0x14067E794 (SdbpGetMatchingTextAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x14067E9B0 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     SdbGetTagFromTagID @ 0x14043EEBC (SdbGetTagFromTagID.c)
 *     SdbpReadMappedData @ 0x14043EFA8 (SdbpReadMappedData.c)
 *     AslLogCallPrintf @ 0x14051B0D0 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetTagDataSize(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // eax
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
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
      if ( !(unsigned int)SdbpReadMappedData(a1, v2 + 2, &v6, 4u) )
        AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 257, (unsigned int)"Error reading size data");
      result = v6;
      break;
  }
  if ( (int)result + v2 < (unsigned int)result || (unsigned int)(result + v2) > *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbGetTagDataSize", 268, (unsigned int)"Error reading size data");
    return 0xFFFFFFFFLL;
  }
  return result;
}
