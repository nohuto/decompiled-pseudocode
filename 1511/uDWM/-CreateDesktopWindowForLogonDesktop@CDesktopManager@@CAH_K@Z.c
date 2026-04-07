/*
 * XREFs of ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x18003BE9C
 * Callers:
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180020F9C (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002C58C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x1800461C4 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z @ 0x18003BF6C (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003C544 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18003E710 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 */

__int64 __fastcall CDesktopManager::CreateDesktopWindowForLogonDesktop(unsigned __int64 a1)
{
  __int64 Element; // rax
  struct CVisual *v3; // rbx
  unsigned int v4; // edi
  struct CVisual *RootVisualForDesktop; // rax

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167) + 8LL,
              a1);
  if ( Element )
    v3 = *(struct CVisual **)(Element + 32);
  else
    v3 = 0LL;
  if ( !*((_DWORD *)v3 + 64) )
  {
    v4 = 0;
    if ( !CDesktopManager::IsLogonDesktop(a1) && CAccent::s_clrCurrentAccentBackground != 0xFFFFFF )
      v4 = CAccent::s_clrCurrentAccentBackground;
    if ( (int)CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
                v3,
                *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
                v4) >= 0 )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                               a1);
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)RootVisualForDesktop + 3) + 32LL),
        v3,
        RootVisualForDesktop,
        0,
        1);
      CVisual::RenderRecursive(v3);
    }
  }
  return 1LL;
}
