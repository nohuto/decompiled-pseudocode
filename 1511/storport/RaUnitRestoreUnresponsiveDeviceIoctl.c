/*
 * XREFs of RaUnitRestoreUnresponsiveDeviceIoctl @ 0x1C0032754
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C00044D0 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     WPP_SF_q @ 0x1C002786C (WPP_SF_q.c)
 *     Template_qcccjq @ 0x1C0035FCC (Template_qcccjq.c)
 *     StorpTelemetryMarkUnitResponsive @ 0x1C003A2B8 (StorpTelemetryMarkUnitResponsive.c)
 */

__int64 __fastcall RaUnitRestoreUnresponsiveDeviceIoctl(__int64 a1, IRP *a2)
{
  if ( (*(_BYTE *)(a1 + 146) & 2) != 0 )
  {
    if ( (BYTE4(WPP_MAIN_CB.Dpc.DpcData) & 1) != 0 )
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
    *(_BYTE *)(a1 + 146) &= ~2u;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x36u,
      (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
      a1);
  }
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, 0);
}
