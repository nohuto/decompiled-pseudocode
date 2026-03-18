/*
 * XREFs of NtGdiFrameRgn @ 0x1C0139550
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C013933C (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00147C4 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00148F0 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C0015AD0 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0022AB0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C00417A4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C004892C (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00491C8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0049368 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C004A0F8 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C004B158 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C004B424 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004BB88 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C010D440 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C010D46C (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C013A0A8 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     EngPaint @ 0x1C013A0D0 (EngPaint.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C013A180 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013A1CC (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C013A204 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C013A230 (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v6; // esi
  int v9; // r14d
  int v10; // r12d
  int v11; // ebx
  int v12; // edi
  EPATHOBJ *v13; // rcx
  struct _RECTL *v14; // r9
  struct _RECTL *v15; // r9
  struct _RECTL v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  DC *v19; // rax
  DC *v20; // rax
  __int64 v21; // r13
  struct EPOINTL *v22; // rax
  struct REGION *v23; // rax
  DC *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  struct ECLIPOBJ *v27; // rdx
  struct BRUSH *v28; // r15
  DC *v29; // rax
  DC *v30; // rcx
  DC *v31; // rcx
  MIX mix; // eax
  DC *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  DC *v37[6]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v38[2]; // [rsp+70h] [rbp-90h] BYREF
  _XFORMOBJ v39[2]; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+8Ch] [rbp-74h]
  _QWORD v41[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v42[16]; // [rsp+A0h] [rbp-60h] BYREF
  RECTL rclBounds; // [rsp+B0h] [rbp-50h] BYREF
  _LINEATTRS v44; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v45[8]; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+150h] [rbp+50h] BYREF
  int v47; // [rsp+16Ch] [rbp+6Ch]
  __int64 v48; // [rsp+170h] [rbp+70h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  char *v50; // [rsp+188h] [rbp+88h]
  __int64 v51; // [rsp+1A8h] [rbp+A8h]
  __int128 v52; // [rsp+1B0h] [rbp+B0h]
  int v53; // [rsp+1D0h] [rbp+D0h]
  __m128i *v54[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v55[8]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v56; // [rsp+268h] [rbp+168h]
  _BYTE v57[32]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v58[80]; // [rsp+300h] [rbp+200h] BYREF
  struct _RECTL v59; // [rsp+350h] [rbp+250h] BYREF
  char v60; // [rsp+360h] [rbp+260h] BYREF
  CLIPOBJ pco; // [rsp+390h] [rbp+290h] BYREF

  v6 = 0;
  v9 = 0;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v37, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v45, a2, 1, 0);
  v11 = abs32(a4);
  v12 = abs32(a5);
  if ( !RFONTOBJ::bValid((RFONTOBJ *)v37) )
    goto LABEL_53;
  if ( *((_WORD *)v37[0] + 6) == 1 )
  {
    if ( (*((_DWORD *)v37[0] + 9) & 0x10000) != 0 || !v45[0] || v11 <= 0 || v12 <= 0 )
      goto LABEL_53;
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v45) == 1 )
    {
      v9 = 1;
LABEL_53:
      v6 = v9;
      goto LABEL_54;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v54);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v55);
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v42, (struct XDCOBJ *)v37, 0x204u);
    if ( !v54[1]
      || !v56
      || !RGNOBJ::bCreate((RGNOBJ *)v45, (struct EPATHOBJ *)v54, (struct EXFORMOBJ *)v42)
      || (v40 = 0,
          *(_QWORD *)&v39[0].ulReserved = &v60,
          EPATHOBJ::vWidenSetupForFrameRgn(v13, (struct XDCOBJ *)v37, v11, v12, (struct EXFORMOBJ *)v39, &v44),
          !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v55, (struct EPATHOBJ *)v54, v39, &v44))
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v55, v54, v39, &v44) )
    {
LABEL_51:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v55);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v54);
      if ( v10 )
      {
        v35 = UserReferenceDwmApiPort(v34);
        DwmSyncFlushAndWaitForBatch(v35);
      }
      goto LABEL_53;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v41, (struct EPATHOBJ *)v55, 2u, v14);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v38);
    if ( !v41[0] || !v38[0] )
      goto LABEL_50;
    if ( (*(_DWORD *)(*((_QWORD *)v37[0] + 10) + 352LL) & 0x802) == 0x802 )
    {
      v9 = RGNOBJ::bMerge((RGNOBJ *)v38, (struct RGNOBJ *)v41, (struct RGNOBJ *)v45, BYTE1(gafjRgnOp));
    }
    else
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v59, (struct EPATHOBJ *)v54, 1u, v15);
      if ( *(_QWORD *)&v59.left )
        v9 = RGNOBJ::bMerge((RGNOBJ *)v38, (struct RGNOBJ *)v41, (struct RGNOBJ *)&v59, BYTE1(gafjRgnOp)) != 0;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v59);
    }
    if ( !v9 )
      goto LABEL_50;
    v59 = 0LL;
    v16 = *(struct _RECTL *)(v38[0] + 88LL);
    v44.pstyle = (PFLOAT_LONG)v37;
    v59 = v16;
    if ( !ERECTL::bEmpty((ERECTL *)&v59) )
      v10 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v44, &v59);
    if ( (*((_DWORD *)v37[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v37, (struct ERECTL *)&v59);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v37) || !*(_QWORD *)(v17 + 512) )
    {
LABEL_50:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v38);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v41);
      goto LABEL_51;
    }
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v57, (struct XDCOBJ *)v37, 0);
    v18 = v38[0];
    v19 = v37[0];
    if ( !v38[0] )
      *((_DWORD *)v37[0] + 9) |= 0x10u;
    *((_QWORD *)v19 + 191) = v18;
    v20 = v37[0];
    v21 = *((_QWORD *)v37[0] + 64);
    if ( (v57[24] & 1) != 0 )
    {
      if ( (unsigned int)DC::bTightenRao(v37[0]) )
      {
        v22 = DC::eptlOrigin(v37[0]);
        v59.left += *(_DWORD *)v22;
        v59.right += *(_DWORD *)v22;
        v59.top += *((_DWORD *)v22 + 1);
        v59.bottom += *((_DWORD *)v22 + 1);
        v23 = XDCOBJ::prgnEffRao((XDCOBJ *)v37);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v23, (struct ERECTL *)&v59, 0);
        if ( ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v24 = v37[0];
          *((_DWORD *)v37[0] + 9) |= 0x10u;
          *((_QWORD *)v24 + 191) = 0LL;
        }
        else
        {
          v25 = *(_QWORD *)(v21 + 120);
          v26 = *((_QWORD *)v37[0] + 12);
          v47 = -1;
          v51 = 0LL;
          v52 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v48 = 0LL;
          v49 = 0LL;
          v53 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v44, a3);
          v28 = *(struct BRUSH **)&v44.fl;
          v9 = 0;
          if ( *(_QWORD *)&v44.fl )
          {
            v30 = v37[0];
            if ( (*((_DWORD *)v37[0] + 9) & 0xE0) != 0 && (*(_DWORD *)(*(_QWORD *)&v44.fl + 48LL) & 0x100) == 0 )
            {
              rclBounds = pco.rclBounds;
              XDCOBJ::vAccumulateTight((struct _RECTL **)v37, v27, &rclBounds);
              v30 = v37[0];
            }
            if ( v28 )
            {
              bSyncBrushObj(v28);
              EBRUSHOBJ::vInitBrush(&pbo, v37[0], v28, v26, v25, v21, 1);
              v31 = v37[0];
              v50 = (char *)v37[0] + 240;
              if ( (*((_DWORD *)v28 + 12) & 0x100) != 0 )
              {
                *((_DWORD *)v37[0] + 9) |= 0x10u;
                *((_QWORD *)v31 + 191) = 0LL;
              }
              else
              {
                mix = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)&pbo,
                        *(_BYTE *)(*((_QWORD *)v37[0] + 10) + 72LL),
                        *(_BYTE *)(*((_QWORD *)v37[0] + 10) + 73LL));
                ++*(_DWORD *)(v21 + 92);
                EngPaint((SURFOBJ *)(v21 + 24), &pco, &pbo, (POINTL *)v37[0] + 197, mix);
                v33 = v37[0];
                v9 = 1;
                *((_DWORD *)v37[0] + 9) |= 0x10u;
                *((_QWORD *)v33 + 191) = 0LL;
              }
              BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)&v44);
            }
            else
            {
              *((_DWORD *)v30 + 9) |= 0x10u;
              *((_QWORD *)v30 + 191) = 0LL;
            }
          }
          else
          {
            v29 = v37[0];
            *((_DWORD *)v37[0] + 9) |= 0x10u;
            *((_QWORD *)v29 + 191) = 0LL;
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v44);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        }
        goto LABEL_49;
      }
      v20 = v37[0];
    }
    *((_DWORD *)v20 + 9) |= 0x10u;
    *((_QWORD *)v20 + 191) = 0LL;
    v9 = XDCOBJ::bFullScreen((XDCOBJ *)v37);
LABEL_49:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v57);
    DCOBJ::~DCOBJ((DCOBJ *)v58);
    goto LABEL_50;
  }
  EngSetLastError(0x57u);
LABEL_54:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v45);
  DCOBJ::~DCOBJ((DCOBJ *)v37);
  return v6;
}
