/*
 * XREFs of ?_UpdateAccentBackground@CAccent@@IEAAXK@Z @ 0x18003623C
 * Callers:
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x18000746C (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
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
                                                               + 165));
  }
}
