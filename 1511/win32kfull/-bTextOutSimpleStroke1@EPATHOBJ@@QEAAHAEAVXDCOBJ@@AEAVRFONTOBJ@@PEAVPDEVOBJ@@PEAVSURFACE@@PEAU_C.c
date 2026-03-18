/*
 * XREFs of ?bTextOutSimpleStroke1@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C027B48C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0130BC4 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C02A26E4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02A2964 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

__int64 __fastcall EPATHOBJ::bTextOutSimpleStroke1(
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
  unsigned int v10; // esi
  unsigned int v11; // r14d
  int v12; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // r15d
  unsigned int v21; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v22; // [rsp+54h] [rbp-85h] BYREF
  int *v23; // [rsp+58h] [rbp-81h] BYREF
  BRUSHOBJ *v24; // [rsp+60h] [rbp-79h]
  struct SURFACE *v25; // [rsp+68h] [rbp-71h]
  struct PDEVOBJ *v26; // [rsp+70h] [rbp-69h]
  CLIPOBJ *pco; // [rsp+78h] [rbp-61h]
  POINTL *v28; // [rsp+80h] [rbp-59h]
  LINEATTRS v29; // [rsp+88h] [rbp-51h] BYREF
  int v30[10]; // [rsp+B0h] [rbp-29h] BYREF

  v8 = v30;
  v25 = a5;
  v10 = 0;
  pco = a6;
  v11 = 0;
  v12 = 0;
  v24 = a7;
  v28 = a8;
  v15 = *(_QWORD *)a2;
  v26 = a4;
  v22 = 0;
  v21 = 0;
  v16 = *(_QWORD *)(v15 + 48);
  v23 = v30;
  if ( (*(_DWORD *)(v16 + 56) & 0x8080) == 0x8080 && *(_QWORD *)a3 )
  {
    v17 = UMPDReleaseRFONTSem(a3, 0LL, &v22, &v21, &v23);
    v10 = v22;
    v12 = v17;
    v11 = v21;
    v8 = v23;
  }
  v18 = *(_QWORD *)a2;
  v29 = glaSimpleStroke;
  v19 = EPATHOBJ::bSimpleStroke(ppo, *(_DWORD *)(v18 + 72), v26, v25, pco, 0LL, v24, v28, &v29, 0xD0Du);
  if ( v12 )
  {
    UMPDAcquireRFONTSem(a3, 0LL, v10, v11, v8);
    if ( v8 )
    {
      if ( v8 != v30 )
        Win32FreePool(v8);
    }
  }
  return v19;
}
