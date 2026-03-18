/*
 * XREFs of ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0279520
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002FA30 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0015414 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A3658 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A38D8 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

__int64 __fastcall EPATHOBJ::bTextOutSimpleFill(
        PATHOBJ *ppo,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        struct PDEVOBJ *a4,
        struct SURFACE *a5,
        struct _CLIPOBJ *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8)
{
  int *v8; // rbx
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  int v12; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // esi
  __int64 v19; // rdx
  unsigned int v21; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-65h] BYREF
  int *v23; // [rsp+58h] [rbp-61h] BYREF
  struct _POINTL *v24; // [rsp+60h] [rbp-59h]
  BRUSHOBJ *pbo; // [rsp+68h] [rbp-51h]
  CLIPOBJ *pco; // [rsp+70h] [rbp-49h]
  struct SURFACE *v27; // [rsp+78h] [rbp-41h]
  struct PDEVOBJ *v28; // [rsp+80h] [rbp-39h]
  int v29[10]; // [rsp+88h] [rbp-31h] BYREF

  v8 = v29;
  v27 = a5;
  v10 = 0;
  pco = a6;
  v11 = 0;
  v12 = 0;
  pbo = a7;
  v24 = a8;
  v15 = *(_QWORD *)a2;
  v28 = a4;
  v21 = 0;
  v22 = 0;
  v16 = *(_QWORD *)(v15 + 48);
  v23 = v29;
  if ( (*(_DWORD *)(v16 + 56) & 0x8080) == 0x8080 && *(_QWORD *)a3 )
  {
    v17 = UMPDReleaseRFONTSem(a3, 0LL, &v21, &v22, &v23);
    v10 = v21;
    v12 = v17;
    v11 = v22;
    v8 = v23;
  }
  v18 = EPATHOBJ::bSimpleFill(ppo, *(_DWORD *)(*(_QWORD *)a2 + 72LL), v28, v27, pco, pbo, v24, 0xD0Du, 2u);
  if ( v12 )
  {
    UMPDAcquireRFONTSem(a3, 0LL, v10, v11, v8);
    if ( v8 )
    {
      if ( v8 != v29 )
        Win32FreePool(v8, v19);
    }
  }
  return v18;
}
