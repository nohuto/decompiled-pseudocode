/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0280138
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0004CC0 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00A0228 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C00A00EC (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C00A0100 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00A0124 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall BLTRECORD::bRotate(RECTL *this, struct SURFMEM *a2, ULONG a3)
{
  LONG x; // esi
  unsigned int v7; // ebx
  LONG y; // r14d
  int v9; // esi
  int v10; // r14d
  struct SURFACE *v11; // rax
  __int64 v12; // r10
  SURFOBJ *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  POINTL pptlBrushOrg; // [rsp+60h] [rbp-39h] BYREF
  int v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+6Ch] [rbp-2Dh]
  _DWORD v20[4]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v21; // [rsp+80h] [rbp-19h]
  int v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+8Ch] [rbp-Dh]
  POINTFIX pptfx; // [rsp+90h] [rbp-9h] BYREF
  int v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+9Ch] [rbp+3h]
  int v27; // [rsp+A0h] [rbp+7h]
  int v28; // [rsp+A4h] [rbp+Bh]
  int v29; // [rsp+A8h] [rbp+Fh]
  int v30; // [rsp+ACh] [rbp+13h]

  BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&pptlBrushOrg);
  x = pptlBrushOrg.x;
  v7 = 0;
  y = pptlBrushOrg.y;
  v20[1] = v18 - pptlBrushOrg.x;
  v20[3] = 0;
  v22 = 0;
  v20[2] = v19 - pptlBrushOrg.y;
  v23 = 0;
  v20[0] = 1;
  v21 = 0LL;
  v22 = *((_DWORD *)BLTRECORD::pSurfMskOut((BLTRECORD *)this) + 28) & 0x40000;
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)v20, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)a2 )
  {
    v9 = 16 * x;
    v10 = 16 * y;
    pptfx.x = this[7].right - v9;
    pptfx.y = this[7].bottom - v10;
    v25 = this[8].left - v9;
    v26 = this[8].top - v10;
    v27 = this[8].right - v9;
    v28 = this[8].bottom - v10;
    v29 = this[9].left - v9;
    v30 = this[9].top - v10;
    BLTRECORD::vMirror((BLTRECORD *)this, &pptfx);
    v11 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
    v13 = 0LL;
    if ( v11 )
      v13 = (SURFOBJ *)((char *)v11 + 24);
    if ( EngPlgBlt((SURFOBJ *)(v12 + 24), v13, 0LL, 0LL, 0LL, 0LL, &pptlBrushOrg, &pptfx, this + 12, 0LL, a3) )
    {
      this[13].bottom &= ~0x20000u;
      v14 = *(_QWORD *)&this[5].left;
      if ( v14 )
        DEC_SHARE_REF_CNT(v14);
      v15 = *(_QWORD *)a2;
      this[12].left = 0;
      this[12].top = 0;
      v7 = 1;
      *(_QWORD *)&this[5].left = v15;
    }
  }
  return v7;
}
