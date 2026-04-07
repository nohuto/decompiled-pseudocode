/*
 * XREFs of ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BF28
 * Callers:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000ABF8 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@_N@Z @ 0x18000B968 (--$ForEachOwnedWindow@V_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@@CTransitionVisualController@@.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000BAFC (--1CAnimationComponent@@UEAA@XZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000E4E0 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000E6C0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000B2B0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ??$ForEachOwnedWindow@V_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@_N@Z @ 0x18000B968 (--$ForEachOwnedWindow@V_lambda_2a7e5acb7bb4e78ba2706e3012234859_@@@CTransitionVisualController@@.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000E834 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18001AD88 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 *     ?OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180031868 (-OnContentBoundsChange@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180032660 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     Template_p @ 0x18007EFA8 (Template_p.c)
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
           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
           *((struct IDwmWindow **)a2 + 3),
           a2);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( v7 >= 0 )
    {
      v8 = *((_DWORD *)a2 + 146);
      *((_DWORD *)a2 + 146) = v8 & 0xFFEFFFFF;
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
      CWindowList::ShowHide(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165), a2, 0);
      CWindowList::OnPositionChange(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165), a2, 0);
      CWindowList::UpdateWindowScale(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165), a2, 0);
      CWindowData::CheckOwnedWindowEligibilityForOwner(a2);
      CWindowList::OnContentBoundsChange(v10, a2);
      *((_DWORD *)a2 + 146) = v8;
    }
    if ( a3 )
    {
      v18 = this;
      CTransitionVisualController::ForEachOwnedWindow<_lambda_2a7e5acb7bb4e78ba2706e3012234859_>((__int64)a2, &v18, 1);
    }
  }
}
