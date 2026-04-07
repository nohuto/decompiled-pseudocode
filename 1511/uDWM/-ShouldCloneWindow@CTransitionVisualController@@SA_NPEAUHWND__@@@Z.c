/*
 * XREFs of ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18001108C
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180008A30 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ??$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@_N@Z @ 0x180010FC0 (--$ForEachOwnedWindow@V_lambda_a6416bceeb8fa8c2b6611bcebec8c1fe_@@@CTransitionVisualController@@.c)
 *     sub_1800113BC @ 0x1800113BC (sub_1800113BC.c)
 *     ??$ForEachOwnedWindow@V_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@_N@Z @ 0x180011650 (--$ForEachOwnedWindow@V_lambda_bd0cd9c08f34eb6c962feef2ce577fa6_@@@CTransitionVisualController@@.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180071BE8 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x18009B250 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180038FD8 (-IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

char __fastcall CTransitionVisualController::ShouldCloneWindow(HWND hWnd)
{
  char v2; // bl
  CDesktopManager *v3; // rbp
  char v4; // di
  unsigned int v5; // esi
  int v6; // ecx
  wchar_t **i; // rdx
  WCHAR *v8; // rax
  int v9; // r10d
  int v10; // r8d
  WCHAR *v12; // rax
  signed __int64 v13; // rdx
  WCHAR v14; // cx
  int v15; // eax
  struct tagRECT Rect; // [rsp+20h] [rbp-248h] BYREF
  WCHAR ClassName[264]; // [rsp+30h] [rbp-238h] BYREF

  Rect = 0LL;
  v2 = 1;
  if ( GetWindowRect(hWnd, &Rect) && IsRectEmpty(&Rect) )
    return 0;
  memset_0(ClassName, 0, 0x208uLL);
  if ( GetClassNameW(hWnd, ClassName, 260) )
  {
    v3 = CDesktopManager::s_pDesktopManagerInstance;
    v4 = 1;
    v5 = 0;
    do
    {
      if ( v5 >= 6 )
        break;
      if ( CAnimationScheduler::IsWindowCurrentlyAnimating(
             *((CAnimationScheduler **)v3 + 24),
             0LL,
             *((_DWORD *)&off_1800A65E0 + 4 * v5 + 2),
             0) )
      {
        v12 = ClassName;
        v13 = (char *)(&off_1800A65E0)[2 * v5] - (char *)ClassName;
        while ( 1 )
        {
          v14 = *v12;
          if ( *v12 != *(WCHAR *)((char *)v12 + v13) )
            break;
          ++v12;
          if ( !v14 )
          {
            v15 = 0;
            goto LABEL_22;
          }
        }
        v15 = v14 < *(WCHAR *)((char *)v12 + v13) ? -1 : 1;
LABEL_22:
        v4 = v15 != 0 ? v4 : 0;
      }
      ++v5;
    }
    while ( v4 );
    if ( v4 )
    {
      v6 = 0;
      for ( i = off_1800A6640; ; ++i )
      {
        v8 = ClassName;
        do
        {
          v9 = *(WCHAR *)((char *)v8 + (char *)*i - (char *)ClassName);
          v10 = *v8 - v9;
          if ( v10 )
            break;
          ++v8;
        }
        while ( v9 );
        if ( !v10 )
          break;
        if ( (unsigned int)++v6 >= 0xC )
          return v2;
      }
      return 0;
    }
  }
  return v2;
}
