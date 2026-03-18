/*
 * XREFs of ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014944C
 * Callers:
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C000AA78 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     EngLineTo @ 0x1C00100C0 (EngLineTo.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0015170 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0015414 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0149120 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C026B310 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026C270 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00147C4 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00148F0 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0033D28 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00517E0 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0065F2C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0149E24 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02CC7E4 (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 */

void __fastcall PRECOMPUTE::vInit(
        __int64 a1,
        SURFACE *a2,
        PDEVOBJ *a3,
        __int64 a4,
        __int64 a5,
        struct _XFORMOBJ *a6,
        struct _LINEATTRS *a7,
        char a8,
        unsigned int a9,
        int a10)
{
  int v13; // eax
  struct _RECTL *v14; // r12
  int v15; // r9d
  int v16; // r10d
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  PRECOMPUTE *v20; // rcx
  RGNMEMOBJ *v21; // rcx
  PRECOMPUTE *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  struct _RECTL *v35; // r9
  struct _RECTL *v36; // r15
  __int64 v37; // rdx
  int v38; // eax
  PRECOMPUTE *v39; // rcx
  struct _RECTL *v40; // rsi
  __int64 v41; // rcx
  __int128 v42; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+48h] [rbp-B8h]
  _BYTE v45[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v46; // [rsp+58h] [rbp-A8h]
  struct _RECTL v47; // [rsp+D0h] [rbp-30h] BYREF
  __m128i *v48; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v49; // [rsp+E8h] [rbp-18h]

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 32) = 0LL;
  *(_QWORD *)(a4 + 24) = 0LL;
  *(_QWORD *)(a4 + 40) = 0LL;
  *(_DWORD *)(a4 + 48) = 0;
  *(_QWORD *)(a4 + 56) = 0LL;
  *(_DWORD *)(a4 + 64) = 0;
  *(_QWORD *)(a4 + 72) = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 56LL) & 0x8000) != 0
    || !PDEVOBJ::bAllowShareAccess(a3)
    || (v13 = SURFACE::bRedirectionBitmap(a2), v14 = 0LL, v13) )
  {
    *(_QWORD *)(a1 + 32) = a4;
    return;
  }
  if ( a10 )
  {
    if ( a10 == 1 )
    {
      if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
      {
        v36 = 0LL;
        v37 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
        v38 = (int)*(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL) >> 4;
        v42 = *(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
        if ( *(_DWORD *)(a5 + 4) > v38
          || *(_DWORD *)(a5 + 12) < (DWORD2(v42) + 15) >> 4
          || *(_DWORD *)(a5 + 8) > SHIDWORD(v37) >> 4
          || *(_DWORD *)(a5 + 16) < (HIDWORD(v42) + 15) >> 4 )
        {
          v36 = (struct _RECTL *)(a5 + 4);
        }
        PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v48);
        if ( v49
          && EPATHOBJ::bClone((EPATHOBJ *)&v48, (struct EPATHOBJ *)a4)
          && (((unsigned __int8)v48 & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)&v48))
          && (!a7 || (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)&v48, &v48, a6, a7))
          && (unsigned int)PRECOMPUTE::bPreComputeFast(v39, (struct EPATHOBJ *)&v48, (struct EPATHOBJ *)a4, v36, 1u) )
        {
          goto LABEL_115;
        }
        goto LABEL_50;
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v48);
      if ( !v49
        || !EPATHOBJ::bClone((EPATHOBJ *)&v48, (struct EPATHOBJ *)a4)
        || ((unsigned __int8)v48 & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)&v48)
        || a7 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)&v48, &v48, a6, a7) )
      {
        goto LABEL_50;
      }
      v47.top = 16 * *(_DWORD *)(a5 + 8);
      v47.bottom = 16 * *(_DWORD *)(a5 + 16);
      *(_QWORD *)&v42 = 0LL;
      DWORD2(v42) = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v42, (struct EPATHOBJ *)&v48, a9, &v47);
      v21 = (RGNMEMOBJ *)&v42;
      if ( (_QWORD)v42 )
      {
        *(_QWORD *)a1 = v42;
LABEL_114:
        RGNMEMOBJ::~RGNMEMOBJ(v21);
        goto LABEL_115;
      }
      goto LABEL_49;
    }
    if ( a10 != 2 )
      goto LABEL_117;
    v15 = *(_DWORD *)(a5 + 8);
    v16 = *(_DWORD *)(a5 + 16);
    v47.top = 16 * v15;
    v47.bottom = 16 * v16;
    if ( (a7->fl & 1) != 0 && a8 != 13 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v48);
      if ( v49 && EPATHOBJ::bClone((EPATHOBJ *)&v48, (struct EPATHOBJ *)a4) )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v45);
        if ( v46
          && (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v45, (struct EPATHOBJ *)&v48, a6, a7)
          && (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v45, &v48, a6, a7)
          && (((unsigned __int8)v48 & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)&v48)) )
        {
          *(_QWORD *)&v42 = 0LL;
          DWORD2(v42) = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v42, (struct EPATHOBJ *)v45, 2u, 0LL);
          v43 = 0LL;
          v44 = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v43, (struct EPATHOBJ *)&v48, a9, 0LL);
          if ( (_QWORD)v42 )
          {
            v17 = v43;
            if ( v43 )
            {
              *(_QWORD *)(a1 + 24) = v42;
              *(_QWORD *)a1 = v17;
              RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v43);
              RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v42);
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v45);
LABEL_115:
              XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v48);
              goto LABEL_116;
            }
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v42);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
          RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v43);
          RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v42);
        }
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v45);
      }
