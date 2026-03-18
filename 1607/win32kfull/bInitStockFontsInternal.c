/*
 * XREFs of bInitStockFontsInternal @ 0x1C037D158
 * Callers:
 *     bInitStockFonts @ 0x1C037E7A0 (bInitStockFonts.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     hfontCreate @ 0x1C00606C0 (hfontCreate.c)
 *     GreSetLFONTOwner @ 0x1C00B9170 (GreSetLFONTOwner.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00BB234 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C00BB29C (-bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     bInitOneStockFont @ 0x1C037D6F8 (bInitOneStockFont.c)
 *     hfontInitDefaultGuiFont @ 0x1C037D74C (hfontInitDefaultGuiFont.c)
 *     bInitSystemFont @ 0x1C037F2E0 (bInitSystemFont.c)
 */

unsigned __int16 *bInitStockFontsInternal()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned __int16 *result; // rax
  unsigned __int16 *v4; // rsi
  char *v5; // r14
  unsigned int *v6; // rbx
  struct HOBJ__ *v7; // rax
  void **v8; // rdx
  struct HOBJ__ *v9; // rax
  struct HOBJ__ *v10; // rax
  struct HOBJ__ *v11; // rax
  struct HOBJ__ *v12; // rax
  void *inited; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  void *v16; // rcx
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD Src[108]; // [rsp+58h] [rbp-B0h] BYREF

  v0 = -1LL;
  do
    ++v0;
  while ( aSystemrootFont[v0] );
  v1 = (unsigned int)(2 * v0 + 2);
  memset(Src, 0, 0x1A4uLL);
  v2 = 1;
  result = (unsigned __int16 *)PALLOCMEM2((unsigned int)(2 * v1 + 520), 1718838855LL, 1);
  v4 = result;
  if ( result )
  {
    memmove(result, L"\\SystemRoot\\Fonts\\", (unsigned int)v1);
    v5 = (char *)v4 + v1 - 2;
    v6 = (unsigned int *)(((unsigned __int64)v4 + v1 + 8) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows", Handle) )
    {
      if ( bQueryValueKey(L"SystemFontSize", Handle[0], v6, 0x200u)
        && bQueryValueKey(L"SystemFont", Handle[0], v6, 0x200u) )
      {
        memmove(v5, v6 + 3, v6[2]);
        bInitSystemFont(v4);
      }
      ZwClose(Handle[0]);
    }
    if ( bOpenKey(
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts",
           Handle)
      || bOpenKey(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize", Handle) )
    {
      if ( !gahStockObjects[13] )
        bInitOneStockFont(L"FONTS.FON", 1LL, 13LL, Handle[0], v6);
      bInitOneStockFont(L"OEMFONT.FON", 3LL, 10LL, Handle[0], v6);
      bInitOneStockFont(L"FIXEDFON.FON", 2LL, 16LL, Handle[0], v6);
      ZwClose(Handle[0]);
    }
    memset(Src, 0, 0x1A4uLL);
    Src[0] = 16;
    Src[1] = 7;
    Src[4] = 700;
    Src[6] = 570556929;
    wcscpy_s((wchar_t *)&Src[7], 0x20uLL, L"System");
    v7 = hfontCreate(Src, 1, 2, 0LL);
    if ( !bSetStockObject(v7, 13, 0) && !G_fConsole )
      goto LABEL_32;
    memset(Src, 0, 0x1A4uLL);
    Src[1] = 8;
    Src[0] = 12;
    Src[4] = 400;
    *(_DWORD *)((char *)&Src[5] + 3) = 33686015;
    HIBYTE(Src[6]) = 49;
    wcscpy_s((wchar_t *)&Src[7], 0x20uLL, L"Terminal");
    v9 = hfontCreate(Src, 3, 2, 0LL);
    if ( !bSetStockObject(v9, 10, 0) && !G_fConsole )
      goto LABEL_32;
    DcAttrDefault[22] = gahStockObjects[13];
    memset(Src, 0, 0x1A4uLL);
    HIBYTE(Src[6]) = 1;
    v10 = hfontCreate(Src, 4, 3, 0LL);
    if ( !bSetStockObject(v10, 14, 0) && !G_fConsole )
      goto LABEL_32;
    if ( ((memset(Src, 0, 0x1A4uLL), HIBYTE(Src[6]) = 2, v11 = hfontCreate(Src, 5, 3, 0LL), bSetStockObject(v11, 12, 0))
       || G_fConsole)
      && ((memset(Src, 0, 0x1A4uLL), HIBYTE(Src[6]) = 1, v12 = hfontCreate(Src, 6, 3, 0LL), bSetStockObject(v12, 11, 0))
       || G_fConsole)
      && ((inited = (void *)hfontInitDefaultGuiFont(), bSetStockObject(inited, 17, 0)) || G_fConsole)
      && ((unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[13], 0, v14)
       && (unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[10], 0, v15)
       && (unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[14], 0, v15)
       && (unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[11], 0, v15)
       && (unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[12], 0, v15)
       && (unsigned int)GreSetLFONTOwner((__int64)gahStockObjects[17], 0, v15)
       || G_fConsole) )
    {
      v8 = gahStockObjects;
      v16 = gahStockObjects[16];
      if ( v16 )
        GreSetLFONTOwner((__int64)v16, 0, v15);
    }
    else
    {
LABEL_32:
      v2 = 0;
    }
    Win32FreePool(v4, v8);
    return (unsigned __int16 *)v2;
  }
  return result;
}
