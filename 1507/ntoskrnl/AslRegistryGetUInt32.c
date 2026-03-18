/*
 * XREFs of AslRegistryGetUInt32 @ 0x140705420
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1405C5120 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     AslLogCallPrintf @ 0x1405AB1C4 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x140705490 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( inited >= 0 )
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &DestinationString);
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)inited;
}
