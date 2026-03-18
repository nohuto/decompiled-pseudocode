/*
 * XREFs of ?interpolatePixel_6x5@@YAEEEEEE@Z @ 0x1C015A914
 * Callers:
 *     ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C0261F40 (-ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
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
       * (unsigned int)(*((_DWORD *)&g_xTimes04 + BYTE2(off_1C0320110[a1]))
                      + *((_DWORD *)&g_xTimes09 + BYTE2(off_1C0320110[a2]))
                      + *((_DWORD *)&g_xTimes10 + BYTE2(off_1C0320110[a3]))
                      + *((_DWORD *)&g_xTimes09 + BYTE2(off_1C0320110[a4]))
                      + *((_DWORD *)&g_xTimes04 + BYTE2(off_1C0320110[a5]))));
  return gajStorage1[49
                   * *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                     + 4
                     * (unsigned int)(*((_DWORD *)&g_xTimes04 + LOBYTE(off_1C0320110[a5]))
                                    + *((_DWORD *)&g_xTimes04 + LOBYTE(off_1C0320110[a1]))
                                    + *((_DWORD *)&g_xTimes09 + LOBYTE(off_1C0320110[a4]))
                                    + *((_DWORD *)&g_xTimes09 + LOBYTE(off_1C0320110[a2]))
                                    + *((_DWORD *)&g_xTimes10 + LOBYTE(off_1C0320110[a3]))))
                   + 7
                   * *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                     + 4
                     * (unsigned int)(*((_DWORD *)&g_xTimes04 + BYTE1(off_1C0320110[a1]))
                                    + *((_DWORD *)&g_xTimes09 + BYTE1(off_1C0320110[a2]))
                                    + *((_DWORD *)&g_xTimes10 + BYTE1(off_1C0320110[a3]))
                                    + *((_DWORD *)&g_xTimes09 + BYTE1(off_1C0320110[a4]))
                                    + *((_DWORD *)&g_xTimes04 + BYTE1(off_1C0320110[a5]))))
                   + v5];
}
