/*
 * XREFs of ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C012D2F4
 * Callers:
 *     ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C002DE58 (-bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0032270 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C02B8A2C (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C02B8D94 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ??$SafeDivide@JJJ@@YAJJJPEAJ@Z @ 0x1C012683C (--$SafeDivide@JJJ@@YAJJJPEAJ@Z.c)
 */

bool __fastcall bCalcBreakExtra(int a1, int a2, int a3)
{
  bool result; // al
  int *v5; // r11
  int v6; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  if ( a2 )
  {
    v6 = 0;
    bFToL((float)a2 * *(float *)&a1, &v6, 0);
    if ( !(unsigned int)SafeDivide<long,long,long>(v6, a3, v5) )
      return 1;
  }
  return result;
}
