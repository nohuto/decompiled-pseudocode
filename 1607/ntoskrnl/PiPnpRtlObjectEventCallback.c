/*
 * XREFs of PiPnpRtlObjectEventCallback @ 0x1404E8304
 * Callers:
 *     <none>
 * Callees:
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 */

void __fastcall PiPnpRtlObjectEventCallback(__int64 a1, wchar_t *a2, int a3, int a4, __int64 a5)
{
  PiPnpRtlObjectEventWorker(a2, a3, a4, a5, 0);
}
