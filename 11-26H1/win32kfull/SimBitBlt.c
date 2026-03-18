/*
 * XREFs of SimBitBlt @ 0x140264BFC
 * Callers:
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1400AED70 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     EngBitBlt @ 0x1400DBF60 (EngBitBlt.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x14030F0E8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

int __fastcall SimBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *a9,
        POINTL *pptlBrush,
        ROP4 rop4,
        DEVLOCKBLTOBJ *a12)
{
  SURFOBJ *v13; // rsi
  char v14; // r8
  LONG v15; // r8d
  unsigned __int64 v16; // r14
  POINTL v17; // rcx
  __int16 v18; // ax
  __int64 v19; // rbx
  __int64 p_iType; // rax
  int (*v21)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v23; // edx
  int v24; // r10d
  int top; // r9d
  int v26; // r11d
  RECTL v27; // xmm0
  POINTL v28; // rax
  unsigned __int64 v29; // r8
  int left; // r8d
  int v31; // eax
  int right; // ecx
  int bottom; // edx
  POINTL *v34; // r12
  LONG v35; // ecx
  LONG v36; // edx
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  __int64 v38; // rax
  __int64 p_hdev; // rdi
  __int64 p_hsurf; // r12
  __int64 v41; // rdi
  int v42; // eax
  struct Gre::Base::SESSION_GLOBALS *v43; // rax
  int v44; // eax
  Gre::Base *v45; // rcx
  struct Gre::Base::SESSION_GLOBALS *v46; // rax
  struct Gre::Base::SESSION_GLOBALS *v47; // rdi
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  SURFOBJ *v49; // r13
  bool v50; // zf
  int v51; // ebx
  POINTL v52; // [rsp+68h] [rbp-98h] BYREF
  POINTL v53; // [rsp+70h] [rbp-90h] BYREF
  POINTL v54; // [rsp+78h] [rbp-88h] BYREF
  XLATEOBJ *v55; // [rsp+80h] [rbp-80h]
  __int64 v56; // [rsp+88h] [rbp-78h] BYREF
  char v57; // [rsp+90h] [rbp-70h]
  int v58; // [rsp+94h] [rbp-6Ch]
  __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  char v60; // [rsp+A0h] [rbp-60h]
  int v61; // [rsp+A4h] [rbp-5Ch]
  BRUSHOBJ *pbo; // [rsp+A8h] [rbp-58h]
  SURFOBJ *psoMask; // [rsp+B0h] [rbp-50h]
  __int64 v64; // [rsp+B8h] [rbp-48h] BYREF
  SURFOBJ *v65; // [rsp+C0h] [rbp-40h]
  CLIPOBJ *v66; // [rsp+C8h] [rbp-38h]
  __int64 v67; // [rsp+D0h] [rbp-30h] BYREF
  DEVLOCKBLTOBJ *v68; // [rsp+D8h] [rbp-28h]
  __int64 v69; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v70[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v71; // [rsp+F8h] [rbp-8h]
  int v72; // [rsp+100h] [rbp+0h]
  int v73; // [rsp+104h] [rbp+4h]
  _DWORD v74[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v75; // [rsp+118h] [rbp+18h]
  int v76; // [rsp+120h] [rbp+20h]
  int v77; // [rsp+124h] [rbp+24h]
  RECTL v78; // [rsp+128h] [rbp+28h] BYREF
  RECTL v79; // [rsp+138h] [rbp+38h] BYREF

  v13 = psoSrc;
  pbo = a9;
  v68 = a12;
  v65 = psoTrg;
  psoMask = a3;
  v66 = a4;
  v14 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  v55 = pxlo;
  v15 = v14 & 0xD4;
  v53.x = v15;
  v16 = (unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL);
  v17.y = 0;
  v18 = *(_WORD *)(v16 + 100);
  v19 = *(_QWORD *)(v16 + 48);
  if ( v18 )
  {
    if ( v18 == 1 && v19 && (*(_DWORD *)(v19 + 40) & 0x20000) != 0 )
    {
      v23 = *(_DWORD *)(v19 + 2576);
      v24 = v23 + *(_DWORD *)(v16 + 56);
      top = *(_DWORD *)(v19 + 2580);
      v26 = top + *(_DWORD *)(v16 + 60);
      goto LABEL_15;
    }
  }
  else
  {
    if ( !v15 )
      goto LABEL_6;
    p_iType = (__int64)&psoSrc->iType;
    if ( !psoSrc )
      p_iType = 100LL;
    if ( !*(_WORD *)p_iType )
    {
LABEL_6:
      if ( !psoMask )
      {
        if ( (*(_DWORD *)(v19 + 40) & 0x8000) != 0 )
          return EngBitBlt(psoTrg, psoSrc, 0LL, a4, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
        v21 = SURFACE::pfnBitBlt((SURFACE *)v16);
        return ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v21)(
                 v65,
                 v13,
                 0LL,
                 v66,
                 v55,
                 prclTrg,
                 pptlSrc,
                 pptlMask,
                 pbo,
                 pptlBrush,
                 rop4);
      }
    }
  }
  v24 = *(_DWORD *)(v16 + 56);
  v23 = 0;
  v26 = *(_DWORD *)(v16 + 60);
  top = 0;
LABEL_15:
  v27 = *prclTrg;
  v52 = 0LL;
  v28.y = 0;
  v54 = 0LL;
  v78 = v27;
  if ( v15 )
  {
    v17 = *pptlSrc;
    v52 = *pptlSrc;
  }
  if ( psoMask )
  {
    if ( !pptlMask )
      return 0;
    v28 = *pptlMask;
    v54 = *pptlMask;
  }
  v29 = HIDWORD(*(_QWORD *)&v78.left);
  if ( v78.top >= top )
  {
    top = v78.top;
  }
  else
  {
    v78.top = top;
    v52.y = top + v17.y - v29;
    v54.y = top + v28.y - v29;
  }
  left = v78.left;
  if ( v78.left < v23 )
  {
    v78.left = v23;
    v52.x += v23 - left;
    v31 = v23 - left;
    left = v23;
    v54.x += v31;
  }
  right = v78.right;
  bottom = v78.bottom;
  if ( v78.bottom > v26 )
    bottom = v26;
  v78.bottom = bottom;
  if ( v78.right > v24 )
    right = v24;
  v78.right = right;
  if ( top >= bottom || left >= right )
    return 1;
  v34 = &v52;
  v35 = right - left;
  *(_QWORD *)&v79.left = 0LL;
  v36 = bottom - top;
  v79.right = v35;
  v79.bottom = v36;
  if ( *(_DWORD *)(v16 + 96) != *(_DWORD *)(v19 + 2092) )
    return 0;
  v37 = EngCopyBits;
  v59 = 0LL;
  v60 = 0;
  v61 = 0;
  if ( v53.x )
  {
    v38 = (__int64)&v13->iType;
    if ( !v13 )
      v38 = 100LL;
    if ( *(_WORD *)v38 )
    {
      p_hdev = (__int64)&v13->hdev;
      p_hsurf = (__int64)&v13[1].hsurf;
      v70[1] = v35;
      if ( !v13 )
        p_hdev = 48LL;
      v70[2] = v36;
      v70[0] = *(_DWORD *)(v19 + 2092);
      if ( !v13 )
        p_hsurf = 112LL;
      v41 = *(_QWORD *)p_hdev;
      v70[3] = 0;
      v73 = 0;
      v42 = *(_DWORD *)p_hsurf & 0x40000;
      v71 = 0LL;
      v72 = v42;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v59, (struct _DEVBITMAPINFO *)v70, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0) )
        goto LABEL_42;
      if ( (*(_DWORD *)p_hsurf & 0x400) != 0 )
        (*(void (__fastcall **)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))(v41 + 2832))(
          (v59 + 24) & -(__int64)(v59 != 0),
          v13,
          0LL,
          v55,
          &v79,
          &v52);
      else
        ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))EngCopyBits)(
          (v59 + 24) & -(__int64)(v59 != 0),
          v13,
          0LL,
          v55,
          &v79,
          &v52);
      v34 = (POINTL *)&v67;
      v67 = 0LL;
      v13 = (SURFOBJ *)((v59 + 24) & -(__int64)(v59 != 0));
      v43 = Gre::Base::Globals((Gre::Base *)(v59 + 24));
      v36 = v79.bottom;
      v35 = v79.right;
      v55 = (XLATEOBJ *)((char *)v43 + 4664);
    }
  }
  v74[3] = 0;
  v77 = 0;
  v74[0] = *(_DWORD *)(v19 + 2092);
  v44 = *(_DWORD *)(v16 + 112) & 0x40000;
  v74[1] = v35;
  v74[2] = v36;
  v76 = v44;
  v75 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v58 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v56, (struct _DEVBITMAPINFO *)v74, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0);
  v45 = 0LL;
  if ( !v56 )
  {
    SURFMEM::~SURFMEM((SURFMEM *)&v56);
LABEL_42:
    SURFMEM::~SURFMEM((SURFMEM *)&v59);
    return 0;
  }
  v64 = *(_QWORD *)&v78.left;
  v53 = 0LL;
  if ( pptlBrush )
  {
    v53.x = pptlBrush->x - v78.left;
    v53.y = pptlBrush->y - v78.top;
  }
  if ( (*(_DWORD *)(v19 + 40) & 0x80u) != 0 && v68 )
    DEVLOCKBLTOBJ::vUnLock(v68);
  v46 = Gre::Base::Globals(v45);
  v47 = v46;
  if ( (*(_DWORD *)(v16 + 112) & 0x400) != 0 )
    v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2832);
  else
    v48 = EngCopyBits;
  v49 = v65;
  ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, char *, RECTL *, __int64 *))v48)(
    (v56 + 24) & -(__int64)(v56 != 0),
    v65,
    0LL,
    (char *)v46 + 4664,
    &v79,
    &v64);
  EngBitBlt((SURFOBJ *)((v56 + 24) & -(__int64)(v56 != 0)), v13, psoMask, 0LL, v55, &v79, v34, &v54, pbo, &v53, rop4);
  ++*(_DWORD *)(v16 + 92);
  v50 = (*(_DWORD *)(v16 + 112) & 0x400) == 0;
  v69 = 0LL;
  if ( !v50 )
    v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2832);
  v51 = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, char *, RECTL *, __int64 *))v37)(
          v49,
          (v56 + 24) & -(__int64)(v56 != 0),
          v66,
          (char *)v47 + 4664,
          &v78,
          &v69);
  SURFMEM::~SURFMEM((SURFMEM *)&v56);
  SURFMEM::~SURFMEM((SURFMEM *)&v59);
  return v51;
}
