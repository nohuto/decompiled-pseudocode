/*
 * XREFs of ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002F568
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C002A4C8 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002BA28 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C002DB58 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C00C1D50 (xInsertMetricsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00FC984 (xInsertMetricsPlusRFONTOBJ.c)
 *     GreGetGlyphIndicesW @ 0x1C0117730 (GreGetGlyphIndicesW.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0124534 (GreGetGlyphOutlineInternal.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0265194 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02D2A3C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0027D7C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0027E40 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C002C3F8 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 */

void __fastcall RFONTOBJ::vXlatGlyphArray(
        RFONTOBJ *this,
        unsigned __int16 *a2,
        int a3,
        unsigned int *a4,
        unsigned int a5,
        int a6)
{
  _QWORD *v6; // r11
  struct _FD_GLYPHSET *v10; // rbx
  int v11; // r10d
  ULONG cRuns; // eax
  WCRUN *awcrun; // rdi
  int v14; // ebx
  unsigned int v15; // r8d
  int v16; // esi
  __int64 v17; // r10
  __int64 v18; // r11
  unsigned __int16 v19; // r9
  int v20; // ecx
  __int64 v21; // r8
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  BOOL v29; // eax
  WCRUN *v30; // r8
  unsigned int v31; // edx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned __int16 v38; // dx
  struct _FD_GLYPHSET *v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // [rsp+20h] [rbp-48h]
  __int64 *v47; // [rsp+28h] [rbp-40h] BYREF
  __int64 *v48; // [rsp+30h] [rbp-38h]
  __int64 v49; // [rsp+38h] [rbp-30h]
  RFONTOBJ *v50; // [rsp+70h] [rbp+8h] BYREF

  v50 = this;
  v6 = *(_QWORD **)this;
  v46 = 0;
  v48 = 0LL;
  v10 = (struct _FD_GLYPHSET *)v6[59];
  v11 = *(_DWORD *)(v6[14] + 8LL);
  if ( a6 && v11 && (v11 & 1) == 0 )
  {
    v48 = *(__int64 **)(v6[15] + 8LL * ((v11 - 1) & 0xFFFFFFFE) + 224);
    v47 = v48;
    if ( v48 )
    {
      v39 = PFEOBJ::pfdg(&v47);
      this = v50;
      if ( v39 )
      {
        v46 = 1;
        v10 = v39;
      }
    }
    else
    {
      this = v50;
    }
  }
  cRuns = v10->cRuns;
  if ( !cRuns )
  {
    for ( ; a3; --a3 )
    {
      *a4++ = *(_DWORD *)(*(_QWORD *)this + 456LL);
      this = v50;
    }
    return;
  }
  awcrun = v10->awcrun;
  v14 = cRuns - 1;
  if ( a5 == 1 )
    v15 = -1;
  else
    v15 = *(_DWORD *)(*(_QWORD *)this + 456LL);
  a6 = v15;
  if ( v14 > 0xFFFF )
    v14 = 0xFFFF;
  if ( (v14 & 0xF000) != 0 )
  {
    v16 = acBits[(unsigned __int8)((__int64)v14 >> 12)] + 12;
  }
  else if ( (v14 & 0xF00) != 0 )
  {
    v16 = acBits[BYTE1(v14)] + 8;
  }
  else if ( (v14 & 0xF0) != 0 )
  {
    v16 = acBits[(unsigned __int8)((__int64)v14 >> 4)] + 4;
  }
  else
  {
    v16 = acBits[v14];
  }
  v17 = *((int *)&aiStart + v16);
  LODWORD(v47) = *((_DWORD *)&aiStart + v16);
  if ( !a3 )
    goto LABEL_66;
  v18 = v17;
  v49 = v17;
  while ( 1 )
  {
    v19 = *a2;
    if ( *a2 < awcrun->wcLow )
      break;
    v20 = v17;
    v21 = v18;
    if ( v16 > 9 )
    {
      if ( v16 != 10 )
      {
        if ( v16 != 11 )
        {
          if ( v16 != 12 )
          {
            if ( v16 != 13 )
            {
              if ( v16 != 14 )
              {
                if ( v16 != 15 )
                {
                  if ( v16 != 16 )
                    goto LABEL_56;
                  if ( v19 < awcrun[v18].wcLow )
                  {
                    v40 = 0;
                    v41 = 0LL;
                  }
                  else
                  {
                    v40 = 0x8000;
                    v41 = 0x8000LL;
                  }
                  v20 = v40 + v17 - 0x4000;
                  v21 = v18 + v41 - 0x4000;
                }
                if ( v21 > v14 || v19 < awcrun[v21].wcLow )
                {
                  v43 = 0;
                  v42 = 0LL;
                }
                else
                {
                  v42 = 0x4000LL;
                  v43 = 0x4000;
                }
                v20 = v43 + v20 - 0x2000;
                v21 = v42 + v21 - 0x2000;
              }
              if ( v21 > v14 || v19 < awcrun[v21].wcLow )
                v44 = 0;
              else
                v44 = 0x2000;
              v20 = v44 + v20 - 4096;
            }
            if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
              v33 = 4096;
            else
              v33 = 0;
            v20 = v33 + v20 - 2048;
          }
          if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
            v34 = 2048;
          else
            v34 = 0;
          v20 = v34 + v20 - 1024;
        }
        if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
          v35 = 1024;
        else
          v35 = 0;
        v20 = v35 + v20 - 512;
      }
      if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
        v36 = 512;
      else
        v36 = 0;
      v20 = v36 + v20 - 256;
LABEL_100:
      if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
        v37 = 256;
      else
        v37 = 0;
      v20 = v37 + v20 - 128;
LABEL_24:
      if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
        v22 = 128;
      else
        v22 = 0;
      v20 = v22 + v20 - 64;
LABEL_28:
      if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
        v23 = 64;
      else
        v23 = 0;
      v20 = v23 + v20 - 32;
LABEL_32:
      if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
        v24 = 32;
      else
        v24 = 0;
      v20 = v24 + v20 - 16;
LABEL_36:
      if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
        v25 = 16;
      else
        v25 = 0;
      v20 = v25 + v20 - 8;
LABEL_40:
      if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
        v26 = 8;
      else
        v26 = 0;
      v20 = v26 + v20 - 4;
LABEL_44:
      if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
        v27 = 4;
      else
        v27 = 0;
      v20 = v27 + v20 - 2;
LABEL_48:
      if ( v20 <= v14 && v19 >= awcrun[v20].wcLow )
        v28 = 2;
      else
        v28 = 0;
      v20 = v28 + v20 - 1;
      goto LABEL_52;
    }
    if ( v16 == 9 )
      goto LABEL_100;
    if ( v16 != 1 )
    {
      if ( v16 != 2 )
      {
        if ( v16 != 3 )
        {
          if ( v16 != 4 )
          {
            if ( v16 != 5 )
            {
              if ( v16 != 6 )
              {
                if ( v16 != 7 )
                {
                  if ( v16 != 8 )
                    goto LABEL_56;
                  goto LABEL_24;
                }
                goto LABEL_28;
              }
              goto LABEL_32;
            }
            goto LABEL_36;
          }
          goto LABEL_40;
        }
        goto LABEL_44;
      }
      goto LABEL_48;
    }
LABEL_52:
    v29 = v20 <= v14 && v19 >= awcrun[v20].wcLow;
    v20 = v29 + v20 - 1;
LABEL_56:
    v30 = &awcrun[v20];
    v31 = v19;
    v32 = v19 - v30->wcLow;
    if ( v32 < v30->cGlyphs )
    {
      if ( v30->phg )
      {
        while ( 1 )
        {
          ++a2;
          *a4++ = v30->phg[v32];
          if ( !--a3 )
            break;
          v32 = *a2 - v30->wcLow;
          if ( v32 < 0 || v32 >= v30->cGlyphs )
            goto LABEL_61;
        }
      }
      else
      {
        while ( 1 )
        {
          *a4 = v31;
          ++a2;
          ++a4;
          if ( !--a3 )
            break;
          v31 = *a2;
          v45 = v31 - v30->wcLow;
          if ( v45 < 0 || v45 >= v30->cGlyphs )
          {
LABEL_61:
            v15 = a6;
            goto LABEL_65;
          }
        }
      }
      goto LABEL_66;
    }
    if ( a5 == 2
      || (unsigned int)RFONTOBJ::bIsLinkedGlyph(v50, v19)
      || (v38 = *a2, *(_DWORD *)(*(_QWORD *)v50 + 716LL))
      && v38 >= gqlTTSystem
      && v38 <= (unsigned __int16)word_1C032895A
      && ((0x80000000 >> ((v38 - gqlTTSystem) % 32)) & *(_DWORD *)(qword_1C0328960 + 4LL * ((v38 - gqlTTSystem) / 32))) != 0 )
    {
      *(_DWORD *)(*(_QWORD *)v50 + 720LL) |= 0x40u;
    }
    v15 = a6;
    ++a2;
    LODWORD(v17) = (_DWORD)v47;
    v18 = v49;
    *a4++ = a6;
    --a3;
LABEL_65:
    if ( !a3 )
      goto LABEL_66;
  }
  while ( 1 )
  {
    *a4 = v15;
    ++a2;
    ++a4;
    if ( !--a3 )
      break;
    if ( *a2 >= awcrun->wcLow )
      goto LABEL_65;
  }
LABEL_66:
  if ( v46 )
  {
    v50 = (RFONTOBJ *)v48;
    PFEOBJ::vFreepfdg((__int64 **)&v50);
  }
}
