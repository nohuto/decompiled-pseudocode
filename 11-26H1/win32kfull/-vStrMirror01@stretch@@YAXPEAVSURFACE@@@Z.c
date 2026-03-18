/*
 * XREFs of ?vStrMirror01@stretch@@YAXPEAVSURFACE@@@Z @ 0x1401B7E00
 * Callers:
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1400E6B88 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x14016C510 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x140266E6C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

void __fastcall stretch::vStrMirror01(unsigned int **this, struct SURFACE *a2)
{
  stretch *v2; // rbp
  unsigned int *v3; // r13
  int v4; // edx
  int v5; // r8d
  unsigned int v6; // r15d
  int v7; // ebx
  int v8; // r12d
  int v9; // edi
  unsigned int *v10; // r14
  int *v11; // rsi
  int v12; // eax
  __int64 v13; // r13
  __int64 v14; // rbp
  int v15; // edx
  int v16; // r10d
  unsigned int v17; // r11d
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  int v22; // [rsp+0h] [rbp-68h]
  __int64 v23; // [rsp+8h] [rbp-60h]
  unsigned int *v24; // [rsp+10h] [rbp-58h]
  int v25; // [rsp+78h] [rbp+10h]
  int v26; // [rsp+80h] [rbp+18h]
  int v27; // [rsp+88h] [rbp+20h]

  v2 = (stretch *)this;
  v3 = this[10];
  v24 = v3;
  v4 = 0;
  v5 = *((_DWORD *)this + 14) / 2;
  v22 = v5;
  v27 = 0;
  if ( *((int *)this + 15) > 0 )
  {
    do
    {
      v6 = *v3;
      v26 = 0;
      v7 = (*((_DWORD *)v2 + 14) - 1) >> 5;
      v8 = 0;
      v9 = (*((_DWORD *)v2 + 14) - 1) & 0x1F;
      v10 = v3;
      v11 = (int *)&v3[v7];
      v12 = *v11;
      v25 = *v11;
      if ( v5 > 0 )
      {
        v13 = 0LL;
        v23 = (unsigned int)v5;
        v14 = (unsigned int)v9;
        do
        {
          if ( v8 == v7 )
          {
            v18 = dword_140361820[v13];
            v19 = dword_140370EA0[v13];
            v20 = v6 & ~v18 | ((v6 & dword_140361820[v14]) >> dword_140370EA0[v14] << v19);
            v21 = (v6 & v18) >> v19;
            v12 = v25;
            v6 = (v21 << dword_140370EA0[v14]) | ~dword_140361820[v14] & v20;
          }
          else
          {
            v15 = dword_140370EA0[v13];
            v16 = dword_140361820[v14];
            v17 = (v6 & dword_140361820[v13]) >> v15 << dword_140370EA0[v14];
            v6 = v6 & ~dword_140361820[v13] | ((v25 & (unsigned int)v16) >> dword_140370EA0[v14] << v15);
            v12 = v17 | v25 & ~v16;
            v25 = v12;
          }
          ++v13;
          --v9;
          --v14;
          if ( (++v26 & 0x20) != 0 )
          {
            *v10 = v6;
            ++v8;
            ++v10;
            if ( v8 == v7 )
              *v11 = v12;
            v6 = *v10;
            v26 = 0;
            v13 = 0LL;
          }
          if ( v9 < 0 )
          {
            *v11 = v12;
            --v7;
            --v11;
            if ( v7 == v8 )
            {
              *v10 = v6;
            }
            else
            {
              v12 = *v11;
              v25 = *v11;
            }
            v9 = 31;
            v14 = 31LL;
          }
          --v23;
        }
        while ( v23 );
        v2 = (stretch *)this;
        v3 = v24;
        v4 = v27;
        v5 = v22;
      }
      *v10 = v6;
      if ( v8 != v7 )
        *v11 = v12;
      ++v4;
      v3 = (unsigned int *)((char *)v3 + *((int *)v2 + 22));
      v27 = v4;
      v24 = v3;
    }
    while ( v4 < *((_DWORD *)v2 + 15) );
  }
}
