/*
 * XREFs of GreFrameRgn @ 0x140080F30
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1400836B8 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 *     NtGdiFrameRgn @ 0x14025A1F0 (NtGdiFrameRgn.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140015840 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14006CBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14007BAF0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x140082384 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400823D4 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ @ 0x140082DE8 (-RestoreAttributes@XEBRUSHOBJ@@IEAAXXZ.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x140082E5C (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?vWidenSetupForFrameRgn@pathwide@@YAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x140082F64 (-vWidenSetupForFrameRgn@pathwide@@YAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     EngPaint @ 0x140083090 (EngPaint.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400A990C (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400ADDB8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1400B9B4C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1401183C8 (-bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140119278 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GreFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v8; // esi
  int v9; // r12d
  int v10; // r14d
  int v11; // edi
  int v13; // ebx
  __m128i v14; // xmm1
  int v15; // edx
  int v16; // r9d
  DC *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  DC *v20; // rcx
  DC *v21; // rcx
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct REGION *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  struct ECLIPOBJ *v28; // rdx
  __int64 v29; // r14
  DC *v30; // rcx
  DC *v31; // rcx
  __int64 v32; // rax
  unsigned __int8 v33; // cl
  MIX v34; // r8d
  DC *v35; // rax
  Gre::Base *v36; // rcx
  struct Gre::Base::SESSION_GLOBALS *v37; // rax
  __int64 v38; // rax
  DC *v39; // rax
  unsigned int v40; // ebx
  __m128i *v41; // rdi
  DC *v42; // rax
  const struct _LINEATTRS *mixa; // [rsp+20h] [rbp-E0h]
  const struct _LINEATTRS *mix; // [rsp+20h] [rbp-E0h]
  struct _LINEATTRS *v45; // [rsp+28h] [rbp-D8h]
  __int64 v46; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+48h] [rbp-B8h] BYREF
  struct _RECTFX v48; // [rsp+50h] [rbp-B0h] BYREF
  DC *v49[14]; // [rsp+60h] [rbp-A0h] BYREF
  _LINEATTRS v50; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v51; // [rsp+100h] [rbp+0h] BYREF
  bool v52; // [rsp+108h] [rbp+8h]
  __int64 v53; // [rsp+110h] [rbp+10h] BYREF
  char v54[40]; // [rsp+118h] [rbp+18h] BYREF
  int v55; // [rsp+140h] [rbp+40h]
  __m128i rclBounds; // [rsp+148h] [rbp+48h] BYREF
  BRUSHOBJ pbo; // [rsp+160h] [rbp+60h] BYREF
  int v58; // [rsp+17Ch] [rbp+7Ch]
  __int64 v59; // [rsp+180h] [rbp+80h]
  __int64 v60; // [rsp+188h] [rbp+88h]
  char *v61; // [rsp+198h] [rbp+98h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  __int128 v63; // [rsp+1C0h] [rbp+C0h]
  int v64; // [rsp+1D8h] [rbp+D8h]
  char v65[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTFX *v66; // [rsp+1F8h] [rbp+F8h]
  char v67[8]; // [rsp+270h] [rbp+170h] BYREF
  __m128i *v68; // [rsp+278h] [rbp+178h]
  _BYTE v69[160]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __m128i v70; // [rsp+390h] [rbp+290h] BYREF
  _OWORD v71[2]; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v72; // [rsp+3C0h] [rbp+2C0h]
  CLIPOBJ pco; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v74; // [rsp+408h] [rbp+308h]
  __int64 v75; // [rsp+420h] [rbp+320h]
  int v76; // [rsp+428h] [rbp+328h]
  int v77; // [rsp+450h] [rbp+350h]
  __int64 v78; // [rsp+460h] [rbp+360h]

  v8 = 0;
  v9 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v49, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v53, a2, 1, 0);
  v10 = -a4;
  if ( a4 > 0 )
    v10 = a4;
  v11 = -a5;
  if ( a5 > 0 )
    v11 = a5;
  if ( v49[0] && (*((_DWORD *)v49[0] + 9) & 0x10000) == 0 && v53 && v10 > 0 && v11 > 0 )
  {
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v53) == 1 )
    {
      v8 = 1;
      goto LABEL_8;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v65);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v67);
    v13 = *(_DWORD *)(*((_QWORD *)v49[0] + 122) + 208LL);
    DC::QuickInitXform(v49[0], &v48, 2147484164LL);
    v51 = *(_QWORD *)&v48.xLeft;
    v52 = v13 != 2;
    if ( !v66 )
      goto LABEL_54;
    if ( !v68 )
      goto LABEL_54;
    if ( !RGNOBJ::bCreate((RGNOBJ *)&v53, (struct EPATHOBJ *)v65, (const struct EXFORMOBJR *)&v51) )
      goto LABEL_54;
    v72 = 0;
    *(_QWORD *)&v48.xLeft = v71;
    memset(&v50, 0, sizeof(v50));
    memset(v71, 0, sizeof(v71));
    pathwide::vWidenSetupForFrameRgn(
      (pathwide *)v49,
      (struct XDCOBJ *)(unsigned int)v10,
      v11,
      (int)&v48,
      (struct EXFORMOBJ *)&v50,
      v45);
    v70 = 0LL;
    if ( !pathwide::bComputeWidenedBounds((pathwide *)&v70, v66 + 3, &v48, (const struct EXFORMOBJ *)&v50, mixa) )
      goto LABEL_54;
    v68[3] = v70;
    if ( !pathwide::bWiden(
            (pathwide *)v67,
            (struct EPATHOBJ *)v65,
            (struct EPATHOBJ *)&v48,
            (const struct EXFORMOBJ *)&v50,
            mix) )
      goto LABEL_54;
    v47 = 0LL;
    RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v47, (struct EPATHOBJ *)v67, 2u, 0LL);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v47);
    v46 = 0LL;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v46, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v46);
    if ( !v47 || !v46 )
      goto LABEL_53;
    if ( (*(_DWORD *)(*((_QWORD *)v49[0] + 122) + 340LL) & 0x802) == 0x802 )
    {
      v8 = RGNOBJ::bMerge((RGNOBJ *)&v46, (struct RGNOBJ *)&v47, (struct RGNOBJ *)&v53, 8u);
    }
    else
    {
      v70.m128i_i64[0] = 0LL;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v70, (struct EPATHOBJ *)v65, 1u, 0LL);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v70);
      if ( v70.m128i_i64[0] && RGNOBJ::bMerge((RGNOBJ *)&v46, (struct RGNOBJ *)&v47, (struct RGNOBJ *)&v70, 8u) )
        v8 = 1;
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v70);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v70);
    }
    if ( !v8 )
    {
LABEL_53:
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v46);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v46);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v47);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
LABEL_54:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v67);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v65);
      if ( v9 )
      {
        v38 = UserReferenceDwmApiPort();
        DwmSyncFlushAndWaitForBatch(v38);
      }
      goto LABEL_8;
    }
    v70 = 0LL;
    v14 = *(__m128i *)(v46 + 52);
    v15 = _mm_cvtsi128_si32(v14);
    v70 = v14;
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
    if ( v15 != v16 && v70.m128i_i32[1] != v70.m128i_i32[3] )
    {
      v17 = v49[0];
      if ( !v49[0] )
        goto LABEL_31;
      v9 = bSpDwmValidateSurface(
             (struct XDCOBJ *)v49,
             v15,
             v70.m128i_i32[1],
             v16 - v15,
             v70.m128i_i32[3] - v70.m128i_i32[1]);
    }
    v17 = v49[0];
LABEL_31:
    if ( (*((_DWORD *)v17 + 9) & 0xE0) != 0 )
    {
      XDCOBJ::vAccumulate((XDCOBJ *)v49, (struct ERECTL *)&v70);
      v17 = v49[0];
    }
    if ( !*((_QWORD *)v17 + 62) || (unsigned int)DC::bInFullScreen(v17) )
      goto LABEL_53;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v69);
    v18 = DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v69, (struct XDCOBJ *)v49, 0);
    v19 = v46;
    v20 = v49[0];
    if ( !v46 )
      *((_DWORD *)v49[0] + 9) |= 0x10u;
    *((_QWORD *)v20 + 141) = v19;
    v21 = v49[0];
    v22 = *((_QWORD *)v49[0] + 62);
    if ( v18 )
    {
      if ( DC::bTightenRao(v49[0]) )
      {
        v23 = *((_DWORD *)v49[0] + 10) & 1;
        v70.m128i_i32[0] += *((_DWORD *)v49[0] + 2 * v23 + 254);
        v70.m128i_i32[2] += *((_DWORD *)v49[0] + 2 * v23 + 254);
        v70.m128i_i32[1] += *((_DWORD *)v49[0] + 2 * v23 + 255);
        v70.m128i_i32[3] += *((_DWORD *)v49[0] + 2 * v23 + 255);
        if ( (unsigned int)DC::bDpiScaleTransform(v49[0]) )
        {
          v40 = 0;
          v41 = &v70;
          do
          {
            if ( !(unsigned int)bFToL(v24, (char *)&v70 + 4 * v40, 6LL) )
              break;
            ++v40;
            v41 = (__m128i *)((char *)v41 + 4);
          }
          while ( v40 < 4 );
        }
        v25 = XDCOBJ::prgnEffRao(v49);
        v74 = 0LL;
        v75 = 0LL;
        v76 = 0;
        v77 = 1;
        v78 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v25, (const struct ERECTL *)&v70, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v42 = v49[0];
          *((_DWORD *)v49[0] + 9) |= 0x10u;
          *((_QWORD *)v42 + 141) = 0LL;
        }
        else
        {
          v26 = *(_QWORD *)(v22 + 128);
          v27 = *((_QWORD *)v49[0] + 11);
          v62 = 0LL;
          v63 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v58 = -1;
          v59 = 0LL;
          v60 = 0LL;
          v64 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v50, a3);
          v8 = 0;
          v29 = *(_QWORD *)&v50.fl;
          if ( *(_QWORD *)&v50.fl )
          {
            v30 = v49[0];
            if ( (*((_DWORD *)v49[0] + 9) & 0xE0) != 0 && (*(_DWORD *)(*(_QWORD *)&v50.fl + 40LL) & 0x100) == 0 )
            {
              rclBounds = (__m128i)pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v49, v28, &rclBounds);
              v30 = v49[0];
            }
            if ( v29 )
            {
              bSyncBrushObj((struct BRUSH *)v29);
              EBRUSHOBJ::vInitBrush(&pbo, v49[0], v29, v27, v26, v22, 1);
              v31 = v49[0];
              v61 = (char *)v49[0] + 176;
              if ( (*(_DWORD *)(v29 + 40) & 0x100) != 0 )
              {
                *((_DWORD *)v49[0] + 9) |= 0x10u;
                *((_QWORD *)v31 + 141) = 0LL;
              }
              else
              {
                v32 = *((_QWORD *)v49[0] + 122);
                v33 = ((*(_BYTE *)(v32 + 212) - 1) & 0xF) + 1;
                if ( *(_BYTE *)(v32 + 213) == 1 && (v64 & 0x8000) != 0 )
                  v34 = v33 | 0xB00;
                else
                  v34 = v33 | (v33 << 8);
                ++*(_DWORD *)(v22 + 92);
                EngPaint((SURFOBJ *)((v22 + 24) & -(__int64)(v22 != 0)), &pco, &pbo, (POINTL *)v49[0] + 149, v34);
                v35 = v49[0];
                v8 = 1;
                *((_DWORD *)v49[0] + 9) |= 0x10u;
                *((_QWORD *)v35 + 141) = 0LL;
              }
              if ( *(_QWORD *)&v50.fl )
              {
                XEBRUSHOBJ::RestoreAttributes((XEBRUSHOBJ *)&v50);
                v37 = Gre::Base::Globals(v36);
                DEC_SHARE_REF_CNT_LAZY0(v37, *(struct BRUSH **)&v50.fl);
                *(_QWORD *)&v50.fl = 0LL;
              }
            }
            else
            {
              *((_DWORD *)v30 + 9) |= 0x10u;
              *((_QWORD *)v30 + 141) = 0LL;
            }
          }
          else
          {
            v39 = v49[0];
            *((_DWORD *)v49[0] + 9) |= 0x10u;
            *((_QWORD *)v39 + 141) = 0LL;
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v50);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        }
LABEL_52:
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v69);
        goto LABEL_53;
      }
      v21 = v49[0];
    }
    *((_DWORD *)v21 + 9) |= 0x10u;
    *((_QWORD *)v21 + 141) = 0LL;
    if ( !*((_QWORD *)v49[0] + 62) || (v8 = 0, (unsigned int)DC::bInFullScreen(v49[0])) )
      v8 = 1;
    goto LABEL_52;
  }
LABEL_8:
  if ( !v55 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v53);
  if ( v53 )
    _InterlockedDecrement16((volatile signed __int16 *)(v53 + 12));
  PopThreadGuardedObject(v54);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v49);
  return v8;
}
