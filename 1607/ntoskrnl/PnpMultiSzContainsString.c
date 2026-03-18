/*
 * XREFs of PnpMultiSzContainsString @ 0x1401CF4C4
 * Callers:
 *     PiDevCfgAppendMultiSz @ 0x140632360 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637AD4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140638328 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063DFC8 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EBAC (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x14040F720 (RtlEqualUnicodeString.c)
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
