/*
 * XREFs of ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800847FC
 * Callers:
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084D70 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180020C8C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180020CC0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x18004883C (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CRippleEffect@@AEAAJXZ @ 0x1800847A4 (-RegisterGlobalTimer@CRippleEffect@@AEAAJXZ.c)
 *     ?Stop@CRippleEffect@@QEAAJXZ @ 0x1800849DC (-Stop@CRippleEffect@@QEAAJXZ.c)
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
  __int64 v12; // rax
  bool v13; // zf
  char v14; // al
  _QWORD *v15; // rax
  int v16; // eax
  POINT v17; // rcx
  __int64 v18; // kr00_8
  int v19; // ebx
  int v20; // ebx

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
    v13 = (*(_DWORD *)(v12 + 8))-- == 1;
    v14 = CDesktopManager::s_fTimelineDirty;
    if ( v13 )
      v14 = 1;
    CDesktopManager::s_fTimelineDirty = v14;
  }
  v15 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    80LL);
  if ( v15 )
    v15 = CTimeline<float>::CTimeline<float>((__int64)v15, a3, 0.0, 1.0, 0);
  *((_QWORD *)this + 36) = v15;
  if ( !v15 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x75u);
LABEL_16:
    CRippleEffect::Stop(this);
    return (unsigned int)v5;
  }
  v16 = CRippleEffect::RegisterGlobalTimer(this);
  v5 = v16;
  if ( v16 >= 0 )
  {
    v17 = *a2;
    v18 = *((int *)this + 68);
    *((struct tagPOINT *)this + 33) = *a2;
    v19 = *((_DWORD *)this + 67);
    *((float *)this + 70) = a3;
    v20 = v19 - *((_DWORD *)this + 69) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 38), v17.x - v18 / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 38), v20);
    CVisual::SetOpacity(this, 1.0);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x77u);
  }
  if ( v5 < 0 )
    goto LABEL_16;
  return (unsigned int)v5;
}
