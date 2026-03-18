/*
 * XREFs of PnpMultiSzContainsString @ 0x14012C0F0
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140510680 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgAppendMultiSz @ 0x1406076CC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14060A6AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableExpression @ 0x14060AB00 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 */

PCWSTR __fastcall PnpMultiSzContainsString(PCWSTR SourceString, const WCHAR *a2)
{
  __int64 v3; // rdi
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  while ( *SourceString )
  {
    RtlInitUnicodeString(&String2, SourceString);
    if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
      return SourceString;
    SourceString += ((unsigned __int64)String2.Length >> 1) + 1;
  }
  return (PCWSTR)v3;
}
