/*
 * XREFs of ?CreateWindowWithNotify@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAVCWindowData@@PEAPEAV1@@Z @ 0x180039E24
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@_N@Z @ 0x1800248D4 (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@_N@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180039E8C (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180039EC8 (-Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateWindowWithNotify(
        struct MIL_CHANNEL__ *const a1,
        struct CWindowData *a2,
        struct CTopLevelWindow **a3)
{
  int v5; // eax
  unsigned int v6; // edi
  HWND v7; // rdx

  v5 = CTopLevelWindow::Create(a1, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xFAu);
  }
  else if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 15)) )
  {
    v7 = (HWND)*((_QWORD *)a2 + 5);
    if ( v7 )
    {
      if ( *((char *)a2 + 556) >= 0 )
        CTopLevelWindow::SendTopLevelWindowCommand(*a3, v7);
    }
  }
  return v6;
}
