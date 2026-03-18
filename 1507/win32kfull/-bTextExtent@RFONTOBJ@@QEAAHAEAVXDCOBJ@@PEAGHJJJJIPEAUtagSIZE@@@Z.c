/*
 * XREFs of ?bTextExtent@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAGHJJJJIPEAUtagSIZE@@@Z @ 0x1C002A670
 * Callers:
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002AF58 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C002B0DC (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bIs1Over16@EFLOAT@@QEAAHXZ @ 0x1C0032824 (-bIs1Over16@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C00FF8E0 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rdx
  LONG v33; // eax
  int v35; // ebx
  int v36; // edx
  int v37; // ecx
  __int16 v38; // r8
  unsigned __int16 *v39; // r9
  __int64 v40; // rdx
  __int16 v41; // ax
  LONG cx; // edx
  LONG v43; // [rsp+30h] [rbp-D0h] BYREF
  int v44; // [rsp+34h] [rbp-CCh] BYREF
  int v45; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v46; // [rsp+40h] [rbp-C0h]
  struct XDCOBJ *v47; // [rsp+48h] [rbp-B8h]
  struct tagSIZE *v48; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v49; // [rsp+58h] [rbp-A8h]
  struct _GLYPHPOS v50; // [rsp+60h] [rbp-A0h] BYREF

  v44 = 0;
  v10 = 0;
  v11 = a10;
  v12 = 0;
  v13 = a6;
  v15 = a4;
  v16 = a2;
  v49 = a3;
  v47 = a2;
  v48 = a10;
  v45 = 0;
  if ( a6 )
  {
    v44 = 0;
    bFToL(this, &v44, 0LL);
    v12 = v44;
    v16 = v47;
    v44 = v18;
  }
  else
  {
    v18 = v44;
  }
  v19 = 0;
  v20 = v15;
  v43 = v15;
  v21 = a3;
  v46 = a3;
  if ( (_DWORD)v15 )
  {
    while ( 1 )
    {
      v22 = v20;
      if ( v20 > 82 )
        v22 = 82;
      if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(this, v22, &v50, v21, v16, 0LL) )
        return 0LL;
      if ( v22 > 0 )
      {
        v23 = v44;
        p_pgdf = &v50.pgdf;
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
        v10 = v45;
        v44 = v23;
        v11 = v48;
      }
      v16 = v47;
      v27 = v43 == v22;
      v20 = v43 - v22;
      v43 -= v22;
      v21 = &v46[v22];
      v46 = v21;
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
        v35 = v15;
        if ( v13 <= 0 )
          v35 = v15 - 1;
      }
      else
      {
        v35 = v15 - v18;
      }
      v10 = v12 * v35;
    }
    v28 = *(_QWORD *)this;
    if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)this + 400LL), a7, a8, &v45) )
    {
      v36 = *(_DWORD *)(v28 + 464);
      v37 = v45;
      if ( v12 + v36 + v45 < 0 )
        v37 = -(v36 + v12);
      if ( (a9 & 2) != 0 )
        v38 = *(_WORD *)(v28 + 460);
      else
        v38 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 112) + 32LL) + 118LL);
      if ( (int)v15 > 0 )
      {
        v39 = v49;
        v40 = v15;
        do
        {
          v41 = *v39++;
          if ( v41 == v38 )
            v10 += v37;
          --v40;
        }
        while ( v40 );
      }
    }
    v29 = v10 + v19;
    if ( (a9 & 1) != 0 )
      v29 += 16 * RFONTOBJ::lOverhang(this);
    if ( (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 684LL)) )
    {
      v11->cx = (v29 + 8) >> 4;
    }
    else
    {
      v43 = 0;
      bFToL(v30, &v43, 0LL);
      v11->cx = v43;
    }
    v27 = (unsigned int)EFLOAT::bIs1Over16((EFLOAT *)(*(_QWORD *)this + 688LL)) == 0;
    v33 = *(_DWORD *)(v32 + 344);
    if ( v27 )
    {
      v43 = 0;
      bFToL(v31, &v43, 0LL);
      v33 = v43;
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
