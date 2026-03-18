/*
 * XREFs of ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C002BF60
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C002A200 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C002C45C (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002D428 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C0031E5C (xInsertMetricsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C0034014 (xInsertMetricsPlusRFONTOBJ.c)
 *     GreGetGlyphIndicesW @ 0x1C00374E4 (GreGetGlyphIndicesW.c)
 *     GreGetGlyphOutlineInternal @ 0x1C014EFE4 (GreGetGlyphOutlineInternal.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02687F8 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C02CEB50 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 * Callees:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C002DD7C (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C0031A68 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C01261C0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vXlatGlyphArray(
        RFONTOBJ *this,
        unsigned __int16 *a2,
        int a3,
        unsigned int *a4,
        unsigned int a5,
        int a6)
{
  RFONTOBJ *v7; // r8
  struct _FD_GLYPHSET *v10; // rbx
  int v11; // r11d
  ULONG cRuns; // eax
  unsigned int v13; // r10d
  WCRUN *awcrun; // rbx
  int v15; // esi
  unsigned int v16; // edx
  __int64 v17; // r11
  int v18; // r15d
  __int64 v19; // r12
  unsigned __int16 v20; // r9
  int v21; // eax
  __int64 v22; // r8
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  BOOL v29; // ecx
  WCRUN *v30; // r8
  unsigned int v31; // edx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  unsigned __int16 v38; // cx
  struct _FD_GLYPHSET *v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // ecx
  int v45; // edx
  char v46; // cl
  int v47; // ecx
  int v48; // [rsp+20h] [rbp-48h]
  RFONTOBJ *v49; // [rsp+28h] [rbp-40h]
  RFONTOBJ *v50; // [rsp+30h] [rbp-38h] BYREF
  RFONTOBJ *v51; // [rsp+70h] [rbp+8h] BYREF

  v51 = this;
  v7 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v10 = *(struct _FD_GLYPHSET **)(*(_QWORD *)this + 472LL);
  v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL);
  if ( a6 && v11 && (v11 & 1) == 0 )
  {
    v7 = *(RFONTOBJ **)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 8LL * ((v11 - 1) & 0xFFFFFFFE) + 216);
    v49 = v7;
    v50 = v7;
    if ( v7 )
    {
      v39 = PFEOBJ::pfdg((PFEOBJ *)&v50);
      this = v51;
      v7 = v49;
      if ( v39 )
      {
        v48 = 1;
        v10 = v39;
      }
    }
    else
    {
      this = v51;
    }
  }
  cRuns = v10->cRuns;
  if ( cRuns )
  {
    v13 = a5;
    awcrun = v10->awcrun;
    v15 = cRuns - 1;
    if ( a5 == 1 )
      v16 = -1;
    else
      v16 = *(_DWORD *)(*(_QWORD *)this + 456LL);
    a6 = v16;
    if ( v15 > 0xFFFF )
      v15 = 0xFFFF;
    v17 = v15;
    if ( (v15 & 0xF000) != 0 )
    {
      v18 = acBits[(unsigned __int8)((__int64)v15 >> 12)] + 12;
    }
    else if ( (v15 & 0xF00) != 0 )
    {
      v18 = acBits[BYTE1(v15)] + 8;
    }
    else if ( (v15 & 0xF0) != 0 )
    {
      v18 = acBits[(unsigned __int8)((__int64)v15 >> 4)] + 4;
    }
    else
    {
      v18 = acBits[v15];
    }
    v19 = *((int *)&aiStart + v18);
    if ( a3 )
    {
      while ( 1 )
      {
        v20 = *a2;
        if ( *a2 < awcrun->wcLow )
          break;
        v21 = v19;
        v22 = v19;
        if ( v18 != 7 )
        {
          if ( v18 != 8 )
          {
            switch ( v18 )
            {
              case 1:
                goto LABEL_38;
              case 2:
                goto LABEL_34;
              case 3:
                goto LABEL_30;
              case 4:
                goto LABEL_26;
              case 5:
                goto LABEL_22;
              case 6:
                goto LABEL_18;
              case 9:
                goto LABEL_86;
              case 10:
                goto LABEL_82;
              case 11:
                goto LABEL_78;
              case 12:
                goto LABEL_74;
              case 13:
                goto LABEL_70;
              case 14:
                goto LABEL_116;
              case 15:
                goto LABEL_111;
              case 16:
                if ( v20 < awcrun[v19].wcLow )
                {
                  v40 = 0;
                  v41 = 0LL;
                }
                else
                {
                  v40 = 0x8000;
                  v41 = 0x8000LL;
                }
                v21 = v19 + v40 - 0x4000;
                v22 = v19 + v41 - 0x4000;
LABEL_111:
                if ( v22 > v17 || v20 < awcrun[v22].wcLow )
                {
                  v42 = 0;
                  v43 = 0LL;
                }
                else
                {
                  v42 = 0x4000;
                  v43 = 0x4000LL;
                }
                v21 = v42 + v21 - 0x2000;
                v22 = v43 + v22 - 0x2000;
LABEL_116:
                if ( v22 > v17 || v20 < awcrun[v22].wcLow )
                  v44 = 0;
                else
                  v44 = 0x2000;
                v21 = v44 + v21 - 4096;
LABEL_70:
                if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
                  v33 = 4096;
                else
                  v33 = 0;
                v21 = v33 + v21 - 2048;
LABEL_74:
                if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
                  v34 = 2048;
                else
                  v34 = 0;
                v21 = v34 + v21 - 1024;
LABEL_78:
                if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
                  v35 = 1024;
                else
                  v35 = 0;
                v21 = v35 + v21 - 512;
LABEL_82:
                if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
                  v36 = 512;
                else
                  v36 = 0;
                v21 = v36 + v21 - 256;
LABEL_86:
                if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
                  v37 = 256;
                else
                  v37 = 0;
                v21 = v37 + v21 - 128;
                break;
              default:
                goto LABEL_42;
            }
          }
          if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
            v21 = v21 - 64 + 128;
          else
            v21 -= 64;
        }
        if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
          v23 = 64;
        else
          v23 = 0;
        v21 = v23 + v21 - 32;
LABEL_18:
        if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
          v24 = 32;
        else
          v24 = 0;
        v21 = v24 + v21 - 16;
LABEL_22:
        if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
          v25 = 16;
        else
          v25 = 0;
        v21 = v25 + v21 - 8;
LABEL_26:
        if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
          v26 = 8;
        else
          v26 = 0;
        v21 = v26 + v21 - 4;
LABEL_30:
        if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
          v27 = 4;
        else
          v27 = 0;
        v21 = v27 + v21 - 2;
LABEL_34:
        if ( v21 <= v15 && v20 >= awcrun[v21].wcLow )
          v28 = 2;
        else
          v28 = 0;
        v21 = v28 + v21 - 1;
LABEL_38:
        v29 = v21 <= v15 && v20 >= awcrun[v21].wcLow;
        v21 = v29 + v21 - 1;
LABEL_42:
        v30 = &awcrun[v21];
        v31 = v20;
        v32 = v20 - v30->wcLow;
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
                goto LABEL_55;
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
              v47 = v31 - v30->wcLow;
              if ( v47 < 0 || v47 >= v30->cGlyphs )
              {
LABEL_55:
                v16 = a6;
                goto LABEL_46;
              }
            }
          }
          goto LABEL_47;
        }
        if ( v13 == 2 || (unsigned int)RFONTOBJ::bIsLinkedGlyph(v51, v20) )
          goto LABEL_44;
        v38 = *a2;
        if ( *(_DWORD *)(*(_QWORD *)v51 + 716LL) && v38 >= gqlTTSystem && v38 <= (unsigned __int16)word_1C03233D2 )
        {
          v45 = v38 - gqlTTSystem;
          v46 = (v38 - gqlTTSystem) & 0x1F;
          if ( v45 < 0 )
          {
            v45 += 31;
            v46 -= 32;
          }
          if ( ((0x80000000 >> v46) & *(_DWORD *)(qword_1C03233D8 + 4LL * (v45 >> 5))) != 0 )
LABEL_44:
            *(_DWORD *)(*(_QWORD *)v51 + 720LL) |= 0x40u;
        }
        v16 = a6;
        ++a2;
        v13 = a5;
        *a4++ = a6;
        --a3;
LABEL_46:
        v17 = v15;
        if ( !a3 )
          goto LABEL_47;
      }
      while ( 1 )
      {
        *a4 = v16;
        ++a2;
        ++a4;
        if ( !--a3 )
          break;
        if ( *a2 >= awcrun->wcLow )
          goto LABEL_46;
      }
LABEL_47:
      v7 = v49;
    }
    if ( v48 )
    {
      v51 = v7;
      PFEOBJ::vFreepfdg((PFEOBJ *)&v51);
    }
  }
  else
  {
    for ( ; a3; --a3 )
    {
      *a4++ = *(_DWORD *)(*(_QWORD *)this + 456LL);
      this = v51;
    }
  }
}