LABEL_50:
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&v48);
      return;
    }
    if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
      v19 = (int)*(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL) >> 4;
      v42 = *(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
      if ( *(_DWORD *)(a5 + 4) > v19
        || *(_DWORD *)(a5 + 12) < (DWORD2(v42) + 15) >> 4
        || v15 > SHIDWORD(v18) >> 4
        || v16 < (HIDWORD(v42) + 15) >> 4 )
      {
        v14 = (struct _RECTL *)(a5 + 4);
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v48);
      if ( !v49 || !EPATHOBJ::bClone((EPATHOBJ *)&v48, (struct EPATHOBJ *)a4) )
        goto LABEL_50;
      if ( ((unsigned __int8)v48 & 1) == 0 )
        goto LABEL_34;
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)&v48) )
        goto LABEL_50;
      *(_QWORD *)&v42 = 0LL;
      DWORD2(v42) = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v42, (struct EPATHOBJ *)&v48, a9, &v47);
      v21 = (RGNMEMOBJ *)&v42;
      if ( (_QWORD)v42 )
      {
        *(_QWORD *)a1 = v42;
        RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v42);
LABEL_34:
        if ( !(unsigned int)PRECOMPUTE::bPreComputeFast(v20, (struct EPATHOBJ *)&v48, (struct EPATHOBJ *)a4, v14, 1u) )
        {
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          goto LABEL_50;
        }
        if ( (a7->fl & 1) != 0 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)&v48, &v48, a6, a7)
          || !(unsigned int)PRECOMPUTE::bPreComputeFast(v22, (struct EPATHOBJ *)&v48, (struct EPATHOBJ *)a4, v14, 2u) )
        {
          v29 = *(_QWORD *)(a4 + 56);
          if ( v29 )
            Win32FreePool(v29, v23, v24);
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          *(_QWORD *)(a4 + 56) = 0LL;
          *(_DWORD *)(a4 + 48) = 0;
          goto LABEL_50;
        }
        v43 = 0LL;
        v44 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v43, (struct EPATHOBJ *)&v48, a9, &v47);
        if ( !v43 )
        {
          v27 = *(_QWORD *)(a4 + 56);
          if ( v27 )
            Win32FreePool(v27, v25, v26);
          v28 = *(_QWORD *)(a4 + 72);
          if ( v28 )
            Win32FreePool(v28, v25, v26);
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          *(_QWORD *)(a4 + 56) = 0LL;
          *(_DWORD *)(a4 + 48) = 0;
          *(_QWORD *)(a4 + 72) = 0LL;
          *(_DWORD *)(a4 + 64) = 0;
          goto LABEL_48;
        }
        *(_QWORD *)(a1 + 8) = v43;
        if ( a9 == 2 )
          goto LABEL_113;
        *(_QWORD *)&v42 = 0LL;
        DWORD2(v42) = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v42, (struct EPATHOBJ *)&v48, 2u, &v47);
        v32 = v42;
        if ( !(_QWORD)v42 )
        {
          v33 = *(_QWORD *)(a4 + 56);
          if ( v33 )
            Win32FreePool(v33, v30, v31);
          v34 = *(_QWORD *)(a4 + 72);
          if ( v34 )
            Win32FreePool(v34, v30, v31);
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          REGION::vDeleteREGION(*(REGION **)(a1 + 8));
          *(_QWORD *)(a1 + 8) = 0LL;
          *(_QWORD *)(a4 + 56) = 0LL;
          *(_DWORD *)(a4 + 48) = 0;
          *(_QWORD *)(a4 + 72) = 0LL;
          *(_DWORD *)(a4 + 64) = 0;
          goto LABEL_111;
        }
        goto LABEL_112;
      }
