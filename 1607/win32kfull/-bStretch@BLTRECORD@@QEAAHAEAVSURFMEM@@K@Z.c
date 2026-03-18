/*
 * XREFs of ?bStretch@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C027FDD4
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004D800 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     EngStretchBlt @ 0x1C0038960 (EngStretchBlt.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C004CBC0 (-vMirror@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ @ 0x1C004DDD4 (-pSurfMskOut@BLTRECORD@@QEAAPEAVSURFACE@@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall BLTRECORD::bStretch(RECTL *this, struct SURFMEM *a2, ULONG a3)
{
  unsigned int v5; // ebx
  int v6; // r8d
  int v8; // edx
  int v9; // ecx
  LONG v10; // edx
  LONG v11; // r8d
  struct SURFACE *v12; // rax
  __int64 v13; // r8
  SURFOBJ *v14; // rdx
  __int64 v15; // rcx
  POINTL pptlHTOrg; // [rsp+60h] [rbp-9h] BYREF
  int v18; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v19; // [rsp+6Ch] [rbp+3h]
  int v20; // [rsp+74h] [rbp+Bh]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+80h] [rbp+17h]
  int v23; // [rsp+84h] [rbp+1Bh]
  RECTL prclDest; // [rsp+88h] [rbp+1Fh] BYREF

  v18 = 1;
  v19 = 0LL;
  v5 = 0;
  v6 = this[10].left - this[9].right;
  v8 = this[10].top - this[9].bottom;
  v20 = 0;
  v22 = 0;
  v19 = __PAIR64__(v8, v6);
  v23 = 0;
  v21 = 0LL;
  v9 = *((_DWORD *)BLTRECORD::pSurfMskOut((BLTRECORD *)this) + 28) & 0x40000;
  prclDest.bottom = v10;
  v22 = v9;
  *(_QWORD *)&prclDest.left = 0LL;
  prclDest.right = v11;
  BLTRECORD::vMirror((BLTRECORD *)this, (struct ERECTL *)&prclDest);
  SURFMEM::bCreateDIB(a2, (struct _DEVBITMAPINFO *)&v18, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( *(_QWORD *)a2 )
  {
    pptlHTOrg = 0LL;
    v12 = BLTRECORD::pSurfMskOut((BLTRECORD *)this);
    v14 = 0LL;
    if ( v12 )
      v14 = (SURFOBJ *)((char *)v12 + 24);
    if ( EngStretchBlt((SURFOBJ *)(v13 + 24), v14, 0LL, 0LL, 0LL, 0LL, &pptlHTOrg, &prclDest, this + 12, 0LL, a3) )
    {
      this[13].bottom &= ~0x20000u;
      v15 = *(_QWORD *)&this[5].left;
      this[12].left = 0;
      this[12].top = 0;
      if ( v15 )
        DEC_SHARE_REF_CNT(v15);
      v5 = 1;
      *(_QWORD *)&this[5].left = *(_QWORD *)a2;
    }
  }
  return v5;
}
