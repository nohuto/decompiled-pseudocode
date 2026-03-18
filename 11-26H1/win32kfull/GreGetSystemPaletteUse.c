/*
 * XREFs of GreGetSystemPaletteUse @ 0x1402302EC
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1401FFD98 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     CreateScreenPalette @ 0x1402EF664 (CreateScreenPalette.c)
 *     NtGdiGetSystemPaletteUse @ 0x14032AF90 (NtGdiGetSystemPaletteUse.c)
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetSystemPaletteUse@@YAIAEAVXDCOBJ@@@Z @ 0x140230338 (-GrepGetSystemPaletteUse@@YAIAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GreGetSystemPaletteUse(HDC a1)
{
  unsigned int SystemPaletteUse; // ebx
  _QWORD v3[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  SystemPaletteUse = 0;
  if ( v3[0] )
    SystemPaletteUse = GrepGetSystemPaletteUse((struct XDCOBJ *)v3);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return SystemPaletteUse;
}
