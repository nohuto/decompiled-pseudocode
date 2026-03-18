/*
 * XREFs of ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400FBC50
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1400C0964 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1400C21D8 (xInsertMetricsRFONTOBJ.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z @ 0x1400FA384 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVDCOBJ@@KPEAGK1@Z.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1400FB968 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z @ 0x14010CB48 (-GrepGetGlyphOutline@@YAKAEAVDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@H@Z.c)
 *     ?DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z @ 0x14016DFD0 (-DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z.c)
 *     ?GrepGetGlyphIndicesW@@YA?AV?$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z @ 0x1401835D8 (-GrepGetGlyphIndicesW@@YA-AV-$ReturnValueTracer@K@@AEAVDCOBJ@@PEBGKPEAGKH@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x140183B5C (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z @ 0x1400F9B8C (-bIsSystemTTGlyph@RFONTOBJ@@QEBAHG@Z.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1400FAC2C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140101C04 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x140101DB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 */

void __fastcall RFONTOBJ::vXlatGlyphArray(RFONTOBJ *this, WCHAR *a2, int a3, unsigned int *a4, unsigned int a5, int a6)
{
  __int64 v6; // r10
  RFONTOBJ *v7; // r11
  int v9; // r9d
  RFONTOBJ *v11; // r8
  struct _FD_GLYPHSET *v13; // rbx
  int v14; // ecx
  ULONG cRuns; // edx
  int v16; // edx
  WCRUN *awcrun; // r14
  unsigned int v18; // r13d
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r10
  __int64 v23; // r11
  int v24; // r9d
  int v25; // eax
  __int64 v26; // r8
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  WCRUN *v35; // r8
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  __int64 v42; // r8
  unsigned __int16 wcLow; // cx
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rdx
  int v47; // ecx
  __int64 v48; // r8
  struct _FD_GLYPHSET *v49; // rax
  int v50; // ecx
  int v51; // [rsp+20h] [rbp-48h]
  RFONTOBJ *v52; // [rsp+28h] [rbp-40h]
  __int64 v53; // [rsp+30h] [rbp-38h] BYREF
  __int64 v54; // [rsp+38h] [rbp-30h]
  RFONTOBJ *v55; // [rsp+70h] [rbp+8h] BYREF

  v55 = this;
  v6 = *(_QWORD *)this;
  v7 = 0LL;
  v52 = 0LL;
  v9 = 0;
  v11 = this;
  v13 = *(struct _FD_GLYPHSET **)(*(_QWORD *)this + 472LL);
  v51 = 0;
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 8LL);
  if ( a6 )
  {
    if ( v14 )
    {
      if ( (v14 & 1) == 0 )
      {
        v7 = *(RFONTOBJ **)(*(_QWORD *)(v6 + 128) + 8LL * ((v14 - 1) & 0xFFFFFFFE) + 224);
        v52 = v7;
        v53 = (__int64)v7;
        if ( v7 )
        {
          v49 = PFEOBJ::pfdg((PFEOBJ *)&v53);
          v11 = v55;
          v7 = v52;
          if ( v49 )
          {
            v9 = 1;
            v13 = v49;
            v51 = 1;
          }
          else
          {
            v9 = 0;
          }
        }
      }
    }
  }
  cRuns = v13->cRuns;
  if ( !cRuns )
  {
    for ( ; a3; --a3 )
      *a4++ = *(_DWORD *)(*(_QWORD *)v11 + 456LL);
    return;
  }
  v16 = cRuns - 1;
  awcrun = v13->awcrun;
  if ( a5 == 1 )
    v18 = -1;
  else
    v18 = *(_DWORD *)(*(_QWORD *)v11 + 456LL);
  v19 = 0xFFFF;
  if ( v16 <= 0xFFFF )
  {
    v20 = v16;
    v19 = v16;
    v53 = v16;
    if ( (v16 & 0xF000) == 0 )
    {
      if ( (v16 & 0xF00) != 0 )
      {
        v21 = (unsigned int)acBits[BYTE1(v16)] + 8;
      }
      else if ( (v16 & 0xF0) != 0 )
      {
        v21 = (unsigned int)acBits[(unsigned __int8)((__int64)v16 >> 4)] + 4;
      }
      else
      {
        v21 = acBits[v16];
      }
      goto LABEL_8;
    }
  }
  else
  {
    v20 = 0xFFFFLL;
    v53 = 0xFFFFLL;
  }
  v21 = (unsigned int)acBits[(unsigned __int8)(v20 >> 12)] + 12;
