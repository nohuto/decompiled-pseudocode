/*
 * XREFs of HT_Get8BPPMaskPalette @ 0x1C024DB80
 * Callers:
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C00FED38 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x1C02AF230 (NtGdiHT_Get8BPPMaskPalette.c)
 * Callees:
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     HT_Get8BPPFormatPalette @ 0x1C024DA80 (HT_Get8BPPFormatPalette.c)
 */

LONG __stdcall HT_Get8BPPMaskPalette(
        LPPALETTEENTRY pPaletteEntry,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  LPPALETTEENTRY v6; // rbx
  unsigned int v8; // ebp
  unsigned int v9; // r14d
  unsigned int v10; // edi
  unsigned int v11; // esi
  unsigned int v12; // r15d
  int v13; // r12d
  unsigned int v14; // r13d
  __int64 v15; // rdx
  unsigned int v16; // eax
  bool v17; // cf
  unsigned int v18; // r15d
  bool v19; // cf
  int v20; // r12d
  BYTE v21; // cl
  unsigned int v22; // ebp
  int v23; // eax
  bool v24; // cf
  int v25; // eax
  int v26; // edx
  unsigned int i; // r15d
  int v28; // r12d
  BYTE v29; // cl
  unsigned int v30; // ebp
  __int64 v31; // rax
  int v32; // eax
  int v33; // edx
  int v34; // eax
  __int64 v35; // rdx
  int v36; // [rsp+20h] [rbp-38h]
  unsigned int v37; // [rsp+24h] [rbp-34h]
  __int64 v38; // [rsp+28h] [rbp-30h]
  __int64 v39; // [rsp+28h] [rbp-30h]
  int v40; // [rsp+68h] [rbp+10h]
  int v41; // [rsp+68h] [rbp+10h]

  v6 = pPaletteEntry;
  if ( !Use8BPPMaskPal )
    return HT_Get8BPPFormatPalette(pPaletteEntry, RedGamma, GreenGamma, BlueGamma);
  if ( CMYMask == 1 )
  {
    v10 = 4;
    v8 = 125;
    goto LABEL_12;
  }
  if ( CMYMask == 2 )
  {
    v10 = 5;
    v8 = 216;
LABEL_12:
    v9 = v10;
    v11 = v10;
    goto LABEL_13;
  }
  v8 = 0;
  v9 = (CMYMask >> 2) & 7;
  v10 = CMYMask >> 5;
  v11 = CMYMask & 3;
  if ( CMYMask && (!v10 || !v9 || (CMYMask & 3) == 0) )
    return 0;
LABEL_13:
  if ( pPaletteEntry )
  {
    v12 = 0;
    v36 = 512;
    v13 = 1;
    if ( *pPaletteEntry == 809650002 )
    {
      v6 = pPaletteEntry + 255;
      v13 = -1;
      if ( CMYMask )
      {
        v8 = (v10 + 1) * (v9 + 1) * (v11 + 1);
        v12 = (256 - v8) >> 1;
        if ( ((((_BYTE)v10 + 1) * ((_BYTE)v9 + 1) * ((_BYTE)v11 + 1)) & 1) != 0 )
          v36 = v12 + (v8 >> 1);
      }
    }
    memset(pPaletteEntry, 0, 0x400uLL);
    v14 = 0;
    if ( v8 )
    {
      if ( v12 )
      {
        v14 = v12;
        v15 = v12;
        do
        {
          *(_WORD *)&v6->peGreen = -1;
          v6->peRed = -1;
          v6 += v13;
          --v15;
        }
        while ( v15 );
      }
      v16 = 0;
      v38 = 4LL * v13;
      v17 = v10 != 0;
      v37 = 0;
      do
      {
        if ( v17 )
          v40 = (int)(255500000 - 255 * DivFD6(v16, v10)) / 1000000;
        else
          LOBYTE(v40) = 0;
        v18 = 0;
        v19 = v9 != 0;
        do
        {
          if ( v19 )
            v20 = (int)(255500000 - 255 * DivFD6(v18, v9)) / 1000000;
          else
            LOBYTE(v20) = 0;
          v21 = v40;
          v22 = 0;
          v23 = v36;
          v24 = v11 != 0;
          do
          {
            if ( v24 )
            {
              v25 = DivFD6(v22, v11);
              v21 = v40;
              v26 = (255500000 - 255 * v25) / 1000000;
              v23 = v36;
            }
            else
            {
              LOBYTE(v26) = 0;
            }
            v6->peRed = v21;
            v6->peGreen = v20;
            v6->peBlue = v26;
            if ( v14 == v23 )
            {
              ++v14;
              v6 = (LPPALETTEENTRY)((char *)v6 + v38);
              v6->peRed = v21;
              v6->peGreen = v20;
              v6->peBlue = v26;
            }
            v6 = (LPPALETTEENTRY)((char *)v6 + v38);
            ++v22;
            ++v14;
            v24 = v22 < v11;
          }
          while ( v22 <= v11 );
          v19 = ++v18 < v9;
        }
        while ( v18 <= v9 );
        v16 = v37 + 1;
        v37 = v16;
        v17 = v16 < v10;
      }
      while ( v16 <= v10 );
    }
    else if ( v10 && v9 && v11 )
    {
      v39 = 4LL * v13;
      do
      {
        if ( v14 >= v10 )
          LOBYTE(v41) = 0;
        else
          v41 = (int)(255500000 - 255 * DivFD6(v14, v10)) / 1000000;
        for ( i = 0; i <= 7; ++i )
        {
          if ( i >= v9 )
            LOBYTE(v28) = 0;
          else
            v28 = (int)(255500000 - 255 * DivFD6(i, v9)) / 1000000;
          v29 = v41;
          v30 = 0;
          v31 = v39;
          do
          {
            if ( v30 >= v11 )
            {
              LOBYTE(v33) = 0;
            }
            else
            {
              v32 = DivFD6(v30, v11);
              v29 = v41;
              v33 = (255500000 - 255 * v32) / 1000000;
              v31 = v39;
            }
            v6->peRed = v29;
            ++v30;
            v6->peGreen = v28;
            v6->peBlue = v33;
            v6 = (LPPALETTEENTRY)((char *)v6 + v31);
          }
          while ( v30 <= 3 );
        }
        ++v14;
      }
      while ( v14 <= 7 );
    }
    else
    {
      v34 = 255;
      v35 = 256LL;
      do
      {
        v6->peBlue = v34;
        v6->peGreen = v34;
        v6->peRed = v34--;
        v6 += v13;
        --v35;
      }
      while ( v35 );
    }
  }
  return 256;
}
