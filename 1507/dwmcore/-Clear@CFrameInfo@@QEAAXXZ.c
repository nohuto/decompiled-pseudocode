/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x18005EBFC
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180067C24 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Reset@COutOfFrameDirectFlipStats@@QEAAXXZ @ 0x18005ECA0 (-Reset@COutOfFrameDirectFlipStats@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x1800E1984 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  __int64 i; // r15
  unsigned int v3; // edx
  __int64 j; // rbx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v5; // rcx

  COutOfFrameDirectFlipStats::Reset((CFrameInfo *)((char *)this + 1312));
  memset_0(this, 0, 0x4C0uLL);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 310); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)this + 152) + 8 * i));
  *((_DWORD *)this + 310) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 152, 8u);
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 318); j = (unsigned int)(j + 1) )
  {
    v5 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 156) + 8 * j);
    if ( v5 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v5, v3);
  }
  *((_DWORD *)this + 318) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 156, 8u);
  CFrameInfo::ReleaseResponses(this);
}
