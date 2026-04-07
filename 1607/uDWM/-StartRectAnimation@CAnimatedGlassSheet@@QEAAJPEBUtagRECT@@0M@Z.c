/*
 * XREFs of ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x180083ECC
 * Callers:
 *     ?UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z @ 0x18008415C (-UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084D70 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ @ 0x180083514 (-AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x180083D70 (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x180083FE8 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StartRectAnimation(
        CAnimatedGlassSheet *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        float a4)
{
  __int64 v4; // rax
  bool v8; // zf
  char v9; // al
  _QWORD *v10; // rax
  int v11; // ebx
  int v12; // eax

  v4 = *((_QWORD *)this + 57);
  if ( v4 )
  {
    v8 = (*(_DWORD *)(v4 + 8))-- == 1;
    v9 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v9 = 1;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  v10 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    80LL);
  if ( v10 )
    v10 = CTimeline<float>::CTimeline<float>((__int64)v10, a4, 0.0, 1.0, 0);
  *((_QWORD *)this + 57) = v10;
  if ( !v10 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x123u);
LABEL_13:
    CAnimatedGlassSheet::StopAnimation(this);
    return (unsigned int)v11;
  }
  *(struct tagRECT *)((char *)this + 408) = *a2;
  *(struct tagRECT *)((char *)this + 424) = *a3;
  v12 = CAnimatedGlassSheet::RegisterGlobalTimer(this);
  v11 = v12;
  if ( v12 >= 0 )
    CAnimatedGlassSheet::AdjustTargetRect(this);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x128u);
  if ( v11 < 0 )
    goto LABEL_13;
  return (unsigned int)v11;
}
