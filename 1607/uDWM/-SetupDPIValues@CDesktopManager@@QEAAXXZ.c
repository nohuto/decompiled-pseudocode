/*
 * XREFs of ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x180045BC0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001DDE0 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180046620 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004100C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetupDPIValues(CDesktopManager *this)
{
  HDC ICW; // rax
  HDC v3; // rdi
  int v4; // eax

  *((_QWORD *)this + 163) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 164) = 0x3FF0000000000000LL;
  ICW = CreateICW(L"DISPLAY", 0LL, 0LL, 0LL);
  v3 = ICW;
  if ( ICW )
  {
    *((_DWORD *)this + 360) = GetDeviceCaps(ICW, 88);
    *((_DWORD *)this + 361) = GetDeviceCaps(v3, 90);
    if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(1u) )
    {
      v4 = *((_DWORD *)this + 361);
      *((double *)this + 163) = (double)*((int *)this + 360) / 96.0;
      *((double *)this + 164) = (double)v4 / 96.0;
    }
    DeleteDC(v3);
  }
}
