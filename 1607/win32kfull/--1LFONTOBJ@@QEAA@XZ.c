/*
 * XREFs of ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0
 * Callers:
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00091E4 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0009500 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0012A48 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetTextFaceW @ 0x1C0023264 (GreGetTextFaceW.c)
 *     GreGetCharSet @ 0x1C0023BD8 (GreGetCharSet.c)
 *     cjCopyFontDataW @ 0x1C0028D7C (cjCopyFontDataW.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreExtGetObjectW @ 0x1C004BBB8 (GreExtGetObjectW.c)
 *     GreMarkDeletableFont @ 0x1C00B919C (GreMarkDeletableFont.c)
 *     FinishStockFontInit @ 0x1C00BC170 (FinishStockFontInit.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C011B540 (NtGdiQueryFontAssocInfo.c)
 *     ??0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z @ 0x1C0124C98 (--0RESETFCOBJ@@QEAA@AEAVDCOBJ@@AEAVRFONTOBJ@@PEAU_MAT2@@HK@Z.c)
 *     ?lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z @ 0x1C014BACC (-lGetDefaultWorldHeight@@YAJPEAVDCOBJ@@@Z.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C027D960 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A324 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z @ 0x1C029AB08 (-bSetNewFDX@RFONTOBJ@@QEAAHAEAVXDCOBJ@@AEAU_FD_XFORM@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LFONTOBJ::~LFONTOBJ(struct LFONT **this)
{
  struct LFONT *v1; // rcx

  v1 = *this;
  if ( v1 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v1);
}
