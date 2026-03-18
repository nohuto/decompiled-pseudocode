/*
 * XREFs of DpiMiracastPerfResetPerfTrack @ 0x1C0029CC0
 * Callers:
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000B700 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DpiMiracastChunkInfoCallbackDpc @ 0x1C0023CE0 (DpiMiracastChunkInfoCallbackDpc.c)
 *     DxgkHandleMiracastDrtEscape @ 0x1C00260D0 (DxgkHandleMiracastDrtEscape.c)
 *     sub_1C0029020 @ 0x1C0029020 (sub_1C0029020.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiMiracastPerfResetPerfTrack(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 473) )
  {
    *(_BYTE *)(a1 + 722) = 0;
    *(_BYTE *)(a1 + 723) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 722) = 1;
    *(_BYTE *)(a1 + 723) = 0;
  }
  result = 0LL;
  *(_QWORD *)(a1 + 724) = 0LL;
  *(_DWORD *)(a1 + 732) = 0;
  *(_QWORD *)(a1 + 736) = 0LL;
  *(_DWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 748) = 0LL;
  *(_DWORD *)(a1 + 756) = 0;
  *(_QWORD *)(a1 + 944) = 0LL;
  *(_QWORD *)(a1 + 960) = 0LL;
  return result;
}
