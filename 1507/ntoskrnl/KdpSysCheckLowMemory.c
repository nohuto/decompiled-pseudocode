/*
 * XREFs of KdpSysCheckLowMemory @ 0x14072C7E8
 * Callers:
 *     KdSystemDebugControl @ 0x140697CC4 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x14072BD94 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
