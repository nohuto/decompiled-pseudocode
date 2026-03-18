/*
 * XREFs of hfontInitDefaultGuiFont @ 0x1C0378730
 * Callers:
 *     FinishStockFontReinit @ 0x1C0286240 (FinishStockFontReinit.c)
 *     bInitStockFontsInternal @ 0x1C0378158 (bInitStockFontsInternal.c)
 * Callees:
 *     hfontCreate @ 0x1C00189F0 (hfontCreate.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00D13CC (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00D4120 (-bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 hfontInitDefaultGuiFont()
{
  BOOL ValueKey; // eax
  int v1; // ecx
  BOOL v2; // eax
  int v3; // ecx
  BOOL v4; // eax
  char v5; // dl
  BOOL v6; // eax
  char v7; // dl
  HANDLE Handle; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v10[108]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+1E0h] [rbp+E0h] BYREF
  wchar_t Src[34]; // [rsp+1ECh] [rbp+ECh] BYREF

  memset(v10, 0, 0x1A4uLL);
  wcscpy_s((wchar_t *)&v10[7], 0x20uLL, L"MS Shell Dlg");
  v10[0] = 8;
  v10[4] = 400;
  LOBYTE(v10[5]) = 0;
  HIBYTE(v10[5]) = gjCurCharset;
  if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", &Handle) )
  {
    if ( bQueryValueKey(L"GUIFont.Facename", Handle, KeyValueInformation, 0x48u) )
      wcsncpy_s((wchar_t *)&v10[7], 0x20uLL, Src, 0x20uLL);
    ValueKey = bQueryValueKey(L"GUIFont.Height", Handle, KeyValueInformation, 0x48u);
    v1 = v10[0];
    if ( ValueKey )
      v1 = *(_DWORD *)Src;
    v10[0] = v1;
    v2 = bQueryValueKey(L"GUIFont.Weight", Handle, KeyValueInformation, 0x48u);
    v3 = v10[4];
    if ( v2 )
      v3 = *(_DWORD *)Src;
    v10[4] = v3;
    v4 = bQueryValueKey(L"GUIFont.Italic", Handle, KeyValueInformation, 0x48u);
    v5 = v10[5];
    if ( v4 )
      v5 = Src[0];
    LOBYTE(v10[5]) = v5;
    v6 = bQueryValueKey(L"GUIFont.CharSet", Handle, KeyValueInformation, 0x48u);
    v7 = HIBYTE(v10[5]);
    if ( v6 )
      v7 = Src[0];
    HIBYTE(v10[5]) = v7;
    ZwClose(Handle);
  }
  gbFinishDefGUIFontInit = 1;
  return hfontCreate(v10, 7, 2, 0LL);
}
