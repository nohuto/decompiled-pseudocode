/*
 * XREFs of ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800840F0
 * Callers:
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084670 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x18001AC50 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023E90 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023EDC (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180047650 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RegisterGlobalTimer@CRippleEffect@@AEAAJXZ @ 0x180084098 (-RegisterGlobalTimer@CRippleEffect@@AEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800842D8 (-Stop@CRippleEffect@@QEAAJXZ.c)
 */

__int64 __fastcall CRippleEffect::Start(CRippleEffect *this, const struct tagPOINT *a2, float a3)
{
  int v5; // edi
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  struct tagSIZE *v11; // rcx
  __int64 v12; // rcx
  char v13; // al
  _QWORD *v14; // rax
  int v15; // eax
  POINT v16; // rcx
  __int64 v17; // kr00_8
  int v18; // ebx
  int v19; // ebx

  if ( !a2 )
  {
    v5 = -2147467261;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147467261, 0x67u);
    goto LABEL_16;
  }
  v6 = CDesktopManager::MonitorDpiFromPoint(*a2);
  v7 = *(_QWORD *)(*((_QWORD *)this + 39) + 24LL);
  *((_QWORD *)this + 34) = v7;
  v8 = MulDiv(v7, v6, 96);
  v9 = *((_DWORD *)this + 69);
  *((_DWORD *)this + 68) = v8;
  v10 = MulDiv(v9, v6, 96);
  v11 = (struct tagSIZE *)*((_QWORD *)this + 38);
  *((_DWORD *)this + 69) = v10;
  CVisual::SetSize(v11, (const struct tagSIZE *)this + 34);
  v12 = *((_QWORD *)this + 36);
  if ( v12 )
  {
    v13 = CDesktopManager::s_fTimelineDirty;
    if ( !--*(_DWORD *)(v12 + 8) )
      v13 = 1;
    CDesktopManager::s_fTimelineDirty = v13;
  }
  v14 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    80LL);
  if ( v14 )
    v14 = CTimeline<float>::CTimeline<float>((__int64)v14, a3, 0.0, 1.0, 0);
  *((_QWORD *)this + 36) = v14;
  if ( !v14 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x75u);
LABEL_16:
    CRippleEffect::Stop(this);
    return (unsigned int)v5;
  }
  v15 = CRippleEffect::RegisterGlobalTimer(this);
  v5 = v15;
  if ( v15 >= 0 )
  {
    v16 = *a2;
    v17 = *((int *)this + 68);
    *((struct tagPOINT *)this + 33) = *a2;
    v18 = *((_DWORD *)this + 67);
    *((float *)this + 70) = a3;
    v19 = v18 - *((_DWORD *)this + 69) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 38), v16.x - v17 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 38), v19);
    CVisual::SetOpacity(this, 1.0);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x77u);
  }
  if ( v5 < 0 )
    goto LABEL_16;
  return (unsigned int)v5;
}
