/*
 * XREFs of RaUnitSetUnresponsiveAttribute @ 0x1C0035EF4
 * Callers:
 *     RaUnitUnresponsiveAttributeMgmt @ 0x1C0036890 (RaUnitUnresponsiveAttributeMgmt.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0027CB0 (RaidAdapterResetBus.c)
 *     WPP_SF_q @ 0x1C002AF28 (WPP_SF_q.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C0037D48 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     Template_qcccjq @ 0x1C003909C (Template_qcccjq.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C003FEC0 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaUnitSetUnresponsiveAttribute(__int64 a1)
{
  unsigned int v2; // ebx

  if ( (*(_BYTE *)(a1 + 154) & 2) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 88);
    if ( (int)Microsoft_Windows_StorPortEnableBits < 0 )
      Template_qcccjq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitUnresponsive,
        HIWORD(v2),
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        v2,
        SBYTE1(v2),
        SBYTE2(v2),
        a1 + 1688,
        5);
    *(_BYTE *)(a1 + 154) |= 2u;
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x37u,
        (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
        a1);
    }
    if ( *(_DWORD *)(a1 + 476) && !(unsigned __int8)RaidUnitQueueHierarchicalResetWorkItem(a1) )
      RaidAdapterResetBus(*(_QWORD *)(a1 + 24), v2);
  }
  return 0LL;
}
