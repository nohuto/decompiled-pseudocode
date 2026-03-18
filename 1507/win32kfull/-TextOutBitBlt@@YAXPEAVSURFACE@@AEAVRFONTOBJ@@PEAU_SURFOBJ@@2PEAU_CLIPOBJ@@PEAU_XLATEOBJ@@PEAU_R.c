/*
 * XREFs of ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E1794
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00FE334 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0281D98 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A2E80 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A3100 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

void __fastcall TextOutBitBlt(
        struct SURFACE *a1,
        struct RFONTOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8,
        struct _POINTL *a9,
        struct _BRUSHOBJ *a10,
        struct _POINTL *a11)
{
  int *v11; // rbx
  struct _BRUSHOBJ *v12; // r8
  struct _POINTL *v14; // r9
  unsigned int v15; // r14d
  unsigned int v16; // r15d
  struct _RECTL *v18; // rdx
  int v19; // ecx
  int v20; // r12d
  int v21; // eax
  unsigned int v22; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v23; // [rsp+64h] [rbp-55h] BYREF
  int *v24; // [rsp+68h] [rbp-51h] BYREF
  struct _RECTL *v25; // [rsp+70h] [rbp-49h]
  struct _POINTL *v26; // [rsp+78h] [rbp-41h]
  struct _BRUSHOBJ *v27; // [rsp+80h] [rbp-39h]
  int v28[10]; // [rsp+88h] [rbp-31h] BYREF

  v11 = v28;
  v12 = a10;
  v14 = a11;
  v15 = 0;
  v16 = 0;
  v18 = a7;
  v19 = *(_DWORD *)(*((_QWORD *)a1 + 6) + 56LL) & 0x8080;
  v25 = a7;
  v20 = 0;
  v27 = a10;
  v26 = a11;
  v23 = 0;
  v22 = 0;
  v24 = v28;
  if ( v19 == 32896 && *(_QWORD *)a2 )
  {
    v21 = UMPDReleaseRFONTSem(a2, 0LL, &v23, &v22, &v24);
    v18 = v25;
    v20 = v21;
    v12 = v27;
    v14 = v26;
    v15 = v23;
    v16 = v22;
    v11 = v24;
  }
  if ( (*((_DWORD *)a1 + 28) & 1) != 0 )
    (*(void (__fastcall **)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, struct _RECTL *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _POINTL *, int))(*((_QWORD *)a1 + 6) + 2864LL))(
      (char *)a1 + 24,
      0LL,
      0LL,
      a5,
      0LL,
      v18,
      0LL,
      0LL,
      v12,
      v14,
      61680);
  else
    ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, struct _RECTL *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _POINTL *, int))EngBitBlt)(
      (char *)a1 + 24,
      0LL,
      0LL,
      a5,
      0LL,
      v18,
      0LL,
      0LL,
      v12,
      v14,
      61680);
  if ( v20 )
  {
    UMPDAcquireRFONTSem(a2, 0LL, v15, v16, v11);
    if ( v11 )
    {
      if ( v11 != v28 )
        Win32FreePool(v11);
    }
  }
}
