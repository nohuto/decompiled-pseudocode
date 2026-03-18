/*
 * XREFs of VidSchiSchedulerNodeToDriverNode @ 0x1C0008DA4
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0032C30 (VidSchiCheckNodeTimeout.c)
 *     VidSchiPrepareToResetEngine @ 0x1C0076B80 (VidSchiPrepareToResetEngine.c)
 *     VidSchReportAdapter @ 0x1C0078CD0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00790E0 (VidSchReportDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverNode(__int64 a1, unsigned int a2)
{
  return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a2 + 368) + 8LL);
}
