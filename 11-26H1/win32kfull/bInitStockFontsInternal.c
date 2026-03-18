/*
 * XREFs of bInitStockFontsInternal @ 0x1403FBDC8
 * Callers:
 *     GrepFontSubSystemInitialize @ 0x140323A20 (GrepFontSubSystemInitialize.c)
 * Callees:
 *     hfontCreate @ 0x140102814 (hfontCreate.c)
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     ?GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z @ 0x1401C6450 (-GrepGetRegKey@@YAJPEAPEAXKW4GreRegKey@@@Z.c)
 *     ?GrepGetRegKeyCommon@@YAJPEAPEAXKPEBG@Z @ 0x1401C64E4 (-GrepGetRegKeyCommon@@YAJPEAPEAXKPEBG@Z.c)
 *     ?bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1402303E4 (-bQueryValueKey@@YAHPEBGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x140232C6C (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 *     bInitSystemFont @ 0x1403FA27C (bInitSystemFont.c)
 *     hfontInitDefaultGuiFont @ 0x1403FB52C (hfontInitDefaultGuiFont.c)
 *     bInitOneStockFont @ 0x1403FC234 (bInitOneStockFont.c)
 */

unsigned __int16 *__fastcall bInitStockFontsInternal(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rdi
  unsigned __int16 *result; // rax
  unsigned __int16 *v3; // r14
  unsigned __int64 v4; // rsi
  int v5; // r12d
  BOOL v6; // ebx
  Gre::Base *v7; // rax
  Gre::Base *v8; // rax
  Gre::Base *v9; // rax
  Gre::Base *v10; // rax
  Gre::Base *v11; // rax
  Gre::Base *inited; // rax
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  int Src; // [rsp+58h] [rbp-B0h] BYREF
  int v15; // [rsp+5Ch] [rbp-ACh]
  int v16; // [rsp+68h] [rbp-A0h]
  _BYTE v17[5]; // [rsp+6Fh] [rbp-99h]
  wchar_t Dst[202]; // [rsp+74h] [rbp-94h] BYREF

  Handle[0] = 0LL;
  v1 = Gre::Base::Globals(a1);
  result = (unsigned __int16 *)PALLOCMEM(0x254u, 1718838855LL);
  v3 = result;
  if ( result )
  {
    memmove(result, L"\\SystemRoot\\Fonts\\", 0x26uLL);
    v4 = (unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( GrepGetRegKeyCommon(
           Handle,
           0x20019u,
           L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows") >= 0 )
    {
      if ( bQueryValueKey(
             L"SystemFontSize",
             Handle[0],
             (PVOID)((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
             0x200u) )
      {
        v5 = *(_DWORD *)(v4 + 12);
        if ( bQueryValueKey(
               L"SystemFont",
               Handle[0],
               (PVOID)((unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL),
               0x200u) )
        {
          memmove(v3 + 18, (const void *)(v4 + 12), *(unsigned int *)(v4 + 8));
          bInitSystemFont(v3, v5);
        }
      }
      ZwClose(Handle[0]);
    }
    v6 = 1;
    if ( GrepGetRegKeyCommon(
           Handle,
           0x20019u,
           L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts") >= 0
      || (int)GrepGetRegKey(Handle, 0x20019u, 1) >= 0 )
    {
      if ( !*(_QWORD *)(*((_QWORD *)v1 + 386) + 104LL) )
        bInitOneStockFont(L"FONTS.FON", 1LL, 13LL, Handle[0], (unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      bInitOneStockFont(L"OEMFONT.FON", 3LL, 10LL, Handle[0], (unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      bInitOneStockFont(L"FIXEDFON.FON", 2LL, 16LL, Handle[0], (unsigned __int64)(v3 + 23) & 0xFFFFFFFFFFFFFFF8uLL);
      ZwClose(Handle[0]);
    }
    memset_0(&Src, 0, 0x1A4uLL);
    Src = 16;
    v15 = 7;
    v16 = 700;
    *(_DWORD *)&v17[1] = 570556929;
    wcscpy_s(Dst, 0x20uLL, L"System");
    v7 = hfontCreate((unsigned __int16 *)&Src, 1, 2, 0LL, 72);
    if ( !(unsigned int)bSetStockFont(v7, 13, 0) && !*((_DWORD *)v1 + 731) )
      goto LABEL_14;
    memset_0(&Src, 0, 0x1A4uLL);
    Src = 12;
    v15 = 8;
    v16 = 400;
    *(_DWORD *)v17 = 33686015;
    v17[4] = 49;
    wcscpy_s(Dst, 0x20uLL, L"Terminal");
    v8 = hfontCreate((unsigned __int16 *)&Src, 3, 2, 0LL, 72);
    if ( !(unsigned int)bSetStockFont(v8, 10, 0) && !*((_DWORD *)v1 + 731) )
      goto LABEL_14;
    *((_QWORD *)v1 + 66) = *(_QWORD *)(*((_QWORD *)v1 + 386) + 104LL);
    memset_0(&Src, 0, 0x1A4uLL);
    v17[4] = 1;
    v9 = hfontCreate((unsigned __int16 *)&Src, 4, 3, 0LL, 72);
    if ( !(unsigned int)bSetStockFont(v9, 14, 0) && !*((_DWORD *)v1 + 731) )
      goto LABEL_14;
    if ( ((memset_0(&Src, 0, 0x1A4uLL),
           v17[4] = 2,
           v10 = hfontCreate((unsigned __int16 *)&Src, 5, 3, 0LL, 72),
           (unsigned int)bSetStockFont(v10, 12, 0))
       || *((_DWORD *)v1 + 731))
      && ((memset_0(&Src, 0, 0x1A4uLL),
           v17[4] = 1,
           v11 = hfontCreate((unsigned __int16 *)&Src, 6, 3, 0LL, 72),
           (unsigned int)bSetStockFont(v11, 11, 0))
       || *((_DWORD *)v1 + 731)) )
    {
      inited = hfontInitDefaultGuiFont(-1);
      if ( !(unsigned int)bSetStockFont(inited, 17, 0) )
        v6 = *((_DWORD *)v1 + 731) != 0;
    }
    else
    {
LABEL_14:
      v6 = 0;
    }
    Win32FreePool(v3);
    return (unsigned __int16 *)v6;
  }
  return result;
}