LABEL_8:
  v22 = *((int *)&aiStart + v21);
  a6 = *((_DWORD *)&aiStart + v21);
  if ( a3 )
  {
    v23 = v22;
    v54 = v22;
LABEL_10:
    while ( 1 )
    {
      v24 = *a2;
      if ( (unsigned __int16)v24 < awcrun->wcLow )
        break;
      v25 = v22;
      v26 = v23;
      if ( (_DWORD)v21 != 8 )
      {
        if ( (_DWORD)v21 != 13 )
        {
          switch ( (int)v21 )
          {
            case 1:
              goto LABEL_46;
            case 2:
              goto LABEL_42;
            case 3:
              goto LABEL_37;
            case 4:
              goto LABEL_32;
            case 5:
              goto LABEL_27;
            case 6:
              goto LABEL_22;
            case 7:
              goto LABEL_17;
            case 9:
              goto LABEL_70;
            case 10:
              goto LABEL_67;
            case 11:
              goto LABEL_64;
            case 12:
              goto LABEL_61;
            case 14:
              goto LABEL_88;
            case 15:
              goto LABEL_84;
            case 16:
              v42 = 0x4000LL;
              wcLow = awcrun[v23].wcLow;
              v44 = 0x4000;
              if ( (unsigned __int16)v24 < wcLow )
                v44 = -16384;
              v25 = v22 + v44;
              if ( (unsigned __int16)v24 < wcLow )
                v42 = -16384LL;
              v26 = v23 + v42;
LABEL_84:
              if ( v26 > v53 || (unsigned __int16)v24 < awcrun[v26].wcLow )
              {
                v45 = -8192;
                v46 = -8192LL;
              }
              else
              {
                v45 = 0x2000;
                v46 = 0x2000LL;
              }
              v25 += v45;
              v26 += v46;
LABEL_88:
              if ( v26 > v53 || (unsigned __int16)v24 < awcrun[v26].wcLow )
                v47 = -4096;
              else
                v47 = 4096;
              v25 += v47;
              break;
            default:
              goto LABEL_50;
          }
        }
        if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
          v37 = -2048;
        else
          v37 = 2048;
        v25 += v37;
LABEL_61:
        if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
          v38 = -1024;
        else
          v38 = 1024;
        v25 += v38;
LABEL_64:
        if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
          v39 = -512;
        else
          v39 = 512;
        v25 += v39;
LABEL_67:
        if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
          v40 = -256;
        else
          v40 = 256;
        v25 += v40;
LABEL_70:
        if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
          v41 = -128;
        else
          v41 = 128;
        v25 += v41;
      }
      if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
        v27 = -64;
      else
        v27 = 64;
      v25 += v27;
LABEL_17:
      if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
        v28 = -32;
      else
        v28 = 32;
      v25 += v28;
LABEL_22:
      if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
        v29 = -16;
      else
        v29 = 16;
      v25 += v29;
LABEL_27:
      if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
        v30 = -8;
      else
        v30 = 8;
      v25 += v30;
LABEL_32:
      if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
        v31 = -4;
      else
        v31 = 4;
      v25 += v31;
LABEL_37:
      if ( v25 > v19 || (unsigned __int16)v24 < awcrun[v25].wcLow )
        v32 = -2;
      else
        v32 = 2;
      v25 += v32;
LABEL_42:
      if ( v25 > v19 || (v33 = 1, (unsigned __int16)v24 < awcrun[v25].wcLow) )
        v33 = -1;
      v25 += v33;
LABEL_46:
      if ( v25 <= v19 && (unsigned __int16)v24 >= awcrun[v25].wcLow )
        v34 = 0;
      else
        v34 = -1;
      v25 += v34;
LABEL_50:
      v35 = &awcrun[v25];
      v36 = v24 - v35->wcLow;
      if ( v36 < v35->cGlyphs )
      {
        if ( v35->phg )
        {
          while ( 1 )
          {
            ++a2;
            *a4++ = v35->phg[v36];
            if ( !--a3 )
              break;
            v36 = *a2 - v35->wcLow;
            if ( v36 < 0 || v36 >= v35->cGlyphs )
              goto LABEL_10;
          }
        }
        else
        {
          while ( 1 )
          {
            ++a2;
            *a4++ = (unsigned __int16)v24;
            if ( !--a3 )
              break;
            v50 = *a2 - v35->wcLow;
            if ( v50 >= 0 )
            {
              LOWORD(v24) = *a2;
              if ( v50 < v35->cGlyphs )
                continue;
            }
            goto LABEL_10;
          }
        }
        goto LABEL_95;
      }
      if ( a5 == 2
        || (unsigned int)RFONTOBJ::bIsLinkedGlyph(v55, (unsigned __int16)v24, (__int64)v35)
        || (unsigned int)RFONTOBJ::bIsSystemTTGlyph(v55, *a2, v48) )
      {
        *(_DWORD *)(*(_QWORD *)v55 + 720LL) |= 0x40u;
      }
      *a4 = v18;
      ++a2;
      ++a4;
      if ( !--a3 )
        goto LABEL_95;
      LODWORD(v22) = a6;
      v23 = v54;
    }
    while ( 1 )
    {
      *a4 = v18;
      ++a2;
      ++a4;
      if ( !--a3 )
        break;
      if ( *a2 >= awcrun->wcLow )
        goto LABEL_10;
    }
LABEL_95:
    v9 = v51;
    v7 = v52;
  }
  if ( v9 )
  {
    v55 = v7;
    PFEOBJ::vFreepfdg((PFEOBJ *)&v55);
  }
}
