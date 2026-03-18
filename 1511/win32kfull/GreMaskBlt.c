/*
 * XREFs of GreMaskBlt @ 0x1C00F0648
 * Callers:
 *     NtGdiFlushUserBatch @ 0x1C0030EB0 (NtGdiFlushUserBatch.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0040258 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00412C0 (NtGdiPatBlt.c)
 *     NtGdiMaskBlt @ 0x1C00F0640 (NtGdiMaskBlt.c)
 * Callees:
 *     ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C000B324 (-TrgPlg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C000B448 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C0019BFC (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D688 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002D6BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E8D8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002FE9C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0040108 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C0047D50 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0047DA8 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0047F48 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C0047F84 (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0047FCC (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004868C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00F0AE8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0286B18 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 */

__int64 __fastcall GreMaskBlt(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        int a11,
        unsigned int a12,
        int a13)
{
  HDC v14; // r12
  unsigned int v15; // ebx
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // rax
  int v20; // esi
  DC *v21; // r8
  ULONG v22; // ecx
  __int64 v23; // rdx
  struct SURFACE *v24; // rax
  int v25; // r15d
  int v26; // r14d
  unsigned int v27; // eax
  __int64 v28; // rdx
  int v30; // ecx
  struct SURFACE *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // r9d
  ULONG v35; // ecx
  int v36; // edx
  __int64 v37; // rdx
  int v38; // ecx
  DC *v40[2]; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+78h] [rbp-88h]
  DC *v42[2]; // [rsp+80h] [rbp-80h] BYREF
  int v43; // [rsp+90h] [rbp-70h]
  int v44; // [rsp+94h] [rbp-6Ch]
  _QWORD v45[3]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v46[176]; // [rsp+B0h] [rbp-50h] BYREF
  HDC v47; // [rsp+160h] [rbp+60h] BYREF
  int v48; // [rsp+168h] [rbp+68h]
  int v49; // [rsp+16Ch] [rbp+6Ch]
  struct _POINTL v50[2]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v51[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v52; // [rsp+190h] [rbp+90h]
  __int64 v53; // [rsp+198h] [rbp+98h]
  __int64 v54; // [rsp+1A0h] [rbp+A0h]
  __int64 v55; // [rsp+1A8h] [rbp+A8h]
  __int64 v56; // [rsp+1B0h] [rbp+B0h]
  struct SURFACE *v57; // [rsp+1B8h] [rbp+B8h]
  __int64 v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h] BYREF
  char *v60; // [rsp+1D0h] [rbp+D0h]
  int v61; // [rsp+220h] [rbp+120h]
  int v62; // [rsp+224h] [rbp+124h]
  int v63; // [rsp+228h] [rbp+128h]
  int v64; // [rsp+22Ch] [rbp+12Ch]
  int v65; // [rsp+230h] [rbp+130h]
  int v66; // [rsp+234h] [rbp+134h]
  int v67; // [rsp+238h] [rbp+138h]
  int v68; // [rsp+23Ch] [rbp+13Ch]
  __int64 v69; // [rsp+240h] [rbp+140h]
  unsigned int v70; // [rsp+248h] [rbp+148h]
  int v71; // [rsp+24Ch] [rbp+14Ch]

  v14 = a6;
  v15 = 0;
  v44 = a2;
  v47 = a1;
  v43 = a3;
  v41 = a5;
  v58 = 0LL;
  v71 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v40, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v40) )
  {
    if ( v40[0] )
    {
      v30 = *((_DWORD *)v40[0] + 9);
      if ( (v30 & 0x10000) == 0 )
      {
        if ( (v30 & 0xE0) != 0 )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v40, 0x204u);
          v48 = a4 + a2;
          v47 = (HDC)__PAIR64__(v43, a2);
          v49 = a5 + v43;
          if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v45, (struct _POINTL *)&v47) )
            goto LABEL_37;
          ERECTL::vOrder((ERECTL *)&v47);
          XDCOBJ::vAccumulate((XDCOBJ *)v40, (struct ERECTL *)&v47);
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
  v18 = 1;
  if ( a9 && BYTE2(a12) != HIBYTE(a12) )
  {
    LOBYTE(v17) = 5;
    v19 = HmgShareLockCheck(a9, v17);
    v45[0] = v19;
    if ( !v19 || (v58 = v19, *(_WORD *)(v19 + 100)) || *(_DWORD *)(v19 + 96) != 1 )
    {
      EngSetLastError(6u);
      EPALOBJ::~EPALOBJ((EPALOBJ *)v45);
      goto LABEL_37;
    }
    INC_SHARE_REF_CNT(v19);
    v71 |= 0x30000u;
    v70 = HIWORD(a12);
    v20 = (unsigned __int8)gajRop3[BYTE2(a12)] | (unsigned __int8)gajRop3[HIBYTE(a12)] | 0x10000;
    EPALOBJ::~EPALOBJ((EPALOBJ *)v45);
  }
  else
  {
    v58 = 0LL;
    v20 = (unsigned __int8)gajRop3[BYTE2(a12)];
    v70 = BYTE2(a12) | (BYTE2(a12) << 8);
  }
  v42[1] = 0LL;
  v42[0] = 0LL;
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v46);
  if ( (v20 & 0xD4) != 0 && (XDCOBJ::vLock((XDCOBJ *)v42, a6), v42[0]) )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v42, a7, a8, a4, v41);
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v46, (struct XDCOBJ *)v40, (struct XDCOBJ *)v42);
  }
  else
  {
    DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v46, v40);
  }
  if ( (v46[72] & 1) == 0 )
  {
    v27 = XDCOBJ::bFullScreen((XDCOBJ *)v40);
    goto LABEL_35;
  }
  v56 = *((_QWORD *)v40[0] + 64);
  EXFORMOBJ::vInit((EXFORMOBJ *)v50, (struct XDCOBJ *)v40, 0x204u, 0);
  v21 = v40[0];
  v52 = *(_QWORD *)(v56 + 120);
  v53 = *((_QWORD *)v40[0] + 12);
  if ( (v20 & 0xD4) != 0 )
  {
    if ( !v42[0] )
      goto LABEL_15;
    if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v42)
      && (*(_DWORD *)(*(_QWORD *)(v23 + 512) + 112LL) & 0x10000000) == 0 )
    {
      goto LABEL_19;
    }
    v31 = XDCOBJ::pSurfaceEff((XDCOBJ *)v42);
    if ( (v34 & *((_DWORD *)v31 + 28)) != 0 && *(_DWORD *)(v33 + 32) == 2 && (*(_DWORD *)(v33 + 36) & 0xE0) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v45, (struct XDCOBJ *)v40, 0x204u);
      v47 = (HDC)__PAIR64__(v43, v44);
      v48 = v44 + a4;
      v49 = v43 + v41;
      if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v45, (struct _POINTL *)&v47) )
      {
        ERECTL::vOrder((ERECTL *)&v47);
        XDCOBJ::vAccumulate((XDCOBJ *)v40, (struct ERECTL *)&v47);
        XDCOBJ::vAccumulateTight((XDCOBJ *)v40, (struct ERECTL *)&v47);
      }
      goto LABEL_60;
    }
    if ( (*(_DWORD *)(v32 + 36) & 1) != 0 )
    {
LABEL_19:
      v24 = XDCOBJ::pSurfaceEff((XDCOBJ *)v42);
      if ( (unsigned int)SrcSurfaceAccessCheck(v24) )
      {
        v57 = XDCOBJ::pSurfaceEff((XDCOBJ *)v42);
        v54 = *((_QWORD *)v57 + 15);
        v55 = *((_QWORD *)v42[0] + 12);
        EXFORMOBJ::vInit((EXFORMOBJ *)v51, (struct XDCOBJ *)v42, 0x204u, 0);
        if ( (*(_DWORD *)(v51[0] + 32LL) & 1) != 0 )
        {
          v25 = v41;
          if ( (unsigned int)BLTRECORD::Src(v50, a7, a8, a4, v41) )
          {
            if ( (v20 & 0x10000) != 0 )
            {
              v65 = a10;
              v67 = a10 + v63 - v61;
              v66 = a11;
              v68 = a11 + v64 - v62;
            }
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  &v59,
                                  0LL,
                                  *((_DWORD *)v40[0] + 28),
                                  v54,
                                  v52,
                                  v55,
                                  v53,
                                  *(_DWORD *)(*((_QWORD *)v40[0] + 10) + 40LL),
                                  *(_DWORD *)(*((_QWORD *)v40[0] + 10) + 32LL),
                                  a13,
                                  0) )
              goto LABEL_36;
            v71 |= 2u;
            v21 = v40[0];
            goto LABEL_26;
          }
        }
        v35 = 87;
      }
      else
      {
        v35 = 5;
      }
      EngSetLastError(v35);
    }
    v18 = 0;
