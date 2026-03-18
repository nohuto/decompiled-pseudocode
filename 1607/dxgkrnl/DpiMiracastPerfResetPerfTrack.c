/*
 * XREFs of DpiMiracastPerfResetPerfTrack @ 0x1C0031038
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000BA90 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastChunkInfoCallbackDpc @ 0x1C002B1A0 (DpiMiracastChunkInfoCallbackDpc.c)
 *     DxgkHandleMiracastDrtEscape @ 0x1C002D184 (DxgkHandleMiracastDrtEscape.c)
 *     DpiMiracastPerfChunkReportViolation @ 0x1C00303F0 (DpiMiracastPerfChunkReportViolation.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 */

void *__fastcall DpiMiracastPerfResetPerfTrack(__int64 a1)
{
  void *result; // rax

  if ( *(_BYTE *)(a1 + 601) )
  {
    *(_BYTE *)(a1 + 810) = 0;
    *(_BYTE *)(a1 + 811) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 810) = 1;
    *(_BYTE *)(a1 + 811) = 0;
  }
  result = memset((void *)(a1 + 812), 0, 0x24uLL);
  *(_DWORD *)(a1 + 1032) = 0;
  *(_DWORD *)(a1 + 1036) = 0;
  *(_QWORD *)(a1 + 1048) = 0LL;
  return result;
}
