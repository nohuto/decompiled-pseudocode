/*
 * XREFs of ?IsValidFONTSIM@@YA_NPEBXKJ@Z @ 0x1C029BA90
 * Callers:
 *     ?IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z @ 0x1C029BB00 (-IsValidIFIMETRICS@@YA_NPEBU_IFIMETRICS@@K@Z.c)
 * Callees:
 *     ?IsValidFONTDIFF@@YA_NPEBXKJ@Z @ 0x1C029BA5C (-IsValidFONTDIFF@@YA_NPEBXKJ@Z.c)
 */

bool __fastcall IsValidFONTSIM(char *a1, unsigned int a2, int a3)
{
  int *v4; // r10
  unsigned int v5; // edx
  __int64 v6; // r10
  const void *v7; // r11
  unsigned int v8; // edx
  __int64 v9; // r10
  const void *v10; // r11

  if ( !a3 )
    return 1;
  if ( a3 > 0 && a3 < a2 && a2 > 0xC && (unsigned int)a3 < (unsigned __int64)a2 - 12 )
  {
    v4 = (int *)&a1[a3];
    if ( ((unsigned __int8)v4 & 3) == 0 && IsValidFONTDIFF(a1, a2, *v4) && IsValidFONTDIFF(v7, v5, *(_DWORD *)(v6 + 4)) )
      return IsValidFONTDIFF(v10, v8, *(_DWORD *)(v9 + 8));
  }
  return 0;
}
