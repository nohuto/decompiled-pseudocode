/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C000B448
 * Callers:
 *     GreStretchBltInternal @ 0x1C0046C60 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00F0648 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C028000C (GrePlgBlt.c)
 * Callees:
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C000B2B8 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C000B36C (-vOrder@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C000B38C (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C000B3B0 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002D6BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0047FCC (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C0048C2C (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z @ 0x1C027FA78 (-bCreateRegion@BLTRECORD@@QEAAHAEAVDCOBJ@@PEAU_POINTFIX@@@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C027FB78 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C027FDC4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        struct _POINTFIX *this,
        struct DCOBJ *a2,
        DC **a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  struct _POINTFIX *v9; // r13
  unsigned int v10; // r14d
  __int64 v11; // rdi
  DC *v12; // rdx
  __int64 v13; // r11
  FIX v14; // eax
  __int64 v15; // r11
  struct EPOINTL *v16; // rax
  struct EPOINTL *v17; // rax
  struct EPOINTL *v18; // rax
  int v19; // r10d
  int v20; // r8d
  struct REGION *v21; // rax
  struct ECLIPOBJ *v22; // rdx
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rsi
  char *v26; // r8
  struct _POINTFIX v27; // rcx
  BOOL (__stdcall *v28)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // r11
  struct _POINTFIX v29; // rax
  __int64 v30; // r10
  __int64 v31; // rdx
  FIX *v33; // rdx
  FIX v34; // ecx
  int *v35; // rdx
  unsigned int v36; // edi
  struct _POINTFIX v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rcx
  int x; // ecx
  struct _POINTFIX v41; // rcx
  unsigned int v42; // ebx
  __int64 v43; // rax
  struct SURFACE *v44; // rax
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  char v46; // [rsp+68h] [rbp-98h]
  int v47; // [rsp+6Ch] [rbp-94h]
  __int128 v48; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+84h] [rbp-7Ch]
  int v51; // [rsp+88h] [rbp-78h]
  int v52; // [rsp+8Ch] [rbp-74h]
  _BYTE v53[4]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v54[9]; // [rsp+94h] [rbp-6Ch] BYREF

  BLTRECORD::vExtrema((BLTRECORD *)this);
  if ( (a4 & 0xD4) != 0 )
  {
    BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[22]);
    v9 = this + 24;
    ERECTL::vOrder((ERECTL *)&this[24]);
    v10 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1) != 0 )
    {
      x = v9->x;
      v9->x = this[25].x;
      this[25].x = x;
    }
    v11 = 0LL;
    if ( !BLTRECORD::pSurfMskOut((BLTRECORD *)this)
      || v9->x >= 0
      && this[24].y >= 0
      && (v41 = this[10], this[25].x <= *(_DWORD *)(*(_QWORD *)&v41 + 56LL))
      && this[25].y <= *(_DWORD *)(*(_QWORD *)&v41 + 60LL) )
    {
      v12 = *a3;
      v13 = *(_QWORD *)a2;
      if ( *(_QWORD *)(*(_QWORD *)a2 + 48LL) == *((_QWORD *)*a3 + 6)
        || !*((_WORD *)XDCOBJ::pSurfaceEff(a2) + 50)
        || !*((_WORD *)XDCOBJ::pSurfaceEff((XDCOBJ *)a3) + 50) )
      {
        v14 = this[27].x;
        if ( v14 == 52428 || v14 == 43724 )
        {
          if ( *(_QWORD *)(v13 + 512) && *((_QWORD *)v12 + 64) )
          {
            BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&v49);
            ++v52;
            ++v51;
            if ( (*(_DWORD *)(v15 + 36) & 0xE0) != 0 )
              XDCOBJ::vAccumulate(a2, (struct ERECTL *)&v49);
            v16 = DC::eptlOrigin(*(DC **)a2);
            this[15].x += 16 * *(_DWORD *)v16;
            this[15].y += 16 * *((_DWORD *)v16 + 1);
            this[16].x += 16 * *(_DWORD *)v16;
            this[16].y += 16 * *((_DWORD *)v16 + 1);
            this[17].x += 16 * *(_DWORD *)v16;
            this[17].y += 16 * *((_DWORD *)v16 + 1);
            this[18].x += 16 * *(_DWORD *)v16;
            this[18].y += 16 * *((_DWORD *)v16 + 1);
            v17 = DC::eptlOrigin(*a3);
            this[22].x += *(_DWORD *)v17;
            this[23].x += *(_DWORD *)v17;
            this[22].y += *((_DWORD *)v17 + 1);
            this[23].y += *((_DWORD *)v17 + 1);
            v18 = DC::eptlOrigin(*(DC **)a2);
            v49 += *(_DWORD *)v18;
            v51 = *(_DWORD *)v18 + v19;
            v50 += *((_DWORD *)v18 + 1);
            v52 = *((_DWORD *)v18 + 1) + v20;
            v21 = XDCOBJ::prgnEffRao(a2);
            ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v53, v21, (struct ERECTL *)&v49, 0);
            if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v54) )
            {
              if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
              {
                v48 = v54[0];
                XDCOBJ::vAccumulateTight(a2, v22, (struct ERECTL *)&v48);
              }
              BLTRECORD::vMirror((BLTRECORD *)this, this + 15);
              ++*(_DWORD *)(*(_QWORD *)&this[8] + 92LL);
              v24 = *(_QWORD *)a2;
              v25 = 0LL;
              if ( *(__int16 *)(v24 + 242) >= 0 )
                v25 = v24 + 240;
              if ( this[27].x == 52428 )
              {
                v26 = 0LL;
              }
              else
              {
                v44 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
                v26 = 0LL;
                if ( v44 )
                  v26 = (char *)v44 + 24;
              }
              v27 = this[8];
              if ( (*(_DWORD *)(*(_QWORD *)&v27 + 112LL) & 4) != 0 )
                v28 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(v23 + 3280);
              else
                v28 = EngPlgBlt;
              v29 = this[9];
              v30 = v24 + 1552;
              v31 = 0LL;
              if ( v29 )
                v31 = *(_QWORD *)&v29 + 24LL;
              if ( v27 )
                v11 = *(_QWORD *)&v27 + 24LL;
              return ((unsigned int (__fastcall *)(__int64, __int64, char *, _BYTE *, _QWORD, __int64, __int64, struct _POINTFIX *, struct _POINTFIX *, struct _POINTFIX *, _DWORD))v28)(
                       v11,
                       v31,
                       v26,
                       v53,
                       *(_QWORD *)&this[11],
                       v25,
                       v30,
                       &this[15],
                       &this[22],
                       &this[24],
                       a5);
            }
          }
          return v10;
        }
        else
        {
          *(_QWORD *)&v48 = 0LL;
          BYTE8(v48) = 0;
          HIDWORD(v48) = 0;
          v45 = 0LL;
          v46 = 0;
          v47 = 0;
          if ( (unsigned int)BLTRECORD::bRotate(
                               (BLTRECORD *)this,
                               (struct DCOBJ *)a3,
                               (struct SURFMEM *)&v45,
                               (struct SURFMEM *)&v48,
                               a4,
                               a5)
            && (BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]),
                BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15)) )
          {
            v42 = BLTRECORD::bBitBlt((BLTRECORD *)this, a2, (struct DCOBJ *)a3, a4);
            v43 = *(_QWORD *)a2;
            *(_DWORD *)(v43 + 36) |= 0x10u;
            *(_QWORD *)(v43 + 1504) = 0LL;
          }
          else
          {
            v42 = 0;
          }
          SURFMEM::~SURFMEM((SURFMEM *)&v45);
          SURFMEM::~SURFMEM((SURFMEM *)&v48);
          return v42;
        }
      }
    }
