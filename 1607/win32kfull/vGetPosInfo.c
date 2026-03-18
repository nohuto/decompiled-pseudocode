/*
 * XREFs of vGetPosInfo @ 0x1C02B9A8C
 * Callers:
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C000AC70 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     ?bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z @ 0x1C000AD74 (-bGlyphOutOfBounds@@YAHPEAVESTROBJ@@PEAU_GLYPHPOS@@PEAU_RECTL@@K@Z.c)
 *     STROBJ_bEnum @ 0x1C01288F0 (STROBJ_bEnum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vGetPosInfo(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 64) & 0x100) != 0 )
    *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 16LL) + 16 * a2 * *(_DWORD *)(a1 + 8);
  else
    *a3 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 16LL) + a2 * *(_DWORD *)(a1 + 8);
  result = *(_QWORD *)(a1 + 72);
  a3[1] = *(_DWORD *)(result + 20);
  return result;
}
