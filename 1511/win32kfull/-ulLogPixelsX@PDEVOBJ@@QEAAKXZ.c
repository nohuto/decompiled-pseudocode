/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C001C55C
 * Callers:
 *     GreEnumFonts @ 0x1C001743C (GreEnumFonts.c)
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C001B0EC (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     cjCopyFontDataW @ 0x1C001BCD8 (cjCopyFontDataW.c)
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C001EB28 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00216C4 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0025C48 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00E8B50 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     GreGetAspectRatioFilter @ 0x1C027F5A0 (GreGetAspectRatioFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = -1;
  UserGetCurrentProcessDpiAwareness(&v3);
  if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 1) == 0 )
    return *(unsigned int *)(*(_QWORD *)this + 2200LL);
  result = 96LL;
  if ( (unsigned int)(v3 - 1) <= 1 )
    return *(unsigned int *)(*(_QWORD *)this + 2200LL);
  return result;
}