LABEL_49:
      RGNMEMOBJ::~RGNMEMOBJ(v21);
      goto LABEL_50;
    }
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v48);
    if ( !v49
      || !EPATHOBJ::bClone((EPATHOBJ *)&v48, (struct EPATHOBJ *)a4)
      || ((unsigned __int8)v48 & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)&v48)
      || (a7->fl & 1) != 0 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)&v48, &v48, a6, a7) )
    {
      goto LABEL_50;
    }
    v43 = 0LL;
    v44 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v43, (struct EPATHOBJ *)&v48, a9, &v47);
    if ( !v43 )
      goto LABEL_48;
    *(_QWORD *)(a1 + 8) = v43;
    if ( a9 == 2 )
      goto LABEL_113;
    v35 = &v47;
LABEL_109:
    DWORD2(v42) = 0;
    *(_QWORD *)&v42 = 0LL;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v42, (struct EPATHOBJ *)&v48, 2u, v35);
    v32 = v42;
    if ( !(_QWORD)v42 )
    {
      REGION::vDeleteREGION(*(REGION **)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
LABEL_111:
      RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v42);
LABEL_48:
      v21 = (RGNMEMOBJ *)&v43;
      goto LABEL_49;
    }
LABEL_112:
    *(_QWORD *)(a1 + 16) = v32;
    RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v42);
LABEL_113:
    v21 = (RGNMEMOBJ *)&v43;
    goto LABEL_114;
  }
  if ( (a7->fl & 1) != 0 )
  {
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v48);
    if ( !v49
      || !EPATHOBJ::bClone((EPATHOBJ *)&v48, (struct EPATHOBJ *)a4)
      || ((unsigned __int8)v48 & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)&v48)
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)&v48, &v48, a6, a7) )
    {
      goto LABEL_50;
    }
    if ( *(_BYTE *)(a5 + 20) )
    {
      v47.top = 16 * *(_DWORD *)(a5 + 8);
      v40 = &v47;
      v47.bottom = 16 * *(_DWORD *)(a5 + 16);
    }
    else
    {
      v40 = 0LL;
    }
    v43 = 0LL;
    v44 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v43, (struct EPATHOBJ *)&v48, a9, v40);
    if ( !v43 )
      goto LABEL_48;
    *(_QWORD *)(a1 + 8) = v43;
    if ( a9 == 2 )
      goto LABEL_113;
    v35 = v40;
    goto LABEL_109;
  }
LABEL_116:
  *(_QWORD *)(a1 + 32) = a4;
LABEL_117:
  v41 = *(_QWORD *)(a1 + 32);
  if ( v41 )
  {
    *(_QWORD *)(v41 + 16) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = *(_QWORD *)(a1 + 24);
  }
}
