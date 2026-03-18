/*
 * XREFs of SimBitBlt @ 0x1C02618B8
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     EngBitBlt @ 0x1C00477E0 (EngBitBlt.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0033E1C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     EngBitBlt @ 0x1C00477E0 (EngBitBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C006807C (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C02617A8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 */

__int64 __fastcall SimBitBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        SURFOBJ *a3,
        CLIPOBJ *a4,
        XLATEOBJ *a5,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 a11,
        DEVLOCKBLTOBJ *a12)
{
  char v13; // r13
  int v14; // r13d
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // r10
  SURFOBJ *v22; // r8
  int (*v23)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v24; // eax
  signed __int32 v25; // ett
  int v26; // edi
  int v27; // r13d
  int v28; // r15d
  int v29; // eax
  int v30; // r11d
  LONG x; // edx
  RECTL v32; // xmm0
  POINTL v33; // rax
  int v34; // r9d
  LONG v35; // eax
  int v36; // r8d
  int v37; // eax
  int v38; // edx
  int v39; // ecx
  LONG right; // ecx
  LONG bottom; // edx
  POINTL *v42; // r12
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  __int64 v44; // rdi
  int v45; // eax
  BOOL (__stdcall *v46)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v47; // rcx
  SURFOBJ *v48; // rdi
  XLATEOBJ *v49; // r13
  __int64 v50; // rcx
  BOOL (__stdcall *v51)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v52; // rcx
  SURFOBJ *v53; // rcx
  POINTL v55; // [rsp+60h] [rbp-A0h] BYREF
  ROP4 rop4; // [rsp+68h] [rbp-98h]
  SURFOBJ *psoSrc; // [rsp+70h] [rbp-90h]
  POINTL v58; // [rsp+78h] [rbp-88h] BYREF
  int v59; // [rsp+80h] [rbp-80h]
  int v60; // [rsp+84h] [rbp-7Ch]
  XLATEOBJ *pxlo; // [rsp+88h] [rbp-78h]
  SURFOBJ *psoMask; // [rsp+90h] [rbp-70h]
  SURFOBJ *psoTrg; // [rsp+98h] [rbp-68h]
  __int64 v64; // [rsp+A0h] [rbp-60h] BYREF
  char v65; // [rsp+A8h] [rbp-58h]
  int v66; // [rsp+ACh] [rbp-54h]
  POINTL *pptlBrush; // [rsp+B0h] [rbp-50h]
  POINTL v68; // [rsp+B8h] [rbp-48h] BYREF
  BRUSHOBJ *pbo; // [rsp+C0h] [rbp-40h]
  CLIPOBJ *pco; // [rsp+C8h] [rbp-38h]
  __int64 v71; // [rsp+D0h] [rbp-30h] BYREF
  char v72; // [rsp+D8h] [rbp-28h]
  int v73; // [rsp+DCh] [rbp-24h]
  __int64 v74; // [rsp+E0h] [rbp-20h]
  _DWORD v75[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v76; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v77; // [rsp+F4h] [rbp-Ch]
  __int128 v78; // [rsp+FCh] [rbp-4h]
  int v79; // [rsp+10Ch] [rbp+Ch]
  int v80; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v81; // [rsp+114h] [rbp+14h]
  __int128 v82; // [rsp+11Ch] [rbp+1Ch]
  int v83; // [rsp+12Ch] [rbp+2Ch]
  RECTL *v84; // [rsp+130h] [rbp+30h]
  POINTL *v85; // [rsp+138h] [rbp+38h]
  DEVLOCKBLTOBJ *v86; // [rsp+140h] [rbp+40h]
  int v87[4]; // [rsp+148h] [rbp+48h] BYREF
  RECTL v88; // [rsp+158h] [rbp+58h] BYREF

  pxlo = a5;
  pbo = a9;
  pptlBrush = a10;
  v86 = a12;
  psoTrg = a1;
  psoMask = a3;
  rop4 = a11;
  psoSrc = a2;
  pco = a4;
  v84 = prclTrg;
  v13 = gajRop3[(unsigned __int8)a11] | gajRop3[BYTE1(a11)];
  v85 = pptlSrc;
  v14 = v13 & 0xD4;
  v59 = v14;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v16 = SURFOBJ_TO_SURFACE(a2);
  v19 = *(_QWORD *)(v15 + 48);
  v20 = 0LL;
  v21 = v16;
  v74 = v16;
  if ( *(_WORD *)(v15 + 100) || v14 && *(_WORD *)(v16 + 100) )
  {
    v22 = psoMask;
  }
  else
  {
    v22 = psoMask;
    if ( !psoMask )
    {
      if ( (*(_DWORD *)(v19 + 56) & 0x8000) != 0 )
      {
        v24 = EngBitBlt(psoTrg, psoSrc, 0LL, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      }
      else
      {
        v23 = SURFACE::pfnBitBlt((SURFACE *)v15);
        v24 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v23)(
                psoTrg,
                psoSrc,
                0LL,
                pco,
                pxlo,
                prclTrg,
                pptlSrc,
                pptlMask,
                pbo,
                pptlBrush,
                rop4);
      }
      LODWORD(v20) = v24;
      return (unsigned int)v20;
    }
  }
  if ( v19 )
  {
    _m_prefetchw((const void *)(v19 + 56));
    do
    {
      v17 = *(unsigned int *)(v19 + 56);
      LODWORD(v17) = v17 | 0x40000;
      v25 = *(_DWORD *)(v19 + 56);
    }
    while ( v25 != _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 56), v17, v25) );
  }
  if ( *(_WORD *)(v15 + 100) == 1 && v19 && (*(_DWORD *)(v19 + 56) & 0x20000) != 0 )
  {
    v26 = *(_DWORD *)(v19 + 2608);
    v27 = v26 + *(_DWORD *)(v15 + 56);
    v28 = *(_DWORD *)(v19 + 2612);
    v29 = v28 + *(_DWORD *)(v15 + 60);
  }
  else
  {
    v27 = *(_DWORD *)(v15 + 56);
    v26 = 0;
    v29 = *(_DWORD *)(v15 + 60);
    v28 = 0;
  }
  v30 = v59;
  x = 0;
  v60 = v29;
  v55 = 0LL;
  v58.x = 0;
  v32 = *v84;
  v58.y = 0;
  *(RECTL *)v87 = v32;
  if ( v59 )
    v55 = *v85;
  if ( v22 )
  {
    if ( bUMPDSecurityGateEx(v17, 0LL, (__int64)v22, v18) && !pptlMask )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:SimBitBlt:pptlMask == NULL\n", 696);
      return (unsigned int)v20;
    }
    v33 = *pptlMask;
    v21 = v74;
    v30 = v59;
    v58 = *pptlMask;
    x = v58.x;
  }
  else
  {
    v33.y = v58.y;
  }
  v34 = v87[1];
  if ( v87[1] < v28 )
  {
    v87[1] = v28;
    v55.y += v28 - v34;
    v35 = v28 + v33.y - v34;
    v34 = v28;
    v58.y = v35;
  }
  v36 = v87[0];
  if ( v87[0] < v26 )
  {
    v87[0] = v26;
    v55.x += v26 - v36;
    v37 = v26 - v36;
    v36 = v26;
    v58.x = v37 + x;
  }
  v38 = v87[3];
  v39 = v87[2];
  if ( v87[3] > v60 )
    v38 = v60;
  v87[3] = v38;
  if ( v87[2] > v27 )
    v39 = v27;
  v87[2] = v39;
  if ( v34 >= v38 || v36 >= v39 )
  {
    LODWORD(v20) = 1;
    return (unsigned int)v20;
  }
  right = v39 - v36;
  *(_QWORD *)&v88.left = 0LL;
  bottom = v38 - v34;
  v88.right = right;
  v88.bottom = bottom;
  v42 = &v55;
  if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v19 + 2132) )
  {
    v71 = 0LL;
    v43 = EngCopyBits;
    v72 = 0;
    v73 = 0;
    if ( v30 && *(_WORD *)(v21 + 100) )
    {
      v44 = *(_QWORD *)(v21 + 48);
      v81 = 0LL;
      v82 = 0uLL;
      v83 = 0;
      v80 = *(_DWORD *)(v19 + 2132);
      v45 = *(_DWORD *)(v21 + 112) & 0x40000;
      v81 = __PAIR64__(bottom, right);
      HIDWORD(v82) = v45;
      *(_QWORD *)((char *)&v82 + 4) = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v71, (struct _DEVBITMAPINFO *)&v80, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_71:
        SURFMEM::~SURFMEM((SURFMEM *)&v71);
        return (unsigned int)v20;
      }
      if ( (*(_DWORD *)(v74 + 112) & 0x400) != 0 )
        v46 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v44 + 2864);
      else
        v46 = EngCopyBits;
      v47 = 0LL;
      if ( v71 )
        v47 = v71 + 24;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))v46)(
        v47,
        psoSrc,
        0LL,
        pxlo,
        &v88,
        &v55);
      v42 = &gptl00;
      v48 = 0LL;
      if ( v71 )
        v48 = (SURFOBJ *)(v71 + 24);
      v49 = xloIdent;
      bottom = v88.bottom;
      right = v88.right;
    }
    else
    {
      v49 = pxlo;
      v48 = psoSrc;
    }
    v77 = 0LL;
    v78 = 0uLL;
    v79 = 0;
    v76 = 0;
    v76 = *(_DWORD *)(v19 + 2132);
    v77 = __PAIR64__(bottom, right);
    *(_QWORD *)((char *)&v78 + 4) = 0LL;
    HIDWORD(v78) = *(_DWORD *)(v15 + 112) & 0x40000;
    v64 = 0LL;
    v65 = 0;
    v66 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v64, (struct _DEVBITMAPINFO *)&v76, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v50 = v64;
    if ( v64 )
    {
      v75[0] = v87[0];
      v75[1] = v87[1];
      v68 = 0LL;
      if ( pptlBrush )
      {
        v68.x = pptlBrush->x - v87[0];
        v68.y = pptlBrush->y - v87[1];
      }
      if ( (*(_DWORD *)(v19 + 56) & 0x80u) != 0 && v86 )
      {
        DEVLOCKBLTOBJ::vUnLock(v86);
        v50 = v64;
      }
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v51 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2864);
      else
        v51 = EngCopyBits;
      if ( v50 )
        v52 = v50 + 24;
      else
        v52 = 0LL;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, _DWORD *))v51)(
        v52,
        psoTrg,
        0LL,
        xloIdent,
        &v88,
        v75);
      if ( v64 )
        v53 = (SURFOBJ *)(v64 + 24);
      else
        v53 = 0LL;
      EngBitBlt(v53, v48, psoMask, 0LL, v49, &v88, v42, &v58, pbo, &v68, rop4);
      ++*(_DWORD *)(v15 + 92);
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v19 + 2864);
      if ( v64 )
        v20 = v64 + 24;
      LODWORD(v20) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *const, int *, POINTL *))v43)(
                       psoTrg,
                       v20,
                       pco,
                       xloIdent,
                       v87,
                       &gptl00);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v64);
    goto LABEL_71;
  }
  return (unsigned int)v20;
}
