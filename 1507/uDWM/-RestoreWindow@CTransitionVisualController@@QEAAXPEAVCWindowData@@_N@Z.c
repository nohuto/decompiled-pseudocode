/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C9C4
 * Callers:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180009A0C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000EB04 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000ECAC (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ??$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@_N@Z @ 0x1800101A0 (--$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x1800106CC (--1CAnimationComponent@@UEAA@XZ.c)
 * Callees:
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000EE18 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@_N@Z @ 0x1800101A0 (--$ForEachOwnedWindow@V_lambda_49101be3cc2274a1c9941772b9f9e2bf_@@@CTransitionVisualController@@.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180010C30 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x180018974 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18002CF94 (-OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18002D238 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002EED0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180030510 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     Template_p @ 0x1800764B8 (Template_p.c)
 */

void __fastcall CTransitionVisualController::RestoreWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        char a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // r8
  int v9; // r15d
  struct CTopLevelWindow *v10; // rbx
  CWindowList *v11; // rcx
  unsigned int v12; // edx
  char v13; // bp
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int Clone; // eax
  char v17; // dl
  __int64 v18; // rcx
  CTransitionVisualController *v19; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_QWORD *)a2 + 3) )
  {
    v6 = *((_QWORD *)a2 + 46);
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
      v9 = *((_DWORD *)a2 + 142);
      *((_DWORD *)a2 + 142) = v9 & 0xFFEFFFFF;
      v10 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 46);
      if ( v10 && (*((_BYTE *)v10 + 265) & 1) != 0 )
      {
        v12 = *((_DWORD *)this + 34);
        v13 = 1;
        v14 = 0;
        if ( v12 )
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v14);
            if ( *(_QWORD *)(v15 + 16) == *((_QWORD *)a2 + 5) && *(_DWORD *)(*(_QWORD *)(v15 + 128) + 24LL) == 3 )
              break;
            if ( ++v14 >= v12 )
              goto LABEL_15;
          }
          v13 = 0;
        }
LABEL_15:
        Clone = CTransitionVisualController::_FindClone(this, a2, 1);
        v17 = v13;
        if ( Clone < *((_DWORD *)this + 12) )
          v17 = 0;
        if ( v17 )
        {
          CTransitionVisualController::_MoveWindowOffscreen(v10, 0);
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            Template_p(v18, &UdwmSystemAnimation_MoveOffscreen_Stop, *((_QWORD *)a2 + 5));
        }
      }
      CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167), a2, 0);
      CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167), a2, 0);
      CWindowList::OnSizeChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167), a2);
      CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
      CWindowList::OnContentBoundsChange(v11, a2);
      *((_DWORD *)a2 + 142) = v9;
    }
    if ( a3 )
    {
      LOBYTE(v8) = 1;
      v19 = this;
      CTransitionVisualController::ForEachOwnedWindow<_lambda_49101be3cc2274a1c9941772b9f9e2bf_>(a2, &v19, v8);
    }
  }
}
