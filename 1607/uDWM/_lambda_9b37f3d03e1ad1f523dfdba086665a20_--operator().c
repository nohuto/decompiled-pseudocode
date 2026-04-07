/*
 * XREFs of _lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator() @ 0x180008F74
 * Callers:
 *     ??$ForEachOwnedWindow@V_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@_N@Z @ 0x180008EAC (--$ForEachOwnedWindow@V_lambda_9b37f3d03e1ad1f523dfdba086665a20_@@@CTransitionVisualController@@.c)
 * Callees:
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000436C (-Abandon@CStoryboard@@QEAAXXZ.c)
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x18000F7C4 (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 */

__int64 __fastcall lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator()(__int64 a1, __int64 a2)
{
  CTopLevelWindow3D *v2; // rcx
  __int64 v4; // rbx
  HWND v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // r14
  CStoryboard *v9; // rcx
  struct _GUID *v11; // rcx

  v2 = *(CTopLevelWindow3D **)(a2 + 392);
  if ( v2 )
    CTopLevelWindow3D::StopAnimation(v2);
  if ( *(_QWORD *)(a2 + 40) )
  {
    while ( 1 )
    {
      v4 = 0LL;
      v5 = *(HWND *)(a2 + 40);
      v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
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
      v11 = *(struct _GUID **)(v8 + 8 * v4);
      if ( !v11 )
        break;
      CStoryboard::Abandon(v11);
    }
  }
  return 0LL;
}
