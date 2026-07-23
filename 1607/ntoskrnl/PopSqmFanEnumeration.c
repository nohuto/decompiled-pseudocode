/*
 * XREFs of PopSqmFanEnumeration @ 0x1406768EC
 * Callers:
 *     PopFanAdd @ 0x140673048 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x1407BD198 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x400000000000uLL) )
      TlgWrite(&hProvider, &unk_14027D61D, 0LL, 0LL, 2u, &pData);
  }
}
