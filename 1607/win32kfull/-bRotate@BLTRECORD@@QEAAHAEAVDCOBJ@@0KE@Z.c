/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00018FC
 * Callers:
 *     GrePlgBlt @ 0x1C00011A4 (GrePlgBlt.c)
 *     GreStretchBltInternal @ 0x1C004DDF0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C010ED68 (GreMaskBlt.c)
 * Callees:
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00017B4 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C0001820 (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C0001840 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C0001864 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0049064 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C004DDD4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     UIntAdd @ 0x1C0070A70 (UIntAdd.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     UIntMult @ 0x1C01CE8C4 (UIntMult.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C027DF88 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C027E088 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C027E2D4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     LongLongMult @ 0x1C027E4A4 (LongLongMult.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        struct _POINTFIX *this,
        struct DCOBJ *a2,
        DC **a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  FIX *v9; // rdx
  FIX v10; // ecx
  int *v11; // rdx
  unsigned int v12; // edi
  struct _POINTFIX v13; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  struct _POINTFIX *v17; // r15
  unsigned int v18; // r14d
  int x; // ecx
  __int64 v20; // rdi
  struct _POINTFIX v21; // rcx
  _DWORD *v22; // r9
  struct _POINTFIX v23; // r10
  unsigned int v24; // edx
  unsigned int v25; // r9d
  unsigned int v26; // r8d
  UINT v27; // r11d
  UINT v28; // ecx
  UINT y; // eax
  __int64 v30; // r10
  __int64 v31; // r10
  unsigned int v32; // r11d
  UINT v33; // eax
  UINT v34; // eax
  DC *v35; // rdx
  __int64 v36; // r11
  FIX v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rax
  __int64 v40; // r11
  struct EPOINTL *v41; // rax
  struct _POINTFIX *v42; // r12
  struct EPOINTL *v43; // rax
  struct EPOINTL *v44; // rax
  int v45; // r10d
  int v46; // r8d
  struct REGION *v47; // rax
  struct ECLIPOBJ *v48; // rdx
  __int64 v49; // r10
  __int64 v50; // rdx
  __int64 v51; // rsi
  char *v52; // r8
  struct SURFACE *v53; // rax
  struct _POINTFIX v54; // rcx
  BOOL (__stdcall *v55)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // r11
  struct _POINTFIX v56; // rax
  __int64 v57; // r10
  __int64 v58; // rdx
  UINT puResult; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v60; // [rsp+68h] [rbp-98h] BYREF
  UINT uMultiplicand; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h] BYREF
  char v63; // [rsp+88h] [rbp-78h]
  int v64; // [rsp+8Ch] [rbp-74h]
  UINT uAugend; // [rsp+90h] [rbp-70h]
  int v66; // [rsp+98h] [rbp-68h] BYREF
  int v67; // [rsp+9Ch] [rbp-64h]
  int v68; // [rsp+A0h] [rbp-60h]
  int v69; // [rsp+A4h] [rbp-5Ch]
  _BYTE v70[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v71[9]; // [rsp+B4h] [rbp-4Ch] BYREF

  BLTRECORD::vExtrema((BLTRECORD *)this);
  if ( (a4 & 0xD4) != 0 )
  {
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[22]);
    v17 = this + 24;
    ERECTL::vOrder((ERECTL *)&this[24]);
    v18 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1) != 0 )
    {
      x = v17->x;
      v17->x = this[25].x;
      this[25].x = x;
    }
    v20 = 0LL;
    if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
    {
      if ( v17->x < 0 )
        goto LABEL_9;
      if ( this[24].y < 0 )
        goto LABEL_9;
      v21 = this[10];
      if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v21 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v21 + 60LL) )
        goto LABEL_9;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1) != 0 )
    {
      if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
      {
        v23 = this[10];
        v24 = this[23].x - *v22;
        v25 = *(_DWORD *)(*(_QWORD *)&v23 + 56LL);
        v26 = this[23].y - this[22].y;
        v27 = v17->x;
        v28 = *(_DWORD *)(*(_QWORD *)&v23 + 60LL);
        LODWORD(v60) = this[22].y;
        y = this[24].y;
        LODWORD(v62) = v26;
        uMultiplicand = y;
        if ( v25 < v27 || v28 < y || v25 - v27 < v24 || v28 - uMultiplicand < v26 )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v23 + 96LL) != 1 )
            goto LABEL_9;
          if ( *(_WORD *)(*(_QWORD *)&v23 + 100LL) )
            goto LABEL_9;
          if ( v25 < v24 )
            goto LABEL_9;
          if ( UIntAdd(v27, 7u, &puResult) < 0 )
            goto LABEL_9;
          uAugend = puResult >> 3;
          if ( UIntMult(uMultiplicand, abs32(*(_DWORD *)(v30 + 88)), &puResult) < 0 )
            goto LABEL_9;
          if ( UIntAdd(uAugend, puResult, &puResult) < 0 )
            goto LABEL_9;
          v33 = *(_DWORD *)(v31 + 64);
          if ( puResult >= v33 )
            goto LABEL_9;
          v34 = (v33 - puResult) / v32;
          if ( (unsigned int)v62 > v34 )
            this[23].y = v60 + v34;
        }
      }
    }
    v35 = *a3;
    v36 = *(_QWORD *)a2;
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == *((_QWORD *)*a3 + 6)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50)
      || !*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)a3) + 50) )
    {
      v37 = this[27].x;
      if ( v37 == 52428 || v37 == 43724 )
      {
        if ( *(_QWORD *)(v36 + 512) && *((_QWORD *)v35 + 64) )
        {
          BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&v66);
          ++v69;
          ++v68;
          if ( (*(_DWORD *)(v40 + 36) & 0xE0) != 0 )
            XDCOBJ::vAccumulate(a2, (struct ERECTL *)&v66);
          v41 = DC::eptlOrigin(*(DC **)a2);
          v42 = this + 15;
          this[15].x += 16 * *(_DWORD *)v41;
          this[15].y += 16 * *((_DWORD *)v41 + 1);
          this[16].x += 16 * *(_DWORD *)v41;
          this[16].y += 16 * *((_DWORD *)v41 + 1);
          this[17].x += 16 * *(_DWORD *)v41;
          this[17].y += 16 * *((_DWORD *)v41 + 1);
          this[18].x += 16 * *(_DWORD *)v41;
          this[18].y += 16 * *((_DWORD *)v41 + 1);
          v43 = DC::eptlOrigin(*a3);
          this[22].x += *(_DWORD *)v43;
          this[23].x += *(_DWORD *)v43;
          this[22].y += *((_DWORD *)v43 + 1);
          this[23].y += *((_DWORD *)v43 + 1);
          v44 = DC::eptlOrigin(*(DC **)a2);
          v66 += *(_DWORD *)v44;
          v68 = *(_DWORD *)v44 + v45;
          v67 += *((_DWORD *)v44 + 1);
          v69 = *((_DWORD *)v44 + 1) + v46;
          v47 = XDCOBJ::prgnEffRao(a2);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v70, v47, (struct ERECTL *)&v66, 0);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v71) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
            {
              v60 = v71[0];
              XDCOBJ::vAccumulateTight(a2, v48, (struct ERECTL *)&v60);
            }
            BLTRECORD::vMirror((BLTRECORD *)this, this + 15);
            if ( (int)LongLongMult(this[16].y - (__int64)this[15].y, this[17].x - (__int64)v42->x, &v62) < 0
              || (int)LongLongMult(this[17].y - (__int64)this[15].y, this[16].x - (__int64)v42->x, &v60) < 0 )
            {
              EngSetLastError(0x57u);
              return 0;
            }
            else if ( v62 != (_QWORD)v60 )
            {
              ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
              v50 = *(_QWORD *)a2;
              v51 = 0LL;
              if ( *(__int16 *)(v50 + 242) >= 0 )
                v51 = v50 + 240;
              if ( this[27].x == 52428 )
              {
                v52 = 0LL;
              }
              else
              {
                v53 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
                v52 = 0LL;
                if ( v53 )
                  v52 = (char *)v53 + 24;
              }
              v54 = this[8];
              if ( (*(_DWORD *)(*(_QWORD *)&v54 + 112LL) & 4) != 0 )
                v55 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v49 + 3272);
              else
                v55 = EngPlgBlt;
              v56 = this[9];
              v57 = v50 + 1576;
              v58 = 0LL;
              if ( v56 )
                v58 = *(_QWORD *)&v56 + 24LL;
              if ( v54 )
                v20 = *(_QWORD *)&v54 + 24LL;
              return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, struct _POINTFIX *, struct _POINTFIX *, _DWORD))v55)(
                       v20,
                       v58,
                       v52,
                       v70,
                       *(_QWORD *)&this[11],
                       v51,
                       v57,
                       &this[15],
                       &this[22],
                       &this[24],
                       a5);
            }
          }
        }
        return v18;
      }
      else
      {
        v62 = 0LL;
        v63 = 0;
        v64 = 0;
        *(_QWORD *)&v60 = 0LL;
        BYTE8(v60) = 0;
        HIDWORD(v60) = 0;
        if ( (unsigned int)BLTRECORD::bRotate(
                             (BLTRECORD *)this,
                             (struct DCOBJ *)a3,
                             (struct SURFMEM *)&v60,
                             (struct SURFMEM *)&v62,
                             a4,
                             a5)
          && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]),
              BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15)) )
        {
          v38 = BLTRECORD::bBitBlt((BLTRECORD *)this, a2, (struct DCOBJ *)a3, a4);
          v39 = *(_QWORD *)a2;
          *(_DWORD *)(v39 + 36) |= 0x10u;
          *(_QWORD *)(v39 + 1528) = 0LL;
        }
        else
        {
          v38 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v60);
        SURFMEM::~SURFMEM((SURFMEM *)&v62);
        return v38;
      }
    }
LABEL_9:
    EngSetLastError(0x57u);
    return 0LL;
  }
  BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[24]);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1) != 0 )
  {
    v10 = *v9;
    *v9 = this[25].x;
    this[25].x = v10;
  }
  v12 = 0;
  if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
  {
    if ( *v11 < 0 )
      goto LABEL_9;
    if ( this[24].y < 0 )
      goto LABEL_9;
    v13 = this[10];
    if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v13 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v13 + 60LL) )
      goto LABEL_9;
  }
  *(_QWORD *)&v60 = 0LL;
  BYTE8(v60) = 0;
  HIDWORD(v60) = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v60, a5) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]);
    if ( BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15) )
    {
      v15 = BLTRECORD::bBitBlt((BLTRECORD *)this, a2, (struct DCOBJ *)a3, a4);
      v16 = *(_QWORD *)a2;
      *(_DWORD *)(v16 + 36) |= 0x10u;
      *(_QWORD *)(v16 + 1528) = 0LL;
      v12 = v15;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v60);
  return v12;
}
