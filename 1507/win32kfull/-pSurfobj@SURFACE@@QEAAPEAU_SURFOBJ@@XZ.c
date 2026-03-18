/*
 * XREFs of ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C009CDAC
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C012588C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02687F8 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C02693E4 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 *     NtGdiGetETM @ 0x1C02B3C70 (NtGdiGetETM.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFACE::pSurfobj(SURFACE *this)
{
  if ( this )
    return (struct _SURFOBJ *)((char *)this + 24);
  else
    return 0LL;
}
