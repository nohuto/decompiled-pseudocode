/*
 * XREFs of ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x180083644
 * Callers:
 *     ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x1800839CC (-UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x18001AC50 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800835EC (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18008389C (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StartAlphaAnimation(CAnimatedGlassSheet *this, float a2, float a3, float a4)
{
  __int64 v5; // rcx
  char v6; // al
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  int v9; // eax

  v5 = *((_QWORD *)this + 59);
  if ( v5 )
  {
    v6 = CDesktopManager::s_fTimelineDirty;
    if ( !--*(_DWORD *)(v5 + 8) )
      v6 = 1;
    CDesktopManager::s_fTimelineDirty = v6;
  }
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v7 )
    v7 = CTimeline<float>::CTimeline<float>((__int64)v7, a4, a2, a3, 0);
  *((_QWORD *)this + 59) = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x148u);
LABEL_11:
    CAnimatedGlassSheet::StopAnimation(this);
    return v8;
  }
  *((float *)this + 116) = a2;
  *((float *)this + 117) = a3;
  v9 = CAnimatedGlassSheet::RegisterGlobalTimer(this);
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x14Du);
    goto LABEL_11;
  }
  return v8;
}
