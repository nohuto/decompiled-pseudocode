/*
 * XREFs of ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@IIII@Z @ 0x1C0076514
 * Callers:
 *     ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C000B3E4 (-CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     ?CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C0076564 (-CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z.c)
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
