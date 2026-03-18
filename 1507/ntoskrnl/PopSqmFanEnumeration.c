/*
 * XREFs of PopSqmFanEnumeration @ 0x1406BE998
 * Callers:
 *     PopFanAdd @ 0x1406BAFCC (PopFanAdd.c)
 *     PopFanReportBootStartDevices @ 0x1407E5C5C (PopFanReportBootStartDevices.c)
 * Callees:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void PopSqmFanEnumeration()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
      TlgWrite(&pCallbackContext, &unk_1402A4E52, 0LL, 0LL, 2u, &pData);
  }
}
