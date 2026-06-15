/*
 * XREFs of WPP_SF_qdDdigi @ 0x180082694
 * Callers:
 *     ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180034C10 (-ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 *     ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180035130 (-ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qdDdigi(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  va_list va1; // [rsp+D0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return EtwTraceMessage(a1, 43LL, &WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, a2, (__int64 *)va, 8LL, va1);
}
