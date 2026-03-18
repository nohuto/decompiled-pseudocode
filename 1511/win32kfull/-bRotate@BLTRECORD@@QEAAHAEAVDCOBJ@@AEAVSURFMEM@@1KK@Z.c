/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C027FB78
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C000B448 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     EngPlgBlt @ 0x1C00041F0 (EngPlgBlt.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C000B2B8 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C000B38C (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C027FDC4 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        RECTL *this,
        DC **a2,
        struct SURFMEM *a3,
        struct SURFMEM *a4,
        unsigned int a5,
        ULONG iMode)
{
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v11; // rcx
  LONG x; // r15d
  LONG y; // r13d
  int v14; // r15d
  int v15; // r13d
  struct EPOINTL *v16; // rax
  __int64 v17; // rdx
  SURFOBJ *v18; // rdx
  SURFOBJ *v19; // rcx
  struct EPOINTL *v20; // rax
  struct EPOINTL *v21; // rax
  int v22; // [rsp+60h] [rbp-59h] BYREF
  int v23; // [rsp+64h] [rbp-55h]
  int v24; // [rsp+68h] [rbp-51h]
  int v25; // [rsp+6Ch] [rbp-4Dh]
  __int64 v26; // [rsp+70h] [rbp-49h]
  int v27; // [rsp+78h] [rbp-41h]
  int v28; // [rsp+7Ch] [rbp-3Dh]
  POINTL pptlBrushOrg; // [rsp+80h] [rbp-39h] BYREF
  int v30; // [rsp+88h] [rbp-31h]
  int v31; // [rsp+8Ch] [rbp-2Dh]
  POINTFIX pptfx; // [rsp+90h] [rbp-29h] BYREF
  int v33; // [rsp+98h] [rbp-21h]
  int v34; // [rsp+9Ch] [rbp-1Dh]
  int v35; // [rsp+A0h] [rbp-19h]
  int v36; // [rsp+A4h] [rbp-15h]
  int v37; // [rsp+A8h] [rbp-11h]
  int v38; // [rsp+ACh] [rbp-Dh]

  v6 = 0;
  if ( (a5 & 0x10000) == 0 || (result = BLTRECORD::bRotate((BLTRECORD *)this, a4, iMode), (_DWORD)result) )
  {
    BLTRECORD::vBound((BLTRECORD *)this, (struct ERECTL *)&pptlBrushOrg);
    v11 = *(_QWORD *)&this[4].right;
    x = pptlBrushOrg.x;
    y = pptlBrushOrg.y;
    v27 = 0;
    v25 = 0;
    v28 = 0;
    v23 = v30 - pptlBrushOrg.x;
    v24 = v31 - pptlBrushOrg.y;
    v22 = 0;
    v26 = 0LL;
    v22 = *(_DWORD *)(v11 + 96);
    v27 = *(_DWORD *)(v11 + 112) & 0x40000;
    SURFMEM::bCreateDIB(a3, (struct _DEVBITMAPINFO *)&v22, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( *(_QWORD *)a3 )
    {
      v14 = 16 * x;
      v15 = 16 * y;
      pptfx.x = this[7].right - v14;
      pptfx.y = this[7].bottom - v15;
      v33 = this[8].left - v14;
      v34 = this[8].top - v15;
      v35 = this[8].right - v14;
      v36 = this[8].bottom - v15;
      v37 = this[9].left - v14;
      v38 = this[9].top - v15;
      BLTRECORD::vMirror((BLTRECORD *)this, &pptfx);
      v16 = DC::eptlOrigin(*a2);
      this[11].left += *(_DWORD *)v16;
      this[11].right += *(_DWORD *)v16;
      this[11].top += *((_DWORD *)v16 + 1);
      this[11].bottom += *((_DWORD *)v16 + 1);
      v17 = *(_QWORD *)&this[4].right;
      if ( v17 )
        v18 = (SURFOBJ *)(v17 + 24);
      else
        v18 = 0LL;
      v19 = 0LL;
      if ( *(_QWORD *)a3 )
        v19 = (SURFOBJ *)(*(_QWORD *)a3 + 24LL);
      if ( EngPlgBlt(v19, v18, 0LL, 0LL, 0LL, 0LL, &pptlBrushOrg, &pptfx, this + 11, 0LL, iMode) )
      {
        *(_QWORD *)&this[4].right = *(_QWORD *)a3;
        this[11].left = -*(_DWORD *)DC::eptlOrigin(*a2);
        this[11].top = -*((_DWORD *)DC::eptlOrigin(*a2) + 1);
        v20 = DC::eptlOrigin(*a2);
        this[11].right = v23 - *(_DWORD *)v20;
        v21 = DC::eptlOrigin(*a2);
        v6 = 1;
        this[11].bottom = v24 - *((_DWORD *)v21 + 1);
      }
    }
    return v6;
  }
  return result;
}
