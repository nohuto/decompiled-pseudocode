/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004868C
 * Callers:
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002D6BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z @ 0x1C0047DE0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0KJJ@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0047ED4 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0047F04 (-vOrderStupid@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0047FCC (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C0048C2C (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0281F84 (-bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
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
  int v20; // r8d
  unsigned int v21; // r12d
  __int64 v22; // rbx
  int v23; // r11d
  XDCOBJ *v24; // rcx
  XDCOBJ *v25; // r10
  XDCOBJ *v26; // rcx
  int *v27; // r15
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rcx
  int *v33; // r13
  struct DCOBJ *v34; // r10
  unsigned int v35; // r9d
  int v36; // edx
  int v37; // ecx
  struct EPOINTL *v38; // rax
  DC **v39; // r10
  struct EPOINTL *v40; // rax
  struct REGION *v41; // rax
  struct ECLIPOBJ *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r9
  __int64 v45; // rdx
  _DWORD *v46; // rax
  BOOL (__stdcall *v47)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rbp
  int v48; // ecx
  int v49; // r8d
  bool v50; // cc
  struct ERECTL *v51; // rbx
  char *v52; // r10
  DC *v53; // rdx
  int v54; // r11d
  char *v55; // r8
  struct SURFACE *v56; // rax
  __int64 v57; // rax
  char *v58; // r14
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // [rsp+70h] [rbp-108h]
  struct _RECTL v63; // [rsp+78h] [rbp-100h] BYREF
  _BYTE v64[4]; // [rsp+90h] [rbp-E8h] BYREF
  struct _RECTL v65; // [rsp+94h] [rbp-E4h] BYREF

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
    *(_QWORD *)&v63.left = 0LL;
    LOBYTE(v63.right) = 0;
    v63.bottom = 0;
    if ( (v14 & 0x10000) != 0 )
    {
      if ( !(unsigned int)BLTRECORD::bStretch(this, (struct SURFMEM *)&v63, a5) )
      {
LABEL_12:
        SURFMEM::~SURFMEM((SURFMEM *)&v63);
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
  v20 = *((_DWORD *)*a2 + 9);
  v21 = 1;
  v22 = *(_QWORD *)(v8[8] + 48LL);
  if ( (v20 & 0x200) == 0 || !v22 || (v23 = 1, (*(_DWORD *)(v22 + 56) & 0x20000) == 0) )
    v23 = 0;
  v61 = v23;
  if ( *((_QWORD *)*a2 + 6) == *(_QWORD *)(*(_QWORD *)v9 + 48LL)
    || (v20 & 0x4000) != 0
    || (*(_DWORD *)(*(_QWORD *)v9 + 36LL) & 0x4000) != 0
    || v23
    || !*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)a2) + 50) && !*((_QWORD *)XDCOBJ::pSurfaceEff(v24) + 3)
    || !*((_WORD *)XDCOBJ::pSurfaceEff(v25) + 50) && !*((_QWORD *)XDCOBJ::pSurfaceEff(v26) + 3) )
  {
    v27 = (int *)((char *)this + 192);
    v28 = *((_DWORD *)this + 48);
    v29 = *((_DWORD *)this + 50);
    if ( v28 > v29 )
    {
      *v27 = v29 + 1;
      *((_DWORD *)this + 50) = v28 + 1;
    }
    v30 = *((_DWORD *)this + 49);
    v31 = *((_DWORD *)this + 51);
    if ( v30 > v31 )
    {
      *((_DWORD *)this + 49) = v31 + 1;
      *((_DWORD *)this + 51) = v30 + 1;
    }
    if ( !BLTRECORD::pSurfMskOut(this)
      || *v27 >= 0
      && *((int *)this + 49) >= 0
      && (v32 = *((_QWORD *)this + 10), *((_DWORD *)this + 50) <= *(_DWORD *)(v32 + 56))
      && *((_DWORD *)this + 51) <= *(_DWORD *)(v32 + 60) )
    {
      v33 = (int *)((char *)this + 176);
      BLTRECORD::vOrderStupid(this, (BLTRECORD *)((char *)this + 176));
      if ( a5 != 4
        && *(_DWORD *)(*((_QWORD *)*a2 + 10) + 68LL) != 2
        && !BLTRECORD::pSurfMskOut(this)
        && (*((_DWORD *)this + 55) & 0x18) == 0 )
      {
        v36 = *v33 + *((_DWORD *)this + 40) - *((_DWORD *)this + 46) - *(_DWORD *)v5;
        v37 = *((_DWORD *)this + 41) + *((_DWORD *)this + 45) - *((_DWORD *)this + 47) - *((_DWORD *)this + 39);
        if ( (unsigned int)(v36 + 1) <= 2 && (unsigned int)(v37 + 1) <= 2 )
        {
          LODWORD(v19) = BLTRECORD::bBitBlt(this, (struct DCOBJ *)a2, v34, v35, v36, v37);
          return (unsigned int)v19;
        }
      }
      if ( !*((_QWORD *)*a2 + 64) || !*(_QWORD *)(*(_QWORD *)v34 + 512LL) )
      {
        LODWORD(v19) = 1;
        return (unsigned int)v19;
      }
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)a2, v5);
      v38 = DC::eptlOrigin(*a2);
      *(_DWORD *)v5 += *(_DWORD *)v38;
      *((_DWORD *)v5 + 2) += *(_DWORD *)v38;
      *((_DWORD *)v5 + 1) += *((_DWORD *)v38 + 1);
      *((_DWORD *)v5 + 3) += *((_DWORD *)v38 + 1);
      v40 = DC::eptlOrigin(*v39);
      *v33 += *(_DWORD *)v40;
      *((_DWORD *)this + 46) += *(_DWORD *)v40;
      *((_DWORD *)this + 45) += *((_DWORD *)v40 + 1);
      *((_DWORD *)this + 47) += *((_DWORD *)v40 + 1);
      v41 = XDCOBJ::prgnEffRao((XDCOBJ *)a2);
      ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v64, v41, v5, 0);
      if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v65) )
        return v21;
      if ( (*((_DWORD *)*a2 + 9) & 0xE0) != 0
        && ((a4 & 0xE8) == 0 || (v43 = *((_QWORD *)this + 12)) != 0 && (*(_DWORD *)(v43 + 128) & 0x100) == 0) )
      {
        v63 = v65;
        XDCOBJ::vAccumulateTight((XDCOBJ *)a2, v42, &v63);
      }
      v44 = *((_QWORD *)this + 8);
      v45 = *((_QWORD *)this + 9);
      v46 = *(_DWORD **)(v45 + 48);
      if ( (*(_DWORD *)(v44 + 112) & 0x2000) != 0 )
        v47 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(v22 + 3272);
      else
        v47 = EngStretchBltROP;
      if ( v61 )
      {
        v51 = (BLTRECORD *)((char *)this + 152);
LABEL_77:
        BLTRECORD::vMirror(this, v51);
        v52 = 0LL;
        ++*(_DWORD *)(*((_QWORD *)this + 8) + 92LL);
        v53 = *a2;
        if ( *((__int16 *)*a2 + 121) >= 0 )
          v52 = (char *)v53 + 240;
        v54 = *((_DWORD *)this + 54);
        if ( v54 == 52428 )
        {
          v55 = 0LL;
        }
        else
        {
          v56 = BLTRECORD::pSurfMskOut(this);
          v55 = 0LL;
          if ( v56 )
            v55 = (char *)v56 + 24;
        }
        v57 = *((_QWORD *)this + 9);
        v58 = (char *)v53 + 1552;
        v59 = 0LL;
        if ( v57 )
          v59 = v57 + 24;
        v60 = *((_QWORD *)this + 8);
        if ( v60 )
          v19 = v60 + 24;
        return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, char *, char *, struct ERECTL *, char *, char *, _DWORD, _QWORD, int))v47)(
                 v19,
                 v59,
                 v55,
                 v64,
                 *((_QWORD *)this + 11),
                 v52,
                 v58,
                 v51,
                 (char *)this + 176,
                 (char *)this + 192,
                 a5,
                 *((_QWORD *)this + 12),
                 v54);
      }
      if ( a5 == 4 && (*(_BYTE *)(v22 + 1848) & 0x10) == 0 )
        v47 = EngStretchBltROP;
      if ( *(_WORD *)(v45 + 100) == 1 && v46 && (v46[14] & 0x20000) != 0 )
      {
        v48 = v46[652];
        if ( *v33 < v48 )
          goto LABEL_71;
        v49 = v46[653];
        if ( *((_DWORD *)this + 45) < v49 || *((_DWORD *)this + 46) > *(_DWORD *)(v45 + 56) + v48 )
          goto LABEL_71;
        v50 = *((_DWORD *)this + 47) <= v49 + *(_DWORD *)(v45 + 60);
      }
      else
      {
        if ( *v33 < 0 || *((int *)this + 45) < 0 || *((_DWORD *)this + 46) > *(_DWORD *)(v45 + 56) )
          goto LABEL_71;
        v50 = *((_DWORD *)this + 47) <= *(_DWORD *)(v45 + 60);
      }
      if ( v50 )
      {
LABEL_72:
        v51 = (BLTRECORD *)((char *)this + 152);
        if ( v44 == v45 && (unsigned int)bIntersect((char *)this + 176, (char *)this + 152) )
          v47 = EngStretchBltROP;
        goto LABEL_77;
      }
LABEL_71:
      v47 = EngStretchBltROP;
      goto LABEL_72;
    }
  }
  EngSetLastError(0x57u);
  return (unsigned int)v19;
}
