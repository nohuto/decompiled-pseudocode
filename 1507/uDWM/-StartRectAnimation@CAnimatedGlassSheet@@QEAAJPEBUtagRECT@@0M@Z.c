/*
 * XREFs of ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18007BD2C
 * Callers:
 *     ?UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z @ 0x18007BFE8 (-UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18007CC40 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800159C0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007B338 (-AdjustTargetRect@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007BBBC (-RegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18007BE6C (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StartRectAnimation(
        CAnimatedGlassSheet *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        float a4)
{
  __int64 v5; // rcx
  char v8; // al
  _QWORD *v9; // rax
  int v10; // ebx
  int v11; // eax

  v5 = *((_QWORD *)this + 57);
  if ( v5 )
  {
    v8 = CDesktopManager::s_fTimelineDirty;
    if ( !--*(_DWORD *)(v5 + 8) )
      v8 = 1;
    CDesktopManager::s_fTimelineDirty = v8;
  }
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v9 )
    v9 = CTimeline<float>::CTimeline<float>((__int64)v9, a4, 0.0, 1.0, 0);
  *((_QWORD *)this + 57) = v9;
  if ( !v9 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x123u);
LABEL_13:
    CAnimatedGlassSheet::StopAnimation(this);
    return (unsigned int)v10;
  }
  *(struct tagRECT *)((char *)this + 408) = *a2;
  *(struct tagRECT *)((char *)this + 424) = *a3;
  v11 = CAnimatedGlassSheet::RegisterGlobalTimer(this);
  v10 = v11;
  if ( v11 >= 0 )
    CAnimatedGlassSheet::AdjustTargetRect(this);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x128u);
  if ( v10 < 0 )
    goto LABEL_13;
  return (unsigned int)v10;
}
