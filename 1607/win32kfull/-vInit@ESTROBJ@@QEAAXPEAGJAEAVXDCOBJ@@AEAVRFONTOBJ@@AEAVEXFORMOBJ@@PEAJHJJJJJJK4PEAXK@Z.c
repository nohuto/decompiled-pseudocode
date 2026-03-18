/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0031964
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextExtentExW @ 0x1C01106D0 (GreGetTextExtentExW.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C002E5E8 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0032270 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z @ 0x1C00326C8 (-vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C00327F4 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C0144BEC (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C029A8AC (-bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C02B8810 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C02B8A2C (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C02B8D94 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02B9254 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 */

void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        float **a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        int a14,
        char a15,
        int *a16,
        void *a17,
        unsigned int a18)
{
  RFONTOBJ *v18; // rsi
  struct XDCOBJ *v21; // r11
  float v22; // xmm6_4
  bool v23; // cf
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  _DWORD *v28; // rcx
  int v29; // edx
  int v30; // r9d
  unsigned int v31; // r14d
  int v32; // r13d
  int v33; // r12d
  int *v34; // r15
  unsigned int v35; // ebx
  __int64 v36; // rcx
  struct EXFORMOBJ *v37; // r10
  int v38; // r8d
  char v39; // r12
  char v40; // al
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // ecx
  float v46; // xmm1_4
  unsigned int v47; // ecx
  int *v48; // rbx
  int v49; // eax
  signed int *v50; // r11
  unsigned int v51; // eax
  signed int *v52; // r11
  __int64 v53; // rax
  int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  int v58; // r9d
  ERECTL *v59; // r8
  int v60; // r14d
  int v61; // r10d
  int v62; // ecx
  int v63; // edx
  __int64 v64; // r8
  _DWORD *v65; // r11
  int v66; // edx
  __int64 v67; // rax
  int *v68; // rdx
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rcx
  int *v72; // rax
  char v73; // cl
  __int64 v74; // rax
  int v75; // ecx
  int v76; // r9d
  int v77; // r8d
  _DWORD *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  int *v81; // rcx
  __int64 v82; // rdx
  int v83; // eax
  int v84; // edx
  __int64 v85; // r8
  signed int v86; // [rsp+B0h] [rbp+50h] BYREF
  struct XDCOBJ *v87; // [rsp+B8h] [rbp+58h]

  v87 = a4;
  v86 = a3;
  v18 = a5;
  v21 = a4;
  v22 = **a6;
  v23 = a8 != 0;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = v18;
  *((_DWORD *)this + 16) = 0;
  v24 = v23 ? 0x400 : 0;
  *((_DWORD *)this + 1) = v24;
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v18 + 112LL) + 16LL);
  if ( v25 )
  {
    if ( (*(_DWORD *)(v25 + 4) & 0x10) != 0 )
      *((_DWORD *)this + 1) = v24 | 0x80;
    *((_DWORD *)this + 33) = a18;
    *((_DWORD *)this + 2) = 0;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 34) = 0;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 5) = a2;
    *(_QWORD *)((char *)this + 124) = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)v18 + 68LL) & 4) != 0 )
    {
      *((_DWORD *)this + 1) |= 0x100u;
      RFONTOBJ::vFixUpGlyphIndices(v18, a2, a3);
    }
    v26 = *(_QWORD *)(*(_QWORD *)v18 + 96LL);
    if ( (*(_DWORD *)(v26 + 1848) & 0x40000) != 0 )
      *((_DWORD *)this + 16) |= 0x100u;
    v27 = (__int64)a17;
    if ( !a17 )
    {
      v27 = AllocFreeTmpBuffer((30 * a3 + 7) & 0xFFFFFFF8);
      if ( !v27 )
        return;
      *((_DWORD *)this + 16) |= 1u;
      v21 = v87;
    }
    *((_QWORD *)this + 9) = v27;
    v28 = *(_DWORD **)v18;
    v29 = *(_DWORD *)(*(_QWORD *)v18 + 200LL);
    if ( v29 != 1 || (v28[122] & 4) != 0 )
      v30 = a9;
    else
      v30 = v28[97];
    v31 = a13;
    v32 = a14;
    LODWORD(a5) = v30;
    if ( (a15 & 0x18) != 0 )
    {
      if ( (a15 & 0x18) == 8 )
      {
        v31 = a13 - v28[82];
        v32 = a14 - v28[83];
      }
    }
    else
    {
      v31 = a13 - v28[80];
      v32 = a14 - v28[81];
    }
    v33 = a10;
    v34 = a7;
    if ( a10 && a7 && v29 == 1 && (v28[122] & 4) == 0 && (*(_DWORD *)(v26 + 56) & 1) != 0 )
    {
      v68 = a7;
      v69 = 0LL;
      if ( a8 )
      {
        v35 = v86;
        v71 = (unsigned __int64)(8LL * v86 + 7) >> 3;
        if ( a7 > &a7[2 * v86] )
          v71 = 0LL;
        if ( v71 )
        {
          do
          {
            *v68 += v33;
            ++v69;
            v68 += 2;
          }
          while ( v69 < v71 );
        }
      }
      else
      {
        v35 = v86;
        v70 = (unsigned __int64)(4LL * v86 + 3) >> 2;
        if ( a7 > &a7[v86] )
          v70 = 0LL;
        if ( v70 )
        {
          do
          {
            *v68 += v33;
            ++v69;
            ++v68;
          }
          while ( v69 < v70 );
        }
      }
    }
    else
    {
      v35 = v86;
    }
    v36 = *(_QWORD *)v18;
    v37 = (struct EXFORMOBJ *)a6;
    v38 = *(_DWORD *)(*(_QWORD *)v18 + 388LL);
    if ( v30 | v38 || ((_DWORD)(*a6)[8] & 1) == 0 || (*a6)[3] < 0.0 || v22 < 0.0 )
    {
      if ( a8 )
      {
        if ( v30 != *(_DWORD *)(v36 + 428)
          && !(unsigned int)RFONTOBJ::bCalcEscapementP(v18, (struct EXFORMOBJ *)a6, v30) )
        {
          return;
        }
        *((_DWORD *)this + 16) |= 8u;
        ESTROBJ::vCharPos_G4(this, v87, v18, v31, v32, v34);
      }
      else if ( v30 == v38 )
      {
        if ( v34 )
          ESTROBJ::vCharPos_G1(this, v21, v18, v31, v32, v34, a16);
        else
          ESTROBJ::vCharPos_G2(this, v21, v18, v31, v32, v33, a11, a12, a16);
      }
      else
      {
        if ( v30 != *(_DWORD *)(v36 + 428)
          && !(unsigned int)RFONTOBJ::bCalcEscapementP(v18, (struct EXFORMOBJ *)a6, v30) )
        {
          return;
        }
        v72 = a16;
        *((_DWORD *)this + 16) |= 8u;
        *((_DWORD *)this + 1) |= 0x200u;
        ESTROBJ::vCharPos_G3(this, v87, v18, v31, v32, v33, a11, a12, v34, v72);
      }
      v39 = a15;
      v73 = a15;
      v74 = *((_QWORD *)this + 11);
      *((_QWORD *)this + 12) = v74;
      v75 = v73 & 6;
      if ( v75 )
      {
        v76 = *((_DWORD *)this + 23);
        v77 = v74;
        if ( v75 == 6 )
        {
          v77 = (int)v74 / 2;
          v76 /= 2;
          *((_QWORD *)this + 11) = 0LL;
        }
        else
        {
          *((_DWORD *)this + 22) = -(int)v74;
          *((_DWORD *)this + 23) = -v76;
        }
        if ( v35 )
        {
          v78 = (_DWORD *)(*((_QWORD *)this + 9) + 20LL);
          v79 = v35;
          do
          {
            *(v78 - 1) -= v77;
            *v78 -= v76;
            v78 += 6;
            --v79;
          }
          while ( v79 );
        }
        v31 -= v77;
        v32 -= v76;
      }
      v80 = *((_QWORD *)this + 9);
      *((_DWORD *)this + 20) = v31;
      *((_DWORD *)this + 21) = v32;
      if ( v35 )
      {
        v81 = (int *)(v80 + 20);
        v82 = v35;
        do
        {
          *(v81 - 1) = (*(v81 - 1) + 8) >> 4;
          *v81 = (*v81 + 8) >> 4;
          v81 += 6;
          --v82;
        }
        while ( v82 );
      }
    }
    else
    {
      if ( v34 )
      {
        if ( a8 )
        {
          if ( (a15 & 0xA0) != 0 )
          {
            if ( v30 != *(_DWORD *)(v36 + 428) )
            {
              if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(v18, (struct EXFORMOBJ *)a6, v30) )
                return;
              v37 = (struct EXFORMOBJ *)a6;
            }
            *((_DWORD *)this + 16) |= 8u;
          }
          ESTROBJ::vCharPos_H4(this, v87, v18, v31, v32, v34, LODWORD(v22), *(_DWORD *)(*(_QWORD *)v37 + 12LL));
        }
        else
        {
          ESTROBJ::vCharPos_H1(this, v21, v18, v31, v32, v34, LODWORD(v22));
        }
        LODWORD(v34) = 0;
      }
      else if ( !*(_DWORD *)(v36 + 304) || a11 | v33 )
      {
        ESTROBJ::vCharPos_H3(this, v21, v18, v31, v32, v33, a11, a12, LODWORD(v22), 0LL);
      }
      else
      {
        ESTROBJ::vCharPos_H2(this, v21, v18, v31, v32, LODWORD(v22));
      }
      v39 = a15;
      v40 = a15;
      v41 = *((_DWORD *)this + 22);
      v42 = *((_DWORD *)this + 23);
      *((_DWORD *)this + 24) = v41;
      *((_DWORD *)this + 25) = v42;
      v43 = v40 & 6;
      if ( v43 )
      {
        if ( v43 == 6 )
        {
          *((_DWORD *)this + 22) = (_DWORD)v34;
          v41 /= 2;
        }
        else
        {
          *((_DWORD *)this + 22) = -v41;
        }
        v53 = *((_QWORD *)this + 9);
        v54 = (v41 + 8) >> 4;
        v55 = v53 + 24;
        *(_DWORD *)(v53 + 16) -= v54;
        v31 = 16 * *(_DWORD *)(v53 + 16);
        if ( *((_DWORD *)this + 2) == (_DWORD)v34 && v35 != 1 )
        {
          v56 = v35 - 1;
          do
          {
            v57 = v55;
            v55 += 24LL;
            *(_DWORD *)(v57 + 16) -= v54;
            --v56;
          }
          while ( v56 );
        }
      }
      if ( a16 )
      {
        v45 = *((_DWORD *)this + 2);
        v46 = *(float *)(*(_QWORD *)v18 + 404LL);
        if ( !v45 || (*((_DWORD *)this + 16) & 0x1400) != 0 )
        {
          v47 = v35 - 1;
          if ( v35 != 1 )
          {
            v48 = (int *)(*((_QWORD *)this + 9) + 40LL);
            v34 = (int *)v47;
            do
            {
              v49 = *v48;
              v86 = 0;
              bFToL((float)(int)(16 * v49 - v31) * v46, &v86, 0);
              v48 += 6;
              *v50 = v86;
              v34 = (int *)((char *)v34 - 1);
            }
            while ( v34 );
          }
          v51 = v31 + *((_DWORD *)this + 22);
          v86 = (int)v34;
          bFToL((float)(int)((v51 & 0xFFFFFFF0) - v31) * v46, &v86, 0);
          *v52 = v86;
        }
        else
        {
          v86 = (int)v34;
          bFToL((float)(16 * v45) * v46, &v86, 0);
          v66 = (int)v34;
          if ( v35 )
          {
            v67 = v35;
            do
            {
              v66 += v86;
              *v65++ = v66;
              --v67;
            }
            while ( v67 );
          }
        }
      }
      v44 = *((_QWORD *)this + 9);
      *((_DWORD *)this + 20) = 16 * *(_DWORD *)(v44 + 16);
      *((_DWORD *)this + 21) = 16 * *(_DWORD *)(v44 + 20);
    }
    if ( (v39 & 0xA0) != 0 )
    {
      *((_DWORD *)this + 16) |= v39 & 0xA0;
      if ( !((unsigned int)a5 | a8 | *(_DWORD *)(*(_QWORD *)v18 + 388LL)) && ((_DWORD)(*a6)[8] & 1) != 0 )
      {
        v58 = (*((_DWORD *)this + 24) + 8) >> 4;
        v59 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 34) + 140);
        v60 = (int)(v31 + 8) >> 4;
        v61 = (v32 + 8) >> 4;
        if ( (v39 & 0x20) != 0 )
        {
          v62 = v60 + *(_DWORD *)(*(_QWORD *)v18 + 272LL);
          *(_DWORD *)v59 = v62;
          *((_DWORD *)v59 + 2) = v62 + v58;
          v63 = v61 + *(_DWORD *)(*(_QWORD *)v18 + 276LL);
          *((_DWORD *)v59 + 1) = v63;
          *((_DWORD *)v59 + 3) = v63 + *(_DWORD *)(*(_QWORD *)v18 + 292LL);
          ERECTL::vOrder(v59);
          ++*((_DWORD *)this + 34);
          v59 = (ERECTL *)(v64 + 16);
        }
        if ( v39 < 0 )
        {
          v83 = v60 + *(_DWORD *)(*(_QWORD *)v18 + 280LL);
          *(_DWORD *)v59 = v83;
          *((_DWORD *)v59 + 2) = v58 + v83;
          v84 = v61 + *(_DWORD *)(*(_QWORD *)v18 + 284LL);
          *((_DWORD *)v59 + 1) = v84;
          *((_DWORD *)v59 + 3) = v84 + *(_DWORD *)(*(_QWORD *)v18 + 300LL);
          ERECTL::vOrder(v59);
          ++*((_DWORD *)this + 34);
          v59 = (ERECTL *)(v85 + 16);
        }
        *(_QWORD *)v59 = 0LL;
        *((_QWORD *)v59 + 1) = 0LL;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)v18 + 12LL) & 1) != 0 )
      *((_DWORD *)this + 16) |= 0x200u;
    else
      *((_DWORD *)this + 16) &= ~0x200u;
  }
}
