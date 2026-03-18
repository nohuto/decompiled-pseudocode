/*
 * XREFs of ?NotifyWndProc@CDwmAppHost@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x140001130
 * Callers:
 *     ?s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z @ 0x140001030 (-s_NotifyWndProc@CDwmAppHost@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001080 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z @ 0x1400046D0 (-OnReportEvent@CDwmAppHost@@AEAAX_K_J_N@Z.c)
 */

__int64 __fastcall CDwmAppHost::NotifyWndProc(CDwmAppHost *this, HWND a2, void *a3, WPARAM a4, wchar_t *String1)
{
  __int64 result; // rax
  CDwmAppHost *v6; // rcx

  if ( (unsigned int)a3 <= 0x1A )
  {
    if ( (_DWORD)a3 != 26 )
    {
      switch ( (_DWORD)a3 )
      {
        case 2:
          PostQuitMessage(0);
          return 0LL;
        case 0x10:
          DestroyWindow(hWnd);
          result = 0LL;
          hWnd = 0LL;
          return result;
        case 0x15:
          CDwmAppHost::LpcNotifySettingsChange(this, 8u, a3);
          return 0LL;
      }
      return DefWindowProcW(a2, (UINT)a3, a4, (LPARAM)String1);
    }
    switch ( a4 )
    {
      case 6uLL:
      case 0x2AuLL:
        if ( String1 )
          goto LABEL_16;
        break;
      case 0x2FuLL:
        if ( String1 && !_wcsicmp(String1, L"devices") )
        {
LABEL_16:
          CDwmAppHost::LpcNotifySettingsChange(this, 3u, a3);
          return 0LL;
        }
        break;
      case 0x2019uLL:
        CDwmAppHost::LpcNotifySettingsChange(this, 0x100u, a3);
        return 0LL;
      default:
        return 0LL;
    }
    return 0LL;
  }
  if ( (_DWORD)a3 == 794 )
  {
    CDwmAppHost::LpcNotifySettingsChange(0LL, 4u, a3);
    return 0LL;
  }
  v6 = (CDwmAppHost *)(unsigned int)((_DWORD)a3 - 1026);
  if ( (_DWORD)a3 == 1026 )
  {
    CDwmAppHost::OnReportEvent(v6, a4, 0LL, 0);
    return 0LL;
  }
  else
  {
    if ( (_DWORD)a3 != 1027 )
      return DefWindowProcW(a2, (UINT)a3, a4, (LPARAM)String1);
    CDwmAppHost::OnReportEvent(v6, a4, (__int64)String1, 1);
    return 0LL;
  }
}
