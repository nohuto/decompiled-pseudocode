/*
 * XREFs of ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C002909C
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C002A4C8 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C002A758 (-bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z.c)
 *     ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00FCCD8 (-ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0124534 (GreGetGlyphOutlineInternal.c)
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02D292C (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02D2A3C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02D2C24 (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z @ 0x1C00C1F54 (--0ATTACHOBJ@@QEAA@PEAVPDEVOBJ@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00C1FB8 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1C02BBDD0 (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 */

__int64 __fastcall PDEVOBJ::QueryFontData(
        PDEVOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA *a6,
        void *a7,
        unsigned int a8)
{
  unsigned int v8; // edi
  __int64 (__fastcall *v12)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int); // rbx
  _BYTE v14[64]; // [rsp+40h] [rbp-88h] BYREF

  v8 = -1;
  v12 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, _QWORD, _QWORD, struct _GLYPHDATA *, void *, unsigned int))(*(_QWORD *)this + 2936LL);
  if ( gpepCSRSS )
  {
    ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v14, this);
    v8 = v12(a2, a3, a4, a5, a6, a7, a8);
    if ( !ValidateGlyphDataAndBitmap(v8, a4, a7) )
    {
      ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v14);
      return 0xFFFFFFFFLL;
    }
    ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v14);
  }
  return v8;
}
