/*
 * XREFs of DpiMiracastPerfResetPerfTrack @ 0x1C002A058
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000A590 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastChunkInfoCallbackDpc @ 0x1C00241B0 (DpiMiracastChunkInfoCallbackDpc.c)
 *     DxgkHandleMiracastDrtEscape @ 0x1C0026580 (DxgkHandleMiracastDrtEscape.c)
 *     DpiMiracastPerfChunkReportViolation @ 0x1C00293C0 (DpiMiracastPerfChunkReportViolation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiMiracastPerfResetPerfTrack(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 464) )
  {
    *(_BYTE *)(a1 + 714) = 0;
    *(_BYTE *)(a1 + 715) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 714) = 1;
    *(_BYTE *)(a1 + 715) = 0;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 716) = 0LL;
  *(_DWORD *)(a1 + 724) = 0;
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_DWORD *)(a1 + 736) = 0;
  *(_QWORD *)(a1 + 740) = 0LL;
  *(_DWORD *)(a1 + 748) = 0;
  *(_QWORD *)(a1 + 936) = 0LL;
  *(_QWORD *)(a1 + 952) = 0LL;
  return result;
}
