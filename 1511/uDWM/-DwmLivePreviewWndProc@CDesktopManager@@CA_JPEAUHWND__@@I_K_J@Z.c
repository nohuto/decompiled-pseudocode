/*
 * XREFs of ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180074750
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038FB0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039DEC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 */

LRESULT __fastcall CDesktopManager::DwmLivePreviewWndProc(HWND hWnd, UINT Msg, HWND wParam, LPARAM lParam)
{
  LRESULT v8; // rdi
  bool v9; // si
  char v10; // r15
  UINT uFlags; // ebx
  signed int v12; // eax
  signed int v13; // ebx
  signed int LastError; // eax
  signed int v15; // ebx
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp-38h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v8 = 0LL;
  v9 = 0;
  v10 = 1;
  if ( Msg == 6 )
  {
    if ( !(_WORD)wParam )
    {
      v9 = 1;
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 192) = 0LL;
LABEL_28:
      if ( !v9 )
        goto LABEL_30;
      goto LABEL_29;
    }
    goto LABEL_31;
  }
  if ( Msg != 31 )
  {
    if ( Msg == 71 )
    {
      if ( (*(_BYTE *)(lParam + 32) & 0x40) != 0 )
      {
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        SetLastError(0);
        if ( SetForegroundWindow(hWnd) )
        {
          LockSetForegroundWindow(1u);
        }
        else
        {
          LastError = GetLastError();
          v15 = LastError;
          if ( LastError > 0 )
            v15 = (unsigned __int16)LastError | 0x80070000;
          if ( v15 >= 0 )
            v15 = -2003304445;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x76Fu);
          v9 = 1;
        }
        goto LABEL_15;
      }
LABEL_31:
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      v17 = 0LL;
      v8 = DefWindowProcW(hWnd, Msg, (WPARAM)wParam, lParam);
      goto LABEL_32;
    }
    if ( Msg != 257 )
    {
      if ( Msg == 1028 )
      {
        uFlags = 67;
        if ( !lParam )
          uFlags = 83;
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
        SetLastError(0);
        if ( !SetWindowPos(wParam, 0LL, 0, 0, 0, 0, uFlags) )
        {
          v12 = GetLastError();
          v13 = v12;
          if ( v12 > 0 )
            v13 = (unsigned __int16)v12 | 0x80070000;
          if ( v13 >= 0 )
            v13 = -2003304445;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x759u);
          v9 = wParam == hWnd;
        }
        v10 = 0;
LABEL_15:
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        goto LABEL_28;
      }
      goto LABEL_31;
    }
    if ( (unsigned __int64)wParam - 91 > 1 )
      goto LABEL_31;
    v10 = 0;
  }
LABEL_29:
  CLivePreview::Activate(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170), 0, 0LL, 0LL, 1, 0, 0, 0LL);
LABEL_30:
  if ( v10 )
    goto LABEL_31;
LABEL_32:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return v8;
}
