/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x1C0017468
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C003A870 (VidSchiCheckNodeTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C008A8AC (VidSchiPrepareToResetEngine.c)
 *     VidSchReportAdapter @ 0x1C008B910 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C008BD20 (VidSchReportDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 376) + 8LL);
}
