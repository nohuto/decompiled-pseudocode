/*
 * XREFs of KdpSysReadMsr @ 0x1401D1A1C
 * Callers:
 *     KdSystemDebugControl @ 0x14064E93C (KdSystemDebugControl.c)
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdpSysReadMsr(unsigned int a1, _QWORD *a2)
{
  *a2 = __readmsr(a1);
  return 0LL;
}
