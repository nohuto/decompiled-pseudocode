/*
 * XREFs of ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C000FE34
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C00711A0 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 * Callees:
 *     ?CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C000FE84 (-CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 */

void __fastcall CitpBitmapUpdateForTimeRange(struct _CIT_BITMAP *a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx

  if ( *((_QWORD *)a1 + 1) )
  {
    v6 = (a2 - a4) / a5;
    v7 = (a3 - a4) / a5;
    v8 = 8 * *((_DWORD *)a1 + 2);
    if ( v7 >= v8 )
      v7 = v8 - 1;
    if ( v6 > v7 )
      v6 = v7;
    CitpBitmapUpdateBits(a1, v6, v7);
  }
}
