/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F030
 * Callers:
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0122434 (GrePlgBlt.c)
 * Callees:
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C009EE8C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C009EF80 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C009EFB0 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009F674 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00A00EC (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0281C14 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bStretch(
        BLTRECORD *this,
        struct DCOBJ *a2,
        struct DCOBJ *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  struct ERECTL *v5; // rbp
  _QWORD *v8; // rcx
  __int64 v9; // r10
  char v10; // r9
  BLTRECORD *v11; // rcx
  int *v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r9d
  unsigned int v15; // esi
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned int v21; // r15d
  int v22; // edx
  int v23; // r12d
  __int64 v24; // r8
  __int64 v25; // r11
  char v26; // cl
  char v27; // al
  XDCOBJ *v28; // rcx
  XDCOBJ *v29; // r10
  XDCOBJ *v30; // rcx
  int *v31; // r12
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  __int64 v36; // rcx
  int *v37; // r13
  unsigned int v38; // r9d
  struct DCOBJ *v39; // r10
  int v40; // edx
  int v41; // ecx
  XDCOBJ *v42; // r10
  struct EPOINTL *v43; // rax
  DC **v44; // r10
  struct EPOINTL *v45; // rax
  struct REGION *v46; // rax
  struct ECLIPOBJ *v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r9
  __int64 v50; // rdx
  _DWORD *v51; // rax
  BOOL (__stdcall *v52)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rbp
  int v53; // ecx
  int v54; // r8d
  bool v55; // cc
  struct ERECTL *v56; // rbx
  __int64 v57; // r10
  __int64 v58; // rdx
  int v59; // r11d
  char *v60; // r8
  struct SURFACE *v61; // rax
  __int64 v62; // rax
  __int64 v63; // r14
  __int64 v64; // rdx
  __int64 v65; // rax
  int v66; // [rsp+70h] [rbp-108h]
  struct _RECTL v68; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v69[4]; // [rsp+90h] [rbp-E8h] BYREF
  struct _RECTL v70; // [rsp+94h] [rbp-E4h] BYREF

  v5 = (BLTRECORD *)((char *)this + 152);
  BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 152));
  if ( (v10 & 0xD4) == 0 )
  {
    BLTRECORD::vOrderStupid((BLTRECORD *)v8, (struct ERECTL *)(v8 + 24));
    v15 = 0;
    if ( BLTRECORD::pSurfMskOut(v11) )
    {
      if ( *v12 < 0
        || *(int *)(v13 + 196) < 0
        || (v16 = *(_QWORD *)(v13 + 80), *((_DWORD *)this + 50) > *(_DWORD *)(v16 + 56))
        || *((_DWORD *)this + 51) > *(_DWORD *)(v16 + 60) )
      {
        EngSetLastError(0x57u);
        return 0LL;
      }
    }
    *(_QWORD *)&v68.left = 0LL;
    LOBYTE(v68.right) = 0;
    v68.bottom = 0;
    if ( (v14 & 0x10000) != 0 )
    {
      if ( !(unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v68, a5) )
      {
LABEL_12:
        SURFMEM::~SURFMEM((SURFMEM *)&v68);
        return v15;
      }
      v14 = a4;
    }
    v18 = *((_DWORD *)this + 40) + *((_DWORD *)this + 44) - *(_DWORD *)v5;
    *((_DWORD *)this + 47) = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 39);
    *((_DWORD *)this + 46) = v18;
    v15 = BLTRECORD::bBitBlt(this, a2, a2, v14);
    goto LABEL_12;
  }
  v19 = 0LL;
  v20 = *(_QWORD *)(v8[8] + 48LL);
  v21 = 1;
  v22 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v22 & 0x200) == 0 || !v20 || (v23 = 1, (*(_DWORD *)(v20 + 56) & 0x20000) == 0) )
    v23 = 0;
  v24 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v66 = v23;
  v25 = *(_QWORD *)(*(_QWORD *)v9 + 48LL);
  if ( v24 == v25 || v23 )
    goto LABEL_39;
  if ( (v22 & 0x4000) != 0 || (v26 = 0, (*(_DWORD *)(*(_QWORD *)v9 + 36LL) & 0x4000) != 0) )
    v26 = 1;
  if ( (*(_DWORD *)(v24 + 56) & 0x8000) != 0 || (v27 = 0, (*(_DWORD *)(v25 + 56) & 0x8000) != 0) )
    v27 = 1;
  if ( v26 && !v27
    || !*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50) && !*((_QWORD *)XDCOBJ::pSurfaceEff(v28) + 3)
    || !*((_WORD *)XDCOBJ::pSurfaceEff(v29) + 50) && !*((_QWORD *)XDCOBJ::pSurfaceEff(v30) + 3) )
  {
LABEL_39:
    v31 = (int *)((char *)this + 192);
    v32 = *((_DWORD *)this + 48);
    v33 = *((_DWORD *)this + 50);
    if ( v32 > v33 )
    {
      *v31 = v33 + 1;
      *((_DWORD *)this + 50) = v32 + 1;
    }
    v34 = *((_DWORD *)this + 49);
    v35 = *((_DWORD *)this + 51);
    if ( v34 > v35 )
    {
      *((_DWORD *)this + 49) = v35 + 1;
      *((_DWORD *)this + 51) = v34 + 1;
    }
    if ( !BLTRECORD::pSurfMskOut(this)
      || *v31 >= 0
      && *((int *)this + 49) >= 0
      && (v36 = *((_QWORD *)this + 10), *((_DWORD *)this + 50) <= *(_DWORD *)(v36 + 56))
      && *((_DWORD *)this + 51) <= *(_DWORD *)(v36 + 60) )
    {
      v37 = (int *)((char *)this + 176);
      BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 176));
      if ( a5 != 4
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 68LL) != 2
        && !BLTRECORD::pSurfMskOut(this)
        && (*((_DWORD *)this + 55) & 0x18) == 0 )
      {
        v40 = *v37 + *((_DWORD *)this + 40) - *((_DWORD *)this + 46) - *(_DWORD *)v5;
        v41 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
        if ( (unsigned int)(v40 + 1) <= 2 && (unsigned int)(v41 + 1) <= 2 )
        {
          LODWORD(v19) = BLTRECORD::bBitBlt(this, a2, v39, v38, v40, v41);
          return (unsigned int)v19;
        }
      }
      if ( !(unsigned int)XDCOBJ::bHasSurface(a2) || !(unsigned int)XDCOBJ::bHasSurface(v42) )
      {
        LODWORD(v19) = 1;
        return (unsigned int)v19;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
        XDCOBJ::vAccumulate(a2, v5);
      v43 = DC::eptlOrigin(*(DC **)a2);
      *(_DWORD *)v5 += *(_DWORD *)v43;
      *((_DWORD *)v5 + 2) += *(_DWORD *)v43;
      *((_DWORD *)v5 + 1) += *((_DWORD *)v43 + 1);
      *((_DWORD *)v5 + 3) += *((_DWORD *)v43 + 1);
      v45 = DC::eptlOrigin(*v44);
      *v37 += *(_DWORD *)v45;
      *((_DWORD *)this + 46) += *(_DWORD *)v45;
      *((_DWORD *)this + 45) += *((_DWORD *)v45 + 1);
      *((_DWORD *)this + 47) += *((_DWORD *)v45 + 1);
      v46 = XDCOBJ::prgnEffRao(a2);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v69, v46, v5, 0);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v70) )
        return v21;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0
        && ((a4 & 0xE8) == 0 || (v48 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v48 + 128) & 0x100) == 0) )
      {
        v68 = v70;
        XDCOBJ::vAccumulateTight(a2, v47, &v68);
      }
      v49 = *((_QWORD *)this + 8);
      v50 = *((_QWORD *)this + 9);
      v51 = *(_DWORD **)(v50 + 48);
      if ( (*(_DWORD *)(v49 + 112) & 0x2000) != 0 )
        v52 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v20 + 3272);
      else
        v52 = EngStretchBltROP;
      if ( v66 )
      {
        v56 = (BLTRECORD *)((char *)this + 152);
LABEL_83:
        BLTRECORD::vMirror(this, v56);
        v57 = 0LL;
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v58 = *(_QWORD *)a2;
        if ( *(__int16 *)(*(_QWORD *)a2 + 242LL) >= 0 )
          v57 = v58 + 240;
        v59 = *((_DWORD *)this + 54);
        if ( v59 == 52428 )
        {
          v60 = 0LL;
        }
        else
        {
          v61 = BLTRECORD::pSurfMskOut(this);
          v60 = 0LL;
          if ( v61 )
            v60 = (char *)v61 + 24;
        }
        v62 = *((_QWORD *)this + 9);
        v63 = v58 + 1576;
        v64 = 0LL;
        if ( v62 )
          v64 = v62 + 24;
        v65 = *((_QWORD *)this + 8);
        if ( v65 )
          v19 = v65 + 24;
        return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct ERECTL *, char *, char *, _DWORD, _QWORD, int))v52)(
                 v19,
                 v64,
                 v60,
                 v69,
                 *((_QWORD *)this + 11),
                 v57,
                 v63,
                 v56,
                 (char *)this + 176,
                 (char *)this + 192,
                 a5,
                 *((_QWORD *)this + 12),
                 v59);
      }
      if ( a5 == 4 && (*(_BYTE *)(v20 + 1848) & 0x10) == 0 )
        v52 = EngStretchBltROP;
      if ( *(_WORD *)(v50 + 100) == 1 && v51 && (v51[14] & 0x20000) != 0 )
      {
        v53 = v51[652];
        if ( *v37 < v53 )
          goto LABEL_77;
        v54 = v51[653];
        if ( *((_DWORD *)this + 45) < v54 || *((_DWORD *)this + 46) > *(_DWORD *)(v50 + 56) + v53 )
          goto LABEL_77;
        v55 = *((_DWORD *)this + 47) <= v54 + *(_DWORD *)(v50 + 60);
      }
      else
      {
        if ( *v37 < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v50 + 56) )
          goto LABEL_77;
        v55 = *((_DWORD *)this + 47) <= *(_DWORD *)(v50 + 60);
      }
      if ( v55 )
      {
LABEL_78:
        v56 = (BLTRECORD *)((char *)this + 152);
        if ( v49 == v50 && (unsigned int)bIntersect((char *)this + 176, (char *)this + 152) )
          v52 = EngStretchBltROP;
        goto LABEL_83;
      }
LABEL_77:
      v52 = EngStretchBltROP;
      goto LABEL_78;
    }
  }
  EngSetLastError(0x57u);
  return (unsigned int)v19;
}
