/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C02B5844
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C0009470 (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x1C001AA70 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00238E4 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C010BF20 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 */

void __fastcall ESTROBJ::vCharPos_G2(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        int a8,
        int *a9)
{
  __int64 v9; // rbx
  LONG v10; // esi
  __int64 v13; // r11
  int *v14; // r12
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // r11
  int v19; // eax
  __int64 v20; // r13
  struct _GLYPHPOS *v21; // r8
  unsigned __int16 *v22; // r9
  __m128i si128; // xmm0
  float v24; // xmm6_4
  POINTL *p_ptl; // rbx
  int v26; // esi
  struct RFONTOBJ *v27; // rdx
  __int64 v28; // rax
  int v29; // r10d
  __int64 v30; // r11
  __int64 v31; // r15
  __int64 v32; // r14
  int *v33; // r8
  POINTL v34; // rdx
  int v35; // eax
  int v36; // r9d
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  bool v40; // zf
  int v41; // r14d
  __int64 v42; // r11
  __int64 v43; // r15
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  int v47; // ecx
  int v48; // [rsp+48h] [rbp-59h] BYREF
  int v49; // [rsp+4Ch] [rbp-55h] BYREF
  int v50; // [rsp+50h] [rbp-51h]
  __int64 v51; // [rsp+58h] [rbp-49h] BYREF
  __int64 v52; // [rsp+60h] [rbp-41h]
  int v53; // [rsp+68h] [rbp-39h]
  __int64 v54; // [rsp+70h] [rbp-31h] BYREF
  __int64 v55; // [rsp+78h] [rbp-29h]
  __int64 v56; // [rsp+80h] [rbp-21h]
  __m128i v57; // [rsp+88h] [rbp-19h]

  v9 = *(_QWORD *)a3;
  v10 = a4;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 652LL) )
  {
    v53 = 0;
    if ( a6 )
    {
      v49 = 0;
      bFToL((float)a6 * *(float *)(v9 + 400), &v49, 0);
      *((_DWORD *)this + 31) = v49;
      v9 = *(_QWORD *)a3;
      EPOINTQF::operator=((__int64)&v54, *(_QWORD *)a3 + 392LL);
      v56 = v13 * v54;
      v54 = v13 * v55;
      v10 = a4;
    }
    else
    {
      v54 = v55;
      v56 = v55;
    }
    v14 = (int *)((char *)this + 128);
    if ( bCalcBreakExtra(*(unsigned int *)(v9 + 400), a7, a8) )
    {
      v15 = *((_DWORD *)this + 31);
      v16 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      if ( v15 + v16 + *v14 < 0 )
        *v14 = -(v16 + v15);
      v17 = *(_QWORD *)a3;
      EPOINTQF::operator=((__int64)&v51, *(_QWORD *)a3 + 392LL);
      v18 = *v14;
      v19 = *(_DWORD *)(v17 + 460);
      v20 = v18 * v51;
      v51 = v18 * v52;
      v53 = v19;
    }
    else
    {
      v51 = v52;
      v20 = v52;
    }
    v21 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
    v22 = (unsigned __int16 *)*((_QWORD *)this + 5);
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v24 = *(float *)(*(_QWORD *)a3 + 404LL);
    p_ptl = &v21->ptl;
    v21->ptl.y = a5;
    v21->ptl.x = v10;
    v26 = 0;
    v27 = (struct RFONTOBJ *)*(unsigned int *)this;
    v57 = si128;
    v49 = 0;
    v50 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v27, v21, v22, &v48, a2, this) )
    {
      if ( *(float *)&v48 != 0.0 )
      {
        v28 = *((_QWORD *)this + 9);
        *((_DWORD *)this + 16) |= 2u;
        *((_QWORD *)this + 4) = v28;
      }
      v29 = *(_DWORD *)this;
      v30 = v57.m128i_i64[1];
      v31 = v57.m128i_i64[0];
      v32 = v51;
      v33 = a9;
      v48 = *(int *)this;
      while ( 1 )
      {
        v34 = p_ptl[-1];
        v35 = v49;
        v36 = *(_DWORD *)(*(_QWORD *)&v34 + 12LL);
        if ( v49 >= v26 + *(_DWORD *)(*(_QWORD *)&v34 + 16LL) )
          v35 = v26 + *(_DWORD *)(*(_QWORD *)&v34 + 16LL);
        v37 = v26 + *(_DWORD *)(*(_QWORD *)&v34 + 20LL);
        v49 = v35;
        v38 = v50;
        if ( v50 <= v37 )
          v38 = v37;
        v31 += *(_QWORD *)(*(_QWORD *)&v34 + 48LL);
        v30 += *(_QWORD *)(*(_QWORD *)&v34 + 56LL);
        v26 += v36;
        v39 = *((_DWORD *)this + 31);
        v50 = v38;
        if ( v39 && v36 + v39 > 0 )
        {
          v31 += v56;
          v26 += v39;
          v30 += v54;
        }
        if ( *v14 && p_ptl[-2].x == v53 )
        {
          v26 += *v14;
          v31 += v20;
          v30 += v32;
        }
        if ( v33 )
        {
          LODWORD(v51) = 0;
          bFToL((float)v26 * v24, &v51, 0);
          v29 = v48;
          *a9++ = v51;
          v33 = a9;
        }
        v40 = v29-- == 1;
        v48 = v29;
        if ( v40 )
          break;
        p_ptl += 3;
        p_ptl->x = a4 + HIDWORD(v31);
        p_ptl->y = a5 + HIDWORD(v30);
      }
      v41 = v50;
      v42 = v30 >> 32;
      v43 = v31 >> 32;
      v44 = v50 - v26;
      v45 = 0;
      *((_DWORD *)this + 22) = v43;
      *((_DWORD *)this + 23) = v42;
      if ( v44 > 0 )
        v45 = v44;
      *(float *)&v48 = (float)((float)((float)(int)v42 * 0.0625) * (float)((float)(int)v42 * 0.0625))
                     + (float)((float)((float)(int)v43 * 0.0625) * (float)((float)(int)v43 * 0.0625));
      EFLOAT::vSqrt((EFLOAT *)&v48);
      v40 = (unsigned int)bFToL(*(float *)&v48, &v51, 10) == 0;
      v46 = v49;
      if ( !v40 )
        v41 = v51;
      *((_DWORD *)this + 30) = v41;
      *((_DWORD *)this + 28) = v45 + v41;
      if ( v26 < v46 )
        v46 = v26;
      *((_DWORD *)this + 26) = v46;
      *((_DWORD *)this + 27) = *(_DWORD *)(*(_QWORD *)a3 + 308LL);
      v47 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
      *((_DWORD *)this + 16) |= 4u;
      *((_DWORD *)this + 29) = v47;
    }
  }
}
