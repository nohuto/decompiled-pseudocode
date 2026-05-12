/*
 * XREFs of RaUnitClearUnresponsiveAttribute @ 0x1C0034FB4
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0036890 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     WPP_SF_q @ 0x1C002AF28 (WPP_SF_q.c)
 *     Template_qcccjq @ 0x1C003909C (Template_qcccjq.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C003FD58 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitClearUnresponsiveAttribute(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 154) & 2) != 0 )
  {
    if ( (Microsoft_Windows_StorPortEnableBits & 0x100000000LL) != 0 )
      Template_qcccjq(
        *(_DWORD *)(a1 + 88) >> 8,
        (unsigned int)&EventUnitResponsive,
        a1 + 1688,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_DWORD *)(a1 + 88),
        BYTE1(*(_DWORD *)(a1 + 88)),
        BYTE2(*(_DWORD *)(a1 + 88)),
        a1 + 1688,
        4);
    StorpTelemetryMarkUnitResponsive(a1);
    *(_BYTE *)(a1 + 154) &= ~2u;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x36u,
        (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
        a1);
    }
  }
  return 0LL;
}
