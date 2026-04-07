/*
 * XREFs of ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x180045170
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045230 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 */

__int64 __fastcall CDesktopManager::RegisterWindowClass(
        const unsigned __int16 *a1,
        __int64 (*a2)(HWND, unsigned int, unsigned __int64, __int64),
        unsigned __int16 *a3)
{
  unsigned int v4; // edi
  ATOM v5; // ax
  signed int LastError; // eax
  signed int v8; // ebx
  WNDCLASSW WndClass; // [rsp+30h] [rbp-58h] BYREF

  if ( (dword_1800B7F40 & 1) == 0 )
  {
    dword_1800B7E50 = -2147023486;
    dword_1800B7F40 |= 1u;
  }
  v4 = 0;
  WndClass.style = 0;
  memset_0(&WndClass.lpfnWndProc, 0, 0x40uLL);
  WndClass.lpszClassName = L"LivePreview";
  WndClass.lpfnWndProc = (WNDPROC)CDesktopManager::DwmLivePreviewWndProc;
  WndClass.hInstance = g_hInstance;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  SetLastError(0);
  v5 = RegisterClassW(&WndClass);
  *a3 = v5;
  if ( !v5 )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR(0x14u, &dword_1800B7E50, 1u, v8, 0x611u);
    if ( v8 == -2147023486 )
      return 0;
    return (unsigned int)v8;
  }
  return v4;
}
