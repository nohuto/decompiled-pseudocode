/*
 * XREFs of ?CitpBitmapUpdateForTimeRange@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C0007504
 * Callers:
 *     CitDisplayRequestChange @ 0x1C000735C (CitDisplayRequestChange.c)
 *     CitDisplayPowerChange @ 0x1C006A880 (CitDisplayPowerChange.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0070DA4 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 * Callees:
 *     ?CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z @ 0x1C000755C (-CitpBitmapUpdateBits@@YAXPEAU_CIT_BITMAP@@II@Z.c)
 */

void __fastcall CitpBitmapUpdateForTimeRange(struct _CIT_BITMAP *a1, int a2, int a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // eax
  unsigned int v5; // edx

  if ( *((_QWORD *)a1 + 1) )
  {
    v3 = (a2 - dword_1C0101FF0) / (unsigned int)dword_1C0101FB0;
    v4 = (a3 - dword_1C0101FF0) / (unsigned int)dword_1C0101FB0;
    v5 = 8 * *((_DWORD *)a1 + 2);
    if ( v4 >= v5 )
      v4 = v5 - 1;
    if ( v3 > v4 )
      v3 = v4;
    CitpBitmapUpdateBits(a1, v3, v4);
  }
}
