/*
 * XREFs of ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01327EC
 * Callers:
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0016688 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0130BC4 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C01324C0 (-SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_P.c)
 *     EngLineTo @ 0x1C013CEF0 (EngLineTo.c)
 *     ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C026CE50 (-SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C026DDB0 (-SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@.c)
 *     ?bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C027AEF0 (-bSimpleStrokeAndFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C0016D10 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0038E2C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C007B840 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0130838 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01308C4 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0133198 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02C9688 (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
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
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  struct _RECTL *v29; // r9
  struct _RECTL *v30; // r15
  __int64 v31; // rdx
  int v32; // eax
  PRECOMPUTE *v33; // rcx
  struct _RECTL *v34; // rsi
  __int64 v35; // rcx
  __int128 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+48h] [rbp-B8h]
  _BYTE v39[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h]
  struct _RECTL v41; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v42[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v43; // [rsp+E8h] [rbp-18h]

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
        v30 = 0LL;
        v31 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
        v32 = (int)*(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL) >> 4;
        v36 = *(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
        if ( *(_DWORD *)(a5 + 4) > v32
          || *(_DWORD *)(a5 + 12) < (DWORD2(v36) + 15) >> 4
          || *(_DWORD *)(a5 + 8) > SHIDWORD(v31) >> 4
          || *(_DWORD *)(a5 + 16) < (HIDWORD(v36) + 15) >> 4 )
        {
          v30 = (struct _RECTL *)(a5 + 4);
        }
        PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v42);
        if ( v43
          && EPATHOBJ::bClone((EPATHOBJ *)v42, (struct EPATHOBJ *)a4)
          && ((v42[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v42))
          && (!a7 || (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v42, (struct EPATHOBJ *)v42, a6, a7))
          && (unsigned int)PRECOMPUTE::bPreComputeFast(v33, (struct EPATHOBJ *)v42, (struct EPATHOBJ *)a4, v30, 1u) )
        {
          goto LABEL_115;
        }
        goto LABEL_50;
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v42);
      if ( !v43
        || !EPATHOBJ::bClone((EPATHOBJ *)v42, (struct EPATHOBJ *)a4)
        || (v42[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v42)
        || a7 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v42, (struct EPATHOBJ *)v42, a6, a7) )
      {
        goto LABEL_50;
      }
      v41.top = 16 * *(_DWORD *)(a5 + 8);
      v41.bottom = 16 * *(_DWORD *)(a5 + 16);
      DWORD2(v36) = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v42, a9, &v41);
      v21 = (RGNMEMOBJ *)&v36;
      if ( (_QWORD)v36 )
      {
        *(_QWORD *)a1 = v36;
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
    v41.top = 16 * v15;
    v41.bottom = 16 * v16;
    if ( (a7->fl & 1) != 0 && a8 != 13 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v42);
      if ( v43 && EPATHOBJ::bClone((EPATHOBJ *)v42, (struct EPATHOBJ *)a4) )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v39);
        if ( v40
          && (unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v39, (struct EPATHOBJ *)v42, a6, a7)
          && (unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v39, (struct EPATHOBJ *)v42, a6, a7)
          && ((v42[0] & 1) == 0 || EPATHOBJ::bFlatten((EPATHOBJ *)v42)) )
        {
          DWORD2(v36) = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v39, 2u, 0LL);
          v38 = 0;
          RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v42, a9, 0LL);
          if ( (_QWORD)v36 )
          {
            v17 = v37;
            if ( v37 )
            {
              *(_QWORD *)(a1 + 24) = v36;
              *(_QWORD *)a1 = v17;
              RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v37);
              RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v36);
              PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v39);
LABEL_115:
              PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v42);
              goto LABEL_116;
            }
          }
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v37);
          RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v37);
          RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v36);
        }
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v39);
      }
LABEL_50:
      PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v42);
      return;
    }
    if ( *(_BYTE *)(a5 + 20) != 3 && (*(_DWORD *)a4 & 0x4000) == 0 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
      v19 = (int)*(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL) >> 4;
      v36 = *(_OWORD *)(*(_QWORD *)(a4 + 8) + 48LL);
      if ( *(_DWORD *)(a5 + 4) > v19
        || *(_DWORD *)(a5 + 12) < (DWORD2(v36) + 15) >> 4
        || v15 > SHIDWORD(v18) >> 4
        || v16 < (HIDWORD(v36) + 15) >> 4 )
      {
        v14 = (struct _RECTL *)(a5 + 4);
      }
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v42);
      if ( !v43 || !EPATHOBJ::bClone((EPATHOBJ *)v42, (struct EPATHOBJ *)a4) )
        goto LABEL_50;
      if ( (v42[0] & 1) == 0 )
        goto LABEL_34;
      if ( !EPATHOBJ::bFlatten((EPATHOBJ *)v42) )
        goto LABEL_50;
      DWORD2(v36) = 0;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v42, a9, &v41);
      v21 = (RGNMEMOBJ *)&v36;
      if ( (_QWORD)v36 )
      {
        *(_QWORD *)a1 = v36;
        RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v36);
LABEL_34:
        if ( !(unsigned int)PRECOMPUTE::bPreComputeFast(v20, (struct EPATHOBJ *)v42, (struct EPATHOBJ *)a4, v14, 1u) )
        {
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          goto LABEL_50;
        }
        if ( (a7->fl & 1) != 0 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v42, (struct EPATHOBJ *)v42, a6, a7)
          || !(unsigned int)PRECOMPUTE::bPreComputeFast(v22, (struct EPATHOBJ *)v42, (struct EPATHOBJ *)a4, v14, 2u) )
        {
          v25 = *(_QWORD *)(a4 + 56);
          if ( v25 )
            Win32FreePool(v25);
          if ( *(_QWORD *)a1 )
          {
            REGION::vDeleteREGION(*(REGION **)a1);
            *(_QWORD *)a1 = 0LL;
          }
          *(_QWORD *)(a4 + 56) = 0LL;
          *(_DWORD *)(a4 + 48) = 0;
          goto LABEL_50;
        }
        v38 = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v42, a9, &v41);
        if ( !v37 )
        {
          v23 = *(_QWORD *)(a4 + 56);
          if ( v23 )
            Win32FreePool(v23);
          v24 = *(_QWORD *)(a4 + 72);
          if ( v24 )
            Win32FreePool(v24);
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
        *(_QWORD *)(a1 + 8) = v37;
        if ( a9 == 2 )
          goto LABEL_113;
        DWORD2(v36) = 0;
        RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v42, 2u, &v41);
        v26 = v36;
        if ( !(_QWORD)v36 )
        {
          v27 = *(_QWORD *)(a4 + 56);
          if ( v27 )
            Win32FreePool(v27);
          v28 = *(_QWORD *)(a4 + 72);
          if ( v28 )
            Win32FreePool(v28);
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
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v42);
    if ( !v43
      || !EPATHOBJ::bClone((EPATHOBJ *)v42, (struct EPATHOBJ *)a4)
      || (v42[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v42)
      || (a7->fl & 1) != 0 && !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v42, (struct EPATHOBJ *)v42, a6, a7) )
    {
      goto LABEL_50;
    }
    v38 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v42, a9, &v41);
    if ( !v37 )
      goto LABEL_48;
    *(_QWORD *)(a1 + 8) = v37;
    if ( a9 == 2 )
      goto LABEL_113;
    v29 = &v41;
LABEL_109:
    DWORD2(v36) = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v36, (struct EPATHOBJ *)v42, 2u, v29);
    v26 = v36;
    if ( !(_QWORD)v36 )
    {
      REGION::vDeleteREGION(*(REGION **)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
LABEL_111:
      RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v36);
LABEL_48:
      v21 = (RGNMEMOBJ *)&v37;
      goto LABEL_49;
    }
LABEL_112:
    *(_QWORD *)(a1 + 16) = v26;
    RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)&v36);
LABEL_113:
    v21 = (RGNMEMOBJ *)&v37;
    goto LABEL_114;
  }
  if ( (a7->fl & 1) != 0 )
  {
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v42);
    if ( !v43
      || !EPATHOBJ::bClone((EPATHOBJ *)v42, (struct EPATHOBJ *)a4)
      || (v42[0] & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)v42)
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v42, (struct EPATHOBJ *)v42, a6, a7) )
    {
      goto LABEL_50;
    }
    if ( *(_BYTE *)(a5 + 20) )
    {
      v41.top = 16 * *(_DWORD *)(a5 + 8);
      v34 = &v41;
      v41.bottom = 16 * *(_DWORD *)(a5 + 16);
    }
    else
    {
      v34 = 0LL;
    }
    v38 = 0;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v37, (struct EPATHOBJ *)v42, a9, v34);
    if ( !v37 )
      goto LABEL_48;
    *(_QWORD *)(a1 + 8) = v37;
    if ( a9 == 2 )
      goto LABEL_113;
    v29 = v34;
    goto LABEL_109;
  }
LABEL_116:
  *(_QWORD *)(a1 + 32) = a4;
LABEL_117:
  v35 = *(_QWORD *)(a1 + 32);
  if ( v35 )
  {
    *(_QWORD *)(v35 + 16) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL) = *(_QWORD *)(a1 + 24);
  }
}
