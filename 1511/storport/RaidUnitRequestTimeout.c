/*
 * XREFs of RaidUnitRequestTimeout @ 0x1C0034BF4
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0006610 (RaidUnitPendingDpcRoutine.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0033E60 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C002492C (RaidAdapterResetBus.c)
 *     WPP_SF_ @ 0x1C00277A8 (WPP_SF_.c)
 *     WPP_SF_ddd @ 0x1C0027818 (WPP_SF_ddd.c)
 *     WPP_SF_q @ 0x1C002786C (WPP_SF_q.c)
 *     RaidUnitUnresponsiveDeviceMarkingNeeded @ 0x1C0035D98 (RaidUnitUnresponsiveDeviceMarkingNeeded.c)
 *     Template_qcccjq @ 0x1C0035FCC (Template_qcccjq.c)
 *     StorpTelemetryMarkUnitUnresponsive @ 0x1C003A420 (StorpTelemetryMarkUnitUnresponsive.c)
 */

__int64 __fastcall RaidUnitRequestTimeout(__int64 a1)
{
  int v1; // ebx
  PDEVICE_OBJECT v3; // r10
  __int64 v4; // rax
  PDEVICE_OBJECT v5; // rcx
  __int64 result; // rax
  int v7; // r8d
  struct _IO_WORKITEM *WorkItem; // rbx
  unsigned int v9; // eax
  __int64 v10; // [rsp+20h] [rbp-68h]
  int v11; // [rsp+20h] [rbp-68h]
  __int64 v12; // [rsp+28h] [rbp-60h]
  int v13; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  v3 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Eu,
        (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids);
      v3 = WPP_GLOBAL_Control;
    }
    if ( v3 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v3->Timer) & 8) != 0 && BYTE1(v3->Timer) >= 3u )
    {
      v13 = BYTE2(v1);
      v11 = BYTE1(v1);
      WPP_SF_ddd(
        (__int64)v3->AttachedDevice,
        0x3Fu,
        (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
        (unsigned __int8)v1,
        v11,
        v13);
    }
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && *(char *)(v4 + 108) < 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1760));
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 24) + 5416LL));
  }
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 1816));
  if ( *(_DWORD *)(a1 + 1004) )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        LODWORD(v12) = BYTE2(v1);
        LODWORD(v10) = BYTE1(v1);
        WPP_SF_ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x40u,
          (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
          (unsigned __int8)v1,
          v10,
          v12);
        v5 = WPP_GLOBAL_Control;
      }
      if ( v5 != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && (HIDWORD(v5->Timer) & 8) != 0 && BYTE1(v5->Timer) >= 2u )
        WPP_SF_((__int64)v5->AttachedDevice, 0x41u, (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids);
    }
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  }
  if ( (unsigned __int8)RaidUnitUnresponsiveDeviceMarkingNeeded(a1) )
  {
    StorpTelemetryMarkUnitUnresponsive(a1, 0LL);
    *(_BYTE *)(a1 + 146) |= 2u;
    if ( SLODWORD(WPP_MAIN_CB.Dpc.DpcData) < 0 )
      Template_qcccjq(
        *(_QWORD *)(a1 + 24),
        (unsigned int)&EventUnitUnresponsive,
        v7,
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
        0x42u,
        (__int64)&WPP_1d8d08be2a000b079c42763d1a0090f2_Traceguids,
        a1);
    }
  }
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
  if ( !WorkItem )
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 648));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1504), &LockHandle);
  v9 = *(_DWORD *)(a1 + 1000);
  *(_QWORD *)(a1 + 1480) = WorkItem;
  if ( v9 < 0x1E )
    v9 = 30;
  *(_DWORD *)(a1 + 1492) = 0;
  *(_DWORD *)(a1 + 1488) = 4 * v9 + 42;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  IoQueueWorkItem(WorkItem, (PIO_WORKITEM_ROUTINE)RaidHierarchicalResetWorkRoutine, CriticalWorkQueue, WorkItem);
  result = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(result + 4780);
  return result;
}
