/*
 * XREFs of KdpSysWriteMsr @ 0x1401FE978
 * Callers:
 *     KdSystemDebugControl @ 0x140697CC4 (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysWriteMsr(unsigned int a1, unsigned __int64 *a2)
{
  __writemsr(a1, *a2);
  return 0LL;
}
