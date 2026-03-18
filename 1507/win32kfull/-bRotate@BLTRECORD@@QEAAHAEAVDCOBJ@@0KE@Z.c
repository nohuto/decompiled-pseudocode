/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00A0228
 * Callers:
 *     GreStretchBltInternal @ 0x1C009DE20 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00A1D64 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0122434 (GrePlgBlt.c)
 * Callees:
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C0004B78 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0004CC0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     UIntAdd @ 0x1C005D488 (UIntAdd.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C009F654 (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009F674 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00A00EC (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C00A0100 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00A0124 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C00A0190 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     UIntMult @ 0x1C01DC8F0 (UIntMult.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0280138 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     LongLongMult @ 0x1C0280308 (LongLongMult.c)
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
  struct _POINTFIX *v17; // r12
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
  FIX v35; // eax
  unsigned int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // r11
  struct EPOINTL *v39; // rax
  struct _POINTFIX *v40; // r13
  struct EPOINTL *v41; // rax
  struct EPOINTL *v42; // rax
  int v43; // r10d
  int v44; // r8d
  struct REGION *v45; // rax
  struct ECLIPOBJ *v46; // rdx
  __int64 v47; // r10
  __int64 v48; // rdx
  __int64 v49; // rsi
  char *v50; // r8
  struct SURFACE *v51; // rax
  struct _POINTFIX v52; // rcx
  BOOL (__stdcall *v53)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // r11
  struct _POINTFIX v54; // rax
  __int64 v55; // r10
  __int64 v56; // rdx
  UINT puResult; // [rsp+60h] [rbp-A0h] BYREF
  struct _RECTL v58; // [rsp+68h] [rbp-98h] BYREF
  UINT uMultiplicand; // [rsp+78h] [rbp-88h]
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  char v61; // [rsp+88h] [rbp-78h]
  int v62; // [rsp+8Ch] [rbp-74h]
  UINT uAugend; // [rsp+90h] [rbp-70h]
  int v64; // [rsp+98h] [rbp-68h] BYREF
  int v65; // [rsp+9Ch] [rbp-64h]
  int v66; // [rsp+A0h] [rbp-60h]
  int v67; // [rsp+A4h] [rbp-5Ch]
  _BYTE v68[4]; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTL v69; // [rsp+B4h] [rbp-4Ch] BYREF

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
        v58.left = this[22].y;
        y = this[24].y;
        LODWORD(v60) = v26;
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
          if ( (unsigned int)v60 > v34 )
            this[23].y = v58.left + v34;
        }
      }
    }
    if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == *((_QWORD *)*a3 + 6)
      || !*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50)
      || !*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)a3) + 50) )
    {
      v35 = this[27].x;
      if ( v35 == 52428 || v35 == 43724 )
      {
        if ( (unsigned int)XDCOBJ::bHasSurface(a2) && (unsigned int)XDCOBJ::bHasSurface((XDCOBJ *)a3) )
        {
          BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&v64);
          ++v67;
          ++v66;
          if ( (*(_DWORD *)(v38 + 36) & 0xE0) != 0 )
            XDCOBJ::vAccumulate(a2, (struct ERECTL *)&v64);
          v39 = DC::eptlOrigin(*(DC **)a2);
          v40 = this + 15;
          this[15].x += 16 * *(_DWORD *)v39;
          this[15].y += 16 * *((_DWORD *)v39 + 1);
          this[16].x += 16 * *(_DWORD *)v39;
          this[16].y += 16 * *((_DWORD *)v39 + 1);
          this[17].x += 16 * *(_DWORD *)v39;
          this[17].y += 16 * *((_DWORD *)v39 + 1);
          this[18].x += 16 * *(_DWORD *)v39;
          this[18].y += 16 * *((_DWORD *)v39 + 1);
          v41 = DC::eptlOrigin(*a3);
          this[22].x += *(_DWORD *)v41;
          this[23].x += *(_DWORD *)v41;
          this[22].y += *((_DWORD *)v41 + 1);
          this[23].y += *((_DWORD *)v41 + 1);
          v42 = DC::eptlOrigin(*(DC **)a2);
          v64 += *(_DWORD *)v42;
          v66 = *(_DWORD *)v42 + v43;
          v65 += *((_DWORD *)v42 + 1);
          v67 = *((_DWORD *)v42 + 1) + v44;
          v45 = XDCOBJ::prgnEffRao(a2);
          ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v68, v45, (struct ERECTL *)&v64, 0);
          if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v69) )
          {
            if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
            {
              v58 = v69;
              XDCOBJ::vAccumulateTight(a2, v46, &v58);
            }
            BLTRECORD::vMirror((BLTRECORD *)this, this + 15);
            if ( (int)LongLongMult(this[16].y - (__int64)this[15].y, this[17].x - (__int64)v40->x, &v60) < 0
              || (int)LongLongMult(this[17].y - (__int64)this[15].y, this[16].x - (__int64)v40->x, &v58) < 0 )
            {
              EngSetLastError(0x57u);
              return 0;
            }
            else if ( v60 != *(_QWORD *)&v58.left )
            {
              ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
              v48 = *(_QWORD *)a2;
              v49 = 0LL;
              if ( *(__int16 *)(v48 + 242) >= 0 )
                v49 = v48 + 240;
              if ( this[27].x == 52428 )
              {
                v50 = 0LL;
              }
              else
              {
                v51 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
                v50 = 0LL;
                if ( v51 )
                  v50 = (char *)v51 + 24;
              }
              v52 = this[8];
              if ( (*(_DWORD *)(*(_QWORD *)&v52 + 112LL) & 4) != 0 )
                v53 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v47 + 3280);
              else
                v53 = EngPlgBlt;
              v54 = this[9];
              v55 = v48 + 1576;
              v56 = 0LL;
              if ( v54 )
                v56 = *(_QWORD *)&v54 + 24LL;
              if ( v52 )
                v20 = *(_QWORD *)&v52 + 24LL;
              return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, struct _POINTFIX *, struct _POINTFIX *, _DWORD))v53)(
                       v20,
                       v56,
                       v50,
                       v68,
                       *(_QWORD *)&this[11],
                       v49,
                       v55,
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
        v60 = 0LL;
        v61 = 0;
        v62 = 0;
        *(_QWORD *)&v58.left = 0LL;
        LOBYTE(v58.right) = 0;
        v58.bottom = 0;
        if ( (unsigned int)BLTRECORD::bRotate((RECTL *)this, a3, (struct SURFMEM *)&v58, (struct SURFMEM *)&v60, a4, a5)
          && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]),
              (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15)) )
        {
          v36 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, (struct DCOBJ *)a3, a4);
          v37 = *(_QWORD *)a2;
          *(_DWORD *)(v37 + 36) |= 0x10u;
          *(_QWORD *)(v37 + 1528) = 0LL;
        }
        else
        {
          v36 = 0;
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v58);
        SURFMEM::~SURFMEM((SURFMEM *)&v60);
        return v36;
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
  *(_QWORD *)&v58.left = 0LL;
  LOBYTE(v58.right) = 0;
  v58.bottom = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v58, a5) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]);
    if ( (unsigned int)BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15) )
    {
      v15 = BLTRECORD::bBitBlt((BLTRECORD *)this, (DC **)a2, (struct DCOBJ *)a3, a4);
      v16 = *(_QWORD *)a2;
      *(_DWORD *)(v16 + 36) |= 0x10u;
      *(_QWORD *)(v16 + 1528) = 0LL;
      v12 = v15;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v58);
  return v12;
}
