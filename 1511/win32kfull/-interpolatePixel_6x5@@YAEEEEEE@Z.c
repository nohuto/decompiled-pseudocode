/*
 * XREFs of ?interpolatePixel_6x5@@YAEEEEEE@Z @ 0x1C0153234
 * Callers:
 *     ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C0264384 (-ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall interpolatePixel_6x5(
        unsigned __int8 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  int v5; // eax

  v5 = *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
       + 4
       * (unsigned int)(*((_DWORD *)&g_xTimes04 + *((unsigned __int8 *)off_1C031B228 + 4 * a1 + 2))
                      + *((_DWORD *)&g_xTimes09 + *((unsigned __int8 *)off_1C031B228 + 4 * a2 + 2))
                      + *((_DWORD *)&g_xTimes10 + *((unsigned __int8 *)off_1C031B228 + 4 * a3 + 2))
                      + *((_DWORD *)&g_xTimes09 + *((unsigned __int8 *)off_1C031B228 + 4 * a4 + 2))
                      + *((_DWORD *)&g_xTimes04 + *((unsigned __int8 *)off_1C031B228 + 4 * a5 + 2))));
  return gajStorage1[49
                   * *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                     + 4
                     * (unsigned int)(*((_DWORD *)&g_xTimes04 + *((unsigned __int8 *)off_1C031B228 + 4 * a5))
                                    + *((_DWORD *)&g_xTimes04 + *((unsigned __int8 *)off_1C031B228 + 4 * a1))
                                    + *((_DWORD *)&g_xTimes09 + *((unsigned __int8 *)off_1C031B228 + 4 * a4))
                                    + *((_DWORD *)&g_xTimes09 + *((unsigned __int8 *)off_1C031B228 + 4 * a2))
                                    + *((_DWORD *)&g_xTimes10 + *((unsigned __int8 *)off_1C031B228 + 4 * a3))))
                   + 7
                   * *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                     + 4
                     * (unsigned int)(*((_DWORD *)&g_xTimes04 + *((unsigned __int8 *)off_1C031B228 + 4 * a1 + 1))
                                    + *((_DWORD *)&g_xTimes09 + *((unsigned __int8 *)off_1C031B228 + 4 * a2 + 1))
                                    + *((_DWORD *)&g_xTimes10 + *((unsigned __int8 *)off_1C031B228 + 4 * a3 + 1))
                                    + *((_DWORD *)&g_xTimes09 + *((unsigned __int8 *)off_1C031B228 + 4 * a4 + 1))
                                    + *((_DWORD *)&g_xTimes04 + *((unsigned __int8 *)off_1C031B228 + 4 * a5 + 1))))
                   + v5];
}
