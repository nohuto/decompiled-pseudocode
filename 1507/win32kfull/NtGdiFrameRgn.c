/*
 * XREFs of NtGdiFrameRgn @ 0x1C0104C30
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C0104A18 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B5C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0012B84 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00160F4 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C001617C (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0019248 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00192B0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0019CD4 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0019EA4 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C001D448 (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C001D720 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0021638 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CC4F4 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C00CC580 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C00CD570 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     EngPaint @ 0x1C00CE580 (EngPaint.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00E5208 (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00E5234 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C00F6BB4 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C0105754 (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C010577C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C01057B4 (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01057E0 (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025E4BC (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?bHasSurface@XDCOBJ@@QEAAHXZ @ 0x1C026142C (-bHasSurface@XDCOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v6; // esi
  int v9; // r14d
  int v10; // r12d
  int v11; // ebx
  EPATHOBJ *v13; // rcx
  struct _RECTL *v14; // r9
  struct _RECTL *v15; // r9
  struct _RECTL v16; // xmm0
  __int64 v17; // rcx
  DC *v18; // rax
  DC *v19; // rax
  __int64 v20; // r13
  struct EPOINTL *v21; // rax
  struct REGION *v22; // rax
  DC *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdi
  struct ECLIPOBJ *v26; // rdx
  struct BRUSH *v27; // r15
  DC *v28; // rax
  DC *v29; // rcx
  DC *v30; // rcx
  MIX mix; // eax
  DC *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  DC *v36[6]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  _XFORMOBJ v38[2]; // [rsp+80h] [rbp-80h] BYREF
  int v39; // [rsp+8Ch] [rbp-74h]
  _QWORD v40[2]; // [rsp+90h] [rbp-70h] BYREF
  _LINEATTRS v41; // [rsp+A0h] [rbp-60h] BYREF
  RECTL rclBounds; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v43[16]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v44[8]; // [rsp+110h] [rbp+10h] BYREF
  BRUSHOBJ pbo; // [rsp+150h] [rbp+50h] BYREF
  int v46; // [rsp+16Ch] [rbp+6Ch]
  __int64 v47; // [rsp+170h] [rbp+70h]
  __int64 v48; // [rsp+178h] [rbp+78h]
  char *v49; // [rsp+188h] [rbp+88h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]
  __int128 v51; // [rsp+1B0h] [rbp+B0h]
  int v52; // [rsp+1D0h] [rbp+D0h]
  __m128i *v53[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v54[8]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v55; // [rsp+268h] [rbp+168h]
  _BYTE v56[32]; // [rsp+2E0h] [rbp+1E0h] BYREF
  _BYTE v57[80]; // [rsp+300h] [rbp+200h] BYREF
  struct _RECTL v58; // [rsp+350h] [rbp+250h] BYREF
  char v59; // [rsp+360h] [rbp+260h] BYREF
  CLIPOBJ pco; // [rsp+390h] [rbp+290h] BYREF

  v6 = 0;
  v9 = 0;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v36, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v44, a2, 1, 0);
  if ( a4 < 0 )
    a4 = -a4;
  v11 = a5;
  if ( a5 < 0 )
    v11 = -a5;
  if ( !RFONTOBJ::bValid((RFONTOBJ *)v36) )
    goto LABEL_58;
  if ( *((_WORD *)v36[0] + 6) == 1 )
  {
    if ( (*((_DWORD *)v36[0] + 9) & 0x10000) != 0 || !v44[0] || a4 <= 0 || v11 <= 0 )
      goto LABEL_58;
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v44) == 1 )
    {
      v9 = 1;
LABEL_58:
      v6 = v9;
      goto LABEL_59;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v53);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v54);
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v43, (struct XDCOBJ *)v36, 0x204u);
    if ( !v53[1]
      || !v55
      || !RGNOBJ::bCreate((RGNOBJ *)v44, (struct EPATHOBJ *)v53, (struct EXFORMOBJ *)v43)
      || (v39 = 0,
          *(_QWORD *)&v38[0].ulReserved = &v59,
          EPATHOBJ::vWidenSetupForFrameRgn(v13, (struct XDCOBJ *)v36, a4, v11, (struct EXFORMOBJ *)v38, &v41),
          !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v54, (struct EPATHOBJ *)v53, v38, &v41))
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v54, v53, v38, &v41) )
    {
LABEL_56:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v54);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v53);
      if ( v10 )
      {
        v34 = UserReferenceDwmApiPort(v33);
        DwmSyncFlushAndWaitForBatch(v34);
      }
      goto LABEL_58;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v40, (struct EPATHOBJ *)v54, 2u, v14);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v37);
    if ( !v40[0] || !v37[0] )
      goto LABEL_55;
    if ( (*(_DWORD *)(*((_QWORD *)v36[0] + 10) + 352LL) & 0x802) == 0x802 )
    {
      v9 = RGNOBJ::bMerge((RGNOBJ *)v37, (struct RGNOBJ *)v40, (struct RGNOBJ *)v44, BYTE1(gafjRgnOp));
    }
    else
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v58, (struct EPATHOBJ *)v53, 1u, v15);
      if ( *(_QWORD *)&v58.left
        && RGNOBJ::bMerge((RGNOBJ *)v37, (struct RGNOBJ *)v40, (struct RGNOBJ *)&v58, BYTE1(gafjRgnOp)) )
      {
        v9 = 1;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v58);
    }
    if ( !v9 )
      goto LABEL_55;
    v58 = 0LL;
    v16 = *(struct _RECTL *)(v37[0] + 88LL);
    v41.pstyle = (PFLOAT_LONG)v36;
    v58 = v16;
    if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v58) )
      v10 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v41, &v58);
    if ( (*((_DWORD *)v36[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v36, (struct ERECTL *)&v58);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v36) || !(unsigned int)XDCOBJ::bHasSurface((XDCOBJ *)v36) )
    {
LABEL_55:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v37);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v40);
      goto LABEL_56;
    }
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v56, (struct XDCOBJ *)v36, 0);
    v17 = v37[0];
    v18 = v36[0];
    if ( !v37[0] )
      *((_DWORD *)v36[0] + 9) |= 0x10u;
    *((_QWORD *)v18 + 191) = v17;
    v19 = v36[0];
    v20 = *((_QWORD *)v36[0] + 64);
    if ( (v56[24] & 1) != 0 )
    {
      if ( (unsigned int)DC::bTightenRao(v36[0]) )
      {
        v21 = DC::eptlOrigin(v36[0]);
        v58.left += *(_DWORD *)v21;
        v58.right += *(_DWORD *)v21;
        v58.top += *((_DWORD *)v21 + 1);
        v58.bottom += *((_DWORD *)v21 + 1);
        v22 = XDCOBJ::prgnEffRao((XDCOBJ *)v36);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v22, (struct ERECTL *)&v58, 0);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v23 = v36[0];
          *((_DWORD *)v36[0] + 9) |= 0x10u;
          *((_QWORD *)v23 + 191) = 0LL;
        }
        else
        {
          v24 = *(_QWORD *)(v20 + 120);
          v25 = *((_QWORD *)v36[0] + 12);
          v46 = -1;
          v50 = 0LL;
          v51 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v47 = 0LL;
          v48 = 0LL;
          v52 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)&v41, a3);
          v27 = *(struct BRUSH **)&v41.fl;
          v9 = 0;
          if ( *(_QWORD *)&v41.fl )
          {
            v29 = v36[0];
            if ( (*((_DWORD *)v36[0] + 9) & 0xE0) != 0 && (*(_DWORD *)(*(_QWORD *)&v41.fl + 48LL) & 0x100) == 0 )
            {
              rclBounds = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v36, v26, &rclBounds);
              v29 = v36[0];
            }
            if ( v27 )
            {
              bSyncBrushObj(v27);
              EBRUSHOBJ::vInitBrush(&pbo, v36[0], v27, v25, v24);
              v30 = v36[0];
              v49 = (char *)v36[0] + 240;
              if ( (*((_DWORD *)v27 + 12) & 0x100) != 0 )
              {
                *((_DWORD *)v36[0] + 9) |= 0x10u;
                *((_QWORD *)v30 + 191) = 0LL;
              }
              else
              {
                mix = EBRUSHOBJ::mixBest(
                        (EBRUSHOBJ *)&pbo,
                        *(_BYTE *)(*((_QWORD *)v36[0] + 10) + 72LL),
                        *(_BYTE *)(*((_QWORD *)v36[0] + 10) + 73LL));
                ++*(_DWORD *)(v20 + 92);
                EngPaint((SURFOBJ *)(v20 + 24), &pco, &pbo, (POINTL *)v36[0] + 197, mix);
                v32 = v36[0];
                v9 = 1;
                *((_DWORD *)v36[0] + 9) |= 0x10u;
                *((_QWORD *)v32 + 191) = 0LL;
              }
              BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)&v41);
            }
            else
            {
              *((_DWORD *)v29 + 9) |= 0x10u;
              *((_QWORD *)v29 + 191) = 0LL;
            }
          }
          else
          {
            v28 = v36[0];
            *((_DWORD *)v36[0] + 9) |= 0x10u;
            *((_QWORD *)v28 + 191) = 0LL;
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)&v41);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        }
        goto LABEL_54;
      }
      v19 = v36[0];
    }
    *((_DWORD *)v19 + 9) |= 0x10u;
    *((_QWORD *)v19 + 191) = 0LL;
    v9 = XDCOBJ::bFullScreen((XDCOBJ *)v36);
LABEL_54:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v56);
    DCOBJ::~DCOBJ((DCOBJ *)v57);
    goto LABEL_55;
  }
  EngSetLastError(0x57u);
LABEL_59:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v44);
  DCOBJ::~DCOBJ((DCOBJ *)v36);
  return v6;
}
