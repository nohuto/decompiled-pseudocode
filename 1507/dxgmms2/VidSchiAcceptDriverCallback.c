/*
 * XREFs of VidSchiAcceptDriverCallback @ 0x1C004497C
 * Callers:
 *     VidSchiWorkerThread @ 0x1C0044840 (VidSchiWorkerThread.c)
 *     VidSchRestartAdapter @ 0x1C0079260 (VidSchRestartAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcceptDriverCallback(__int64 a1)
{
  return DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 176LL), 3LL);
}
