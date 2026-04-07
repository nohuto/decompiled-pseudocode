/*
 * XREFs of ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x180035710
 * Callers:
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x180002528 (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180036C2C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAccent::_UpdateAccentBackground(CAccent *this, unsigned int a2)
{
  unsigned int v2; // eax

  if ( CAccent::s_clrCurrentAccentBackground != a2 )
  {
    v2 = *((_DWORD *)this + 66) - 2;
    CAccent::s_clrCurrentAccentBackground = a2;
    if ( v2 > 1 )
      CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 167));
  }
}
