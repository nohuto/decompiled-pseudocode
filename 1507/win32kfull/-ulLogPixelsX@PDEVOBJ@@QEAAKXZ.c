/*
 * XREFs of ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0030CB4
 * Callers:
 *     ?bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z @ 0x1C0027504 (-bGetNtoW_Win31@@YAHPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KH@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C0029584 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002D428 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z @ 0x1C002F8C4 (-vGetNtoW@@YAXPEAVMATRIX@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@@Z.c)
 *     cjCopyFontDataW @ 0x1C0030450 (cjCopyFontDataW.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00385A4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     GreEnumFonts @ 0x1C00E5F4C (GreEnumFonts.c)
 *     GreGetAspectRatioFilter @ 0x1C027FBE0 (GreGetAspectRatioFilter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::ulLogPixelsX(PDEVOBJ *this, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = -1;
  UserGetCurrentProcessDpiAwareness(&v5, a2, a3);
  if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 1) == 0 )
    return *(unsigned int *)(*(_QWORD *)this + 2200LL);
  result = 96LL;
  if ( (unsigned int)(v5 - 1) <= 1 )
    return *(unsigned int *)(*(_QWORD *)this + 2200LL);
  return result;
}
