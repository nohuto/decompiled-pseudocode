/*
 * XREFs of RaidUnitRequestTimeout @ 0x1C0037E64
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C00094B0 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C0027CB0 (RaidAdapterResetBus.c)
 *     WPP_SF_ @ 0x1C002AE28 (WPP_SF_.c)
 *     WPP_SF_ddd @ 0x1C002AED4 (WPP_SF_ddd.c)
 *     WPP_SF_q @ 0x1C002AF28 (WPP_SF_q.c)
 *     RaidUnitQueueHierarchicalResetWorkItem @ 0x1C0037D48 (RaidUnitQueueHierarchicalResetWorkItem.c)
 *     RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C0038DE8 (RaidUnitUnresponsiveDeviceMarkingNeeded.c)
 *     Template_qcccjq @ 0x1C003909C (Template_qcccjq.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C003FEC0 (StorpTelemetryMarkUnitUnresponsive.c)
 */

char __fastcall RaidUnitRequestTimeout(__int64 a1)
{
  int v1; // ebx
  PDEVICE_OBJECT v3; // r10
  __int64 v4; // rax
  PDEVICE_OBJECT v5; // rcx
  int v6; // r8d
  char result; // al
  __int64 v8; // [rsp+20h] [rbp-48h]
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+28h] [rbp-40h]
  int v11; // [rsp+28h] [rbp-40h]

  v1 = *(_DWORD *)(a1 + 88);
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x43u,
        (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids);
      v3 = WPP_GLOBAL_Control;
    }
    if ( v3 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v3->Timer) & 8) != 0 && BYTE1(v3->Timer) >= 3u )
    {
      v11 = BYTE2(v1);
      v9 = BYTE1(v1);
      WPP_SF_ddd(
        (__int64)v3->AttachedDevice,
        0x44u,
        (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
        (unsigned __int8)v1,
        v9,
        v11);
    }
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && *(char *)(v4 + 108) < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1768));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5416LL));
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 1824));
  if ( *(_DWORD *)(a1 + 1004) )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        LODWORD(v10) = BYTE2(v1);
        LODWORD(v8) = BYTE1(v1);
        WPP_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x45u,
          (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
          (unsigned __int8)v1,
          v8,
          v10);
        v5 = WPP_GLOBAL_Control;
      }
      if ( v5 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v5->Timer) & 8) != 0 && BYTE1(v5->Timer) >= 2u )
        WPP_SF_((__int64)v5->AttachedDevice, 0x46u, (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids);
    }
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  }
  if ( (unsigned __int8)RaidUnitUnresponsiveDeviceMarkingNeeded(a1) )
  {
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    *(_BYTE *)(a1 + 154) |= 2u;
    if ( (int)Microsoft_Windows_StorPortEnableBits < 0 )
      Template_qcccjq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitUnresponsive,
        v6,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        v1,
        SBYTE1(v1),
        SBYTE2(v1),
        a1 + 1688,
        2);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x47u,
        (__int64)&WPP_a0aaf6c2955e31bbd69faa467326e0b4_Traceguids,
        a1);
    }
  }
  result = RaidUnitQueueHierarchicalResetWorkItem(a1);
  if ( !result )
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  return result;
}
