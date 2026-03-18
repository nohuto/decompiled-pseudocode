/*
 * XREFs of ?AccessTimeOutReset@@YAXXZ @ 0x1C01357CC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0134E24 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 */

void AccessTimeOutReset(void)
{
  if ( gtmridAccessTimeOut )
    FindTimer(0LL, gtmridAccessTimeOut, 4u, 1, 0LL);
  if ( (qword_1C03238F4 & 1) != 0 )
    gtmridAccessTimeOut = SetRITTimer(0, SHIDWORD(qword_1C03238F4), (int)xxxAccessTimeOutTimer, 1);
}
