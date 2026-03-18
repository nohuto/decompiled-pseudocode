/*
 * XREFs of HT_Get8BPPMaskPalette @ 0x140183780
 * Callers:
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1401831F8 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x14032F920 (NtGdiHT_Get8BPPMaskPalette.c)
 * Callees:
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     HT_Get8BPPFormatPalette @ 0x140255300 (HT_Get8BPPFormatPalette.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
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
  unsigned int v9; // edi
  unsigned int v10; // r14d
  unsigned int v11; // esi
  unsigned int v12; // r15d
  int v13; // r12d
  __int64 v14; // rcx
  unsigned int v15; // r12d
  bool v16; // cf
  unsigned int v17; // r15d
  bool v18; // cf
  int v19; // r13d
  BYTE v20; // cl
  unsigned int v21; // ebp
  int v22; // eax
  bool v23; // cf
  unsigned int v24; // r8d
  int v25; // eax
  int v26; // edx
  __int64 v27; // r9
  unsigned int v28; // r13d
  unsigned int i; // ebp
  int v30; // r12d
  BYTE v31; // cl
  unsigned int v32; // r15d
  __int64 v33; // rax
  int v34; // eax
  int v35; // edx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // [rsp+20h] [rbp-48h]
  int v39; // [rsp+24h] [rbp-44h]
  unsigned int v40; // [rsp+28h] [rbp-40h]
  __int64 v41; // [rsp+30h] [rbp-38h]
  __int64 v42; // [rsp+30h] [rbp-38h]
  unsigned int v43; // [rsp+78h] [rbp+10h]
  int v44; // [rsp+78h] [rbp+10h]

  v6 = pPaletteEntry;
  if ( !Use8BPPMaskPal )
    return HT_Get8BPPFormatPalette(pPaletteEntry, RedGamma, GreenGamma, BlueGamma);
  if ( CMYMask == 1 )
  {
    v9 = 4;
    v8 = 125;
    goto LABEL_12;
  }
  if ( CMYMask == 2 )
  {
    v9 = 5;
    v8 = 216;
LABEL_12:
    v10 = v9;
    v40 = v9;
    v11 = v9;
    goto LABEL_13;
  }
  v8 = 0;
  v9 = CMYMask >> 5;
  v10 = (CMYMask >> 2) & 7;
  v11 = CMYMask & 3;
  v40 = v9;
  if ( CMYMask && (!v9 || !v10 || (CMYMask & 3) == 0) )
    return 0;
LABEL_13:
  if ( pPaletteEntry )
  {
    v12 = 0;
    v39 = 512;
    v13 = 1;
    if ( *pPaletteEntry == 809650002 )
    {
      v6 = pPaletteEntry + 255;
      v13 = -1;
      if ( CMYMask )
      {
        v8 = (v9 + 1) * (v10 + 1) * (v11 + 1);
        v12 = (256 - v8) >> 1;
        if ( ((((_BYTE)v9 + 1) * ((_BYTE)v10 + 1) * ((_BYTE)v11 + 1)) & 1) != 0 )
          v39 = v12 + (v8 >> 1);
      }
    }
    memset_0(pPaletteEntry, 0, 0x400uLL);
    v43 = 0;
    if ( v8 )
    {
      v41 = v13;
      if ( v12 )
      {
        v14 = v12;
        v43 = v12;
        do
        {
          *(_WORD *)&v6->peGreen = -1;
          v6->peRed = -1;
          v6 += v13;
          --v14;
        }
        while ( v14 );
      }
      else
      {
        v41 = v13;
      }
      v15 = 0;
      v16 = v9 != 0;
      do
      {
        if ( v16 )
          v38 = (int)(255500000 - 255 * DivFD6(v15, v9)) / 1000000;
        else
          LOBYTE(v38) = 0;
        v17 = 0;
        v18 = v10 != 0;
        do
        {
          if ( v18 )
            v19 = (int)(255500000 - 255 * DivFD6(v17, v10)) / 1000000;
          else
            LOBYTE(v19) = 0;
          v20 = v38;
          v21 = 0;
          v22 = v39;
          v23 = v11 != 0;
          v24 = v43;
          do
          {
            if ( v23 )
            {
              v25 = DivFD6(v21, v11);
              v24 = v43;
              v20 = v38;
              v26 = (255500000 - 255 * v25) / 1000000;
              v22 = v39;
            }
            else
            {
              LOBYTE(v26) = 0;
            }
            v6->peRed = v20;
            v27 = 4 * v41;
            v6->peGreen = v19;
            v6->peBlue = v26;
            if ( v24 == v22 )
            {
              ++v24;
              v6 = (LPPALETTEENTRY)((char *)v6 + v27);
              v6->peRed = v20;
              v6->peGreen = v19;
              v6->peBlue = v26;
            }
            ++v24;
            ++v21;
            v6 = (LPPALETTEENTRY)((char *)v6 + v27);
            v43 = v24;
            v23 = v21 < v11;
          }
          while ( v21 <= v11 );
          v18 = ++v17 < v10;
        }
        while ( v17 <= v10 );
        v9 = v40;
        v16 = ++v15 < v40;
      }
      while ( v15 <= v40 );
    }
    else if ( v9 && v10 && v11 )
    {
      v28 = 0;
      v42 = 4LL * v13;
      do
      {
        if ( v28 >= v9 )
          LOBYTE(v44) = 0;
        else
          v44 = (int)(255500000 - 255 * DivFD6(v28, v9)) / 1000000;
        for ( i = 0; i <= 7; ++i )
        {
          if ( i >= v10 )
            LOBYTE(v30) = 0;
          else
            v30 = (int)(255500000 - 255 * DivFD6(i, v10)) / 1000000;
          v31 = v44;
          v32 = 0;
          v33 = v42;
          do
          {
            if ( v32 >= v11 )
            {
              LOBYTE(v35) = 0;
            }
            else
            {
              v34 = DivFD6(v32, v11);
              v31 = v44;
              v35 = (255500000 - 255 * v34) / 1000000;
              v33 = v42;
            }
            v6->peRed = v31;
            ++v32;
            v6->peGreen = v30;
            v6->peBlue = v35;
            v6 = (LPPALETTEENTRY)((char *)v6 + v33);
          }
          while ( v32 <= 3 );
        }
        ++v28;
      }
      while ( v28 <= 7 );
    }
    else
    {
      v36 = 255;
      v37 = 256LL;
      do
      {
        v6->peBlue = v36;
        v6->peGreen = v36;
        v6->peRed = v36--;
        v6 += v13;
        --v37;
      }
      while ( v37 );
    }
  }
  return 256;
}
