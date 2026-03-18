/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0004CC0
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00A0228 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ?vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z @ 0x1C00A0100 (-vMirror@BLTRECORD@@QEAAXPEAU_POINTFIX@@@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00A0124 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     EngPlgBlt @ 0x1C00C8FF0 (EngPlgBlt.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x1C0280138 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
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
  __int64 v10; // rcx
  LONG x; // r15d
  LONG y; // r13d
  int v13; // r15d
  int v14; // r13d
  struct EPOINTL *v15; // rax
  __int64 v16; // rdx
  SURFOBJ *v17; // rdx
  SURFOBJ *v18; // rcx
  struct EPOINTL *v19; // rax
  struct EPOINTL *v20; // rax
  __int64 result; // rax
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
    v10 = *(_QWORD *)&this[4].right;
    x = pptlBrushOrg.x;
    y = pptlBrushOrg.y;
    v27 = 0;
    v25 = 0;
    v28 = 0;
    v23 = v30 - pptlBrushOrg.x;
    v24 = v31 - pptlBrushOrg.y;
    v22 = 0;
    v26 = 0LL;
    v22 = *(_DWORD *)(v10 + 96);
    v27 = *(_DWORD *)(v10 + 112) & 0x40000;
    SURFMEM::bCreateDIB(a3, (struct _DEVBITMAPINFO *)&v22, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( *(_QWORD *)a3 )
    {
      v13 = 16 * x;
      v14 = 16 * y;
      pptfx.x = this[7].right - v13;
      pptfx.y = this[7].bottom - v14;
      v33 = this[8].left - v13;
      v34 = this[8].top - v14;
      v35 = this[8].right - v13;
      v36 = this[8].bottom - v14;
      v37 = this[9].left - v13;
      v38 = this[9].top - v14;
      BLTRECORD::vMirror((BLTRECORD *)this, &pptfx);
      v15 = DC::eptlOrigin(*a2);
      this[11].left += *(_DWORD *)v15;
      this[11].right += *(_DWORD *)v15;
      this[11].top += *((_DWORD *)v15 + 1);
      this[11].bottom += *((_DWORD *)v15 + 1);
      v16 = *(_QWORD *)&this[4].right;
      if ( v16 )
        v17 = (SURFOBJ *)(v16 + 24);
      else
        v17 = 0LL;
      v18 = 0LL;
      if ( *(_QWORD *)a3 )
        v18 = (SURFOBJ *)(*(_QWORD *)a3 + 24LL);
      if ( EngPlgBlt(v18, v17, 0LL, 0LL, 0LL, 0LL, &pptlBrushOrg, &pptfx, this + 11, 0LL, iMode) )
      {
        *(_QWORD *)&this[4].right = *(_QWORD *)a3;
        this[11].left = -*(_DWORD *)DC::eptlOrigin(*a2);
        this[11].top = -*((_DWORD *)DC::eptlOrigin(*a2) + 1);
        v19 = DC::eptlOrigin(*a2);
        this[11].right = v23 - *(_DWORD *)v19;
        v20 = DC::eptlOrigin(*a2);
        v6 = 1;
        this[11].bottom = v24 - *((_DWORD *)v20 + 1);
      }
    }
    return v6;
  }
  return result;
}
