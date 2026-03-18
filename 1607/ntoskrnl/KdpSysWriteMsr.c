/*
 * XREFs of KdpSysWriteMsr @ 0x1401D1CCC
 * Callers:
 *     KdSystemDebugControl @ 0x14064E858 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x1406F2AAC (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
