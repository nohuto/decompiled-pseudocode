/*
 * XREFs of ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x180113D18
 * Callers:
 *     ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x180113860 (--_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x1800A0B34 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A3238 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CDebugFrameCounter@@UEAA@XZ @ 0x180113C08 (--1CDebugFrameCounter@@UEAA@XZ.c)
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x180113DF0 (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x180117A38 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 *     ?ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ @ 0x18011894C (-ClearAllTelemetry@CTelemetryTracking@@AEAAXXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rcx
  CAnimationTracking *v3; // rcx

  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  v2 = *((_QWORD *)this + 20);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 20) = 0LL;
  }
  CloseHandle(*((HANDLE *)this + 14));
  CDebugFrameCounter::~CDebugFrameCounter((CPartitionVerticalBlankScheduler *)((char *)this + 25584));
  CTelemetryTracking::ClearAllTelemetry((CPartitionVerticalBlankScheduler *)((char *)this + 24760));
  CTelemetryTouchLatencyAnalysis::~CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 22872));
  while ( 1 )
  {
    v3 = (CPartitionVerticalBlankScheduler *)((char *)this + 22288);
    if ( !*((_DWORD *)this + 5578) )
      break;
    CAnimationTracking::DeleteScenario(v3, 0);
  }
  *((_DWORD *)this + 5578) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v3, 8u);
  CAnimationTracking::ClearAllLongtermScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 22288));
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 22288);
  `vector destructor iterator'((char *)this + 280, 1352LL, 16LL, (void (__fastcall *)(char *))CFrameInfo::~CFrameInfo);
  *(_QWORD *)this = &CPartitionScheduler::`vftable';
}
