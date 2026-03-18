/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800653F4
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x180061F8C (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x1800E1984 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     Template_qqqq @ 0x1800E1FC0 (Template_qqqq.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameIndices(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char *v4; // r15
  CMILCOMBase *v5; // rcx
  unsigned int i; // r12d
  unsigned int v7; // edx
  unsigned int j; // ebx
  unsigned int k; // ebx
  int v10; // ecx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v11; // rcx

  v2 = ((unsigned __int8)*((_DWORD *)this + 5570) + 1) & 0xF;
  if ( *((_DWORD *)this + 5573) == (_DWORD)v2 )
    *((_DWORD *)this + 5573) = -1;
  if ( *((_DWORD *)this + 5572) == (_DWORD)v2 )
    *((_DWORD *)this + 5572) = -1;
  v3 = *((unsigned int *)this + 5570);
  *((_DWORD *)this + 5570) = v2;
  v4 = (char *)this + 1376 * v2 + 264;
  *((_DWORD *)this + 5571) = v3;
  *((_QWORD *)this + 2787) = v4;
  *((_QWORD *)this + 2788) = (char *)this + 1376 * v3 + 264;
  v5 = (CMILCOMBase *)*((_QWORD *)v4 + 164);
  if ( v5 )
  {
    CMILCOMBase::InternalRelease(v5);
    *((_QWORD *)v4 + 164) = 0LL;
  }
  *((_QWORD *)v4 + 165) = 0LL;
  *((_DWORD *)v4 + 332) = 0;
  memset_0(v4, 0, 0x4C0uLL);
  for ( i = 0; i < *((_DWORD *)v4 + 310); ++i )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *(_QWORD *)(*((_QWORD *)v4 + 152) + 8LL * i));
  *((_DWORD *)v4 + 310) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)v4 + 152, 8u);
  for ( j = 0; j < *((_DWORD *)v4 + 318); ++j )
  {
    v11 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v4 + 156) + 8LL * j);
    if ( v11 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v11, v7);
  }
  *((_DWORD *)v4 + 318) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)v4 + 156, 8u);
  for ( k = 0; k < *((_DWORD *)v4 + 326); ++k )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v4 + 160) + 8LL * k));
  *((_DWORD *)v4 + 326) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)v4 + 160, 8u);
  *(_BYTE *)(*((_QWORD *)this + 2787) + 1336LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 2787) + 1344LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 2787) + 1352LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 2787) + 1360LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 2787) + 1364LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 2787) + 1368LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqq(
      v10,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 5571),
      *((_DWORD *)this + 5570),
      *((_DWORD *)this + 5573),
      *((_DWORD *)this + 5572));
}
