/*
 * XREFs of ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C002DE58
 * Callers:
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 * Callees:
 *     ?bIs1Over16@EFLOAT@@QEAAHXZ @ 0x1C00143D4 (-bIs1Over16@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002E60C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C002E74C (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C012D2F4 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bTextExtent(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        char a9,
        struct tagSIZE *a10)
{
  int v10; // ebx
  struct tagSIZE *v11; // rdi
  int v12; // r12d
  int v13; // r11d
  __int64 v15; // r15
  struct XDCOBJ *v16; // r9
  int v18; // r8d
  int v19; // esi
  int v20; // ecx
  unsigned __int16 *v21; // rdx
  signed int v22; // r13d
  int v23; // edi
  GLYPHDEF **p_pgdf; // rcx
  __int64 v25; // r8
  int ppo_high; // edx
  bool v27; // zf
  __int64 v28; // r13
  int v29; // esi
  float *v30; // rcx
  float *v31; // rcx
  __int64 v32; // rdx
  LONG v33; // eax
  __int64 v35; // rax
  int v36; // ebx
  int v37; // edx
  int v38; // ecx
  __int16 v39; // r8
  unsigned __int16 *v40; // r9
  __int64 v41; // rdx
  __int16 v42; // ax
  LONG cx; // edx
  int v44; // [rsp+30h] [rbp-D0h] BYREF
  LONG v45; // [rsp+34h] [rbp-CCh] BYREF
  int v46; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v47; // [rsp+40h] [rbp-C0h]
  struct XDCOBJ *v48; // [rsp+48h] [rbp-B8h]
  struct tagSIZE *v49; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v50; // [rsp+58h] [rbp-A8h]
  struct _GLYPHPOS v51; // [rsp+60h] [rbp-A0h] BYREF

  v44 = 0;
  v10 = 0;
  v11 = a10;
  v12 = 0;
  v13 = a6;
  v15 = a4;
  v16 = a2;
  v50 = a3;
  v48 = a2;
  v49 = a10;
  v46 = 0;
  if ( a6 )
  {
    v35 = *(_QWORD *)this;
    v44 = 0;
    bFToL((float)a6 * *(float *)(v35 + 400), &v44, 0);
    v12 = v44;
    v16 = v48;
    v44 = v18;
  }
  else
  {
    v18 = v44;
  }
  v19 = 0;
  v20 = v15;
  v45 = v15;
  v21 = a3;
  v47 = a3;
  if ( (_DWORD)v15 )
  {
    while ( 1 )
    {
      v22 = v20;
      if ( v20 > 82 )
        v22 = 82;
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, v22, &v51, v21, v16, 0LL) )
        return 0LL;
      if ( v22 > 0 )
      {
        v23 = v44;
        p_pgdf = &v51.pgdf;
        v25 = (unsigned int)v22;
        do
        {
          ppo_high = HIDWORD((*p_pgdf)[1].ppo);
          v19 += ppo_high;
          if ( v12 < 0 && ppo_high + v12 <= 0 )
            ++v23;
          p_pgdf += 3;
          --v25;
        }
        while ( v25 );
        v10 = v46;
        v44 = v23;
        v11 = v49;
      }
      v16 = v48;
      v27 = v45 == v22;
      v20 = v45 - v22;
      v45 -= v22;
      v21 = &v47[v22];
      v47 = v21;
      if ( v27 )
      {
        v13 = a6;
        v18 = v44;
        goto LABEL_14;
      }
    }
  }
  else
  {
LABEL_14:
    if ( v13 )
    {
      if ( (a9 & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 96LL) + 56LL) & 1) != 0
        && (*(_DWORD *)(*(_QWORD *)this + 488LL) & 4) == 0 )
      {
        v36 = v15;
        if ( v13 <= 0 )
          v36 = v15 - 1;
      }
      else
      {
        v36 = v15 - v18;
      }
      v10 = v12 * v36;
    }
    v28 = *(_QWORD *)this;
    if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)this + 400LL), a7, a8, &v46) )
    {
      v37 = *(_DWORD *)(v28 + 464);
      v38 = v46;
      if ( v12 + v37 + v46 < 0 )
        v38 = -(v37 + v12);
      if ( (a9 & 2) != 0 )
        v39 = *(_WORD *)(v28 + 460);
      else
        v39 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 112) + 32LL) + 118LL);
      if ( (int)v15 > 0 )
      {
        v40 = v50;
        v41 = v15;
        do
        {
          v42 = *v40++;
          if ( v42 == v39 )
            v10 += v38;
          --v41;
        }
        while ( v41 );
      }
    }
    v29 = v10 + v19;
    if ( (a9 & 1) != 0 )
      v29 += 16 * RFONTOBJ::lOverhang(this);
    if ( EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 684LL)) )
    {
      v11->cx = (v29 + 8) >> 4;
    }
    else
    {
      v45 = 0;
      bFToL((float)v29 * *v30, &v45, 0);
      v11->cx = v45;
    }
    v27 = !EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 688LL));
    v33 = *(_DWORD *)(v32 + 344);
    if ( v27 )
    {
      v45 = 0;
      bFToL((float)(16 * v33) * *v31, &v45, 0);
      v33 = v45;
    }
    v11->cy = v33;
    if ( gbDBCSCodePage
      && *(_DWORD *)(*(_QWORD *)this + 200LL) == 1
      && (*(_DWORD *)(*(_QWORD *)this + 488LL) & 0x200014) == 0x200000
      && (a5 == 900 || a5 == 2700) )
    {
      cx = v11->cx;
      v11->cx = v11->cy;
      v11->cy = cx;
    }
    return 1LL;
  }
}
