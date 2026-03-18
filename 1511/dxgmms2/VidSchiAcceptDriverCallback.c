/*
 * XREFs of VidSchiAcceptDriverCallback @ 0x1C006AAFC
 * Callers:
 *     VidSchiWorkerThread @ 0x1C006A780 (VidSchiWorkerThread.c)
 *     VidSchRestartAdapter @ 0x1C008BEA0 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcceptDriverCallback(__int64 a1)
{
  return DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 176LL), 3LL);
}
