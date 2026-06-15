/*
 * XREFs of WPP_SF_qdDdigi @ 0x180099E44
 * Callers:
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180045B00 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18004609C (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdDdigi(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+C8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_b190cc602318435bf1a291092083f9b6_Traceguids, a2, (__int64 *)va);
}
