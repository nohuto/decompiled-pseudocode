/*
 * XREFs of GreMaskBlt @ 0x1C00A1D64
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C001BF90 (NtGdiFlushUserBatch.c)
 *     NtGdiPatBlt @ 0x1C00868F0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086C10 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiMaskBlt @ 0x1C00A2260 (NtGdiMaskBlt.c)
 * Callees:
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0004C78 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00126F8 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0016BE8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016DE0 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00182A4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00199F4 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019A20 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0019AB4 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0021A60 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026660 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0032C68 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009DC0C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009EDFC (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C009EE54 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C009EFF4 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009F030 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C009F60C (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009F674 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00A0228 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00A2224 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025E4FC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0286A24 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreMaskBlt(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        HDC a6,
        LONG a7,
        LONG a8,
        HSURF a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  HDC v14; // r12
  unsigned int v15; // ebx
  int v17; // edi
  __int64 v18; // rdx
  int v19; // esi
  DC *v20; // r8
  ULONG v21; // ecx
  __int64 v22; // rdx
  struct SURFACE *v23; // rax
  int v24; // r15d
  int v25; // r14d
  unsigned int v26; // eax
  int v28; // ecx
  struct SURFACE *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // r9d
  ULONG v33; // ecx
  int v34; // edx
  __int64 v35; // rdx
  int v36; // ecx
  DC *v40[6]; // [rsp+70h] [rbp-90h] BYREF
  DC *v41[6]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v43[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v44; // [rsp+100h] [rbp+0h]
  _BYTE v45[288]; // [rsp+110h] [rbp+10h] BYREF
  HDC v46; // [rsp+230h] [rbp+130h] BYREF
  int v47; // [rsp+238h] [rbp+138h]
  int v48; // [rsp+23Ch] [rbp+13Ch]
  struct _POINTL v49[2]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v50[2]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v51; // [rsp+260h] [rbp+160h]
  __int64 v52; // [rsp+268h] [rbp+168h]
  __int64 v53; // [rsp+270h] [rbp+170h]
  __int64 v54; // [rsp+278h] [rbp+178h]
  __int64 v55; // [rsp+280h] [rbp+180h]
  struct SURFACE *v56; // [rsp+288h] [rbp+188h]
  __int64 v57; // [rsp+290h] [rbp+190h]
  __int64 v58; // [rsp+298h] [rbp+198h] BYREF
  char *v59; // [rsp+2A0h] [rbp+1A0h]
  int v60; // [rsp+2F0h] [rbp+1F0h]
  int v61; // [rsp+2F4h] [rbp+1F4h]
  int v62; // [rsp+2F8h] [rbp+1F8h]
  int v63; // [rsp+2FCh] [rbp+1FCh]
  int v64; // [rsp+300h] [rbp+200h]
  int v65; // [rsp+304h] [rbp+204h]
  int v66; // [rsp+308h] [rbp+208h]
  int v67; // [rsp+30Ch] [rbp+20Ch]
  __int64 v68; // [rsp+310h] [rbp+210h]
  unsigned int v69; // [rsp+318h] [rbp+218h]
  int v70; // [rsp+31Ch] [rbp+21Ch]

  v14 = a6;
  v15 = 0;
  v46 = a1;
  v57 = 0LL;
  v70 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v40, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v40) )
  {
    if ( v40[0] )
    {
      v28 = *((_DWORD *)v40[0] + 9);
      if ( (v28 & 0x10000) == 0 )
      {
        if ( (v28 & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v42, (struct XDCOBJ *)v40, 0x204u);
          v47 = a4 + a2;
          v46 = (HDC)__PAIR64__(a3, a2);
          v48 = a5 + a3;
          if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v42, (struct _POINTL *)&v46) )
            goto LABEL_37;
          ERECTL::vOrder((ERECTL *)&v46);
          XDCOBJ::vAccumulate((XDCOBJ *)v40, (struct ERECTL *)&v46);
        }
        v15 = 1;
        goto LABEL_37;
      }
    }
LABEL_46:
    EngSetLastError(0x57u);
    goto LABEL_37;
  }
  if ( (*((_DWORD *)v40[0] + 9) & 0x10000) != 0 )
    goto LABEL_46;
  v17 = 1;
  if ( a9 && BYTE2(a12) != HIBYTE(a12) )
  {
    SURFREF::SURFREF((SURFREF *)v43, a9);
    if ( !v44 || (v57 = v44, *(_WORD *)(v44 + 100)) || *(_DWORD *)(v44 + 96) != 1 )
    {
      EngSetLastError(6u);
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v43);
      goto LABEL_37;
    }
    INC_SHARE_REF_CNT(v44, v18);
    v70 |= 0x30000u;
    v69 = HIWORD(a12);
    v19 = (unsigned __int8)gajRop3[BYTE2(a12)] | (unsigned __int8)gajRop3[HIBYTE(a12)] | 0x10000;
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v43);
  }
  else
  {
    v57 = 0LL;
    v19 = (unsigned __int8)gajRop3[BYTE2(a12)];
    v69 = BYTE2(a12) | (BYTE2(a12) << 8);
  }
  DCOBJ::DCOBJ((DCOBJ *)v41);
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v45);
  if ( (v19 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v41, a6), v41[0]) )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v41, a7, a8, a4, a5);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v45, (struct XDCOBJ *)v40, (struct XDCOBJ *)v41);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v45, v40);
  }
  if ( (v45[112] & 1) == 0 )
  {
    v26 = XDCOBJ::bFullScreen((XDCOBJ *)v40);
    goto LABEL_35;
  }
  v55 = *((_QWORD *)v40[0] + 64);
  EXFORMOBJ::vInit((EXFORMOBJ *)v49, (struct XDCOBJ *)v40, 0x204u, 0);
  v20 = v40[0];
  v51 = *(_QWORD *)(v55 + 120);
  v52 = *((_QWORD *)v40[0] + 12);
  if ( (v19 & 0xD4) != 0 )
  {
    if ( !v41[0] )
      goto LABEL_15;
    if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v41)
      && (*(_DWORD *)(*(_QWORD *)(v22 + 512) + 112LL) & 0x10000000) == 0 )
    {
      goto LABEL_19;
    }
    v29 = XDCOBJ::pSurfaceEff((XDCOBJ *)v41);
    if ( (v32 & *((_DWORD *)v29 + 28)) != 0 && *(_DWORD *)(v31 + 32) == 2 && (*(_DWORD *)(v31 + 36) & 0xE0) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v42, (struct XDCOBJ *)v40, 0x204u);
      v46 = (HDC)__PAIR64__(a3, a2);
      v47 = a2 + a4;
      v48 = a3 + a5;
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v42, (struct _POINTL *)&v46) )
      {
        ERECTL::vOrder((ERECTL *)&v46);
        XDCOBJ::vAccumulate((XDCOBJ *)v40, (struct ERECTL *)&v46);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v40, (struct ERECTL *)&v46);
      }
      goto LABEL_60;
    }
    if ( (*(_DWORD *)(v30 + 36) & 1) != 0 )
    {
LABEL_19:
      v23 = XDCOBJ::pSurfaceEff((XDCOBJ *)v41);
      if ( (unsigned int)SrcSurfaceAccessCheck(v23) )
      {
        v56 = XDCOBJ::pSurfaceEff((XDCOBJ *)v41);
        v53 = *((_QWORD *)v56 + 15);
        v54 = *((_QWORD *)v41[0] + 12);
        EXFORMOBJ::vInit((EXFORMOBJ *)v50, (struct XDCOBJ *)v41, 0x204u, 0);
        if ( (*(_DWORD *)(v50[0] + 32LL) & 1) != 0 )
        {
          v24 = a5;
          if ( (unsigned int)BLTRECORD::Src(v49, a7, a8, a4, a5) )
          {
            if ( (v19 & 0x10000) != 0 )
            {
              v64 = a10;
              v66 = a10 + v62 - v60;
              v65 = a11;
              v67 = a11 + v63 - v61;
            }
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  &v58,
                                  0LL,
                                  *((_DWORD *)v40[0] + 28),
                                  v53,
                                  v51,
                                  v54,
                                  v52,
                                  *(_DWORD *)(*((_QWORD *)v40[0] + 10) + 40LL),
                                  *(_DWORD *)(*((_QWORD *)v40[0] + 10) + 32LL),
                                  a13,
                                  0) )
              goto LABEL_36;
            v70 |= 2u;
            v20 = v40[0];
            goto LABEL_26;
          }
        }
        v33 = 87;
      }
      else
      {
        v33 = 5;
      }
      EngSetLastError(v33);
    }
    v17 = 0;
LABEL_60:
    v15 = v17;
    goto LABEL_36;
  }
  v56 = 0LL;
  if ( (v19 & 0x10000) == 0 )
  {
    v24 = a5;
LABEL_26:
    v25 = a4;
    goto LABEL_27;
  }
  if ( !a6 )
    v14 = v46;
  XDCOBJ::vLock((XDCOBJ *)v41, v14);
  if ( !v41[0] )
  {
    v21 = 6;
    goto LABEL_16;
  }
  EXFORMOBJ::vInit((EXFORMOBJ *)v50, (struct XDCOBJ *)v41, 0x204u, 0);
  if ( (*(_DWORD *)(v50[0] + 32LL) & 1) != 0 )
  {
    v25 = a4;
    v24 = a5;
    if ( (unsigned int)BLTRECORD::Msk((BLTRECORD *)v49, a10, a11, a4, a5) )
    {
      v20 = v40[0];
LABEL_27:
      if ( (v19 & 0xE8) != 0 )
      {
        v34 = *(_DWORD *)(*((_QWORD *)v20 + 10) + 8LL);
        v59 = (char *)v20 + 1584;
        if ( (v34 & 0x1000) != 0 )
        {
          GreDCSelectBrush(v20, *(_QWORD *)(*((_QWORD *)v20 + 10) + 16LL));
          v20 = v40[0];
        }
        v35 = *((_QWORD *)v20 + 10);
        v36 = *(_DWORD *)(v35 + 8);
        if ( (v36 & 1) != 0 || (*((_DWORD *)v20 + 83) & 1) != 0 )
        {
          *(_DWORD *)(v35 + 8) = v36 & 0xFFFFFFFE;
          *((_DWORD *)v40[0] + 83) &= ~1u;
          EBRUSHOBJ::vInitBrush(v59, v40[0], *((_QWORD *)v40[0] + 18), v52, v51);
          v20 = v40[0];
        }
        v68 = *((_QWORD *)v20 + 197);
      }
      else
      {
        v59 = 0LL;
      }
      if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)v20 + 64)) )
      {
        v21 = 5;
        goto LABEL_16;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v49 + 32LL) & 1) != 0 )
      {
        if ( !(unsigned int)BLTRECORD::Trg(v49, a2, a3, v25, v24) )
          goto LABEL_15;
        if ( (v19 & 0xD4) != 0 && !BLTRECORD::bEqualExtents((BLTRECORD *)v49) )
          v26 = BLTRECORD::bStretch(
                  (BLTRECORD *)v49,
                  (struct DCOBJ *)v40,
                  (struct DCOBJ *)v41,
                  v19,
                  *(_BYTE *)(*((_QWORD *)v40[0] + 10) + 75LL));
        else
          v26 = BLTRECORD::bBitBlt((BLTRECORD *)v49, v40, (struct DCOBJ *)v41, v19);
      }
      else
      {
        if ( !BLTRECORD::TrgPlg((BLTRECORD *)v49, a2, a3, v25, v24) )
          goto LABEL_15;
        v26 = BLTRECORD::bRotate(
                (struct _POINTFIX *)v49,
                (struct DCOBJ *)v40,
                v41,
                v19,
                *(_BYTE *)(*((_QWORD *)v40[0] + 10) + 75LL));
      }
LABEL_35:
      v15 = v26;
      goto LABEL_36;
    }
  }
LABEL_15:
  v21 = 87;
LABEL_16:
  EngSetLastError(v21);
LABEL_36:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v45);
  DCOBJ::~DCOBJ((DCOBJ *)v41);
LABEL_37:
  DCOBJ::~DCOBJ((DCOBJ *)v40);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v49);
  return v15;
}
