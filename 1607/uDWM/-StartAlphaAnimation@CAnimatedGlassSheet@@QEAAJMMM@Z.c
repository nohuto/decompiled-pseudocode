/*
 * XREFs of ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x180083DC8
 * Callers:
 *     ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x180084110 (-UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x180083D70 (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x180083FE8 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StartAlphaAnimation(CAnimatedGlassSheet *this, float a2, float a3, float a4)
{
  __int64 v5; // rax
  bool v6; // zf
  char v7; // al
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  int v10; // eax

  v5 = *((_QWORD *)this + 59);
  if ( v5 )
  {
    v6 = (*(_DWORD *)(v5 + 8))-- == 1;
    v7 = CDesktopManager::s_fTimelineDirty;
    if ( v6 )
      v7 = 1;
    CDesktopManager::s_fTimelineDirty = v7;
  }
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v8 )
    v8 = CTimeline<float>::CTimeline<float>((__int64)v8, a4, a2, a3, 0);
  *((_QWORD *)this + 59) = v8;
  if ( !v8 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x148u);
LABEL_11:
    CAnimatedGlassSheet::StopAnimation(this);
    return v9;
  }
  *((float *)this + 116) = a2;
  *((float *)this + 117) = a3;
  v10 = CAnimatedGlassSheet::RegisterGlobalTimer(this);
  v9 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x14Du);
    goto LABEL_11;
  }
  return v9;
}
