/*
 * XREFs of AslRegistryGetUInt32 @ 0x1406C56B8
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x140573494 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     AslRegistryGetUInt32_UStr @ 0x1406C5728 (AslRegistryGetUInt32_UStr.c)
 *     AslLogCallPrintf @ 0x1406C5804 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // eax
  unsigned int v6; // ebx
  NTSTATUS v8; // [rsp+20h] [rbp-28h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  v6 = inited;
  if ( inited >= 0 )
  {
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &DestinationString);
  }
  else
  {
    v8 = inited;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryGetUInt32",
      836,
      (unsigned int)"RtlInitUnicodeStringEx failed [%x]",
      v8);
  }
  return v6;
}
