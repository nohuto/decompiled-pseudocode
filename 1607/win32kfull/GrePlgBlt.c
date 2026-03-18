/*
 * XREFs of GrePlgBlt @ 0x1C00011A4
 * Callers:
 *     NtGdiPlgBlt @ 0x1C0001010 (NtGdiPlgBlt.c)
 * Callees:
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C0001144 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C00017B4 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C0001864 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00018FC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00363F0 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0048E14 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0049064 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C004CA3C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C004CC34 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C004CC70 (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004D800 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C010F588 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        HSURF a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // edi
  int valid; // eax
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rdx
  ULONG v20; // ecx
  struct SURFACE *v21; // rax
  struct SURFACE *v22; // rax
  unsigned int v23; // ebx
  unsigned __int8 v24; // r9
  unsigned int v25; // eax
  _QWORD v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v28[32]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v29[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v30[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v31[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v32[32]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-10h]
  _BYTE v34[288]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v35[16]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v36; // [rsp+230h] [rbp+130h] BYREF
  __int64 v37; // [rsp+240h] [rbp+140h]
  __int64 v38; // [rsp+248h] [rbp+148h]
  __int64 v39; // [rsp+250h] [rbp+150h]
  __int64 v40; // [rsp+258h] [rbp+158h]
  struct SURFACE *v41; // [rsp+260h] [rbp+160h]
  struct SURFACE *v42; // [rsp+268h] [rbp+168h]
  __int64 v43; // [rsp+270h] [rbp+170h]
  _BYTE v44[8]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v45; // [rsp+280h] [rbp+180h]
  struct _POINTFIX v46; // [rsp+298h] [rbp+198h] BYREF
  int v47; // [rsp+2A0h] [rbp+1A0h]
  int v48; // [rsp+2A4h] [rbp+1A4h]
  int v49; // [rsp+2A8h] [rbp+1A8h]
  int v50; // [rsp+2ACh] [rbp+1ACh]
  FIX v51; // [rsp+2B8h] [rbp+1B8h]
  FIX v52; // [rsp+2BCh] [rbp+1BCh]
  int v53; // [rsp+2C0h] [rbp+1C0h]
  int v54; // [rsp+2C4h] [rbp+1C4h]
  int v55; // [rsp+2D0h] [rbp+1D0h]
  int v56; // [rsp+2D4h] [rbp+1D4h]
  int v57; // [rsp+2D8h] [rbp+1D8h]
  int v58; // [rsp+2DCh] [rbp+1DCh]
  int v59; // [rsp+2E0h] [rbp+1E0h]
  int v60; // [rsp+2E4h] [rbp+1E4h]
  int v61; // [rsp+2E8h] [rbp+1E8h]
  int v62; // [rsp+2ECh] [rbp+1ECh]
  int v63; // [rsp+2F8h] [rbp+1F8h]
  int v64; // [rsp+2FCh] [rbp+1FCh]

  v12 = 0;
  v43 = 0LL;
  v64 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  DCOBJ::DCOBJ((DCOBJ *)v29, a3);
  if ( !v27[0] || !v29[0] || (*(_DWORD *)(v27[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_54;
  }
  bSpDwmValidateSurface((struct XDCOBJ *)v29, a4, a5, a6, a7);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v34, (struct XDCOBJ *)v27, (struct XDCOBJ *)v29);
  if ( (v34[112] & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v27) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v29) )
      v12 = 1;
    goto LABEL_52;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v27);
  v16 = v29[0];
  if ( valid
    && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v29)
    && (*(_DWORD *)(*(_QWORD *)(v16 + 512) + 112LL) & 0x10000000) == 0 )
  {
    goto LABEL_23;
  }
  v17 = v27[0];
  v18 = *(_QWORD *)(v27[0] + 80LL);
  if ( (*(_DWORD *)(v18 + 8) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v27[0], *(_QWORD *)(v18 + 16));
    v17 = v27[0];
    v16 = v29[0];
  }
  v19 = *(_QWORD *)(v16 + 80);
  if ( (*(_DWORD *)(v19 + 8) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v16, *(_QWORD *)(v19 + 16));
    v17 = v27[0];
    v16 = v29[0];
  }
  if ( (*(_DWORD *)(v17 + 32) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v29))
    && (*(_DWORD *)(v17 + 36) & 0xE0) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)v35, (struct XDCOBJ *)v27, 0x204u, 0);
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v35, a2, &v46, 3uLL) )
    {
LABEL_19:
      v20 = 87;
LABEL_51:
      EngSetLastError(v20);
      goto LABEL_52;
    }
    BLTRECORD::vExtrema((BLTRECORD *)v35);
    BLTRECORD::vBound((BLTRECORD *)v35, (struct ERECTL *)v31);
    XDCOBJ::vAccumulate((XDCOBJ *)v27, (struct ERECTL *)v31);
    v17 = v27[0];
    v16 = v29[0];
  }
  if ( (*(_DWORD *)(v16 + 36) & 1) != 0 )
  {
LABEL_23:
    v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v29);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v21)
      || (v22 = XDCOBJ::pSurfaceEff((XDCOBJ *)v27), !(unsigned int)DestSurfaceAccessCheck(v22)) )
    {
      v20 = 5;
      goto LABEL_51;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v35, (struct XDCOBJ *)v27, 0x204u, 0);
    v41 = XDCOBJ::pSurfaceEff((XDCOBJ *)v27);
    v37 = *((_QWORD *)v41 + 15);
    v38 = *(_QWORD *)(v27[0] + 96LL);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v36, (struct XDCOBJ *)v29, 0x204u, 0);
    v42 = XDCOBJ::pSurfaceEff((XDCOBJ *)v29);
    v39 = *((_QWORD *)v42 + 15);
    v40 = *(_QWORD *)(v29[0] + 96LL);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         v44,
                         0LL,
                         *(unsigned int *)(v27[0] + 112LL),
                         v39,
                         v37,
                         v40,
                         v38,
                         *(_DWORD *)(*(_QWORD *)(v27[0] + 80LL) + 40LL),
                         *(_DWORD *)(*(_QWORD *)(v27[0] + 80LL) + 32LL),
                         a11,
                         0) )
    {
      v64 |= 2u;
      v45 = 0LL;
      if ( (*(_DWORD *)(v36 + 32) & 1) == 0 || !(unsigned int)BLTRECORD::Src((BLTRECORD *)v35, a4, a5, a6, a7) )
        goto LABEL_19;
      if ( a8 )
      {
        SURFREF::SURFREF((SURFREF *)v32, a8);
        if ( !v33
          || (INC_SHARE_REF_CNT(), v23 = 65540, v64 |= 0x30000u, v43 = v33, v63 = 43724, *(_WORD *)(v33 + 100))
          || *(_DWORD *)(v33 + 96) != 1 )
        {
          EngSetLastError(6u);
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
          goto LABEL_52;
        }
        v59 = a9;
        v61 = a9 + v57 - v55;
        v60 = a10;
        v62 = a10 + v58 - v56;
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v32);
      }
      else
      {
        v43 = 0LL;
        v23 = 4;
        v63 = 52428;
      }
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)v35, a2, &v46, 3uLL) )
      {
        if ( v48 != v46.y
          || v49 != v46.x
          || (v46.x & 0xF) != 0
          || (v46.y & 0xF) != 0
          || (v47 & 0xF) != 0
          || (v48 & 0xF) != 0
          || (v49 & 0xF) != 0
          || (v50 & 0xF) != 0 )
        {
          v25 = BLTRECORD::bRotate(
                  (BLTRECORD *)v35,
                  (struct DCOBJ *)v27,
                  (struct DCOBJ *)v29,
                  v23,
                  *(_BYTE *)(*(_QWORD *)(v27[0] + 80LL) + 75LL));
        }
        else
        {
          v54 = v50 >> 4;
          v51 = v46.x >> 4;
          v52 = v46.y >> 4;
          v53 = v47 >> 4;
          v24 = *(_BYTE *)(*(_QWORD *)(v27[0] + 80LL) + 75LL);
          if ( v24 == 4 || !(unsigned int)BLTRECORD::bEqualExtents((BLTRECORD *)v35) )
            v25 = BLTRECORD::bStretch((BLTRECORD *)v35, (struct DCOBJ *)v27, (struct DCOBJ *)v29, v23, v24);
          else
            v25 = BLTRECORD::bBitBlt((BLTRECORD *)v35, (struct DCOBJ *)v27, (struct DCOBJ *)v29, v23);
        }
        v12 = v25;
        goto LABEL_52;
      }
      goto LABEL_19;
    }
  }
  else
  {
    LOBYTE(v12) = *(_QWORD *)(v17 + 512) == 0LL;
  }
LABEL_52:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v34);
LABEL_54:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v29);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v30);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v27);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v35);
  return v12;
}
