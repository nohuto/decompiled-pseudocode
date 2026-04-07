/*
 * XREFs of ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180039D54
 * Callers:
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18001B944 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180029760 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x180046220 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029B3C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180030F30 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z @ 0x18003722C (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJQEAUMIL_CHANNEL__@@K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180039E8C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

__int64 __fastcall CDesktopManager::CreateDesktopWindowForLogonDesktop(unsigned __int64 a1)
{
  _QWORD *Element; // rax
  struct CVisual *v3; // rbx
  int v4; // edi
  struct CVisual *RootVisualForDesktop; // rax

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167) + 8LL),
              a1);
  if ( Element )
    v3 = (struct CVisual *)Element[4];
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