LABEL_60:
    v15 = v18;
    goto LABEL_36;
  }
  v57 = 0LL;
  if ( (v20 & 0x10000) == 0 )
  {
    v25 = v41;
LABEL_26:
    v26 = a4;
    goto LABEL_27;
  }
  if ( !a6 )
    v14 = v47;
  XDCOBJ::vLock((XDCOBJ *)v42, v14);
  if ( !v42[0] )
  {
    v22 = 6;
    goto LABEL_16;
  }
  EXFORMOBJ::vInit((EXFORMOBJ *)v51, (struct XDCOBJ *)v42, 0x204u, 0);
  if ( (*(_DWORD *)(v51[0] + 32LL) & 1) != 0 )
  {
    v26 = a4;
    v25 = v41;
    if ( (unsigned int)BLTRECORD::Msk((BLTRECORD *)v50, a10, a11, a4, v41) )
    {
      v21 = v40[0];
LABEL_27:
      if ( (v20 & 0xE8) != 0 )
      {
        v36 = *(_DWORD *)(*((_QWORD *)v21 + 10) + 8LL);
        v60 = (char *)v21 + 1560;
        if ( (v36 & 0x1000) != 0 )
        {
          GreDCSelectBrush(v21, *(_QWORD *)(*((_QWORD *)v21 + 10) + 16LL));
          v21 = v40[0];
        }
        v37 = *((_QWORD *)v21 + 10);
        v38 = *(_DWORD *)(v37 + 8);
        if ( (v38 & 1) != 0 || (*((_DWORD *)v21 + 83) & 1) != 0 )
        {
          *(_DWORD *)(v37 + 8) = v38 & 0xFFFFFFFE;
          *((_DWORD *)v40[0] + 83) &= ~1u;
          EBRUSHOBJ::vInitBrush(v60, v40[0], *((_QWORD *)v40[0] + 18), v53, v52, v56, 1);
          v21 = v40[0];
        }
        v69 = *((_QWORD *)v21 + 194);
      }
      else
      {
        v60 = 0LL;
      }
      if ( !(unsigned int)DestSurfaceAccessCheck(*((struct SURFACE **)v21 + 64)) )
      {
        v22 = 5;
        goto LABEL_16;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v50 + 32LL) & 1) != 0 )
      {
        if ( !(unsigned int)BLTRECORD::Trg(v50, v44, v43, v26, v25) )
          goto LABEL_15;
        if ( (v20 & 0xD4) != 0 && !BLTRECORD::bEqualExtents((BLTRECORD *)v50) )
          v27 = BLTRECORD::bStretch(
                  (BLTRECORD *)v50,
                  v40,
                  (struct DCOBJ *)v42,
                  v20,
                  *(_BYTE *)(*((_QWORD *)v40[0] + 10) + 75LL));
        else
          v27 = BLTRECORD::bBitBlt((BLTRECORD *)v50, v40, (struct DCOBJ *)v42, v20);
      }
      else
      {
        if ( !BLTRECORD::TrgPlg((BLTRECORD *)v50, v44, v43, v26, v25) )
          goto LABEL_15;
        v27 = BLTRECORD::bRotate(
                (struct _POINTFIX *)v50,
                (struct DCOBJ *)v40,
                v42,
                v20,
                *(_BYTE *)(*((_QWORD *)v40[0] + 10) + 75LL));
      }
LABEL_35:
      v15 = v27;
      goto LABEL_36;
    }
  }
LABEL_15:
  v22 = 87;
LABEL_16:
  EngSetLastError(v22);
LABEL_36:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v46);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v42);
LABEL_37:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v40);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v50, v28);
  return v15;
}
