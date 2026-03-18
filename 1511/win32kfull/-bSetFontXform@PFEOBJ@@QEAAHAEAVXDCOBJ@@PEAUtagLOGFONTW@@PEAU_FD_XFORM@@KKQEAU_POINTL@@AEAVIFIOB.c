/*
 * XREFs of ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C001E818
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0002CBC (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C01061A8 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z @ 0x1C001A7F4 (-bGetNtoD@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@QEAU_POINTL@@@Z.c)
 *     ?bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z @ 0x1C00216C4 (-bGetNtoD_Win31@@YAHPEAU_FD_XFORM@@PEAUtagLOGFONTW@@AEAVIFIOBJ@@PEAVDCOBJ@@KQEAU_POINTL@@H@Z.c)
 */

__int64 __fastcall PFEOBJ::bSetFontXform(
        PFEOBJ *this,
        struct XDCOBJ *a2,
        struct tagLOGFONTW *a3,
        struct _FD_XFORM *a4,
        unsigned int a5,
        unsigned int a6,
        struct _POINTL *const a7,
        struct IFIOBJ *a8,
        int a9)
{
  int NtoD_Win31; // eax
  unsigned int v13; // edx
  FLOATL eYX; // eax
  FLOATL eYY; // eax
  FLOATL v17; // eax
  _BYTE v18[24]; // [rsp+40h] [rbp-18h] BYREF

  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v18, a2, 0x204u);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) == 1 )
    NtoD_Win31 = bGetNtoD_Win31(a4, a3, a8, a2, a5, a7, a9);
  else
    NtoD_Win31 = bGetNtoD(a4, a3, a8, a2, a7);
  v13 = 0;
  if ( NtoD_Win31 )
  {
    eYX = a4->eYX;
    if ( eYX != 0.0 )
      LODWORD(a4->eYX) = LODWORD(eYX) ^ 0x80000000;
    eYY = a4->eYY;
    if ( eYY != 0.0 )
      LODWORD(a4->eYY) = LODWORD(eYY) ^ 0x80000000;
    if ( (*(_DWORD *)(*(_QWORD *)a8 + 48LL) & 0x1000000) != 0 )
    {
      a4->eXX = a4->eYY;
      v17 = a4->eYX;
      a4->eXY = v17;
      if ( v17 != 0.0 )
        LODWORD(a4->eXY) = LODWORD(v17) ^ 0x80000000;
    }
    return 1;
  }
  return v13;
}
