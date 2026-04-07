/*
 * XREFs of ?ShowBarrel@CPenBarrelKeyVisual@@QEAAJ_N@Z @ 0x18008A520
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18000905C (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800704C4 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 * Callees:
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180042228 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::ShowBarrel(CPenBarrelKeyVisual *this, char a2)
{
  if ( *((_BYTE *)this + 324) != a2 )
  {
    *((_BYTE *)this + 324) = a2;
    CPenBarrelKeyVisual::UpdateBarrelAlpha((CImage **)this);
  }
  return 0LL;
}
