/*
 * XREFs of ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x1800FFDB8
 * Callers:
 *     ??_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z @ 0x1800FF678 (--_GCPartitionVerticalBlankScheduler@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180029694 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ??_I@YAXPEAX_KHP6AX0@Z@Z @ 0x180068428 (--_I@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??1CDebugFrameCounter@@UEAA@XZ @ 0x1800FFC5C (--1CDebugFrameCounter@@UEAA@XZ.c)
 *     ??1CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800FFE8C (--1CTelemetryTouchLatencyAnalysis@@QEAA@XZ.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x180102490 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::~CPartitionVerticalBlankScheduler(
        CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rsi
  CAnimationTracking *v3; // rcx

  v1 = *((_QWORD *)this + 19);
  *(_QWORD *)this = &CPartitionVerticalBlankScheduler::`vftable';
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 19) = 0LL;
  }
  CDebugFrameCounter::~CDebugFrameCounter((CPartitionVerticalBlankScheduler *)((char *)this + 25416));
  CTelemetryTouchLatencyAnalysis::~CTelemetryTouchLatencyAnalysis((CPartitionVerticalBlankScheduler *)((char *)this + 23248));
  while ( 1 )
  {
    v3 = (CPartitionVerticalBlankScheduler *)((char *)this + 22664);
    if ( !*((_DWORD *)this + 5672) )
      break;
    CAnimationTracking::DeleteScenario(v3, 0);
  }
  *((_DWORD *)this + 5672) = 0;
  DynArrayImpl<0>::ShrinkToSize(v3, 8u);
  CAnimationTracking::ClearAllLongtermScenarios((CPartitionVerticalBlankScheduler *)((char *)this + 22664));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 2833);
  `vector destructor iterator'((char *)this + 272, 1376LL, 16, (void (__fastcall *)(void *))CFrameInfo::~CFrameInfo);
  *(_QWORD *)this = &CPartitionScheduler::`vftable';
}
