/*
 * XREFs of ?ApplyColorizationParameters@CDesktopManager@@QEAAXPEBVCGlassColorizationParameters@@@Z @ 0x18003F900
 * Callers:
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x18003FD64 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETERS@@@Z @ 0x1800799F8 (-SetColorizationParameters@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_SETCOLORIZATIONPARAMETER.c)
 * Callees:
 *     DwmpCalculateColorizationColor @ 0x180041068 (DwmpCalculateColorizationColor.c)
 */

void __fastcall CDesktopManager::ApplyColorizationParameters(
        CDesktopManager *this,
        const struct CGlassColorizationParameters *a2)
{
  WPARAM wParam; // [rsp+40h] [rbp+8h] BYREF
  DWORD Info; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(wParam) = 0;
  if ( a2 != (CDesktopManager *)((char *)this + 1380) )
  {
    *(_OWORD *)((char *)this + 1380) = *(_OWORD *)a2;
    *(_QWORD *)((char *)this + 1396) = *((_QWORD *)a2 + 2);
    *((_DWORD *)this + 351) = *((_DWORD *)a2 + 6);
  }
  if ( !*((_BYTE *)this + 24) )
    *((_DWORD *)this + 350) = 1;
  DwmpCalculateColorizationColor((char *)this + 1380, &wParam);
  Info = 8;
  BroadcastSystemMessageW(0xB2u, &Info, 0x320u, (unsigned int)wParam, 1LL);
}
