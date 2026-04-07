/*
 * XREFs of ?OnTransitionWindow@CAppArrangementDelayed@@UEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800046A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z @ 0x18000D8A4 (-ProcessSnapshotOnVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x18008FB04 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 *     ?GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z @ 0x18009A2BC (-GetDesktopThumbnail@CDesktopThumbnail@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAppArrangementDelayed::OnTransitionWindow(struct CStoryboard *a1, __int64 a2, int a3)
{
  int v6; // eax
  CBaseObject *v7; // rbx
  const struct tagRECT *v8; // rsi
  __int64 v9; // rcx
  int DesktopThumbnail; // eax
  struct CVisual *v11; // [rsp+40h] [rbp-18h] BYREF
  CBaseObject *v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  if ( (a3 & 0x20000000) != 0 && (a3 & 0xFFFu) - 38 <= 1 )
  {
    v6 = CTransitionVisualController::CreateDesktopAnimationComponent(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
           (struct CWindowData *)a2,
           2,
           (const struct tagRECT *)(a2 + 580),
           1,
           1,
           a1,
           &v12);
    if ( v6 >= 0 )
    {
      v8 = (const struct tagRECT *)(a2 + 596);
      v7 = v12;
      CAnimatedTransitionVisual::SetBeginRect(*((CAnimatedTransitionVisual **)v12 + 5), v8);
      v9 = *((_QWORD *)v7 + 5);
      *(struct tagRECT *)(v9 + 856) = *v8;
      CVisual::SetDirtyFlags((CVisual *)(v9 + 8), 0x1000u);
      DesktopThumbnail = CDesktopThumbnail::GetDesktopThumbnail(&v11);
      if ( DesktopThumbnail >= 0 )
      {
        CAnimatedTransitionVisual::ProcessSnapshotOnVisual(*((CAnimatedTransitionVisual **)v7 + 5), v11, v8);
        *((_QWORD *)a1 + 23) = v7;
        _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
        v7 = v12;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, DesktopThumbnail, 0x106Au);
      }
      if ( v11 )
        CBaseObject::Release(v11);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v6, 0x1067u);
      v7 = v12;
    }
    if ( v7 )
      CBaseObject::Release(v7);
  }
  return 0LL;
}
