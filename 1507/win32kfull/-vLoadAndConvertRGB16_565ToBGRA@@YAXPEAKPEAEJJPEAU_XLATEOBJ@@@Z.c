/*
 * XREFs of ?vLoadAndConvertRGB16_565ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02BDF20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvertRGB16_565ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // ebx
  unsigned __int64 v6; // r11
  unsigned int v7; // ecx
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r10
  int v11; // r8d
  int v12; // eax
  unsigned int v13; // edx
  int v14; // r9d

  v4 = a4;
  v6 = (unsigned __int64)&a2[2 * a3];
  if ( (v6 & 2) != 0 )
  {
    v7 = *(unsigned __int16 *)v6;
    v6 += 2LL;
    *a1++ = ((v7 & 0x600 | (v7 >> 1) & 0xE) >> 1) | (8
                                                   * (v7 & 0xE01F | (4 * (v7 & 0x7E0 | (8 * (v7 & 0xF800 | 0xFFFF0000))))));
    v4 = a4 - 1;
  }
  v8 = 0LL;
  v9 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  v10 = (2 * v9 + 3) >> 2;
  if ( v6 > v6 + 2 * v9 )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = *(_DWORD *)v6;
      ++v8;
      v12 = *(_DWORD *)v6 & 0x7E0;
      v13 = *(_DWORD *)v6 & 0xF800 | 0xFFFF0000;
      v14 = *(_DWORD *)v6 >> 1;
      v6 += 4LL;
      *a1 = ((v11 & 0x600 | v14 & 0xEu) >> 1) | (8 * (v11 & 0xE01F | (4 * (v12 | (8 * v13)))));
      a1[1] = ((v11 & 0xF80000FF | ((v11 & 0x7E00000 | ((v11 & 0xE01F1FFF | ((v11 & 0x6000000 | v14 & 0xE0000u) >> 4)) >> 2)) >> 3)) >> 8) | 0xFF000000;
      a1 += 2;
    }
    while ( v8 != v10 );
  }
  if ( (v4 & 1) != 0 )
    *a1 = ((*(_WORD *)v6 & 0x600 | (*(unsigned __int16 *)v6 >> 1) & 0xEu) >> 1) | (8
                                                                                 * (*(_WORD *)v6 & 0xE01F | (4 * (*(_WORD *)v6 & 0x7E0 | (8 * (*(_WORD *)v6 & 0xF800 | 0xFFFF0000))))));
}
