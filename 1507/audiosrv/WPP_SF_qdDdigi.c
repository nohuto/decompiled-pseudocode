/*
 * XREFs of WPP_SF_qdDdigi @ 0x18009CFD8
 * Callers:
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B1CC (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B688 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdDdigi(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  va_list va; // [rsp+C8h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids, a2, (__int64 *)va);
}
