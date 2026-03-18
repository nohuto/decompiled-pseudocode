/*
 * XREFs of SimBitBlt @ 0x1C0263D38
 * Callers:
 *     EngBitBlt @ 0x1C0038EE0 (EngBitBlt.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C0038DCC (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     EngBitBlt @ 0x1C0038EE0 (EngBitBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00DFB54 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0263C28 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
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
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // r10
  SURFOBJ *v20; // r8
  int (*v21)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v22; // eax
  signed __int32 v23; // ett
  int v24; // edi
  int v25; // r13d
  int v26; // r15d
  int v27; // eax
  int v28; // r11d
  LONG x; // edx
  POINTL v30; // rax
  int v31; // r9d
  LONG v32; // eax
  int v33; // r8d
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  LONG right; // ecx
  LONG bottom; // edx
  POINTL *v39; // r12
  BOOL (__stdcall *v40)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r15
  __int64 v41; // rdi
  int v42; // eax
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v44; // rcx
  SURFOBJ *v45; // rdi
  XLATEOBJ *v46; // r13
  __int64 v47; // rcx
  BOOL (__stdcall *v48)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v49; // rcx
  SURFOBJ *v50; // rcx
  POINTL v52; // [rsp+60h] [rbp-A0h] BYREF
  POINTL v53; // [rsp+68h] [rbp-98h] BYREF
  ROP4 rop4; // [rsp+70h] [rbp-90h]
  SURFOBJ *psoSrc; // [rsp+78h] [rbp-88h]
  XLATEOBJ *pxlo; // [rsp+80h] [rbp-80h]
  int v57; // [rsp+88h] [rbp-78h]
  int v58; // [rsp+8Ch] [rbp-74h]
  POINTL v59; // [rsp+90h] [rbp-70h] BYREF
  SURFOBJ *psoTrg; // [rsp+98h] [rbp-68h]
  SURFOBJ *psoMask; // [rsp+A0h] [rbp-60h]
  __int64 v62; // [rsp+A8h] [rbp-58h] BYREF
  char v63; // [rsp+B0h] [rbp-50h]
  int v64; // [rsp+B4h] [rbp-4Ch]
  BRUSHOBJ *pbo; // [rsp+B8h] [rbp-48h]
  CLIPOBJ *pco; // [rsp+C0h] [rbp-40h]
  POINTL *pptlBrush; // [rsp+C8h] [rbp-38h]
  __int64 v68; // [rsp+D0h] [rbp-30h] BYREF
  char v69; // [rsp+D8h] [rbp-28h]
  int v70; // [rsp+DCh] [rbp-24h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  _DWORD v72[2]; // [rsp+E8h] [rbp-18h] BYREF
  int v73; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v74; // [rsp+F4h] [rbp-Ch]
  __int128 v75; // [rsp+FCh] [rbp-4h]
  int v76; // [rsp+10Ch] [rbp+Ch]
  int v77; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v78; // [rsp+114h] [rbp+14h]
  __int128 v79; // [rsp+11Ch] [rbp+1Ch]
  int v80; // [rsp+12Ch] [rbp+2Ch]
  DEVLOCKBLTOBJ *v81; // [rsp+130h] [rbp+30h]
  RECTL *v82; // [rsp+138h] [rbp+38h]
  POINTL *v83; // [rsp+140h] [rbp+40h]
  int v84[4]; // [rsp+148h] [rbp+48h] BYREF
  RECTL v85; // [rsp+158h] [rbp+58h] BYREF

  pxlo = a5;
  pbo = a9;
  pptlBrush = a10;
  v81 = a12;
  psoTrg = a1;
  psoMask = a3;
  rop4 = a11;
  psoSrc = a2;
  pco = a4;
  v82 = prclTrg;
  v13 = gajRop3[(unsigned __int8)a11] | gajRop3[BYTE1(a11)];
  v83 = pptlSrc;
  v14 = v13 & 0xD4;
  v57 = v14;
  v15 = SURFOBJ_TO_SURFACE(a1);
  v16 = SURFOBJ_TO_SURFACE(a2);
  v17 = *(_QWORD *)(v15 + 48);
  v18 = 0LL;
  v19 = v16;
  v71 = v16;
  if ( *(_WORD *)(v15 + 100) || v14 && *(_WORD *)(v16 + 100) )
  {
    v20 = psoMask;
  }
  else
  {
    v20 = psoMask;
    if ( !psoMask )
    {
      if ( (*(_DWORD *)(v17 + 56) & 0x8000) != 0 )
      {
        v22 = EngBitBlt(psoTrg, psoSrc, 0LL, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
      }
      else
      {
        v21 = SURFACE::pfnBitBlt((SURFACE *)v15);
        v22 = ((__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, _QWORD, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))v21)(
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
      LODWORD(v18) = v22;
      return (unsigned int)v18;
    }
  }
  if ( v17 )
  {
    _m_prefetchw((const void *)(v17 + 56));
    do
      v23 = *(_DWORD *)(v17 + 56);
    while ( v23 != _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 56), v23 | 0x40000, v23) );
  }
  if ( *(_WORD *)(v15 + 100) == 1 && v17 && (*(_DWORD *)(v17 + 56) & 0x20000) != 0 )
  {
    v24 = *(_DWORD *)(v17 + 2608);
    v25 = v24 + *(_DWORD *)(v15 + 56);
    v26 = *(_DWORD *)(v17 + 2612);
    v27 = v26 + *(_DWORD *)(v15 + 60);
  }
  else
  {
    v25 = *(_DWORD *)(v15 + 56);
    v24 = 0;
    v27 = *(_DWORD *)(v15 + 60);
    v26 = 0;
  }
  v28 = v57;
  x = 0;
  v58 = v27;
  v52 = 0LL;
  v53.x = 0;
  v53.y = 0;
  *(RECTL *)v84 = *v82;
  if ( v57 )
    v52 = *v83;
  if ( v20 )
  {
    if ( bUMPDSecurityGateEx() && !pptlMask )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:SimBitBlt:pptlMask == NULL\n", 696);
      return (unsigned int)v18;
    }
    v30 = *pptlMask;
    v19 = v71;
    v28 = v57;
    v53 = *pptlMask;
    x = v53.x;
  }
  else
  {
    v30.y = v53.y;
  }
  v31 = v84[1];
  if ( v84[1] < v26 )
  {
    v84[1] = v26;
    v52.y += v26 - v31;
    v32 = v26 + v30.y - v31;
    v31 = v26;
    v53.y = v32;
  }
  v33 = v84[0];
  if ( v84[0] < v24 )
  {
    v84[0] = v24;
    v52.x += v24 - v33;
    v34 = v24 - v33;
    v33 = v24;
    v53.x = v34 + x;
  }
  v35 = v84[3];
  v36 = v84[2];
  if ( v84[3] > v58 )
    v35 = v58;
  v84[3] = v35;
  if ( v84[2] > v25 )
    v36 = v25;
  v84[2] = v36;
  if ( v31 >= v35 || v33 >= v36 )
  {
    LODWORD(v18) = 1;
    return (unsigned int)v18;
  }
  right = v36 - v33;
  *(_QWORD *)&v85.left = 0LL;
  bottom = v35 - v31;
  v85.right = right;
  v85.bottom = bottom;
  v39 = &v52;
  if ( *(_DWORD *)(v15 + 96) == *(_DWORD *)(v17 + 2132) )
  {
    v68 = 0LL;
    v40 = EngCopyBits;
    v69 = 0;
    v70 = 0;
    if ( v28 && *(_WORD *)(v19 + 100) )
    {
      v41 = *(_QWORD *)(v19 + 48);
      v78 = 0LL;
      v79 = 0uLL;
      v80 = 0;
      v77 = *(_DWORD *)(v17 + 2132);
      v42 = *(_DWORD *)(v19 + 112) & 0x40000;
      v78 = __PAIR64__(bottom, right);
      HIDWORD(v79) = v42;
      *(_QWORD *)((char *)&v79 + 4) = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v68, (struct _DEVBITMAPINFO *)&v77, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
      {
LABEL_71:
        SURFMEM::~SURFMEM((SURFMEM *)&v68);
        return (unsigned int)v18;
      }
      if ( (*(_DWORD *)(v71 + 112) & 0x400) != 0 )
        v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v41 + 2872);
      else
        v43 = EngCopyBits;
      v44 = 0LL;
      if ( v68 )
        v44 = v68 + 24;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *, RECTL *, POINTL *))v43)(
        v44,
        psoSrc,
        0LL,
        pxlo,
        &v85,
        &v52);
      v39 = &gptl00;
      v45 = 0LL;
      if ( v68 )
        v45 = (SURFOBJ *)(v68 + 24);
      v46 = xloIdent;
      bottom = v85.bottom;
      right = v85.right;
    }
    else
    {
      v46 = pxlo;
      v45 = psoSrc;
    }
    v74 = 0LL;
    v75 = 0uLL;
    v76 = 0;
    v73 = 0;
    v73 = *(_DWORD *)(v17 + 2132);
    v74 = __PAIR64__(bottom, right);
    *(_QWORD *)((char *)&v75 + 4) = 0LL;
    HIDWORD(v75) = *(_DWORD *)(v15 + 112) & 0x40000;
    v62 = 0LL;
    v63 = 0;
    v64 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v62, (struct _DEVBITMAPINFO *)&v73, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    v47 = v62;
    if ( v62 )
    {
      v72[0] = v84[0];
      v72[1] = v84[1];
      v59 = 0LL;
      if ( pptlBrush )
      {
        v59.x = pptlBrush->x - v84[0];
        v59.y = pptlBrush->y - v84[1];
      }
      if ( (*(_DWORD *)(v17 + 56) & 0x80u) != 0 && v81 )
      {
        DEVLOCKBLTOBJ::vUnLock(v81);
        v47 = v62;
      }
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v48 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2872);
      else
        v48 = EngCopyBits;
      if ( v47 )
        v49 = v47 + 24;
      else
        v49 = 0LL;
      ((void (__fastcall *)(__int64, SURFOBJ *, _QWORD, XLATEOBJ *const, RECTL *, _DWORD *))v48)(
        v49,
        psoTrg,
        0LL,
        xloIdent,
        &v85,
        v72);
      if ( v62 )
        v50 = (SURFOBJ *)(v62 + 24);
      else
        v50 = 0LL;
      EngBitBlt(v50, v45, psoMask, 0LL, v46, &v85, v39, &v53, pbo, &v59, rop4);
      ++*(_DWORD *)(v15 + 92);
      if ( (*(_DWORD *)(v15 + 112) & 0x400) != 0 )
        v40 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2872);
      if ( v62 )
        v18 = v62 + 24;
      LODWORD(v18) = ((__int64 (__fastcall *)(SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *const, int *, POINTL *))v40)(
                       psoTrg,
                       v18,
                       pco,
                       xloIdent,
                       v84,
                       &gptl00);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v62);
    goto LABEL_71;
  }
  return (unsigned int)v18;
}
