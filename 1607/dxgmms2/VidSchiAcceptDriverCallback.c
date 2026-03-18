/*
 * XREFs of VidSchiAcceptDriverCallback @ 0x1C006AF40
 * Callers:
 *     VidSchiWorkerThread @ 0x1C006ABB0 (VidSchiWorkerThread.c)
 *     VidSchRestartAdapter @ 0x1C00A1840 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcceptDriverCallback(__int64 a1)
{
  return DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL), 3LL);
}
