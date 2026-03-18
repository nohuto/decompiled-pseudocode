/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004D800
 * Callers:
 *     GrePlgBlt @ 0x1C00011A4 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0049064 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C004CACC (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C004CBC0 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C004CBF0 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C004DDD4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C027FDD4 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bStretch(BLTRECORD *this, DC **a2, struct DCOBJ *a3, char a4, unsigned __int8 a5)
{
  struct ERECTL *v5; // rbp
  _QWORD *v8; // rcx
  __int64 v9; // r10
  char v10; // r9
  BLTRECORD *v11; // rcx
  int *v12; // rdx
  __int64 v13; // rcx
  int v14; // r9d
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
  struct DCOBJ *v38; // r10
  unsigned int v39; // r9d
  int v40; // edx
  int v41; // ecx
  struct EPOINTL *v42; // rax
  DC **v43; // r10
  struct EPOINTL *v44; // rax
  struct REGION *v45; // rax
  struct ECLIPOBJ *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // r9
  __int64 v49; // rdx
  _DWORD *v50; // rax
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rbp
  int v52; // ecx
  int v53; // r8d
  bool v54; // cc
  struct ERECTL *v55; // rbx
  char *v56; // r10
  DC *v57; // rdx
  int v58; // r11d
  char *v59; // r8
  struct SURFACE *v60; // rax
  __int64 v61; // rax
  char *v62; // r14
  __int64 v63; // rdx
  __int64 v64; // rax
  int v66; // [rsp+74h] [rbp-104h]
  struct _RECTL v67; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v68[4]; // [rsp+90h] [rbp-E8h] BYREF
  struct _RECTL v69; // [rsp+94h] [rbp-E4h] BYREF

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
    *(_QWORD *)&v67.left = 0LL;
    LOBYTE(v67.right) = 0;
    v67.bottom = 0;
    if ( (v14 & 0x10000) != 0 )
    {
      if ( !(unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v67, a5) )
      {
LABEL_12:
        SURFMEM::~SURFMEM((SURFMEM *)&v67);
        return v15;
      }
      LOBYTE(v14) = a4;
    }
    v18 = *((_DWORD *)this + 40) + *((_DWORD *)this + 44) - *(_DWORD *)v5;
    *((_DWORD *)this + 47) = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 39);
    *((_DWORD *)this + 46) = v18;
    v15 = BLTRECORD::bBitBlt(this, a2, (struct DCOBJ *)a2, v14);
    goto LABEL_12;
  }
  v19 = 0LL;
  v20 = *(_QWORD *)(v8[8] + 48LL);
  v21 = 1;
  v22 = *((_DWORD *)*a2 + 9);
  if ( (v22 & 0x200) == 0 || !v20 || (v23 = 1, (*(_DWORD *)(v20 + 56) & 0x20000) == 0) )
    v23 = 0;
  v24 = *((_QWORD *)*a2 + 6);
  v66 = v23;
  v25 = *(_QWORD *)(*(_QWORD *)v9 + 48LL);
  if ( v24 == v25 || v23 )
    goto LABEL_39;
  if ( (v22 & 0x4000) != 0 || (v26 = 0, (*(_DWORD *)(*(_QWORD *)v9 + 36LL) & 0x4000) != 0) )
    v26 = 1;
  if ( (*(_DWORD *)(v24 + 56) & 0x8000) != 0 || (v27 = 0, (*(_DWORD *)(v25 + 56) & 0x8000) != 0) )
    v27 = 1;
  if ( v26 && !v27
    || !*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)a2) + 50) && !*((_QWORD *)XDCOBJ::pSurfaceEff(v28) + 3)
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
        && *(_DWORD *)(*((_QWORD *)*a2 + 10) + 68LL) != 2
        && !BLTRECORD::pSurfMskOut(this)
        && (*((_DWORD *)this + 55) & 0x18) == 0 )
      {
        v40 = *v37 + *((_DWORD *)this + 40) - *((_DWORD *)this + 46) - *(_DWORD *)v5;
        v41 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
        if ( (unsigned int)(v40 + 1) <= 2 && (unsigned int)(v41 + 1) <= 2 )
        {
          LODWORD(v19) = BLTRECORD::bBitBlt(this, (struct DCOBJ *)a2, v38, v39, v40, v41);
          return (unsigned int)v19;
        }
      }
      if ( !*((_QWORD *)*a2 + 64) || !*(_QWORD *)(*(_QWORD *)v38 + 512LL) )
      {
        LODWORD(v19) = 1;
        return (unsigned int)v19;
      }
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)a2, v5);
      v42 = DC::eptlOrigin(*a2);
      *(_DWORD *)v5 += *(_DWORD *)v42;
      *((_DWORD *)v5 + 2) += *(_DWORD *)v42;
      *((_DWORD *)v5 + 1) += *((_DWORD *)v42 + 1);
      *((_DWORD *)v5 + 3) += *((_DWORD *)v42 + 1);
      v44 = DC::eptlOrigin(*v43);
      *v37 += *(_DWORD *)v44;
      *((_DWORD *)this + 46) += *(_DWORD *)v44;
      *((_DWORD *)this + 45) += *((_DWORD *)v44 + 1);
      *((_DWORD *)this + 47) += *((_DWORD *)v44 + 1);
      v45 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v68, v45, v5, 0);
      if ( ERECTL::bEmpty((ERECTL *)&v69) )
        return v21;
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0
        && ((a4 & 0xE8) == 0 || (v47 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v47 + 128) & 0x100) == 0) )
      {
        v67 = v69;
        XDCOBJ::vAccumulateTight((struct _RECTL **)a2, v46, &v67);
      }
      v48 = *((_QWORD *)this + 8);
      v49 = *((_QWORD *)this + 9);
      v50 = *(_DWORD **)(v49 + 48);
      if ( (*(_DWORD *)(v48 + 112) & 0x2000) != 0 )
        v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v20 + 3264);
      else
        v51 = EngStretchBltROP;
      if ( v66 )
      {
        v55 = (BLTRECORD *)((char *)this + 152);
LABEL_83:
        BLTRECORD::vMirror(this, v55);
        v56 = 0LL;
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v57 = *a2;
        if ( *((__int16 *)*a2 + 121) >= 0 )
          v56 = (char *)v57 + 240;
        v58 = *((_DWORD *)this + 54);
        if ( v58 == 52428 )
        {
          v59 = 0LL;
        }
        else
        {
          v60 = BLTRECORD::pSurfMskOut(this);
          v59 = 0LL;
          if ( v60 )
            v59 = (char *)v60 + 24;
        }
        v61 = *((_QWORD *)this + 9);
        v62 = (char *)v57 + 1576;
        v63 = 0LL;
        if ( v61 )
          v63 = v61 + 24;
        v64 = *((_QWORD *)this + 8);
        if ( v64 )
          v19 = v64 + 24;
        return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, char *, char *, struct ERECTL *, char *, char *, _DWORD, _QWORD, int))v51)(
                 v19,
                 v63,
                 v59,
                 v68,
                 *((_QWORD *)this + 11),
                 v56,
                 v62,
                 v55,
                 (char *)this + 176,
                 (char *)this + 192,
                 a5,
                 *((_QWORD *)this + 12),
                 v58);
      }
      if ( a5 == 4 && (*(_BYTE *)(v20 + 1848) & 0x10) == 0 )
        v51 = EngStretchBltROP;
      if ( *(_WORD *)(v49 + 100) == 1 && v50 && (v50[14] & 0x20000) != 0 )
      {
        v52 = v50[652];
        if ( *v37 < v52 )
          goto LABEL_77;
        v53 = v50[653];
        if ( *((_DWORD *)this + 45) < v53 || *((_DWORD *)this + 46) > *(_DWORD *)(v49 + 56) + v52 )
          goto LABEL_77;
        v54 = *((_DWORD *)this + 47) <= v53 + *(_DWORD *)(v49 + 60);
      }
      else
      {
        if ( *v37 < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v49 + 56) )
          goto LABEL_77;
        v54 = *((_DWORD *)this + 47) <= *(_DWORD *)(v49 + 60);
      }
      if ( v54 )
      {
LABEL_78:
        v55 = (BLTRECORD *)((char *)this + 152);
        if ( v48 == v49 && (unsigned int)bIntersect((char *)this + 176, (char *)this + 152) )
          v51 = EngStretchBltROP;
        goto LABEL_83;
      }
LABEL_77:
      v51 = EngStretchBltROP;
      goto LABEL_78;
    }
  }
  EngSetLastError(0x57u);
  return (unsigned int)v19;
}
