/*
 * XREFs of ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x1800E16A8
 * Callers:
 *     ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x1800E0F58 (--_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x180051E24 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180064798 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CDebugFrameCounter@@UEAA@XZ @ 0x1800E154C (--1CDebugFrameCounter@@UEAA@XZ.c)
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800E177C (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x1800E62EC (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rsi
  CAnimationTracking *v3; // rcx

  v1 = *((_QWORD *)this + 18);
  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 18) = 0LL;
  }
  CDebugFrameCounter::~CDebugFrameCounter((CPartitionVerticalBlankScheduler *)((char *)this + 25288));
  CTelemetryTouchLatencyAnalysis::~CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 23240));
  while ( 1 )
  {
    v3 = (CPartitionVerticalBlankScheduler *)((char *)this + 22656);
    if ( !*((_DWORD *)this + 5670) )
      break;
    CAnimationTracking::DeleteScenario(v3, 0);
  }
  *((_DWORD *)this + 5670) = 0;
  DynArrayImpl<0>::ShrinkToSize(v3, 8u);
  CAnimationTracking::ClearAllLongtermScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 22656));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2832);
  `vector destructor iterator'((char *)this + 264, 1376LL, 16, (void (__fastcall *)(char *))CFrameInfo::~CFrameInfo);
  *(_QWORD *)this = &CPartitionScheduler::`vftable';
}