LABEL_34:
    EngSetLastError(0x57u);
    return 0LL;
  }
  BLTRECORD::vOrder((BLTRECORD *)this, (struct ERECTL *)&this[24]);
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 80LL) + 312LL) & 1) != 0 )
  {
    v34 = *v33;
    *v33 = this[25].x;
    this[25].x = v34;
  }
  v36 = 0;
  if ( BLTRECORD::pSurfMskOut((BLTRECORD *)this) )
  {
    if ( *v35 < 0 )
      goto LABEL_34;
    if ( this[24].y < 0 )
      goto LABEL_34;
    v37 = this[10];
    if ( this[25].x > *(_DWORD *)(*(_QWORD *)&v37 + 56LL) || this[25].y > *(_DWORD *)(*(_QWORD *)&v37 + 60LL) )
      goto LABEL_34;
  }
  v45 = 0LL;
  v46 = 0;
  v47 = 0;
  if ( (a4 & 0x10000) == 0 || (unsigned int)BLTRECORD::bRotate((BLTRECORD *)this, (struct SURFMEM *)&v45, a5) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&this[19]);
    if ( BLTRECORD::bCreateRegion((BLTRECORD *)this, a2, this + 15) )
    {
      v38 = BLTRECORD::bBitBlt((BLTRECORD *)this, a2, (struct DCOBJ *)a3, a4);
      v39 = *(_QWORD *)a2;
      *(_DWORD *)(v39 + 36) |= 0x10u;
      *(_QWORD *)(v39 + 1504) = 0LL;
      v36 = v38;
    }
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v45);
  return v36;
}
