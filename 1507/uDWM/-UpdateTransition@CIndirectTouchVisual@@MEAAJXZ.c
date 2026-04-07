/*
 * XREFs of ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x18008FEA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800159C0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x18008F730 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x18008FD10 (-StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x18008FD4C (-StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x18008FD88 (-StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x18008FDD0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x18008FE5C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::UpdateTransition(CIndirectTouchVisual *this)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax

  v2 = *((_QWORD *)this + 42);
  if ( v2 )
  {
    v3 = (int)((float)*(double *)(v2 + 48) + 0.5);
    if ( v3 >= 0xF )
      v3 = 14;
    *((_DWORD *)this + 82) = v3;
    if ( *(_BYTE *)(v2 + 72) )
      CIndirectTouchVisual::StopFrameTimeline(this);
  }
  v4 = *((_QWORD *)this + 44);
  if ( v4 )
  {
    *((float *)this + 81) = *(double *)(v4 + 48);
    if ( *(_BYTE *)(v4 + 72) )
      CIndirectTouchVisual::StopOpacityTimeline(this);
  }
  v5 = *((_QWORD *)this + 43);
  if ( v5 && *(_BYTE *)(v5 + 72) )
  {
    if ( *((float *)this + 80) == 0.0 )
      goto LABEL_15;
    v6 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                     WPF::g_pProcessHeap,
                     80LL);
    if ( v6 )
      v6 = CTimeline<float>::CTimeline<float>(
             (__int64)v6,
             (float)(*((float *)this + 78) * *((float *)this + 80)),
             *((float *)this + 81),
             0.0,
             0);
    *((_QWORD *)this + 44) = v6;
    if ( !v6 )
LABEL_15:
      *((_DWORD *)this + 81) = 0;
    CIndirectTouchVisual::StopTimeoutTimeline(this);
  }
  CIndirectTouchVisual::UpdateOpacityAndSource((CImage **)this);
  if ( !*((_QWORD *)this + 42) && !*((_QWORD *)this + 44) && !*((_QWORD *)this + 43) )
  {
    CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
    CIndirectTouchVisual::StopTimer(this);
  }
  return 0LL;
}
