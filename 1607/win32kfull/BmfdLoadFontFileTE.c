/*
 * XREFs of BmfdLoadFontFileTE @ 0x1C01299F0
 * Callers:
 *     <none>
 * Callees:
 *     bBmfdLoadFont @ 0x1C001F2CC (bBmfdLoadFont.c)
 *     bLoadNtFon @ 0x1C01584F0 (bLoadNtFon.c)
 */

PVOID __fastcall BmfdLoadFontFileTE(int a1, __int64 *a2, __int64 *a3, unsigned int *a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // esi
  PVOID pv[3]; // [rsp+30h] [rbp-18h] BYREF

  pv[0] = 0LL;
  if ( a1 != 1 || a5 )
    return 0LL;
  v5 = *a2;
  v6 = *a3;
  v7 = *a4;
  if ( !(unsigned int)bBmfdLoadFont(*a2, *a3, *a4, 2, pv) && !(unsigned int)bBmfdLoadFont(v5, v6, v7, 1, pv) )
    bLoadNtFon(v5, v6, pv);
  return pv[0];
}
