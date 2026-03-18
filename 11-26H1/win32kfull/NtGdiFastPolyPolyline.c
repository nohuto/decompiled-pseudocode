/*
 * XREFs of NtGdiFastPolyPolyline @ 0x14027E1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0PATH@@QEAA@XZ @ 0x140067D28 (--0PATH@@QEAA@XZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E1D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEBAHXZ @ 0x1400ABFA0 (-bFullScreen@XDCOBJ@@QEBAHXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1401AEF4C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1401D48F0 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??1PATH@@QEAA@XZ @ 0x1401E24E0 (--1PATH@@QEAA@XZ.c)
 *     ?bMakePathRecords@@YAHPEAUPATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x14027DF60 (-bMakePathRecords@@YAHPEAUPATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z.c)
 *     Feature_GdiUMA__private_IsEnabledNoReportingNoInline @ 0x1403265E4 (Feature_GdiUMA__private_IsEnabledNoReportingNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtGdiFastPolyPolyline(Gre::Base *a1, void *a2, unsigned int *a3, unsigned int a4)
{
  __int64 v4; // r12
  unsigned int v6; // r15d
  unsigned int v7; // esi
  int v8; // ebx
  _DWORD *v9; // r13
  __int64 v10; // rdx
  int v11; // ebx
  unsigned int *v12; // rbx
  unsigned int v13; // r14d
  unsigned int *v14; // rax
  unsigned int *v15; // rcx
  unsigned int v16; // r14d
  int v17; // edx
  int v18; // eax
  struct PATHRECORD *v19; // rbx
  unsigned int v20; // r14d
  __int64 v21; // rax
  BOOL v22; // esi
  const struct _VECTORL *v23; // rdx
  struct _VECTORFX *v24; // r13
  int v25; // r8d
  int v26; // r9d
  const unsigned int *v27; // rdx
  int v28; // esi
  int v29; // r13d
  FIX xRight; // r8d
  FIX yBottom; // edx
  struct ECLIPOBJ *v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // r9
  char *v37; // r14
  __int64 v38; // r10
  int v39; // r15d
  struct REGION *v40; // rax
  struct ECLIPOBJ *v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // eax
  int v44; // [rsp+60h] [rbp-488h]
  int v46; // [rsp+88h] [rbp-460h]
  int v48; // [rsp+98h] [rbp-450h]
  int *v49; // [rsp+A8h] [rbp-440h] BYREF
  unsigned int *v50; // [rsp+B0h] [rbp-438h]
  unsigned int *v51; // [rsp+B8h] [rbp-430h]
  int *v52; // [rsp+C0h] [rbp-428h] BYREF
  bool v53; // [rsp+C8h] [rbp-420h]
  __m128i v54; // [rsp+D0h] [rbp-418h] BYREF
  struct ECLIPOBJ *v55[14]; // [rsp+E0h] [rbp-408h] BYREF
  _DWORD v56[2]; // [rsp+150h] [rbp-398h] BYREF
  _BYTE *v57; // [rsp+158h] [rbp-390h]
  __int128 v58; // [rsp+160h] [rbp-388h]
  __int128 v59; // [rsp+170h] [rbp-378h]
  __int64 v60; // [rsp+180h] [rbp-368h]
  __int64 v61; // [rsp+188h] [rbp-360h]
  __int64 v62; // [rsp+190h] [rbp-358h]
  __int64 v63; // [rsp+198h] [rbp-350h]
  _BYTE v64[160]; // [rsp+1A0h] [rbp-348h] BYREF
  _BYTE v65[32]; // [rsp+240h] [rbp-2A8h] BYREF
  struct PATHRECORD *v66; // [rsp+260h] [rbp-288h]
  struct PATHRECORD *v67; // [rsp+268h] [rbp-280h] BYREF
  struct _RECTFX v68; // [rsp+270h] [rbp-278h] BYREF
  int v69; // [rsp+288h] [rbp-260h]
  __int64 v70; // [rsp+290h] [rbp-258h]
  __m128i v71; // [rsp+380h] [rbp-168h] BYREF
  _BYTE v72[112]; // [rsp+390h] [rbp-158h] BYREF
  _BYTE v73[4]; // [rsp+400h] [rbp-E8h] BYREF
  __m128i v74[9]; // [rsp+404h] [rbp-E4h] BYREF

  v4 = a4;
  v51 = a3;
  v6 = 0;
  v7 = 0;
  v54.m128i_i64[0] = (__int64)Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v55, (HDC)a1, (struct Gre::Base::SESSION_GLOBALS *)v54.m128i_i64[0]);
  if ( !v55[0] || (*((_DWORD *)v55[0] + 9) & 0x10000) != 0 )
    goto LABEL_81;
  v8 = *(_DWORD *)(*((_QWORD *)v55[0] + 122) + 208LL);
  DC::QuickInitXform(v55[0], &v49, 516LL);
  v52 = v49;
  v53 = v8 != 2;
  v9 = (_DWORD *)((char *)v55[0] + 208);
  v49 = (int *)((char *)v55[0] + 208);
  v10 = *((_QWORD *)v55[0] + 122);
  v11 = *(_DWORD *)(v10 + 152);
  if ( (v11 & 0x1000) != 0 )
    GreDCSelectBrush(v55[0], *(_QWORD *)(v10 + 160));
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v55[0], *(_QWORD *)(*((_QWORD *)v55[0] + 122) + 168LL));
  if ( !(_DWORD)v4 )
  {
    v7 = 1;
    goto LABEL_81;
  }
  v12 = 0LL;
  v50 = 0LL;
  if ( (unsigned int)v4 <= 0x3FFFFFFF )
  {
    v13 = 4 * v4;
    if ( (unsigned int)Feature_GdiUMA__private_IsEnabledNoReportingNoInline() )
    {
      v14 = (unsigned int *)AllocFreeTmpBuffer(v13);
      v12 = v14;
      if ( !v14 )
      {
        v7 = 0;
        goto LABEL_18;
      }
      GreProbeAndReadFromUntrustedVa(v14, v13, a3, v13, 1uLL);
      v15 = v12;
      v50 = v12;
    }
    else
    {
      GreProbeForReadFromUntrustedVa(a3, 4 * v4, 1uLL);
      v15 = a3;
      v50 = a3;
    }
    v16 = 0;
    v17 = v4;
    do
    {
      v18 = *v15++;
      v50 = v15;
      v16 += v18;
      --v17;
    }
    while ( v17 );
    if ( v16 <= 0x1FFFFFFF )
    {
      GreProbeForReadFromUntrustedVa(a2, 8LL * v16, 1uLL);
      v6 = v16;
    }
  }
LABEL_18:
  if ( v12 )
    FreeTmpBuffer(v12);
  if ( !v6
    || (unsigned int)v4 >= 0x8000000
    || v6 >= 0x8000000
    || (*((_DWORD *)v55[0] + 62) & 1) != 0
    || (*v9 & 3) != 0
    || *((_QWORD *)v49 + 3) )
  {
    goto LABEL_81;
  }
  v63 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v60 = 0LL;
  PATH::PATH((PATH *)v65);
  v19 = 0LL;
  memset_0(v72, 0, 0x68uLL);
  v20 = 8 * (v4 + v6 + 2 * v4);
  if ( v20 <= 0x64 )
  {
    v19 = (struct PATHRECORD *)v72;
  }
  else
  {
    if ( v20 <= 0x2710000 )
      v19 = (struct PATHRECORD *)AllocFreeTmpBuffer(v20);
    if ( !v19 )
      goto LABEL_79;
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v64);
  if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v64, (struct XDCOBJ *)v55, 0) )
  {
    v43 = XDCOBJ::bFullScreen((XDCOBJ *)v55);
    goto LABEL_75;
  }
  v21 = *((_DWORD *)v55[0] + 10) & 1;
  v46 = *((_DWORD *)v55[0] + 2 * v21 + 254);
  v48 = *((_DWORD *)v55[0] + 2 * v21 + 255);
  v22 = 1;
  v44 = 1;
  v23 = (const struct _VECTORL *)a2;
  v24 = (struct _VECTORFX *)a2;
  if ( (v52[8] & 2) != 0 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v55[0] + 122) + 208LL) == 1
      || ((*((_BYTE *)v52 + 24) | *((_BYTE *)v52 + 28)) & 0xF) == 0 )
    {
      v25 = (v52[6] >> 4) + *((_DWORD *)v55[0] + 2 * v21 + 254);
      v26 = (v52[7] >> 4) + *((_DWORD *)v55[0] + 2 * v21 + 255);
      v27 = a3;
      goto LABEL_42;
    }
    v23 = (const struct _VECTORL *)a2;
  }
  v24 = (struct PATHRECORD *)((char *)v19 + v20 - 8LL * v6);
  if ( *(_DWORD *)(*((_QWORD *)v55[0] + 122) + 208LL) == 2 )
  {
    v44 = 0;
    v22 = EXFORMOBJ::bXform((EXFORMOBJ *)&v52, v23, v24, v6, 0);
    v25 = v52[6] + 16 * v46;
    v26 = v52[7] + 16 * v48;
  }
  else
  {
    v44 = 1;
    v22 = EXFORMOBJ::bXform((EXFORMOBJ *)&v52, (const struct _POINTL *)v23, (struct _POINTL *)v24, v6);
    v25 = v46;
    v26 = v48;
  }
  v27 = a3;
LABEL_42:
  v56[0] = v44 != 0 ? 4 : 0;
  v28 = bMakePathRecords(v19, v27, v6, (struct _POINTL *)v24, v4, v25, v26, &v68, &v67) & v22;
  v29 = 0;
  if ( v44 )
  {
    v71 = (__m128i)v68;
    xRight = v68.xRight;
    yBottom = v68.yBottom;
    if ( (v68.xLeft & 0xF8000000) != 0 || ((v68.yTop | v68.xRight | v68.yBottom) & 0xF8000000) != 0 )
      v29 = 1;
    v68.xLeft *= 16;
    v68.xRight *= 16;
    v68.yTop *= 16;
    v68.yBottom *= 16;
  }
  else
  {
    v71.m128i_i32[0] = v68.xLeft >> 4;
    v71.m128i_i32[1] = v68.yTop >> 4;
    xRight = (v68.xRight + 15) >> 4;
    v71.m128i_i32[2] = xRight;
    yBottom = (v68.yBottom + 15) >> 4;
    v71.m128i_i32[3] = yBottom;
    if ( (v68.xRight ^ xRight) < 0 || (v68.yBottom ^ yBottom) < 0 )
      v29 = 1;
  }
  if ( yBottom == 0x7FFFFFFF || xRight == 0x7FFFFFFF )
  {
    v29 = 1;
  }
  else
  {
    v71.m128i_i32[3] = yBottom + 1;
    v71.m128i_i32[2] = xRight + 1;
  }
  if ( v28 )
  {
    v66 = v19;
    v69 = 0;
    v70 = 0LL;
    v56[1] = v6 - v4;
    v57 = v65;
    v33 = v55[0];
    if ( (*((_DWORD *)v55[0] + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v55, v55[0], &v71);
      v33 = v55[0];
    }
    if ( *((_QWORD *)v33 + 18) == *(_QWORD *)(v54.m128i_i64[0] + 176) )
      goto LABEL_73;
    v34 = *((_QWORD *)v33 + 62);
    if ( !v34 )
      goto LABEL_73;
    v35 = *(_QWORD *)(v34 + 128);
    v36 = *((_QWORD *)v33 + 11);
    v37 = (char *)v33 + 1336;
    if ( *((_DWORD *)v33 + 334) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v33 + 122) + 152LL) |= 2u;
      v33 = v55[0];
    }
    v38 = *((_QWORD *)v33 + 122);
    if ( ((*((_BYTE *)v33 + 316) | *(_BYTE *)(v38 + 152)) & 2) != 0 )
    {
      *(_DWORD *)(v38 + 152) &= ~2u;
      *((_DWORD *)v55[0] + 79) &= ~2u;
      EBRUSHOBJ::vInitBrush(v37, v55[0], *((_QWORD *)v55[0] + 18), v36, v35, v34, 0);
      v33 = v55[0];
    }
    v39 = (((*(_BYTE *)(*((_QWORD *)v33 + 122) + 212LL) - 1) & 0xF) + 1) | ((((*(_BYTE *)(*((_QWORD *)v33 + 122) + 212LL)
                                                                             - 1) & 0xF)
                                                                           + 1) << 8);
    v40 = XDCOBJ::prgnEffRao(v55);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v73, v40, (struct ERECTL *)&v71, v29);
    if ( ERECTL::bEmpty((ERECTL *)v74) )
    {
LABEL_73:
      v7 = 1;
LABEL_76:
      if ( v19 != (struct PATHRECORD *)v72 )
        FreeTmpBuffer(v19);
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v64);
LABEL_79:
      PATH::~PATH((PATH *)v65);
LABEL_81:
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v55);
      return v7;
    }
    if ( (*((_DWORD *)v55[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v37 + 30) & 0x100) == 0 )
    {
      v54 = v74[0];
      XDCOBJ::vAccumulateTight((XDCOBJ *)v55, v41, &v54);
    }
    v42 = *(_QWORD *)(v34 + 48);
    ++*(_DWORD *)(v34 + 92);
    if ( (*(_DWORD *)(v34 + 112) & 0x20) != 0 )
      v43 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, int *, int))(v42 + 2792))(
              v34 + 24,
              v56,
              v73,
              0LL,
              v37,
              0LL,
              v49,
              v39);
    else
      v43 = ((__int64 (__fastcall *)(__int64, _DWORD *, _BYTE *, _QWORD, char *, _QWORD, int *, int))EngStrokePath)(
              v34 + 24,
              v56,
              v73,
              0LL,
              v37,
              0LL,
              v49,
              v39);
LABEL_75:
    v7 = v43;
    goto LABEL_76;
  }
  if ( v19 != (struct PATHRECORD *)v72 )
    FreeTmpBuffer(v19);
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v64);
  PATH::~PATH((PATH *)v65);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v55);
  return 0LL;
}
