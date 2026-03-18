/*
 * XREFs of KdpSysCheckLowMemory @ 0x1406AC788
 * Callers:
 *     KdSystemDebugControl @ 0x1406196A8 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x1406ABDDC (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x1406ABD4C (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
