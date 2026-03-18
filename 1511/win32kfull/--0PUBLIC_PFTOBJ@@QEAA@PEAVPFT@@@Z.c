/*
 * XREFs of ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010E454
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C02695F0 (NtGdiAddEmbFontToDC.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x1C02A4450 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 *     NtGdiEngTextOut @ 0x1C02AD4E0 (NtGdiEngTextOut.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02ADBB0 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02ADDF0 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C02AE060 (NtGdiFONTOBJ_pifi.c)
 * Callees:
 *     <none>
 */

PUBLIC_PFTOBJ *__fastcall PUBLIC_PFTOBJ::PUBLIC_PFTOBJ(PUBLIC_PFTOBJ *this, struct PFT *a2)
{
  *(_QWORD *)this = a2;
  return this;
}
