/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C009320C
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0092870 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    FindTimer(0, gtmridAccessTimeOut, 4, 1, 0LL);
  if ( (qword_1C0326EF4 & 1) != 0 )
    gtmridAccessTimeOut = SetRITTimer(0LL, HIDWORD(qword_1C0326EF4), (__int64)xxxAccessTimeOutTimer, 1);
}
