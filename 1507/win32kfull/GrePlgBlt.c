/*
 * XREFs of GrePlgBlt @ 0x1C0122434
 * Callers:
 *     NtGdiPlgBlt @ 0x1C0122300 (NtGdiPlgBlt.c)
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00199F4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009DC0C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009EDFC (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C009EFF4 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F030 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C009F60C (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009F674 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00A0124 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C00A0190 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00A0228 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A2224 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C0122A30 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        HSURF a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // edi
  int valid; // eax
  DC *v16; // r9
  DC *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  ULONG v20; // ecx
  struct SURFACE *v21; // rax
  struct SURFACE *v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rdx
  unsigned __int8 v25; // r9
  unsigned int v26; // eax
  DC *v28[6]; // [rsp+60h] [rbp-A0h] BYREF
  DC *v29[6]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v30[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+E0h] [rbp-20h]
  _BYTE v32[24]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v33[288]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTL v34[2]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v35; // [rsp+230h] [rbp+130h] BYREF
  __int64 v36; // [rsp+240h] [rbp+140h]
  __int64 v37; // [rsp+248h] [rbp+148h]
  __int64 v38; // [rsp+250h] [rbp+150h]
  __int64 v39; // [rsp+258h] [rbp+158h]
  struct SURFACE *v40; // [rsp+260h] [rbp+160h]
  struct SURFACE *v41; // [rsp+268h] [rbp+168h]
  __int64 v42; // [rsp+270h] [rbp+170h]
  __int64 v43[4]; // [rsp+278h] [rbp+178h] BYREF
  struct _POINTFIX v44; // [rsp+298h] [rbp+198h] BYREF
  int v45; // [rsp+2A0h] [rbp+1A0h]
  int v46; // [rsp+2A4h] [rbp+1A4h]
  int v47; // [rsp+2A8h] [rbp+1A8h]
  int v48; // [rsp+2ACh] [rbp+1ACh]
  FIX v49; // [rsp+2B8h] [rbp+1B8h]
  FIX v50; // [rsp+2BCh] [rbp+1BCh]
  int v51; // [rsp+2C0h] [rbp+1C0h]
  int v52; // [rsp+2C4h] [rbp+1C4h]
  int v53; // [rsp+2D0h] [rbp+1D0h]
  int v54; // [rsp+2D4h] [rbp+1D4h]
  int v55; // [rsp+2D8h] [rbp+1D8h]
  int v56; // [rsp+2DCh] [rbp+1DCh]
  int v57; // [rsp+2E0h] [rbp+1E0h]
  int v58; // [rsp+2E4h] [rbp+1E4h]
  int v59; // [rsp+2E8h] [rbp+1E8h]
  int v60; // [rsp+2ECh] [rbp+1ECh]
  int v61; // [rsp+2F8h] [rbp+1F8h]
  int v62; // [rsp+2FCh] [rbp+1FCh]

  v12 = 0;
  v42 = 0LL;
  v62 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  DCOBJ::DCOBJ((DCOBJ *)v29, a3);
  if ( !v28[0] || !v29[0] || (*((_DWORD *)v28[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_54;
  }
  bSpDwmValidateSurface((struct XDCOBJ *)v29, a4, a5, a6, a7);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v33, (struct XDCOBJ *)v28, (struct XDCOBJ *)v29);
  if ( (v33[112] & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v28) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v29) )
      v12 = 1;
    goto LABEL_52;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v28);
  v16 = v29[0];
  if ( valid
    && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v29)
    && (*(_DWORD *)(*((_QWORD *)v16 + 64) + 112LL) & 0x10000000) == 0 )
  {
    goto LABEL_23;
  }
  v17 = v28[0];
  v18 = *((_QWORD *)v28[0] + 10);
  if ( (*(_DWORD *)(v18 + 8) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v28[0], *(_QWORD *)(v18 + 16));
    v17 = v28[0];
    v16 = v29[0];
  }
  v19 = *((_QWORD *)v16 + 10);
  if ( (*(_DWORD *)(v19 + 8) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v16, *(_QWORD *)(v19 + 16));
    v17 = v28[0];
    v16 = v29[0];
  }
  if ( (*((_DWORD *)v17 + 8) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v29))
    && (*((_DWORD *)v17 + 9) & 0xE0) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)v34, (struct XDCOBJ *)v28, 0x204u, 0);
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v34, a2, &v44, 3uLL) )
    {
LABEL_19:
      v20 = 87;
LABEL_51:
      EngSetLastError(v20);
      goto LABEL_52;
    }
    BLTRECORD::vExtrema((BLTRECORD *)v34);
    BLTRECORD::vBound((BLTRECORD *)v34, (struct ERECTL *)v32);
    XDCOBJ::vAccumulate((XDCOBJ *)v28, (struct ERECTL *)v32);
    v17 = v28[0];
    v16 = v29[0];
  }
  if ( (*((_DWORD *)v16 + 9) & 1) != 0 )
  {
LABEL_23:
    v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v29);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v21)
      || (v22 = XDCOBJ::pSurfaceEff((XDCOBJ *)v28), !(unsigned int)DestSurfaceAccessCheck(v22)) )
    {
      v20 = 5;
      goto LABEL_51;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v34, (struct XDCOBJ *)v28, 0x204u, 0);
    v40 = XDCOBJ::pSurfaceEff((XDCOBJ *)v28);
    v36 = *((_QWORD *)v40 + 15);
    v37 = *((_QWORD *)v28[0] + 12);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v35, (struct XDCOBJ *)v29, 0x204u, 0);
    v41 = XDCOBJ::pSurfaceEff((XDCOBJ *)v29);
    v38 = *((_QWORD *)v41 + 15);
    v39 = *((_QWORD *)v29[0] + 12);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         v43,
                         0LL,
                         *((_DWORD *)v28[0] + 28),
                         v38,
                         v36,
                         v39,
                         v37,
                         *(_DWORD *)(*((_QWORD *)v28[0] + 10) + 40LL),
                         *(_DWORD *)(*((_QWORD *)v28[0] + 10) + 32LL),
                         a11,
                         0) )
    {
      v62 |= 2u;
      v43[1] = 0LL;
      if ( (*(_DWORD *)(v35 + 32) & 1) == 0 || !(unsigned int)BLTRECORD::Src(v34, a4, a5, a6, a7) )
        goto LABEL_19;
      if ( a8 )
      {
        SURFREF::SURFREF((SURFREF *)v30, a8);
        if ( !v31
          || (INC_SHARE_REF_CNT(v31, v24), v23 = 65540, v62 |= 0x30000u, v42 = v31, v61 = 43724, *(_WORD *)(v31 + 100))
          || *(_DWORD *)(v31 + 96) != 1 )
        {
          EngSetLastError(6u);
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v30);
          goto LABEL_52;
        }
        v57 = a9;
        v59 = a9 + v55 - v53;
        v58 = a10;
        v60 = a10 + v56 - v54;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v30);
      }
      else
      {
        v42 = 0LL;
        v23 = 4;
        v61 = 52428;
      }
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)v34, a2, &v44, 3uLL) )
      {
        if ( v46 != v44.y
          || v47 != v44.x
          || (v44.x & 0xF) != 0
          || (v44.y & 0xF) != 0
          || (v45 & 0xF) != 0
          || (v46 & 0xF) != 0
          || (v47 & 0xF) != 0
          || (v48 & 0xF) != 0 )
        {
          v26 = BLTRECORD::bRotate(
                  (struct _POINTFIX *)v34,
                  (struct DCOBJ *)v28,
                  v29,
                  v23,
                  *(_BYTE *)(*((_QWORD *)v28[0] + 10) + 75LL));
        }
        else
        {
          v52 = v48 >> 4;
          v49 = v44.x >> 4;
          v50 = v44.y >> 4;
          v51 = v45 >> 4;
          v25 = *(_BYTE *)(*((_QWORD *)v28[0] + 10) + 75LL);
          if ( v25 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v34) )
            v26 = BLTRECORD::bStretch((BLTRECORD *)v34, (struct DCOBJ *)v28, (struct DCOBJ *)v29, v23, v25);
          else
            v26 = BLTRECORD::bBitBlt((BLTRECORD *)v34, v28, (struct DCOBJ *)v29, v23);
        }
        v12 = v26;
        goto LABEL_52;
      }
      goto LABEL_19;
    }
  }
  else
  {
    LOBYTE(v12) = *((_QWORD *)v17 + 64) == 0LL;
  }
LABEL_52:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v33);
LABEL_54:
  DCOBJ::~DCOBJ((DCOBJ *)v29);
  DCOBJ::~DCOBJ((DCOBJ *)v28);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v34);
  return v12;
}
