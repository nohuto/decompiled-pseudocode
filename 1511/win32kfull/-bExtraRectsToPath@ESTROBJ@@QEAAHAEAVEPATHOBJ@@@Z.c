/*
 * XREFs of ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B5130
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C0026418 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     ?bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z @ 0x1C02B50AC (-bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z.c)
 */

__int64 __fastcall ESTROBJ::bExtraRectsToPath(ESTROBJ *this, struct EPATHOBJ *a2)
{
  struct EPATHOBJ *v3; // r10
  _DWORD *v4; // r8
  int v5; // eax
  int v6; // r14d
  int v7; // r15d
  int v8; // r12d
  int v9; // ecx
  int v10; // edx
  int v11; // r9d
  int v12; // r11d
  int v13; // r8d
  int v14; // eax
  int v15; // r14d
  int v16; // r15d
  int v17; // r12d
  int v18; // ecx
  int v19; // edx
  int v20; // r9d
  int v21; // r11d
  unsigned int v22; // ebx
  unsigned int v23; // esi
  unsigned int v25; // r14d
  unsigned int GlyphData; // esi
  struct _GLYPHPOS *v27; // r15
  __int64 v28; // rbx
  _QWORD *v29; // rcx
  float *v30; // rax
  LONG x; // r12d
  LONG y; // r13d
  float v33; // xmm3_4
  GLYPHDEF *pgdf; // r11
  float v35; // xmm0_4
  int pgb; // ebx
  int v37; // r8d
  float v38; // xmm2_4
  __int64 v39; // r11
  int v40; // eax
  int v41; // r8d
  float v42; // xmm1_4
  int v43; // r8d
  struct EPATHOBJ *v44; // rbx
  struct EXFORMOBJ *v45; // [rsp+30h] [rbp-39h]
  int v46; // [rsp+40h] [rbp-29h] BYREF
  int v47; // [rsp+44h] [rbp-25h]
  int v48; // [rsp+48h] [rbp-21h]
  int v49; // [rsp+4Ch] [rbp-1Dh]
  int v50; // [rsp+50h] [rbp-19h]
  unsigned int v51; // [rsp+54h] [rbp-15h]
  int v52; // [rsp+58h] [rbp-11h]
  int v53; // [rsp+5Ch] [rbp-Dh]
  int v54; // [rsp+60h] [rbp-9h]
  int v55; // [rsp+64h] [rbp-5h]
  int v56; // [rsp+68h] [rbp-1h]
  float *v57; // [rsp+70h] [rbp+7h]
  __int64 v58; // [rsp+78h] [rbp+Fh]
  int v59; // [rsp+D0h] [rbp+67h] BYREF
  struct EPATHOBJ *v60; // [rsp+D8h] [rbp+6Fh]
  int v61; // [rsp+E0h] [rbp+77h] BYREF
  int v62; // [rsp+E8h] [rbp+7Fh] BYREF

  v60 = a2;
  v3 = a2;
  v4 = (_DWORD *)**((_QWORD **)this + 7);
  v5 = v4[68];
  v6 = v4[69];
  v7 = v4[72];
  v8 = v4[73];
  v9 = v4[70];
  v10 = v4[71];
  v11 = v4[74];
  v12 = v4[75];
  v13 = *((_DWORD *)this + 16);
  v14 = 16 * v5;
  v15 = 16 * v6;
  v16 = 16 * v7;
  v17 = 16 * v8;
  v18 = 16 * v9;
  v19 = 16 * v10;
  v20 = 16 * v11;
  v21 = 16 * v12;
  v55 = v14;
  v56 = v15;
  v54 = v16;
  v53 = v17;
  v47 = v18;
  v50 = v19;
  v49 = v20;
  v48 = v21;
  if ( (v13 & 8) != 0 )
  {
    v25 = *(_DWORD *)this;
    GlyphData = *(_DWORD *)this;
    v27 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v28 = *((_QWORD *)this + 5);
    if ( *(_DWORD *)this )
    {
      while ( 1 )
      {
        if ( (*((_DWORD *)this + 16) & 2) == 0 )
        {
          GlyphData = RFONTOBJ::cGetGlyphData(*((RFONTOBJ **)this + 7), v25, v27);
          if ( !GlyphData )
            return 0LL;
        }
        v51 = 0;
        v28 += 2LL * GlyphData;
        v29 = (_QWORD *)*((_QWORD *)this + 7);
        v58 = v28;
        v30 = (float *)(*v29 + 392LL);
        v57 = v30;
        if ( GlyphData )
        {
          while ( 1 )
          {
            x = v27->ptl.x;
            y = v27->ptl.y;
            v52 = *((_DWORD *)this + 16);
            if ( (v52 & 0x100) == 0 )
            {
              x *= 16;
              y *= 16;
            }
            v33 = *v30;
            pgdf = v27->pgdf;
            v35 = *v30;
            v61 = 0;
            pgb = (int)pgdf[2].pgb;
            bFToL(v35 * (float)pgb, &v61, 0);
            v59 &= v37;
            v38 = v57[1];
            bFToL(v38 * (float)pgb, &v59, v37);
            v40 = *(_DWORD *)(v39 + 20);
            v46 &= v41;
            v42 = (float)(v40 - pgb);
            bFToL(v42 * v33, &v46, v41);
            v62 &= v43;
            bFToL(v42 * v38, &v62, v43);
            v44 = v60;
            if ( (v52 & 0x20) != 0 )
            {
              LODWORD(v45) = v53;
              if ( !(unsigned int)bAddPgmToPath(v60, v55 + x + v61, v56 + y + v59, v46, v62, v54, v45) )
                return 0LL;
            }
            if ( (*((_DWORD *)this + 16) & 0x80u) != 0 )
            {
              LODWORD(v45) = v48;
              if ( !(unsigned int)bAddPgmToPath(v44, v47 + x + v61, v50 + y + v59, v46, v62, v49, v45) )
                return 0LL;
            }
            ++v27;
            ++v51;
            v30 = v57;
            if ( v51 >= GlyphData )
            {
              v28 = v58;
              break;
            }
          }
        }
        v25 -= GlyphData;
        if ( !v25 )
          return 1LL;
      }
    }
  }
  else
  {
    v22 = (*((_DWORD *)this + 20) + 8) & 0xFFFFFFF0;
    v23 = (*((_DWORD *)this + 21) + 8) & 0xFFFFFFF0;
    if ( (v13 & 0x20) != 0 )
    {
      LODWORD(v45) = v17;
      if ( !(unsigned int)bAddPgmToPath(
                            v3,
                            v22 + v14,
                            v23 + v15,
                            *((_DWORD *)this + 24),
                            *((_DWORD *)this + 25),
                            v16,
                            v45) )
        return 0LL;
      v3 = v60;
      v18 = v47;
      v19 = v50;
      v20 = v49;
      v21 = v48;
    }
    if ( (*((_DWORD *)this + 16) & 0x80u) != 0 )
    {
      LODWORD(v45) = v21;
      if ( !(unsigned int)bAddPgmToPath(
                            v3,
                            v22 + v18,
                            v23 + v19,
                            *((_DWORD *)this + 24),
                            *((_DWORD *)this + 25),
                            v20,
                            v45) )
        return 0LL;
    }
  }
  return 1LL;
}
