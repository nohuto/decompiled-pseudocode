/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x1C0015114
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0043DE0 (VidSchiCheckNodeTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00A0078 (VidSchiPrepareToResetEngine.c)
 *     VidSchReportAdapter @ 0x1C00A12B0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00A16C0 (VidSchReportDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 408) + 8LL);
}
