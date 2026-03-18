/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18004402C
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001C1E0 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800AAB2C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qqqq @ 0x180114140 (Template_qqqq.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameIndices(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char *v4; // rdi
  unsigned int i; // esi
  unsigned int j; // esi
  unsigned int k; // esi
  int v8; // ecx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v9; // rcx

  v2 = ((unsigned __int8)*((_DWORD *)this + 5478) + 1) & 0xF;
  if ( *((_DWORD *)this + 5481) == (_DWORD)v2 )
    *((_DWORD *)this + 5481) = -1;
  if ( *((_DWORD *)this + 5480) == (_DWORD)v2 )
    *((_DWORD *)this + 5480) = -1;
  v3 = *((unsigned int *)this + 5478);
  *((_DWORD *)this + 5478) = v2;
  v4 = (char *)this + 1352 * v2 + 280;
  *((_DWORD *)this + 5479) = v3;
  *((_QWORD *)this + 2741) = v4;
  *((_QWORD *)this + 2742) = (char *)this + 1352 * v3 + 280;
  memset_0(v4, 0, 0x4C0uLL);
  for ( i = 0; i < *((_DWORD *)v4 + 310); ++i )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)v4 + 152) + 8LL * i));
  *((_DWORD *)v4 + 310) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1216, 8LL);
  for ( j = 0; j < *((_DWORD *)v4 + 318); ++j )
  {
    v9 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v4 + 156) + 8LL * j);
    if ( v9 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v9);
  }
  *((_DWORD *)v4 + 318) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1248, 8LL);
  for ( k = 0; k < *((_DWORD *)v4 + 326); ++k )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v4 + 160) + 8LL * k));
  *((_DWORD *)v4 + 326) = 0;
  DynArrayImpl<0>::ShrinkToSize(v4 + 1280, 8LL);
  *(_BYTE *)(*((_QWORD *)this + 2741) + 1312LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 2741) + 1320LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 2741) + 1328LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 2741) + 1336LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 2741) + 1340LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 2741) + 1344LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqq(
      v8,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 5479),
      *((_DWORD *)this + 5478),
      *((_DWORD *)this + 5481),
      *((_DWORD *)this + 5480));
}
