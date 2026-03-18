/*
 * XREFs of GrePlgBlt @ 0x1C028000C
 * Callers:
 *     NtGdiPlgBlt @ 0x1C0280570 (NtGdiPlgBlt.c)
 * Callees:
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C000B2B8 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C000B3B0 (-vExtrema@BLTRECORD@@QEAAXXZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C000B448 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002D65C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ @ 0x1C002D6BC (-pSurfaceEff@XDCOBJ@@QEAAPEAVSURFACE@@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C002E0E0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C002E950 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C003A6E4 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0040108 (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0043D20 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C0047D50 (--1BLTRECORD@@QEAA@XZ.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0047F48 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C0047F84 (-bEqualExtents@BLTRECORD@@QEAAHXZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0047FCC (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C004868C (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00F0AE8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bRotated@BLTRECORD@@QEAAHXZ @ 0x1C027FF94 (-bRotated@BLTRECORD@@QEAAHXZ.c)
 */

__int64 __fastcall GrePlgBlt(
        HDC a1,
        struct _POINTL *a2,
        HDC a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
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
  __int64 v22; // rdx
  struct SURFACE *v23; // rax
  __int64 v24; // rdx
  int v25; // esi
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned __int8 v31; // r9
  __int64 v32; // rdx
  DC *v34[2]; // [rsp+60h] [rbp-A0h] BYREF
  DC *v35[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v37[40]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-48h]
  char v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C4h] [rbp-3Ch]
  char v41; // [rsp+D8h] [rbp-28h]
  __int64 v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  __int64 v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  struct _POINTL v46[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v47; // [rsp+150h] [rbp+50h] BYREF
  __int64 v48; // [rsp+160h] [rbp+60h]
  __int64 v49; // [rsp+168h] [rbp+68h]
  __int64 v50; // [rsp+170h] [rbp+70h]
  __int64 v51; // [rsp+178h] [rbp+78h]
  struct SURFACE *v52; // [rsp+180h] [rbp+80h]
  struct SURFACE *v53; // [rsp+188h] [rbp+88h]
  __int64 v54; // [rsp+190h] [rbp+90h]
  __int64 v55[4]; // [rsp+198h] [rbp+98h] BYREF
  struct _POINTFIX v56[7]; // [rsp+1B8h] [rbp+B8h] BYREF
  int v57; // [rsp+1F0h] [rbp+F0h]
  int v58; // [rsp+1F4h] [rbp+F4h]
  int v59; // [rsp+1F8h] [rbp+F8h]
  int v60; // [rsp+1FCh] [rbp+FCh]
  int v61; // [rsp+200h] [rbp+100h]
  int v62; // [rsp+204h] [rbp+104h]
  int v63; // [rsp+208h] [rbp+108h]
  int v64; // [rsp+20Ch] [rbp+10Ch]
  int v65; // [rsp+218h] [rbp+118h]
  int v66; // [rsp+21Ch] [rbp+11Ch]

  v12 = 0;
  v54 = 0LL;
  v66 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v34, a1);
  DCOBJ::DCOBJ((DCOBJ *)v35, a3);
  if ( !v34[0] || !v35[0] || (*((_DWORD *)v34[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    goto LABEL_47;
  }
  bSpDwmValidateSurface((struct XDCOBJ *)v35, a4, a5, a6, a7);
  v38 = 0LL;
  v39 = 0;
  v40 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v37, (struct XDCOBJ *)v34, (struct XDCOBJ *)v35);
  if ( (v41 & 1) == 0 )
  {
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v34) || (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v35) )
      v12 = 1;
    goto LABEL_45;
  }
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v34);
  v16 = v35[0];
  if ( valid
    && (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v35)
    && (*(_DWORD *)(*((_QWORD *)v16 + 64) + 112LL) & 0x10000000) == 0 )
  {
    goto LABEL_23;
  }
  v17 = v34[0];
  v18 = *((_QWORD *)v34[0] + 10);
  if ( (*(_DWORD *)(v18 + 8) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v34[0], *(_QWORD *)(v18 + 16));
    v17 = v34[0];
    v16 = v35[0];
  }
  v19 = *((_QWORD *)v16 + 10);
  if ( (*(_DWORD *)(v19 + 8) & 0x1000) != 0 )
  {
    GreDCSelectBrush(v16, *(_QWORD *)(v19 + 16));
    v17 = v34[0];
    v16 = v35[0];
  }
  if ( (*((_DWORD *)v17 + 8) == 2 || !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v35))
    && (*((_DWORD *)v17 + 9) & 0xE0) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v34, 0x204u, 0);
    if ( !EXFORMOBJ::bXform((EXFORMOBJ *)v46, a2, v56, 3uLL) )
    {
LABEL_19:
      v20 = 87;
LABEL_44:
      EngSetLastError(v20);
      goto LABEL_45;
    }
    BLTRECORD::vExtrema((BLTRECORD *)v46);
    BLTRECORD::vBound((BLTRECORD *)v46, (struct ERECTL *)v36);
    XDCOBJ::vAccumulate((XDCOBJ *)v34, (struct ERECTL *)v36);
    v17 = v34[0];
    v16 = v35[0];
  }
  if ( (*((_DWORD *)v16 + 9) & 1) != 0 )
  {
LABEL_23:
    v21 = XDCOBJ::pSurfaceEff((XDCOBJ *)v35);
    if ( !(unsigned int)SrcSurfaceAccessCheck(v21, v22)
      || (v23 = XDCOBJ::pSurfaceEff((XDCOBJ *)v34), !(unsigned int)DestSurfaceAccessCheck(v23)) )
    {
      v20 = 5;
      goto LABEL_44;
    }
    EXFORMOBJ::vInit((EXFORMOBJ *)v46, (struct XDCOBJ *)v34, 0x204u, 0);
    v52 = XDCOBJ::pSurfaceEff((XDCOBJ *)v34);
    v48 = *((_QWORD *)v52 + 15);
    v49 = *((_QWORD *)v34[0] + 12);
    EXFORMOBJ::vInit((EXFORMOBJ *)&v47, (struct XDCOBJ *)v35, 0x204u, 0);
    v53 = XDCOBJ::pSurfaceEff((XDCOBJ *)v35);
    v50 = *((_QWORD *)v53 + 15);
    v51 = *((_QWORD *)v35[0] + 12);
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         v55,
                         0LL,
                         *((_DWORD *)v34[0] + 28),
                         v50,
                         v48,
                         v51,
                         v49,
                         *(_DWORD *)(*((_QWORD *)v34[0] + 10) + 40LL),
                         *(_DWORD *)(*((_QWORD *)v34[0] + 10) + 32LL),
                         a11,
                         0) )
    {
      v66 |= 2u;
      v55[1] = 0LL;
      if ( (*(_DWORD *)(v47 + 32) & 1) == 0 || !(unsigned int)BLTRECORD::Src(v46, a4, a5, a6, a7) )
        goto LABEL_19;
      if ( a8 )
      {
        LOBYTE(v24) = 5;
        v26 = HmgShareLockCheck(a8, v24);
        v36[0] = v26;
        v27 = v26;
        if ( !v26
          || (INC_SHARE_REF_CNT(v26), v66 |= 0x30000u, v25 = 65540, v54 = v27, v65 = 43724, *(_WORD *)(v27 + 100))
          || *(_DWORD *)(v27 + 96) != 1 )
        {
          EngSetLastError(6u);
          EPALOBJ::~EPALOBJ((EPALOBJ *)v36);
          goto LABEL_45;
        }
        v61 = a9;
        v63 = a9 + v59 - v57;
        v62 = a10;
        v64 = a10 + v60 - v58;
        EPALOBJ::~EPALOBJ((EPALOBJ *)v36);
      }
      else
      {
        v54 = 0LL;
        v25 = 4;
        v65 = 52428;
      }
      if ( EXFORMOBJ::bXform((EXFORMOBJ *)v46, a2, v56, 3uLL) )
      {
        v28 = BLTRECORD::bRotated((BLTRECORD *)v46);
        v29 = *((_QWORD *)v34[0] + 10);
        if ( v28 )
        {
          v30 = BLTRECORD::bRotate((struct _POINTFIX *)v46, (struct DCOBJ *)v34, v35, v25, *(_BYTE *)(v29 + 75));
        }
        else
        {
          v31 = *(_BYTE *)(v29 + 75);
          if ( v31 == 4 || !BLTRECORD::bEqualExtents((BLTRECORD *)v46) )
            v30 = BLTRECORD::bStretch((BLTRECORD *)v46, v34, (struct DCOBJ *)v35, v25, v31);
          else
            v30 = BLTRECORD::bBitBlt((BLTRECORD *)v46, v34, (struct DCOBJ *)v35, v25);
        }
        v12 = v30;
        goto LABEL_45;
      }
      goto LABEL_19;
    }
  }
  else
  {
    LOBYTE(v12) = *((_QWORD *)v17 + 64) == 0LL;
  }
LABEL_45:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v37);
LABEL_47:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v35);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v34);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v46, v32);
  return v12;
}
