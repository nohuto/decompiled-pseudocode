/*
 * XREFs of PnpMultiSzContainsString @ 0x1401CF258
 * Callers:
 *     PiDevCfgAppendMultiSz @ 0x140632414 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063E0AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EC90 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
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
