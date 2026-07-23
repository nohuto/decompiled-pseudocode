/*
 * XREFs of FadePalette @ 0x1401C36A8
 * Callers:
 *     RotBarUpdate @ 0x1401C387C (RotBarUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FadePalette(unsigned __int8 a1)
{
  signed __int64 v1; // r8
  int v2; // r11d
  __int64 v3; // rbx
  signed __int64 v4; // r9
  char *v5; // r10
  int v6; // ecx
  __int64 result; // rax

  v1 = &MainPalette - PalettePtr;
  v2 = a1;
  v3 = 16LL;
  v4 = &unk_1402F8E51 - PalettePtr;
  v5 = (char *)PalettePtr + 2;
  do
  {
    *(v5 - 2) = (char)(v2 * v5[v1 - 2]) / 20;
    *(v5 - 1) = (char)(v2 * v5[v4 - 2]) / 20;
    v6 = v2 * (unsigned __int8)v5[v1];
    v5[1] = 0;
    result = (unsigned int)((unsigned __int64)(1717986919LL * v6) >> 32) >> 31;
    *v5 = v6 / 20;
    v5 += 4;
    --v3;
  }
  while ( v3 );
  return result;
}
