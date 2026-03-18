/*
 * XREFs of FONTOBJ_SetCachedGlyphAttrs @ 0x1C029B7A8
 * Callers:
 *     UmfdDestroyFont @ 0x1C02D5F20 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02D66F0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall FONTOBJ_SetCachedGlyphAttrs(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  *(_QWORD *)(a1 + 8LL * a2 + 896) = a3;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
}
