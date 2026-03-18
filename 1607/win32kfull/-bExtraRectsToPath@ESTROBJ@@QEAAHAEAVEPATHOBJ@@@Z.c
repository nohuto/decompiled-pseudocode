/*
 * XREFs of ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B80E8
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C002C3D0 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bLinkedGlyphs@ESTROBJ@@QEAAHXZ @ 0x1C003204C (-bLinkedGlyphs@ESTROBJ@@QEAAHXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C01BF590 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z @ 0x1C02B7E94 (-GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z.c)
 *     ?bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z @ 0x1C02B8064 (-bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z.c)
 */

__int64 __fastcall ESTROBJ::bExtraRectsToPath(ESTROBJ *this, struct EPATHOBJ *a2)
{
  struct EPATHOBJ *v3; // r10
  _DWORD *v4; // r8
  int v5; // r15d
  int v6; // r12d
  int v7; // r13d
  int v8; // ecx
  int v9; // edx
  int v10; // r9d
  int v11; // r11d
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  struct _GLYPHPOS *v16; // r13
  __int64 v17; // rbx
  unsigned int v18; // r12d
  unsigned int v19; // esi
  unsigned int v20; // r14d
  unsigned int v21; // r15d
  RFONTOBJ *v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // r9d
  __int64 v26; // r14
  _DWORD *v27; // rcx
  struct RFONT *LinkedRfontOnIndex; // rax
  unsigned int GlyphData; // eax
  _QWORD *v30; // rax
  float *v31; // rdx
  LONG x; // eax
  LONG y; // ecx
  float v34; // xmm3_4
  GLYPHDEF *pgdf; // r11
  int pgb; // ebx
  float v37; // xmm2_4
  char v38; // r8
  __int64 v39; // r11
  int v40; // eax
  float v41; // xmm1_4
  char v42; // r8
  char v43; // r8
  struct EXFORMOBJ *v44; // [rsp+30h] [rbp-59h]
  int v45; // [rsp+40h] [rbp-49h] BYREF
  int v46; // [rsp+44h] [rbp-45h] BYREF
  int v47; // [rsp+48h] [rbp-41h] BYREF
  int v48; // [rsp+4Ch] [rbp-3Dh]
  int v49; // [rsp+50h] [rbp-39h]
  int v50; // [rsp+54h] [rbp-35h]
  int v51; // [rsp+58h] [rbp-31h]
  int v52; // [rsp+5Ch] [rbp-2Dh]
  unsigned int v53; // [rsp+60h] [rbp-29h]
  int v54; // [rsp+64h] [rbp-25h]
  int v55; // [rsp+68h] [rbp-21h]
  int v56; // [rsp+6Ch] [rbp-1Dh]
  int v57; // [rsp+70h] [rbp-19h]
  struct RFONT *v58; // [rsp+78h] [rbp-11h] BYREF
  float *v59; // [rsp+80h] [rbp-9h]
  struct RFONT **v60; // [rsp+88h] [rbp-1h]
  __int64 v61; // [rsp+90h] [rbp+7h]
  int v62; // [rsp+F0h] [rbp+67h]
  int v64; // [rsp+100h] [rbp+77h]
  int v65; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = (_DWORD *)**((_QWORD **)this + 7);
  v5 = 16 * v4[68];
  v6 = 16 * v4[69];
  v7 = 16 * v4[72];
  v8 = 16 * v4[70];
  v9 = 16 * v4[71];
  v10 = 16 * v4[74];
  v11 = 16 * v4[75];
  v48 = 16 * v4[73];
  v12 = *((_DWORD *)this + 16);
  v56 = v5;
  v55 = v6;
  v57 = v7;
  v50 = v8;
  v49 = v9;
  v52 = v10;
  v51 = v11;
  if ( (v12 & 8) != 0 )
  {
    v16 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v17 = *((_QWORD *)this + 5);
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v58);
    v18 = *(_DWORD *)this;
    v19 = 0;
    v60 = 0LL;
    v20 = 0;
    v21 = v18;
    if ( v18 )
    {
      while ( 1 )
      {
        if ( (*((_DWORD *)this + 16) & 2) == 0 )
        {
          if ( ESTROBJ::bLinkedGlyphs(this) )
          {
            if ( !v20 )
            {
              v23 = *((_QWORD *)this + 27);
              v24 = *(_DWORD *)this - v18;
              v25 = *(_DWORD *)(v23 + 4 * v24);
              v26 = (unsigned int)(v24 + 1);
              if ( (unsigned int)v26 < *(_DWORD *)this )
              {
                v27 = (_DWORD *)(v23 + 4 * v26);
                do
                {
                  if ( *v27 != v25 )
                    break;
                  LODWORD(v26) = v26 + 1;
                  ++v27;
                }
                while ( (unsigned int)v26 < *(_DWORD *)this );
              }
              v20 = v26 - v24;
              LinkedRfontOnIndex = ESTROBJ::GetLinkedRfontOnIndex(this, v24, *((struct RFONTOBJ **)this + 7));
              v22 = (RFONTOBJ *)&v58;
              v58 = LinkedRfontOnIndex;
              v60 = &v58;
            }
            GlyphData = RFONTOBJ::cGetGlyphData(v22, v20, v16);
            v21 = GlyphData;
            if ( !GlyphData )
              goto LABEL_32;
            v20 -= GlyphData;
          }
          else
          {
            v21 = RFONTOBJ::cGetGlyphData(*((RFONTOBJ **)this + 7), v18, v16);
            if ( !v21 )
              goto LABEL_32;
          }
        }
        v53 = 0;
        v17 += 2LL * v21;
        v30 = (_QWORD *)*((_QWORD *)this + 7);
        v61 = v17;
        v31 = (float *)(*v30 + 392LL);
        v59 = v31;
        if ( v21 )
          break;
LABEL_30:
        v18 -= v21;
        if ( !v18 )
          goto LABEL_31;
      }
      while ( 1 )
      {
        x = v16->ptl.x;
        y = v16->ptl.y;
        v62 = x;
        v64 = y;
        v54 = *((_DWORD *)this + 16);
        if ( (v54 & 0x100) == 0 )
        {
          v64 = 16 * y;
          v62 = 16 * x;
        }
        v34 = *v31;
        pgdf = v16->pgdf;
        v45 = 0;
        pgb = (int)pgdf[2].pgb;
        bFToL(v34 * (float)pgb, &v45, 0);
        v65 = 0;
        v37 = v59[1];
        bFToL(v37 * (float)pgb, &v65, v38);
        v40 = *(_DWORD *)(v39 + 20) - pgb;
        v47 = 0;
        v41 = (float)v40;
        bFToL((float)v40 * v34, &v47, v42);
        v46 = 0;
        bFToL(v41 * v37, &v46, v43);
        if ( (v54 & 0x20) != 0 )
        {
          LODWORD(v44) = v48;
          if ( !(unsigned int)bAddPgmToPath(a2, v56 + v62 + v45, v55 + v64 + v65, v47, v46, v57, v44) )
            break;
        }
        if ( (*((_DWORD *)this + 16) & 0x80u) != 0 )
        {
          LODWORD(v44) = v51;
          if ( !(unsigned int)bAddPgmToPath(a2, v50 + v62 + v45, v49 + v64 + v65, v47, v46, v52, v44) )
            break;
        }
        ++v16;
        ++v53;
        v31 = v59;
        if ( v53 >= v21 )
        {
          v17 = v61;
          goto LABEL_30;
        }
      }
    }
    else
    {
LABEL_31:
      v19 = 1;
    }
LABEL_32:
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v58);
    return v19;
  }
  else
  {
    v13 = (*((_DWORD *)this + 20) + 8) & 0xFFFFFFF0;
    v14 = (*((_DWORD *)this + 21) + 8) & 0xFFFFFFF0;
    if ( (v12 & 0x20) != 0 )
    {
      LODWORD(v44) = v48;
      if ( !(unsigned int)bAddPgmToPath(v3, v13 + v5, v14 + v6, *((_DWORD *)this + 24), *((_DWORD *)this + 25), v7, v44) )
        return 0LL;
      v3 = a2;
      v8 = v50;
      v9 = v49;
      v10 = v52;
      v11 = v51;
    }
    if ( (*((_DWORD *)this + 16) & 0x80u) != 0 )
    {
      LODWORD(v44) = v11;
      if ( !(unsigned int)bAddPgmToPath(
                            v3,
                            v13 + v8,
                            v14 + v9,
                            *((_DWORD *)this + 24),
                            *((_DWORD *)this + 25),
                            v10,
                            v44) )
        return 0LL;
    }
    return 1LL;
  }
}
