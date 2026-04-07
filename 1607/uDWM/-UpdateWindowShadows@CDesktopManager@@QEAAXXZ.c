/*
 * XREFs of ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180045D94
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001DDE0 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x180046BFC (--0CDesktopManager@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::UpdateWindowShadows(CDesktopManager *this)
{
  if ( *((_BYTE *)this + 26) )
    *((_BYTE *)this + 16) = 0;
  else
    SystemParametersInfoW(0x1024u, 0, (char *)this + 16, 0);
}
