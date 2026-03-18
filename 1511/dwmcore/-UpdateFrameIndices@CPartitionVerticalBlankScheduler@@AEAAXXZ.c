/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008DADC
 * Callers:
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180002798 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     Template_qqqq @ 0x1801002AC (Template_qqqq.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameIndices(CPartitionVerticalBlankScheduler *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  char *v4; // r15
  CMILCOMBase *v5; // rcx
  unsigned int i; // r12d
  unsigned int j; // ebx
  unsigned int k; // ebx
  int v9; // ecx
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v10; // rcx

  v2 = ((unsigned __int8)*((_DWORD *)this + 5572) + 1) & 0xF;
  if ( *((_DWORD *)this + 5575) == (_DWORD)v2 )
    *((_DWORD *)this + 5575) = -1;
  if ( *((_DWORD *)this + 5574) == (_DWORD)v2 )
    *((_DWORD *)this + 5574) = -1;
  v3 = *((unsigned int *)this + 5572);
  *((_DWORD *)this + 5572) = v2;
  v4 = (char *)this + 1376 * v2 + 272;
  *((_DWORD *)this + 5573) = v3;
  *((_QWORD *)this + 2788) = v4;
  *((_QWORD *)this + 2789) = (char *)this + 1376 * v3 + 272;
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
    v10 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)v4 + 156) + 8LL * j);
    if ( v10 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v10);
  }
  *((_DWORD *)v4 + 318) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)v4 + 156, 8u);
  for ( k = 0; k < *((_DWORD *)v4 + 326); ++k )
    CResponseItem::ReleaseResponseRef(*(CResponseItem **)(*((_QWORD *)v4 + 160) + 8LL * k));
  *((_DWORD *)v4 + 326) = 0;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)v4 + 160, 8u);
  *(_BYTE *)(*((_QWORD *)this + 2788) + 1336LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 2788) + 1344LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)this + 2788) + 1352LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 2788) + 1360LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 2788) + 1364LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 2788) + 1368LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    Template_qqqq(
      v9,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 5573),
      *((_DWORD *)this + 5572),
      *((_DWORD *)this + 5575),
      *((_DWORD *)this + 5574));
}
