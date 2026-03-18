/*
 * XREFs of PopSqmFanEnumeration @ 0x140676808
 * Callers:
 *     PopFanAdd @ 0x140672F64 (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x1407BD198 (PopFanReportBootStartDevices.c)
 * Callees:
 *     _TlgWrite @ 0x14000A598 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140088D98 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      TlgWrite(&pCallbackContext, &unk_14027D51D, 0LL, 0LL, 2u, &pData);
  }
}
