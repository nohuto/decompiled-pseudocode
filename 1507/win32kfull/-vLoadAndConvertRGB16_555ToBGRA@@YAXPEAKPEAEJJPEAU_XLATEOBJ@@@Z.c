/*
 * XREFs of ?vLoadAndConvertRGB16_555ToBGRA@@YAXPEAKPEAEJJPEAU_XLATEOBJ@@@Z @ 0x1C02BDD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLoadAndConvertRGB16_555ToBGRA(unsigned int *a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned __int64 v5; // r10
  unsigned int v6; // ecx
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned int v10; // edx
  int v11; // eax
  unsigned int v12; // ecx

  v5 = (unsigned __int64)&a2[2 * a3];
  if ( (v5 & 2) != 0 )
  {
    v6 = *(unsigned __int16 *)v5;
    v5 += 2LL;
    *a1++ = (v6 >> 2) & 7 | (2
                           * (v6 & 0x380 | (4
                                          * (v6 & 0x1F | (2
                                                        * (v6 & 0x7000 | (4
                                                                        * (v6 & 0x3E0 | (8 * (v6 & 0xFC00 | 0xFFFF8000))))))))));
    --a4;
  }
  v7 = 0LL;
  v8 = a4 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = (2 * v8 + 3) >> 2;
  if ( v5 > v5 + 2 * v8 )
    v9 = 0LL;
  if ( v9 )
  {
    do
    {
      v10 = *(_DWORD *)v5;
      ++v7;
      v11 = *(_DWORD *)v5 & 0x3E0;
      v12 = *(_DWORD *)v5 & 0x7C00 | 0xFFFF8000;
      v5 += 4LL;
      *a1 = (v10 >> 2) & 7 | (2 * (v10 & 0x380 | (4 * (v10 & 0x1F | (2 * (v10 & 0x7000 | (4 * (v11 | (8 * v12)))))))));
      a1[1] = ((v10 & 0xFC00007F | ((v10 & 0x3E00000 | ((v10 & 0x70000000 | ((v10 & 0x1F0000 | ((v10 & 0x3800000 | (v10 >> 3) & 0x38000) >> 2)) >> 1)) >> 2)) >> 3)) >> 7) | 0xFF000000;
      a1 += 2;
    }
    while ( v7 != v9 );
  }
  if ( (a4 & 1) != 0 )
    *a1 = (*(unsigned __int16 *)v5 >> 2) & 7 | (2
                                              * (*(_WORD *)v5 & 0x380 | (4
                                                                       * (*(_WORD *)v5 & 0x1F | (2
                                                                                               * (*(_WORD *)v5 & 0x7000 | (4 * (*(_WORD *)v5 & 0x3E0 | (8 * (*(_WORD *)v5 & 0xFC00 | 0xFFFF8000))))))))));
}
