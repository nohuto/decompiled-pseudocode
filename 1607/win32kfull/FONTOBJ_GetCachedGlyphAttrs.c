/*
 * XREFs of FONTOBJ_GetCachedGlyphAttrs @ 0x1C029B630
 * Callers:
 *     UmfdDestroyFont @ 0x1C02D8FC0 (UmfdDestroyFont.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02D97A0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall FONTOBJ_GetCachedGlyphAttrs(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = *(_QWORD *)(a1 + 8LL * a2 + 904);
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
