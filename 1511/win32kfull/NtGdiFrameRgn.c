/*
 * XREFs of NtGdiFrameRgn @ 0x1C012FC30
 * Callers:
 *     ?DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z @ 0x1C012FA10 (-DrawWindowShadow@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAH@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CC4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0016CEC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x1C0027B7C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ @ 0x1C0027E48 (-eptlOrigin@DC@@QEAAAEAVEPOINTL@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C002C838 (--0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C870 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002D820 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002D98C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002DA14 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002DA30 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C002DCB4 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00368B0 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0037A14 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     EngPaint @ 0x1C00E6F30 (EngPaint.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00EDEF0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00EDF2C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEAAKEE@Z @ 0x1C00FE6C0 (-mixBest@EBRUSHOBJ@@QEAAKEE@Z.c)
 *     ?bSyncBrushObj@@YAHPEAVBRUSH@@@Z @ 0x1C00FEB54 (-bSyncBrushObj@@YAHPEAVBRUSH@@@Z.c)
 *     ?vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ @ 0x1C01306DC (-vDecShareRefCntLazy0@BRUSHSELOBJ@@QEAAXXZ.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C0130704 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C013073C (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0130764 (-vWidenSetupForFrameRgn@EPATHOBJ@@QEAAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C0130838 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     ?bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1C01308C4 (-bComputeWidenedBounds@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C025DDE4 (-bEmpty@ERECTL@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiFrameRgn(HDC a1, HRGN a2, HBRUSH a3, int a4, int a5)
{
  unsigned int v8; // esi
  int v9; // r12d
  int v10; // ebx
  EPATHOBJ *v11; // rcx
  struct _RECTL *v12; // r9
  struct _RECTL *v13; // r9
  struct _RECTL v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rcx
  DC *v17; // rax
  DC *v18; // rax
  __int64 v19; // r15
  struct EPOINTL *v20; // rax
  struct REGION *v21; // rax
  DC *v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdi
  struct ECLIPOBJ *v25; // rdx
  struct BRUSH *v26; // r14
  DC *v27; // rax
  DC *v28; // rcx
  MIX mix; // eax
  DC *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  DC *v34[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-B0h] BYREF
  _XFORMOBJ v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+6Ch] [rbp-94h]
  _QWORD v38[2]; // [rsp+70h] [rbp-90h] BYREF
  struct BRUSH *v39[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v40[3]; // [rsp+90h] [rbp-70h] BYREF
  RECTL rclBounds; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v42[24]; // [rsp+B8h] [rbp-48h] BYREF
  _LINEATTRS v43; // [rsp+D0h] [rbp-30h] BYREF
  BRUSHOBJ pbo; // [rsp+120h] [rbp+20h] BYREF
  int v45; // [rsp+13Ch] [rbp+3Ch]
  __int64 v46; // [rsp+140h] [rbp+40h]
  __int64 v47; // [rsp+148h] [rbp+48h]
  char *v48; // [rsp+158h] [rbp+58h]
  __int64 v49; // [rsp+178h] [rbp+78h]
  __int128 v50; // [rsp+180h] [rbp+80h]
  int v51; // [rsp+1A0h] [rbp+A0h]
  _BYTE v52[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v53; // [rsp+1B8h] [rbp+B8h]
  _BYTE v54[8]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v55; // [rsp+238h] [rbp+138h]
  struct _RECTL v56; // [rsp+2B0h] [rbp+1B0h] BYREF
  char v57; // [rsp+2C0h] [rbp+1C0h] BYREF
  CLIPOBJ pco; // [rsp+2F0h] [rbp+1F0h] BYREF

  v8 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v34, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v40, a2, 1);
  if ( a4 < 0 )
    a4 = -a4;
  v10 = a5;
  if ( a5 < 0 )
    v10 = -a5;
  if ( v34[0] && (*((_DWORD *)v34[0] + 9) & 0x10000) == 0 && v40[0] && a4 > 0 && v10 > 0 )
  {
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v40) == 1 )
    {
      v8 = 1;
      goto LABEL_54;
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v52);
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v54);
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v42, (struct XDCOBJ *)v34, 0x204u);
    if ( !v53 )
      goto LABEL_52;
    if ( !v55 )
      goto LABEL_52;
    if ( !RGNOBJ::bCreate((RGNOBJ *)v40, (struct EPATHOBJ *)v52, (struct EXFORMOBJ *)v42) )
      goto LABEL_52;
    v37 = 0;
    *(_QWORD *)&v36[0].ulReserved = &v57;
    EPATHOBJ::vWidenSetupForFrameRgn(v11, (struct XDCOBJ *)v34, a4, v10, (struct EXFORMOBJ *)v36, &v43);
    if ( !(unsigned int)EPATHOBJ::bComputeWidenedBounds((EPATHOBJ *)v54, (struct EPATHOBJ *)v52, v36, &v43)
      || !(unsigned int)EPATHOBJ::bWiden((EPATHOBJ *)v54, (struct EPATHOBJ *)v52, v36, &v43) )
    {
      goto LABEL_52;
    }
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v38, (struct EPATHOBJ *)v54, 2u, v12);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v35);
    if ( !v38[0] || !v35[0] )
      goto LABEL_51;
    if ( (*(_DWORD *)(*((_QWORD *)v34[0] + 10) + 352LL) & 0x802) == 0x802 )
    {
      v8 = RGNOBJ::bMerge((RGNOBJ *)v35, (struct RGNOBJ *)v38, (struct RGNOBJ *)v40, BYTE1(gafjRgnOp));
    }
    else
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v56, (struct EPATHOBJ *)v52, 1u, v13);
      if ( *(_QWORD *)&v56.left
        && RGNOBJ::bMerge((RGNOBJ *)v35, (struct RGNOBJ *)v38, (struct RGNOBJ *)&v56, BYTE1(gafjRgnOp)) )
      {
        v8 = 1;
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v56);
    }
    if ( !v8 )
      goto LABEL_51;
    v56 = 0LL;
    v14 = *(struct _RECTL *)(v35[0] + 88LL);
    v43.pstyle = (PFLOAT_LONG)v34;
    v56 = v14;
    if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v56) )
      v9 = DWMSCREENREADMODIFYWRITEASSIST::bReadBackRect((DWMSCREENREADMODIFYWRITEASSIST *)&v43, &v56);
    if ( (*((_DWORD *)v34[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v34, (struct ERECTL *)&v56);
    if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v34) || !*(_QWORD *)(v15 + 512) )
    {
LABEL_51:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v35);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v38);
LABEL_52:
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v54);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v52);
      if ( v9 )
      {
        v32 = UserReferenceDwmApiPort(v31);
        DwmSyncFlushAndWaitForBatch(v32);
      }
      goto LABEL_54;
    }
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&v43, (struct XDCOBJ *)v34, 0);
    v16 = v35[0];
    v17 = v34[0];
    if ( !v35[0] )
      *((_DWORD *)v34[0] + 9) |= 0x10u;
    *((_QWORD *)v17 + 188) = v16;
    v18 = v34[0];
    v19 = *((_QWORD *)v34[0] + 64);
    if ( ((__int64)v43.pstyle & 1) != 0 )
    {
      if ( (unsigned int)DC::bTightenRao(v34[0]) )
      {
        v20 = DC::eptlOrigin(v34[0]);
        v56.left += *(_DWORD *)v20;
        v56.right += *(_DWORD *)v20;
        v56.top += *((_DWORD *)v20 + 1);
        v56.bottom += *((_DWORD *)v20 + 1);
        v21 = XDCOBJ::prgnEffRao((XDCOBJ *)v34);
        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pco, v21, (struct ERECTL *)&v56, 0);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&pco.rclBounds) )
        {
          v22 = v34[0];
          *((_DWORD *)v34[0] + 9) |= 0x10u;
          *((_QWORD *)v22 + 188) = 0LL;
        }
        else
        {
          v23 = *(_QWORD *)(v19 + 120);
          v24 = *((_QWORD *)v34[0] + 12);
          v45 = -1;
          v49 = 0LL;
          v50 = 0LL;
          pbo.pvRbrush = 0LL;
          pbo.flColorType = 0;
          v46 = 0LL;
          v47 = 0LL;
          v51 = 0;
          BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v39, a3);
          v26 = v39[0];
          v8 = 0;
          v27 = v34[0];
          if ( v39[0] )
          {
            if ( (*((_DWORD *)v34[0] + 9) & 0xE0) != 0 && (*((_DWORD *)v39[0] + 12) & 0x100) == 0 )
            {
              rclBounds = pco.rclBounds;
              XDCOBJ::vAccumulateTight((XDCOBJ *)v34, v25, &rclBounds);
            }
            bSyncBrushObj(v26);
            EBRUSHOBJ::vInitBrush(&pbo, v34[0], v26, v24, v23, v19, 1);
            v28 = v34[0];
            v48 = (char *)v34[0] + 240;
            if ( (*((_DWORD *)v26 + 12) & 0x100) != 0 )
            {
              *((_DWORD *)v34[0] + 9) |= 0x10u;
              *((_QWORD *)v28 + 188) = 0LL;
            }
            else
            {
              mix = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)&pbo,
                      *(_BYTE *)(*((_QWORD *)v34[0] + 10) + 72LL),
                      *(_BYTE *)(*((_QWORD *)v34[0] + 10) + 73LL));
              ++*(_DWORD *)(v19 + 92);
              EngPaint((SURFOBJ *)(v19 + 24), &pco, &pbo, (POINTL *)v34[0] + 194, mix);
              v30 = v34[0];
              v8 = 1;
              *((_DWORD *)v34[0] + 9) |= 0x10u;
              *((_QWORD *)v30 + 188) = 0LL;
            }
            BRUSHSELOBJ::vDecShareRefCntLazy0((BRUSHSELOBJ *)v39);
          }
          else
          {
            *((_DWORD *)v34[0] + 9) |= 0x10u;
            *((_QWORD *)v27 + 188) = 0LL;
          }
          BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v39);
          EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
        }
        goto LABEL_50;
      }
      v18 = v34[0];
    }
    *((_DWORD *)v18 + 9) |= 0x10u;
    *((_QWORD *)v18 + 188) = 0LL;
    v8 = XDCOBJ::bFullScreen((XDCOBJ *)v34);
LABEL_50:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v43);
    goto LABEL_51;
  }
LABEL_54:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v40);
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v34);
  return v8;
}
