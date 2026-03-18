/*
 * XREFs of GreMaskBlt @ 0x1C010ED68
 * Callers:
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0035FA0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C004EE70 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C00942F0 (NtGdiPatBlt.c)
 *     NtGdiMaskBlt @ 0x1C010ED60 (NtGdiMaskBlt.c)
 * Callees:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00018FC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00356B4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00363F0 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00394D4 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003A3A4 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0041BD0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00453F0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00460FC (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00469F0 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0048E14 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0048FD0 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C0049064 (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C004998C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00499C0 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C004CA3C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C004CA94 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C004CC34 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C004CC70 (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004D800 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C010F588 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C027FD8C (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0285578 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
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
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  unsigned int v20; // eax
  __int64 v21; // rdx
  struct DC *v22; // r8
  __int64 v23; // r9
  DC *v24; // r8
  ULONG v25; // ecx
  __int64 v26; // rdx
  struct SURFACE *v27; // rax
  struct SURFACE *v28; // rax
  ULONG v29; // ecx
  int v30; // r15d
  int v31; // r14d
  int v32; // edx
  __int64 v33; // rdx
  int v34; // ecx
  DC *v39[2]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v40[32]; // [rsp+80h] [rbp-80h] BYREF
  DC *v41[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[32]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v43[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v44[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v45; // [rsp+100h] [rbp+0h]
  _BYTE v46[288]; // [rsp+110h] [rbp+10h] BYREF
  HDC v47; // [rsp+230h] [rbp+130h] BYREF
  int v48; // [rsp+238h] [rbp+138h]
  int v49; // [rsp+23Ch] [rbp+13Ch]
  struct _POINTL v50[2]; // [rsp+240h] [rbp+140h] BYREF
  _QWORD v51[2]; // [rsp+250h] [rbp+150h] BYREF
  __int64 v52; // [rsp+260h] [rbp+160h]
  __int64 v53; // [rsp+268h] [rbp+168h]
  __int64 v54; // [rsp+270h] [rbp+170h]
  __int64 v55; // [rsp+278h] [rbp+178h]
  __int64 v56; // [rsp+280h] [rbp+180h]
  struct SURFACE *v57; // [rsp+288h] [rbp+188h]
  __int64 v58; // [rsp+290h] [rbp+190h]
  __int64 v59; // [rsp+298h] [rbp+198h] BYREF
  char *v60; // [rsp+2A0h] [rbp+1A0h]
  int v61; // [rsp+2F0h] [rbp+1F0h]
  int v62; // [rsp+2F4h] [rbp+1F4h]
  int v63; // [rsp+2F8h] [rbp+1F8h]
  int v64; // [rsp+2FCh] [rbp+1FCh]
  int v65; // [rsp+300h] [rbp+200h]
  int v66; // [rsp+304h] [rbp+204h]
  int v67; // [rsp+308h] [rbp+208h]
  int v68; // [rsp+30Ch] [rbp+20Ch]
  __int64 v69; // [rsp+310h] [rbp+210h]
  unsigned int v70; // [rsp+318h] [rbp+218h]
  int v71; // [rsp+31Ch] [rbp+21Ch]

  v14 = a6;
  v15 = 0;
  v47 = a1;
  v58 = 0LL;
  v71 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v39, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v39) )
  {
    if ( (*((_DWORD *)v39[0] + 9) & 0x10000) != 0 )
    {
LABEL_9:
      EngSetLastError(0x57u);
      goto LABEL_78;
    }
    v18 = 1;
    if ( a9 && BYTE2(a12) != HIBYTE(a12) )
    {
      SURFREF::SURFREF((SURFREF *)v44, a9);
      if ( !v45 || (v58 = v45, *(_WORD *)(v45 + 100)) || *(_DWORD *)(v45 + 96) != 1 )
      {
        EngSetLastError(6u);
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v44);
        goto LABEL_78;
      }
      INC_SHARE_REF_CNT(v45);
      v71 |= 0x30000u;
      v70 = HIWORD(a12);
      v19 = gajRop3[BYTE2(a12)] | gajRop3[HIBYTE(a12)] | 0x10000;
      SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v44);
    }
    else
    {
      v58 = 0LL;
      v19 = gajRop3[BYTE2(a12)];
      v70 = BYTE2(a12) | (BYTE2(a12) << 8);
    }
    DCOBJ::DCOBJ((DCOBJ *)v41);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v46);
    if ( (v19 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v41, a6), v41[0]) )
    {
      bSpDwmValidateSurface((struct XDCOBJ *)v41, a7, a8, a4, a5);
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v46, (struct XDCOBJ *)v39, (struct XDCOBJ *)v41);
    }
    else
    {
      DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v46, (struct XDCOBJ *)v39);
    }
    if ( (v46[112] & 1) == 0 )
    {
      v20 = XDCOBJ::bFullScreen((XDCOBJ *)v39);
LABEL_76:
      v15 = v20;
      goto LABEL_77;
    }
    v56 = *((_QWORD *)v39[0] + 64);
    EXFORMOBJ::vInit((EXFORMOBJ *)v50, (struct XDCOBJ *)v39, 0x204u, 0);
    v24 = v39[0];
    v52 = *(_QWORD *)(v56 + 120);
    v53 = *((_QWORD *)v39[0] + 12);
    if ( (v19 & 0xD4) != 0 )
    {
      if ( !v41[0] )
        goto LABEL_26;
      if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v41)
        || (*(_DWORD *)(*(_QWORD *)(v26 + 512) + 112LL) & 0x10000000) != 0 )
      {
        v27 = XDCOBJ::pSurfaceEff((XDCOBJ *)v41);
        if ( ((unsigned int)v23 & *((_DWORD *)v27 + 28)) != 0
          && *((_DWORD *)v22 + 8) == 2
          && (*((_DWORD *)v22 + 9) & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v39, 0x204u);
          v47 = (HDC)__PAIR64__(a3, a2);
          v48 = a2 + a4;
          v49 = a3 + a5;
          if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v43, (struct _POINTL *)&v47) )
          {
            ERECTL::vOrder((ERECTL *)&v47);
            XDCOBJ::vAccumulate((XDCOBJ *)v39, (struct ERECTL *)&v47);
            XDCOBJ::vAccumulateTight((XDCOBJ *)v39, (struct ERECTL *)&v47);
          }
          goto LABEL_47;
        }
        if ( (*(_DWORD *)(v21 + 36) & 1) == 0 )
        {
LABEL_46:
          v18 = 0;
LABEL_47:
          v15 = v18;
          goto LABEL_77;
        }
      }
      v28 = XDCOBJ::pSurfaceEff((XDCOBJ *)v41);
      if ( !(unsigned int)SrcSurfaceAccessCheck(v28) )
      {
        v29 = 5;
LABEL_45:
        EngSetLastError(v29);
        goto LABEL_46;
      }
      v57 = XDCOBJ::pSurfaceEff((XDCOBJ *)v41);
      v54 = *((_QWORD *)v57 + 15);
      v55 = *((_QWORD *)v41[0] + 12);
      EXFORMOBJ::vInit((EXFORMOBJ *)v51, (struct XDCOBJ *)v41, 0x204u, 0);
      if ( (*(_DWORD *)(v51[0] + 32LL) & 1) == 0 || (v30 = a5, !(unsigned int)BLTRECORD::Src(v50, a7, a8, a4, a5)) )
      {
        v29 = 87;
        goto LABEL_45;
      }
      if ( (v19 & 0x10000) != 0 )
      {
        v65 = a10;
        v67 = a10 + v63 - v61;
        v66 = a11;
        v68 = a11 + v64 - v62;
      }
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v59,
                            0LL,
                            *((_DWORD *)v39[0] + 28),
                            v54,
                            v52,
                            v55,
                            v53,
                            *(_DWORD *)(*((_QWORD *)v39[0] + 10) + 40LL),
                            *(_DWORD *)(*((_QWORD *)v39[0] + 10) + 32LL),
                            a13,
                            0) )
        goto LABEL_77;
      v71 |= 2u;
      v24 = v39[0];
    }
    else
    {
      v57 = 0LL;
      if ( (v19 & 0x10000) != 0 )
      {
        if ( !a6 )
          v14 = v47;
        XDCOBJ::vLock((XDCOBJ *)v41, v14);
        if ( !v41[0] )
        {
          v25 = 6;
          goto LABEL_27;
        }
        EXFORMOBJ::vInit((EXFORMOBJ *)v51, (struct XDCOBJ *)v41, 0x204u, 0);
        if ( (*(_DWORD *)(v51[0] + 32LL) & 1) == 0
          || (v31 = a4, v30 = a5, !(unsigned int)BLTRECORD::Msk((BLTRECORD *)v50, a10, a11, a4, a5)) )
        {
LABEL_26:
          v25 = 87;
LABEL_27:
          EngSetLastError(v25);
LABEL_77:
          DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v46, v21, v22, v23);
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v41);
          UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v42);
          goto LABEL_78;
        }
        v24 = v39[0];
LABEL_58:
        if ( (v19 & 0xE8) != 0 )
        {
          v32 = *(_DWORD *)(*((_QWORD *)v24 + 10) + 8LL);
          v60 = (char *)v24 + 1584;
          if ( (v32 & 0x1000) != 0 )
          {
            GreDCSelectBrush(v24, *(_QWORD *)(*((_QWORD *)v24 + 10) + 16LL));
            v24 = v39[0];
          }
          v33 = *((_QWORD *)v24 + 10);
          v34 = *(_DWORD *)(v33 + 8);
          if ( (v34 & 1) != 0 || (*((_DWORD *)v24 + 83) & 1) != 0 )
          {
            *(_DWORD *)(v33 + 8) = v34 & 0xFFFFFFFE;
            *((_DWORD *)v39[0] + 83) &= ~1u;
            EBRUSHOBJ::vInitBrush(v60, v39[0], *((_QWORD *)v39[0] + 18), v53, v52, v56, 1);
            v24 = v39[0];
          }
          v69 = *((_QWORD *)v24 + 197);
        }
        else
        {
          v60 = 0LL;
        }
        if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)v24 + 64)) )
        {
          v25 = 5;
          goto LABEL_27;
        }
        if ( (*(_DWORD *)(*(_QWORD *)v50 + 32LL) & 1) != 0 )
        {
          if ( (unsigned int)BLTRECORD::Trg(v50, a2, a3, v31, v30) )
          {
            if ( (v19 & 0xD4) == 0 || BLTRECORD::bEqualExtents((BLTRECORD *)v50) )
              v20 = BLTRECORD::bBitBlt((BLTRECORD *)v50, v39, (struct DCOBJ *)v41, v19);
            else
              v20 = BLTRECORD::bStretch(
                      (BLTRECORD *)v50,
                      v39,
                      (struct DCOBJ *)v41,
                      v19,
                      *(_BYTE *)(*((_QWORD *)v39[0] + 10) + 75LL));
            goto LABEL_76;
          }
        }
        else if ( (unsigned int)BLTRECORD::TrgPlg((BLTRECORD *)v50, a2, a3, v31, v30) )
        {
          v20 = BLTRECORD::bRotate(
                  (struct _POINTFIX *)v50,
                  (struct DCOBJ *)v39,
                  v41,
                  v19,
                  *(_BYTE *)(*((_QWORD *)v39[0] + 10) + 75LL));
          goto LABEL_76;
        }
        goto LABEL_26;
      }
      v30 = a5;
    }
    v31 = a4;
    goto LABEL_58;
  }
  if ( !v39[0] )
    goto LABEL_9;
  v17 = *((_DWORD *)v39[0] + 9);
  if ( (v17 & 0x10000) != 0 )
    goto LABEL_9;
  if ( (v17 & 0xE0) == 0 )
  {
LABEL_7:
    v15 = 1;
    goto LABEL_78;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v39, 0x204u);
  v48 = a4 + a2;
  v47 = (HDC)__PAIR64__(a3, a2);
  v49 = a5 + a3;
  if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v43, (struct _POINTL *)&v47) )
  {
    ERECTL::vOrder((ERECTL *)&v47);
    XDCOBJ::vAccumulate((XDCOBJ *)v39, (struct ERECTL *)&v47);
    goto LABEL_7;
  }
LABEL_78:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v39);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v40);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v50);
  return v15;
}
