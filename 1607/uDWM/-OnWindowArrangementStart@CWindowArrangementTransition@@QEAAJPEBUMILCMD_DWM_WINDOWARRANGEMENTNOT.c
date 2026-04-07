/*
 * XREFs of ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084D70
 * Callers:
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800815A4 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800303B4 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x180083ECC (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 *     ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x180084110 (-UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800847FC (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x180084B20 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 *     ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x180085014 (-ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementStart(
        struct CAnimatedGlassSheet **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v4; // ebx
  struct CWindowData *WindowDataByHwnd; // rax
  CWindowArrangementTransition *v6; // rcx
  struct CWindowData *v7; // r14
  struct CVisual *RootVisualForDesktop; // r15
  int v9; // eax
  struct CVisual *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  int inserted; // eax
  struct CAnimatedGlassSheet *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  const struct tagRECT *v19; // r8
  int v20; // ecx
  const struct tagRECT *v21; // rdx
  CDesktopManager *v22; // rax
  CAnimatedGlassSheet *v23; // rcx
  int started; // eax
  int updated; // eax
  CRippleEffect *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  _BYTE v32[16]; // [rsp+80h] [rbp+80h] BYREF

  v4 = 0;
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                       *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                       *((HWND *)a2 + 1));
  *((_BYTE *)this + 24) = 0;
  v7 = WindowDataByHwnd;
  if ( WindowDataByHwnd && CWindowArrangementTransition::ShouldShowTransition(v6, WindowDataByHwnd) )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                             *((_QWORD *)v7 + 15));
    v9 = CWindowArrangementTransition::EnsureAnimationObjects(this);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x67u);
      return v4;
    }
    v10 = *this;
    if ( *this
      && (v11 = *((_QWORD *)v10 + 3)) != 0
      && (v12 = VisualCollection::Remove((VisualCollection *)(v11 + 32), v10), v4 = v12, v12 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x70u);
    }
    else
    {
      inserted = VisualCollection::InsertRelative(
                   (struct CVisual *)((char *)RootVisualForDesktop + 32),
                   *this,
                   *((struct CVisual **)v7 + 48),
                   0,
                   1);
      v4 = inserted;
      if ( inserted >= 0 )
      {
        v14 = this[1];
        if ( v14 )
        {
          v15 = *((_QWORD *)v14 + 3);
          if ( v15 )
          {
            v16 = VisualCollection::Remove((VisualCollection *)(v15 + 32), v14);
            v4 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x78u);
              return v4;
            }
          }
          v17 = VisualCollection::InsertRelative(
                  (struct CVisual *)((char *)RootVisualForDesktop + 32),
                  this[1],
                  *((struct CVisual **)v7 + 48),
                  1,
                  1);
          v4 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x7Au);
            return v4;
          }
        }
        v18 = *((_DWORD *)a2 + 9);
        v19 = (const struct tagRECT *)((char *)a2 + 16);
        v20 = *((_DWORD *)a2 + 8);
        v21 = (const struct tagRECT *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL);
        *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v18;
        *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v18;
        v22 = CDesktopManager::s_pDesktopManagerInstance;
        *(_DWORD *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) = v20;
        *(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v20;
        v23 = *this;
        if ( *((_BYTE *)v22 + 21) )
        {
          started = CAnimatedGlassSheet::StartRectAnimation(v23, v21, v19, 0.2);
          v4 = started;
          if ( started < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x83u);
            return v4;
          }
          updated = CAnimatedGlassSheet::UpdateAlphaAnimation(*this, 1.0, 0.1);
          v4 = updated;
          if ( updated < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x84u);
            return v4;
          }
          v26 = this[1];
          if ( v26 )
          {
            v27 = CRippleEffect::Start(v26, (const struct tagPOINT *)a2 + 4, 0.2);
            v4 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x87u);
              return v4;
            }
          }
        }
        else
        {
          v28 = CAnimatedGlassSheet::StartRectAnimation(v23, v21, v19, 0.000001);
          v4 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x92u);
            return v4;
          }
          v29 = CAnimatedGlassSheet::UpdateAlphaAnimation(*this, 1.0, 0.000001);
          v4 = v29;
          if ( v29 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x93u);
            return v4;
          }
        }
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          TemplateEventDescriptor((__int64)v26, (__int64)&UdwmGlassSheetAnimation_Start);
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            TemplateEventDescriptor(v30, (__int64)&UdwmRippleAnimation_Start);
        }
        this[2] = (struct CAnimatedGlassSheet *)*((_QWORD *)a2 + 1);
        *((_BYTE *)this + 24) = 1;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x72u);
      }
    }
  }
  return v4;
}
