/*
 * XREFs of FONTOBJ_pQueryGlyphAttrs @ 0x1C0285D30
 * Callers:
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02AEB40 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryGlyphAttrs@PDEVOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z @ 0x1C02B94CC (-QueryGlyphAttrs@PDEVOBJ@@QEAAPEAU_FD_GLYPHATTR@@PEAU_FONTOBJ@@K@Z.c)
 */

PFD_GLYPHATTR __stdcall FONTOBJ_pQueryGlyphAttrs(FONTOBJ *pfo, ULONG iMode)
{
  ULONG_PTR iTTUniq; // rax
  struct _FD_GLYPHATTR *GlyphAttrs; // rbx
  ULONG_PTR v5; // [rsp+30h] [rbp+8h] BYREF

  if ( pfo && (iTTUniq = pfo[1].iTTUniq, (v5 = iTTUniq) != 0) && *(_QWORD *)(iTTUniq + 3408) )
    GlyphAttrs = PDEVOBJ::QueryGlyphAttrs((PDEVOBJ *)&v5, pfo, iMode);
  else
    GlyphAttrs = 0LL;
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return GlyphAttrs;
}
