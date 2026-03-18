/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C00F5208
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00F4860 (xxxUpdatePerUserAccessPackSettings.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    FindTimer(0, gtmridAccessTimeOut, 4, 1, 0LL);
  if ( (qword_1C032228C & 1) != 0 )
    gtmridAccessTimeOut = SetRITTimer(0LL, HIDWORD(qword_1C032228C), (__int64)xxxAccessTimeOutTimer, 1);
}
