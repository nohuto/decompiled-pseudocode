/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x180069158
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180090CF0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x1800FCA40 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180002798 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x1800691FC (-Reset@COutOfFrameDirectFlipStats@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  __int64 i; // r15
  __int64 j; // rbx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v4; // rcx

  COutOfFrameDirectFlipStats::Reset((CFrameInfo *)((char *)this + 1312));
  memset_0(this, 0, 0x4C0uLL);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 310); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)this + 152) + 8 * i));
  *((_DWORD *)this + 310) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1216, 8LL);
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 318); j = (unsigned int)(j + 1) )
  {
    v4 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 156) + 8 * j);
    if ( v4 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v4);
  }
  *((_DWORD *)this + 318) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1248, 8LL);
  CFrameInfo::ReleaseResponses(this);
}
