/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180007ED8
 * Callers:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000357C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@_N@Z @ 0x180007C68 (--$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000A73C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000A8F0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000BD94 (--1CAnimationComponent@@UEAA@XZ.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@_N@Z @ 0x180007C68 (--$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180007D28 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18000B8BC (-OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800108B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18001E1F4 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x1800302A4 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800313BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032060 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180033010 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     Template_p @ 0x18007E3B8 (Template_p.c)
 */

void __fastcall CTransitionVisualController::RestoreWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v6; // rax
  int v7; // ebx
  int v8; // r15d
  struct CTopLevelWindow *v9; // rbx
  CWindowList *v10; // rcx
  unsigned int v11; // edx
  char v12; // bp
  unsigned int v13; // ecx
  __int64 v14; // rax
  unsigned int Clone; // eax
  char v16; // dl
  __int64 v17; // rcx
  CTransitionVisualController *v18; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 3) )
  {
    v6 = *((_QWORD *)a2 + 48);
    if ( v6 )
      *(_BYTE *)(v6 + 264) &= ~0x80u;
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    v7 = CWindowList::SyncWindowData(
           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
           *((struct IDwmWindow **)a2 + 3),
           a2);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v7 >= 0 )
    {
      v8 = *((_DWORD *)a2 + 144);
      *((_DWORD *)a2 + 144) = v8 & 0xFFEFFFFF;
      v9 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 48);
      if ( v9 && (*((_BYTE *)v9 + 265) & 1) != 0 )
      {
        v11 = *((_DWORD *)this + 34);
        v12 = 1;
        v13 = 0;
        if ( v11 )
        {
          while ( 1 )
          {
            v14 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v13);
            if ( *(_QWORD *)(v14 + 16) == *((_QWORD *)a2 + 5) && *(_DWORD *)(*(_QWORD *)(v14 + 128) + 24LL) == 3 )
              break;
            if ( ++v13 >= v11 )
              goto LABEL_15;
          }
          v12 = 0;
        }
LABEL_15:
        Clone = CTransitionVisualController::_FindClone(this, a2, 1);
        v16 = v12;
        if ( Clone < *((_DWORD *)this + 12) )
          v16 = 0;
        if ( v16 )
        {
          CTransitionVisualController::_MoveWindowOffscreen(v9, 0);
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            Template_p(v17, &UdwmSystemAnimation_MoveOffscreen_Stop, *((_QWORD *)a2 + 5));
        }
      }
      CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167), a2, 0);
      CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167), a2, 0);
      CWindowList::OnSizeChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167), a2);
      CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
      CWindowList::OnContentBoundsChange(v10, a2);
      *((_DWORD *)a2 + 144) = v8;
    }
    if ( a3 )
    {
      v18 = this;
      CTransitionVisualController::ForEachOwnedWindow<_lambda_49101be3cc2274a1c9941772b9f9e2bf_>((__int64)a2, &v18, 1);
    }
  }
}
