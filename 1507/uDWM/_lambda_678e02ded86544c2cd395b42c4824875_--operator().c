/*
 * XREFs of _lambda_678e02ded86544c2cd395b42c4824875_::operator() @ 0x18008BBF4
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_678e02ded86544c2cd395b42c4824875_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_678e02ded86544c2cd395b42c4824875_@@_N@Z @ 0x18008BB3C (--$ForEachOwnedWindow@V_lambda_678e02ded86544c2cd395b42c4824875_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x1800056F8 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180025754 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800905F0 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_678e02ded86544c2cd395b42c4824875_::operator()(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  __int64 v4; // rbx
  HWND v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // r14
  CStoryboard *v9; // rcx
  CStoryboard *v11; // rcx

  v2 = *(_QWORD *)(a2 + 376);
  if ( v2 )
    CTopLevelWindow3D::StopAnimation(v2);
  if ( *(_QWORD *)(a2 + 40) )
  {
    while ( 1 )
    {
      v4 = 0LL;
      v5 = *(HWND *)(a2 + 40);
      v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
      v7 = *(_DWORD *)(v6 + 40);
      if ( !v7 )
        break;
      v8 = *(_QWORD *)(v6 + 16);
      while ( 1 )
      {
        v9 = *(CStoryboard **)(v8 + 8 * v4);
        if ( *((_DWORD *)v9 + 6) != 4 && (!v5 || CStoryboard::HasAnimationComponent(v9, v5, 0)) )
          break;
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= v7 )
          return 0LL;
      }
      v11 = *(CStoryboard **)(v8 + 8 * v4);
      if ( !v11 )
        break;
      CStoryboard::Abandon(v11);
    }
  }
  return 0LL;
}
