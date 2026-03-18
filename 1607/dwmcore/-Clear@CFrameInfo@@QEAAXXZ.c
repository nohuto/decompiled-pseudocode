/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800B3854
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180047008 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAJXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180111AC0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001C1E0 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  __int64 i; // rdi
  __int64 j; // rdi
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v4; // rcx

  memset_0(this, 0, 0x4C0uLL);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 310); i = (unsigned int)(i + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)this + 152) + 8 * i));
  *((_DWORD *)this + 310) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1216, 8u);
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 318); j = (unsigned int)(j + 1) )
  {
    v4 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 156) + 8 * j);
    if ( v4 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v4);
  }
  *((_DWORD *)this + 318) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1248, 8u);
  CFrameInfo::ReleaseResponses(this);
}
