/*
 * XREFs of ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18003F680
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001B9C8 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180040248 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800197A0 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetupDPIValues(CDesktopManager *this)
{
  HDC ICW; // rax
  HDC v3; // rdi
  int v4; // eax

  *((_QWORD *)this + 165) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 166) = 0x3FF0000000000000LL;
  ICW = CreateICW(L"DISPLAY", 0LL, 0LL, 0LL);
  v3 = ICW;
  if ( ICW )
  {
    *((_DWORD *)this + 364) = GetDeviceCaps(ICW, 88);
    *((_DWORD *)this + 365) = GetDeviceCaps(v3, 90);
    if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(1u) )
    {
      v4 = *((_DWORD *)this + 365);
      *((double *)this + 165) = (double)*((int *)this + 364) / 96.0;
      *((double *)this + 166) = (double)v4 / 96.0;
    }
    DeleteDC(v3);
  }
}
