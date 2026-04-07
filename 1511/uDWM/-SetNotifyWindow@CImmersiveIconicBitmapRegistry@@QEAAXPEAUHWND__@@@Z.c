/*
 * XREFs of ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x180043718
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180032BE0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002C6B8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 */

void __fastcall CImmersiveIconicBitmapRegistry::SetNotifyWindow(CImmersiveIconicBitmapRegistry *this, HWND a2)
{
  HWND ShellWindowForDesktop; // rdi
  unsigned __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF
  DWORD dwProcessId; // [rsp+50h] [rbp+18h] BYREF
  DWORD v7; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)GetDesktopID(2LL, v5) )
  {
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                              v5[0]);
    if ( ShellWindowForDesktop )
    {
      if ( GetWindowThreadProcessId(a2, &dwProcessId)
        && GetWindowThreadProcessId(ShellWindowForDesktop, &v7)
        && v7 == dwProcessId )
      {
        *((_QWORD *)this + 10) = a2;
      }
    }
  }
}
