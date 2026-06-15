/*
 * XREFs of s_pbmReportHostedAppStateChange @ 0x1800286E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_pbmReportHostedAppStateChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  if ( (unsigned int)IsPbmReportHostedAppStateChangeSupported() )
    return PbmReportHostedAppStateChange(a1, a2, a3, a4);
  else
    return 0LL;
}
