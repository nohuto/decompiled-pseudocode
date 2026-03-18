/*
 * XREFs of ?vInit@EPATHFONTOBJ@@QEAAXK@Z @ 0x1C015DACC
 * Callers:
 *     ?bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C02CEA3C (-bInsertGlyphbitsPath@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02CEB50 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z @ 0x1C02CED3C (-bInsertPathLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ?vInitPreCompute@EPATHOBJ@@QEAAXXZ @ 0x1C015DB50 (-vInitPreCompute@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall EPATHFONTOBJ::vInit(EPATHFONTOBJ *this, int a2)
{
  EPATHOBJ::vInitPreCompute(this);
  *((_QWORD *)this + 1) = (char *)this + 88;
  *((_QWORD *)this + 14) = (char *)this + 416;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = (char *)this + 440;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 108) = a2 - 416;
  *((_DWORD *)this + 40) = 1;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 44) = 1;
  *(_QWORD *)this = 0LL;
}
