/*
 * XREFs of GreGradientFill @ 0x14007E5D4
 * Callers:
 *     NtGdiGradientFill @ 0x14007EFF0 (NtGdiGradientFill.c)
 *     ?FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z @ 0x14022E224 (-FillGradient@@YAXPEAUHDC__@@PEBUtagRECT@@KK@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14006AC08 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140070E90 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1400765D0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14007E3C0 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x14007EE24 (-bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1400AB4C4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400ABEE8 (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1400B3E48 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGradientFill(
        Gre::Base *a1,
        struct _TRIVERTEX *a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  unsigned int v6; // edi
  struct _TRIVERTEX *v7; // r14
  char *v8; // r15
  __int64 v9; // r12
  struct _TRIVERTEX *v10; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct _TRIVERTEX *v16; // rbx
  __int64 v17; // r13
  int x; // edx
  LONG y; // r8d
  int v20; // esi
  struct REGION *v21; // rax
  struct ECLIPOBJ *v22; // rdx
  int v23; // r11d
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r10d
  int v27; // r8d
  int v28; // eax
  int v29; // r9d
  int v30; // ecx
  _DWORD *v31; // rax
  __int64 v32; // r15
  __int64 v33; // rbx
  Gre::Base *v34; // r8
  char *v35; // rax
  __int64 v36; // rax
  BOOL (__stdcall *v37)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rax
  unsigned __int64 v39; // rax
  ULONG v40; // ecx
  unsigned __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned __int64 v43; // rbx
  unsigned int v44; // eax
  struct _TRIVERTEX *v45; // rax
  unsigned int v46; // r8d
  unsigned int i; // r9d
  __int64 v48; // r11
  __int64 v49; // r10
  int inited; // eax
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  COLOR16 *p_Blue; // r15
  COLOR16 Green; // ax
  COLOR16 v56; // ax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // r11d
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v65; // [rsp+68h] [rbp-98h]
  unsigned int v66; // [rsp+6Ch] [rbp-94h]
  COLOR16 *p_Alpha; // [rsp+70h] [rbp-90h] BYREF
  struct _TRIVERTEX *p_Green; // [rsp+78h] [rbp-88h]
  __int64 v69; // [rsp+80h] [rbp-80h] BYREF
  char *v70; // [rsp+88h] [rbp-78h]
  __m128i v71; // [rsp+90h] [rbp-70h]
  struct ECLIPOBJ *v72; // [rsp+A0h] [rbp-60h] BYREF
  int v73; // [rsp+A8h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v74; // [rsp+B0h] [rbp-50h]
  __int64 v75; // [rsp+B8h] [rbp-48h]
  __int128 v76; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v77; // [rsp+E0h] [rbp-20h] BYREF
  char v78; // [rsp+100h] [rbp+0h]
  char *v79; // [rsp+110h] [rbp+10h]
  __m128i v80; // [rsp+120h] [rbp+20h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v81; // [rsp+130h] [rbp+30h]
  _BYTE v82[352]; // [rsp+140h] [rbp+40h] BYREF
  struct _RECTL si128; // [rsp+2A0h] [rbp+1A0h] BYREF
  _BYTE v84[4]; // [rsp+2B0h] [rbp+1B0h] BYREF
  char v85[52]; // [rsp+2B4h] [rbp+1B4h] BYREF
  __int64 v86; // [rsp+2E8h] [rbp+1E8h]
  __int64 v87; // [rsp+300h] [rbp+200h]
  int v88; // [rsp+308h] [rbp+208h]
  int v89; // [rsp+330h] [rbp+230h]
  __int64 v90; // [rsp+340h] [rbp+240h]

  v6 = 0;
  v7 = 0LL;
  v65 = a6;
  v8 = a4;
  v70 = a4;
  v9 = a3;
  v10 = a2;
  p_Green = a2;
  v79 = a4;
  v75 = 0LL;
  v81 = Gre::Base::Globals(a1);
  v74 = v81;
  v72 = 0LL;
  v73 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v76);
  DCOBJ::vLock((DCOBJ *)&v72, (HDC)a1, v12);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(&v77);
  v78 = 1;
  if ( !v72 )
    goto LABEL_57;
  if ( *((_WORD *)v72 + 6) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13);
  if ( *((_WORD *)v72 + 6) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v72);
  if ( !v72 || (*((_DWORD *)v72 + 9) & 0x10000) != 0 )
  {
LABEL_57:
    v20 = 0;
    goto LABEL_55;
  }
  DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v82);
  if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v82, (struct XDCOBJ *)&v72) )
  {
    if ( !*((_QWORD *)v72 + 62) || (v20 = 0, (unsigned int)DC::bInFullScreen(v72)) )
      v20 = 1;
    goto LABEL_53;
  }
  DC::QuickInitXform(v72, &v69, 516LL);
  v15 = v69;
  if ( (*(_BYTE *)(v69 + 32) & 1) == 0 && a6 <= 1u )
  {
    v39 = 2LL * a5;
    if ( v39 > 0xFFFFFFFF
      || (v41 = 12LL * (unsigned int)v39, v41 > 0xFFFFFFFF)
      || (v42 = v9 + 2 * a5, v66 = 2 * a5, v42 < 2 * a5)
      || (v43 = 16LL * v42, v43 > 0xFFFFFFFF)
      || (v44 = v43 + v41, (int)v43 + (int)v41 < (unsigned int)v41) )
    {
      v40 = 534;
    }
    else
    {
      if ( v44 <= 0x2710000 )
      {
        v45 = (struct _TRIVERTEX *)PALLOCNOZ(v44, 1886221383LL);
        v7 = v45;
        if ( v45 )
        {
          v46 = 0;
          v8 = (char *)v45 + (unsigned int)v43;
          v70 = v8;
          if ( (_DWORD)v9 )
          {
            v61 = v9;
            v46 = v9;
            do
            {
              *v45 = *(struct _TRIVERTEX *)((char *)v45 + (char *)v10 - (char *)v7);
              ++v45;
              --v61;
            }
            while ( v61 );
          }
          for ( i = 0; i < a5; ++i )
          {
            v48 = *(unsigned int *)&v79[8 * i];
            v49 = *(unsigned int *)&v79[8 * i + 4];
            if ( (unsigned int)v48 >= (unsigned int)v9 || (unsigned int)v49 >= (unsigned int)v9 )
            {
              EngSetLastError(0x57u);
              Win32FreePool(v7);
              DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v82);
              goto LABEL_56;
            }
            v51 = v49;
            v52 = v46 + 1;
            v53 = v46;
            v7[v53].x = v10[v49].x;
            v64 = 16 * v48;
            v7[v53].y = v10[v48].y;
            v7[v52].x = *(LONG *)((char *)&v10->x + v64);
            v7[v52].y = v10[v49].y;
            p_Green = (struct _TRIVERTEX *)&v7[v52].Green;
            v80.m128i_i64[0] = (__int64)&v10->Blue + v64;
            v71.m128i_i64[0] = (__int64)&v10->Alpha + v64;
            p_Alpha = &v10[v49].Alpha;
            p_Blue = &v10[v49].Blue;
            if ( v65 == 1 )
            {
              v7[v46].Red = *(COLOR16 *)((char *)&v10->Red + v64);
              v7[v46].Green = *(COLOR16 *)((char *)&v10->Green + v64);
              v7[v46].Blue = *(_WORD *)v80.m128i_i64[0];
              v7[v46].Alpha = *(_WORD *)v71.m128i_i64[0];
              v7[v52].Red = v10[v51].Red;
              Green = v10[v51].Green;
            }
            else
            {
              v7[v46].Red = v10[v51].Red;
              v7[v46].Green = v10[v51].Green;
              v7[v46].Blue = *p_Blue;
              v7[v46].Alpha = *p_Alpha;
              v62 = v64;
              v63 = v64 + 12;
              v7[v52].Red = *(COLOR16 *)((char *)&v10->Red + v64);
              p_Alpha = (COLOR16 *)((char *)&v10->Alpha + v62);
              p_Blue = (COLOR16 *)((char *)v10 + v63);
              Green = *(COLOR16 *)((char *)&v10->Green + v62);
            }
            LOWORD(p_Green->x) = Green;
            v56 = *p_Blue;
            v8 = v70;
            v7[v52].Blue = v56;
            v7[v52].Alpha = *p_Alpha;
            v57 = 2 * i;
            v58 = 3 * v57;
            *(_DWORD *)&v8[4 * v58] = v48;
            v59 = 3LL * (unsigned int)(v57 + 1);
            *(_DWORD *)&v8[4 * v58 + 4] = v46;
            v60 = v46 + 1;
            *(_DWORD *)&v8[4 * v59 + 4] = v46;
            v46 += 2;
            *(_DWORD *)&v8[4 * v58 + 8] = v60;
            *(_DWORD *)&v8[4 * v59] = v49;
            *(_DWORD *)&v8[4 * v59 + 8] = v60;
          }
          v15 = v69;
          v10 = v7;
          p_Green = v7;
          LODWORD(v9) = v46;
          v65 = 2;
          goto LABEL_11;
        }
      }
      v40 = 8;
    }
    EngSetLastError(v40);
    DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v82);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v72);
    return 0LL;
  }
  v66 = a5;
LABEL_11:
  si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
  if ( (_DWORD)v9 )
  {
    v16 = v10;
    v17 = (unsigned int)v9;
    while ( 1 )
    {
      x = v16->x;
      y = v16->y;
      LODWORD(v64) = v16->x;
      HIDWORD(v64) = y;
      if ( (*(_BYTE *)(v15 + 32) & 0x43) != 0x43 )
      {
        bCvtPts1(v15, (__int64)&v64, 1LL);
        y = HIDWORD(v64);
        x = v64;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v72 + 122) + 108LL) & 1) != 0 )
        LODWORD(v64) = ++x;
      v16->x = x + *((_DWORD *)v72 + 2 * (*((_DWORD *)v72 + 10) & 1) + 254);
      v16->y = y + *((_DWORD *)v72 + 2 * (*((_DWORD *)v72 + 10) & 1) + 255);
      ++v16;
      if ( !--v17 )
        break;
      v15 = v69;
    }
  }
  v20 = bCalcMeshExtent(v10, v9, v8, v66, v65, &si128);
  if ( v20 )
  {
    v21 = XDCOBJ::prgnEffRao(&v72);
    v86 = 0LL;
    v89 = 1;
    v87 = 0LL;
    v88 = 0;
    v90 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)v84, v21, (const struct ERECTL *)&si128, 0);
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)v85) )
      goto LABEL_63;
    v22 = v72;
    v23 = *((_DWORD *)v72 + 9);
    if ( (v23 & 0xE0) != 0 )
    {
      v24 = *((_DWORD *)v72 + 10) & 1LL;
      v71 = _mm_load_si128((const __m128i *)&si128);
      v25 = *((_DWORD *)v72 + 2 * v24 + 254);
      v26 = v71.m128i_i32[2] - v25;
      v80 = v71;
      v27 = _mm_cvtsi128_si32(v71) - v25;
      v28 = *((_DWORD *)v72 + 2 * v24 + 255);
      v29 = v71.m128i_i32[1] - v28;
      v30 = v71.m128i_i32[3] - v28;
      if ( (v23 & 0x20) != 0 )
      {
        v31 = (_DWORD *)((char *)v72 + 1064);
        if ( v27 < *((_DWORD *)v72 + 266) )
        {
          *v31 = v27;
          v22 = v72;
        }
        if ( v29 < v31[1] )
        {
          v31[1] = v29;
          v22 = v72;
        }
        if ( v26 > v31[2] )
        {
          v31[2] = v26;
          v22 = v72;
        }
        if ( v30 > v31[3] )
        {
          v31[3] = v30;
          v22 = v72;
        }
      }
      if ( (*((_DWORD *)v22 + 9) & 0x80u) != 0 )
      {
        if ( v27 < *((_DWORD *)v22 + 274) )
          *((_DWORD *)v22 + 274) = v27;
        if ( v29 < *((_DWORD *)v22 + 275) )
          *((_DWORD *)v22 + 275) = v29;
        if ( v26 > *((_DWORD *)v22 + 276) )
          *((_DWORD *)v22 + 276) = v26;
        if ( v30 > *((_DWORD *)v22 + 277) )
          *((_DWORD *)v22 + 277) = v30;
      }
      XDCOBJ::vAccumulateTight((XDCOBJ *)&v72, v22, &v80);
      v22 = v72;
    }
    v32 = *((_QWORD *)v22 + 62);
    if ( !v32 )
    {
LABEL_63:
      v20 = 1;
    }
    else
    {
      ++*(_DWORD *)(v32 + 92);
      v33 = *(_QWORD *)(v32 + 48);
      p_Alpha = 0LL;
      if ( (*(_DWORD *)(v33 + 40) & 0x80u) != 0 || *(_DWORD *)(v32 + 96) <= 3u )
      {
        inited = EXLATEOBJ::bInitXlateObj(
                   (Gre::Base *)&p_Alpha,
                   *(void **)(*((_QWORD *)v72 + 122) + 248LL),
                   *((_DWORD *)v72 + 30),
                   *((_QWORD *)v81 + 485),
                   *(_QWORD *)(v32 + 128),
                   *((_QWORD *)v72 + 11),
                   *((Gre::Base **)v72 + 11),
                   *(_DWORD *)(*((_QWORD *)v72 + 122) + 184LL),
                   *(_DWORD *)(*((_QWORD *)v72 + 122) + 176LL),
                   0,
                   0);
        v34 = (Gre::Base *)p_Alpha;
        v20 = inited;
      }
      else
      {
        v34 = 0LL;
      }
      v35 = (char *)v72 + 1024;
      if ( (*((_DWORD *)v72 + 10) & 1) == 0 )
        v35 = (char *)v72 + 1016;
      v36 = *(_QWORD *)v35;
      LODWORD(v64) = -(int)v36;
      HIDWORD(v64) = -HIDWORD(v36);
      if ( *(_DWORD *)(v32 + 96) != 3 && (*(_DWORD *)(v32 + 112) & 0x20000) != 0 )
        v37 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(v33 + 3224);
      else
        v37 = EngGradientFill;
      if ( !v20
        || (v20 = 1,
            !((unsigned int (__fastcall *)(__int64, _BYTE *, Gre::Base *, struct _TRIVERTEX *, _DWORD, char *, unsigned int, struct _RECTL *, __int64 *, unsigned int))v37)(
               v32 + 24,
               v84,
               v34,
               p_Green,
               v9,
               v70,
               v66,
               &si128,
               &v64,
               v65)) )
      {
        v20 = 0;
      }
      EXLATEOBJ::vAltUnlock((Gre::Base **)&p_Alpha, (__int64)v22, (__int64)v34);
    }
  }
LABEL_53:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v82);
  if ( v7 )
    Win32FreePool(v7);
LABEL_55:
  v6 = v20;
LABEL_56:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v72);
  return v6;
}
