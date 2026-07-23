/*
 * XREFs of AslRegistryGetUInt32 @ 0x1406C57F0
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1405739D4 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     AslRegistryGetUInt32_UStr @ 0x1406C5860 (AslRegistryGetUInt32_UStr.c)
 *     AslLogCallPrintf @ 0x1406C593C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( inited >= 0 )
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &DestinationString);
  else
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetUInt32", 836, (unsigned int)"RtlInitUnicodeStringEx failed [%x]");
  return (unsigned int)inited;
}
