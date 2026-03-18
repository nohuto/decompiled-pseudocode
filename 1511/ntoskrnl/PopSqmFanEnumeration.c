/*
 * XREFs of PopSqmFanEnumeration @ 0x14063E094
 * Callers:
 *     PopFanAdd @ 0x14063BBD8 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x14076620C (PopFanReportBootStartDevices.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      TlgWrite(&pCallbackContext, &unk_140254F48, 0LL, 0LL, 2u, &pData);
  }
}
