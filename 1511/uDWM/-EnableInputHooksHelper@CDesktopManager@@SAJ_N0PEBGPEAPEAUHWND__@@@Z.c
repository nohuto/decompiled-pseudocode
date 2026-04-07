/*
 * XREFs of ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x1800749B0
 * Callers:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x1800749B0 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180074C58 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x1800749B0 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z @ 0x180075140 (-SetForegroundWindowAsync@CDesktopManager@@SAJPEAUHWND__@@0_N@Z.c)
 */

__int64 __fastcall CDesktopManager::EnableInputHooksHelper(char a1, char a2, const unsigned __int16 *a3, HWND *a4)
{
  unsigned int v4; // ebx
  int v8; // r8d
  int v9; // r9d
  HWND WindowInBand; // rax
  HWND v11; // rbp
  bool v12; // r8
  int v13; // eax
  HCURSOR CursorW; // rax
  HWND v15; // rcx
  bool v16; // r8
  HWND ForegroundWindow; // [rsp+70h] [rbp-38h]
  __int128 v19; // [rsp+78h] [rbp-30h]

  v4 = 0;
  if ( !CDesktopManager::s_pDesktopManagerInstance )
    return v4;
  if ( !a1 )
  {
    if ( !*a4 )
      return v4;
    LockSetForegroundWindow(2u);
    v15 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 192);
    if ( v15 )
    {
      if ( IsWindow(v15) )
        CDesktopManager::SetForegroundWindowAsync(*a4, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 192), v16);
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 192) = 0LL;
    }
    PostMessageW(*a4, 0x10u, 0LL, 0LL);
    *a4 = 0LL;
LABEL_18:
    if ( (v4 & 0x80000000) == 0 )
      return v4;
    goto LABEL_19;
  }
  ForegroundWindow = GetForegroundWindow();
  SendNotifyMessageW(ForegroundWindow, 0x1Fu, 0LL, 0LL);
  if ( a2 )
  {
    HIDWORD(v19) = 0;
    v8 = 0;
    DWORD1(v19) = 0;
    v9 = 0;
  }
  else
  {
    v19 = *(_OWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1288);
    v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 162);
    v9 = v19;
  }
  WindowInBand = (HWND)CreateWindowInBand(
                         136LL,
                         a3,
                         0LL,
                         0x80000000LL,
                         v9,
                         DWORD1(v19),
                         v8,
                         HIDWORD(v19),
                         0LL,
                         0LL,
                         g_hInstance,
                         0LL,
                         2);
  v11 = WindowInBand;
  if ( WindowInBand )
  {
    *a4 = WindowInBand;
    ChangeWindowMessageFilterEx(WindowInBand, 0x319u, 1u, 0LL);
    ChangeWindowMessageFilterEx(v11, 0x112u, 1u, 0LL);
    ChangeWindowMessageFilterEx(v11, 0x1Fu, 1u, 0LL);
    ChangeWindowMessageFilterEx(v11, 6u, 1u, 0LL);
    ChangeWindowMessageFilterEx(v11, 0x3Du, 1u, 0LL);
    if ( a2 )
      return v4;
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 192) = ForegroundWindow;
    v13 = CDesktopManager::SetForegroundWindowAsync(v11, v11, v12);
    v4 = v13;
    if ( v13 >= 0 )
    {
      CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F00);
      SetCursor(CursorW);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, &dword_1800ACA80, 2LL, v13, 0x90Au);
    }
    goto LABEL_18;
  }
  v4 = -2147024890;
  MilInstrumentationCheckHR(0x14u, &dword_1800ACA80, 2LL, -2147024890, 0x8F9u);
LABEL_19:
  if ( a1 )
    CDesktopManager::EnableInputHooksHelper(0, 0, a3, a4);
  return v4;
}
